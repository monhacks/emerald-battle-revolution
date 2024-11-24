# Give-Mon String Generator
import src.givemon as givemon

# Common Library
import src.common as common

# Showdown Format Parsing Library
import src.parser as parser

# Built-in Libraries
import os, json

# Input File Folders
# .set files will be treated as individual sets
# .team files will be treated as an entire team
INPUT_FOLDER = "tools/bfg_helpers/sample"

# Output Directory
OUTPUT_DIRECTORY = "tools/bfg_helpers/select"

# Output File Names
SETS_OUTFILE = "sample_sets.json"
TEAMS_OUTFILE = "sample_teams.json"

# Create a folder in the 'sets' shop, 
# which allows you to purchase the 
# individual Pokemon from the teams
# shop with the provided name
# To ignore this, set to None

# Automatic Set Formatting
AUTO_FORMATTED_SETS = True

# Create sets from teams
SETS_FROM_TEAMS = True

# Ignore duplicate sets
ALLOW_DUPLICATES = False

# Goto Purchase Jump Scripts
SETS_GOTO = "goto(Common_EventScript_Sample_Sets_CheckPurchase)"
TEAMS_GOTO = "goto(Common_EventScript_Sample_Team_CheckPurchase)"

# If SIMPLE_SET_FORMATTING = False, sets
# from sample teams will be placed in this folder
SETS_FROM_TEAMS_FOLDER = "FROM TEAMS"

if __name__ == "__main__":

    # Sets dict
    sample_sets = []

    # Teams dict
    sample_teams = []

    # Auto-Formatted Sets
    formatted_sets = []

    # Get list of input files
    files = os.listdir(INPUT_FOLDER)

    # Loop over the files
    for file_name in files:

        # File Name Format:
        # [folder]_[subfolder]_[name].[team/set]
        # e.g.
        # standard_mega_gardevoir.team

        # Split filename, extension from file info
        no_extension, extension = file_name.split(".")

        # Combine the file path for the input file
        file_path = os.path.join(INPUT_FOLDER, file_name)

        # Open the file contents
        with open(file_path, "r") as file:

            try:

                # Read the raw file
                raw = file.read()

                # Parse the showdown data
                sets = parser.parse_sets(raw)

                # Split the names on the under score
                names = no_extension.split("_")

                # Add species to names
                full_names = list(names)

                # Treat as entire team
                if extension == "team":

                    # Givemon string array
                    givemon_list = []

                    # Loop over the sets
                    for set in sets:

                        # Generate the givemon string and add it to the list
                        givemon_list.append(givemon.get_givemon_str(set))

                        # Create sets from teams
                        if SETS_FROM_TEAMS == True:

                            # Automatic Formatting
                            if AUTO_FORMATTED_SETS:
                                
                                # Add set to simple sets
                                # (For post-processing)
                                formatted_sets.append(set)

                            else: # Manual Formatting

                                # Get the set/species name
                                name = common.get_set_name(set)

                                # Create an extended folder for the from-teams samples
                                extended_names = [SETS_FROM_TEAMS_FOLDER] + full_names

                                # Add name to names list
                                extended_names.append(name)

                                # Generate the givemon string (Including sets goto jump)
                                givemon_str = f"{givemon.get_givemon_str(set)};{SETS_GOTO}"

                                # Add the sample sets to the table
                                common.insert_data(sample_sets, extended_names, givemon_str)

                    # Combine the givemon string (Including team goto jump)
                    givemon_str = f"{';'.join(givemon_list)};{TEAMS_GOTO}"

                    # Add the sample team to the table
                    common.insert_data(sample_teams, names, givemon_str)

                # Treat as sample sets
                elif extension == "sets":

                    # Loop over the sets
                    for set in sets:

                        # Auto-Formatted Sets
                        if AUTO_FORMATTED_SETS:

                            # Add set to simple sets
                            # (For post-processing)
                            formatted_sets.append(set)

                        else: # Manually Formatted Sets

                            # Get the species name
                            name = set["species"]

                            # Check species for name property
                            if "name" in set["other"]:
                                # Override default name
                                name = set["other"]["name"]

                            # Check species for note property
                            if "note" in set["other"]:
                                # Add note to the name
                                name = f"{name} ({set['other']['note']})"

                            # Add name to names list
                            full_names.append(name)

                            # Generate the givemon string (Including sets goto jump)
                            givemon_str = f"{givemon.get_givemon_str(set)};{SETS_GOTO}"

                            common.insert_data(sample_sets, full_names, givemon_str)

                else:  # Unhandled extension
                    raise Exception(
                        f"Unhandled file extension {extension}! Accepted: .sets, .team ..."
                    )
                
            except Exception as e:
                print(f"Failed for file {file_name}! Error: {str(e)}")

    # Auto-formatted sets enabled
    if AUTO_FORMATTED_SETS:

        # Duplicate Sets
        duplicates = []

        # Auto-formatted sets
        for set in formatted_sets:

            # Get the set/species name
            name = common.get_set_name(set)

            # Get the set/species spread
            spread = common.get_set_spread(set)

            # Create names list
            names = [name, spread]

            # Allow duplicates is disabled
            if ALLOW_DUPLICATES == False:

                # Key for checking duplicates
                key = f"{name}@{spread}"

                # Set already exists
                if key in duplicates:

                    # Skip the set
                    continue

                # Add the key to the list
                duplicates.append(key)

            # Generate the givemon string (Including sets goto jump)
            givemon_str = f"{givemon.get_givemon_str(set)};{SETS_GOTO}"

            # Add the sample sets to the table
            common.insert_data(sample_sets, names, givemon_str)
           
    # Create output directory (if not exists)
    os.makedirs(OUTPUT_DIRECTORY, exist_ok=True)

    # Create Teams Outfile
    teams_out = os.path.join(OUTPUT_DIRECTORY, TEAMS_OUTFILE)

    # Dump sample teams to file
    with open(teams_out, "w+", encoding="utf8") as f:
        # Dump sample teams to file
        json.dump(sample_teams, f, indent=2)

    # Create Sets Outfile
    sets_out = os.path.join(OUTPUT_DIRECTORY, SETS_OUTFILE)

    # Dump sample sets to file
    with open(sets_out, "w+", encoding="utf8") as f:
        # Dump sample sets to file
        json.dump(sample_sets, f, indent=2)
