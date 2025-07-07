# Showdown Data
import src.showdown as showdown

# Common Library
import src.common as common

# Built-in libs
import os, json

# Output Data Directory
OUTPUT_DIRECTORY = "src/data/battle_frontier"
OUTPUT_FILENAME = "battle_frontier_generator_trainer_class_mons.h"

# Ingame frontier trainer mon data
TRAINER_FILENAME = "battle_frontier_trainer_mons.h"
TRAINER_OUTFILE = "ingame_trainer_mons_types.json"

# Dump mon coverage data
DATA_DIRECTORY = "tools/bfg_helpers"
DATA_FILENAME = "trainer_mons_coverage.json"

# Ignored species
ignore_species = ["cosmog", "cosmoem", "meltan"]

# Custom Restricteds
restricteds = ["deoxys", "arceus"]

# Regis
regis = ["regirock", "regice", "registeel", "regigigas", "regidrago", "regieleki"]

# Fossil Pokemon
fossils = [
    "omastar", "kabutops", "aerodactyl", 
    "cradily", "armaldo", 
    "rampardos", "bastiodon", 
    "carracosta", "archeops", 
    "tyrantrum", "aurorus", 
    "dracozolt", "arctozolt", 
    "dracovish", "arctovish"
]

# Starter Pokemon
starters = [
    "venusaur", "charizard", "blastoise", 
    "meganium", "typhlosion", "feraligatr", 
    "sceptile", "blaziken", "swampert", 
    "torterra", "infernape", "empoleon", 
    "serperior", "emboar", "samurott", 
    "chesnaught", "delphox", "greninja", 
    "decidueye", "incineroar", "primarina", 
    "rillaboom", "cinderace", "inteleon", 
    "meowscarada", "skeledirge", "quaquaval", 
]

# Regional species lists
regionals = ["ALOLA", "GALAR", "HISUI"]

# Special species lists
specials = [
    "FUTURE_PARADOX", 
    "PAST_PARADOX", 
    "ULTRA_BEAST", 
    "PSEUDO_LEGEND", 
    "EEVEELUTION",
    "MYTHICAL",
    "STARTER",
    "FOSSIL",
]

trainer_classes = [
    "TRAINER_CLASS_HIKER",
    # 'TRAINER_CLASS_TEAM_AQUA',
    "TRAINER_CLASS_PKMN_BREEDER",
    "TRAINER_CLASS_COOLTRAINER",
    "TRAINER_CLASS_BIRD_KEEPER",
    "TRAINER_CLASS_COLLECTOR",
    "TRAINER_CLASS_SWIMMER_M",
    # 'TRAINER_CLASS_TEAM_MAGMA',
    "TRAINER_CLASS_EXPERT",
    # 'TRAINER_CLASS_AQUA_ADMIN',
    "TRAINER_CLASS_BLACK_BELT",
    # 'TRAINER_CLASS_AQUA_LEADER',
    "TRAINER_CLASS_HEX_MANIAC",
    "TRAINER_CLASS_AROMA_LADY",
    "TRAINER_CLASS_RUIN_MANIAC",
    # 'TRAINER_CLASS_INTERVIEWER',
    "TRAINER_CLASS_TUBER_F",
    "TRAINER_CLASS_TUBER_M",
    "TRAINER_CLASS_LADY",
    "TRAINER_CLASS_BEAUTY",
    "TRAINER_CLASS_RICH_BOY",
    "TRAINER_CLASS_POKEMANIAC",
    "TRAINER_CLASS_GUITARIST",
    "TRAINER_CLASS_KINDLER",
    "TRAINER_CLASS_CAMPER",
    "TRAINER_CLASS_PICNICKER",
    "TRAINER_CLASS_BUG_MANIAC",
    "TRAINER_CLASS_PSYCHIC",
    "TRAINER_CLASS_GENTLEMAN",
    # 'TRAINER_CLASS_ELITE_FOUR',
    # 'TRAINER_CLASS_LEADER',
    "TRAINER_CLASS_SCHOOL_KID",
    # 'TRAINER_CLASS_SR_AND_JR',
    # 'TRAINER_CLASS_WINSTRATE',
    "TRAINER_CLASS_POKEFAN",
    "TRAINER_CLASS_YOUNGSTER",
    # 'TRAINER_CLASS_CHAMPION',
    "TRAINER_CLASS_FISHERMAN",
    "TRAINER_CLASS_TRIATHLETE",
    "TRAINER_CLASS_DRAGON_TAMER",
    "TRAINER_CLASS_NINJA_BOY",
    "TRAINER_CLASS_BATTLE_GIRL",
    "TRAINER_CLASS_PARASOL_LADY",
    "TRAINER_CLASS_SWIMMER_F",
    # 'TRAINER_CLASS_TWINS',
    "TRAINER_CLASS_SAILOR",
    # "TRAINER_CLASS_COOLTRAINER_2",
    # 'TRAINER_CLASS_MAGMA_ADMIN',
    # 'TRAINER_CLASS_RIVAL',
    "TRAINER_CLASS_BUG_CATCHER",
    "TRAINER_CLASS_PKMN_RANGER",
    # 'TRAINER_CLASS_MAGMA_LEADER',
    "TRAINER_CLASS_LASS",
    # 'TRAINER_CLASS_YOUNG_COUPLE',
    # 'TRAINER_CLASS_OLD_COUPLE',
    # 'TRAINER_CLASS_SIS_AND_BRO',
    # 'TRAINER_CLASS_SALON_MAIDEN',
    # 'TRAINER_CLASS_DOME_ACE',
    # 'TRAINER_CLASS_PALACE_MAVEN',
    # 'TRAINER_CLASS_ARENA_TYCOON',
    # 'TRAINER_CLASS_FACTORY_HEAD',
    # 'TRAINER_CLASS_PIKE_QUEEN',
    # 'TRAINER_CLASS_PYRAMID_KING',
    # 'TRAINER_CLASS_RS_PROTAG',
    "TRAINER_CLASS_DEFAULT",
]

trainer_class_types = {
    "Normal": [
        "TRAINER_CLASS_YOUNGSTER",
        "TRAINER_CLASS_LASS",
        "TRAINER_CLASS_SCHOOL_KID",
        "TRAINER_CLASS_RICH_BOY",
        "TRAINER_CLASS_LADY",
        "TRAINER_CLASS_CAMPER",
        "TRAINER_CLASS_PICNICKER",
        "TRAINER_CLASS_TUBER_M",
        "TRAINER_CLASS_TUBER_F",
        "TRAINER_CLASS_SWIMMER_M",
        "TRAINER_CLASS_SWIMMER_F",
        "TRAINER_CLASS_POKEFAN",
        "TRAINER_CLASS_PARASOL_LADY",
        "TRAINER_CLASS_GUITARIST",
        "TRAINER_CLASS_BIRD_KEEPER",
        "TRAINER_CLASS_HIKER",
        "TRAINER_CLASS_KINDLER",
        "TRAINER_CLASS_TRIATHLETE",
        "TRAINER_CLASS_BLACK_BELT",
        "TRAINER_CLASS_EXPERT",
        "TRAINER_CLASS_PSYCHIC",
        "TRAINER_CLASS_POKEMANIAC",
        "TRAINER_CLASS_GENTLEMAN",
        "TRAINER_CLASS_COLLECTOR",
        "TRAINER_CLASS_BEAUTY",
        "TRAINER_CLASS_COOLTRAINER",
        "TRAINER_CLASS_PKMN_RANGER",
        "TRAINER_CLASS_PKMN_BREEDER",
    ],
    "Water": [
        "TRAINER_CLASS_YOUNGSTER",
        "TRAINER_CLASS_LASS",
        "TRAINER_CLASS_SCHOOL_KID",
        "TRAINER_CLASS_RICH_BOY",
        "TRAINER_CLASS_LADY",
        "TRAINER_CLASS_CAMPER",
        "TRAINER_CLASS_PICNICKER",
        "TRAINER_CLASS_TUBER_M",
        "TRAINER_CLASS_TUBER_F",
        "TRAINER_CLASS_SWIMMER_M",
        "TRAINER_CLASS_SWIMMER_F",
        "TRAINER_CLASS_POKEFAN",
        "TRAINER_CLASS_FISHERMAN",
        "TRAINER_CLASS_RUIN_MANIAC",
        "TRAINER_CLASS_PARASOL_LADY",
        "TRAINER_CLASS_SAILOR",
        "TRAINER_CLASS_TRIATHLETE",
        "TRAINER_CLASS_EXPERT",
        "TRAINER_CLASS_PSYCHIC",
        "TRAINER_CLASS_POKEMANIAC",
        "TRAINER_CLASS_GENTLEMAN",
        "TRAINER_CLASS_COLLECTOR",
        "TRAINER_CLASS_BEAUTY",
        "TRAINER_CLASS_COOLTRAINER",
        "TRAINER_CLASS_DRAGON_TAMER",
        "TRAINER_CLASS_PKMN_BREEDER",
    ],
    "Fire": [
        "TRAINER_CLASS_YOUNGSTER",
        "TRAINER_CLASS_LASS",
        "TRAINER_CLASS_SCHOOL_KID",
        "TRAINER_CLASS_RICH_BOY",
        "TRAINER_CLASS_LADY",
        "TRAINER_CLASS_CAMPER",
        "TRAINER_CLASS_PICNICKER",
        "TRAINER_CLASS_POKEFAN",
        "TRAINER_CLASS_PARASOL_LADY",
        "TRAINER_CLASS_BIRD_KEEPER",
        "TRAINER_CLASS_KINDLER",
        "TRAINER_CLASS_BLACK_BELT",
        "TRAINER_CLASS_EXPERT",
        "TRAINER_CLASS_POKEMANIAC",
        "TRAINER_CLASS_GENTLEMAN",
        "TRAINER_CLASS_COLLECTOR",
        "TRAINER_CLASS_BEAUTY",
        "TRAINER_CLASS_COOLTRAINER",
        "TRAINER_CLASS_DRAGON_TAMER",
        "TRAINER_CLASS_PKMN_BREEDER",
    ],
    "Grass": [
        "TRAINER_CLASS_YOUNGSTER",
        "TRAINER_CLASS_LASS",
        "TRAINER_CLASS_SCHOOL_KID",
        "TRAINER_CLASS_RICH_BOY",
        "TRAINER_CLASS_LADY",
        "TRAINER_CLASS_CAMPER",
        "TRAINER_CLASS_PICNICKER",
        "TRAINER_CLASS_POKEFAN",
        "TRAINER_CLASS_BUG_CATCHER",
        "TRAINER_CLASS_BUG_MANIAC",
        "TRAINER_CLASS_PARASOL_LADY",
        "TRAINER_CLASS_AROMA_LADY",
        "TRAINER_CLASS_EXPERT",
        "TRAINER_CLASS_PSYCHIC",
        "TRAINER_CLASS_HEX_MANIAC",
        "TRAINER_CLASS_POKEMANIAC",
        "TRAINER_CLASS_GENTLEMAN",
        "TRAINER_CLASS_COLLECTOR",
        "TRAINER_CLASS_BEAUTY",
        "TRAINER_CLASS_COOLTRAINER",
        "TRAINER_CLASS_PKMN_RANGER",
        "TRAINER_CLASS_DRAGON_TAMER",
        "TRAINER_CLASS_PKMN_BREEDER",
    ],
    "Electric": [
        "TRAINER_CLASS_YOUNGSTER",
        "TRAINER_CLASS_LASS",
        "TRAINER_CLASS_SCHOOL_KID",
        "TRAINER_CLASS_RICH_BOY",
        "TRAINER_CLASS_LADY",
        "TRAINER_CLASS_CAMPER",
        "TRAINER_CLASS_PICNICKER",
        "TRAINER_CLASS_POKEFAN",
        "TRAINER_CLASS_PARASOL_LADY",
        "TRAINER_CLASS_GUITARIST",
        "TRAINER_CLASS_TRIATHLETE",
        "TRAINER_CLASS_EXPERT",
        "TRAINER_CLASS_PSYCHIC",
        "TRAINER_CLASS_GENTLEMAN",
        "TRAINER_CLASS_COLLECTOR",
        "TRAINER_CLASS_BEAUTY",
        "TRAINER_CLASS_COOLTRAINER",
        "TRAINER_CLASS_PKMN_BREEDER",
    ],
    "Flying": [
        "TRAINER_CLASS_YOUNGSTER",
        "TRAINER_CLASS_LASS",
        "TRAINER_CLASS_SCHOOL_KID",
        "TRAINER_CLASS_RICH_BOY",
        "TRAINER_CLASS_LADY",
        "TRAINER_CLASS_CAMPER",
        "TRAINER_CLASS_PICNICKER",
        "TRAINER_CLASS_POKEFAN",
        "TRAINER_CLASS_NINJA_BOY",
        "TRAINER_CLASS_BUG_MANIAC",
        "TRAINER_CLASS_PARASOL_LADY",
        "TRAINER_CLASS_GUITARIST",
        "TRAINER_CLASS_BIRD_KEEPER",
        "TRAINER_CLASS_TRIATHLETE",
        "TRAINER_CLASS_EXPERT",
        "TRAINER_CLASS_HEX_MANIAC",
        "TRAINER_CLASS_GENTLEMAN",
        "TRAINER_CLASS_COLLECTOR",
        "TRAINER_CLASS_BEAUTY",
        "TRAINER_CLASS_COOLTRAINER",
        "TRAINER_CLASS_PKMN_RANGER",
        "TRAINER_CLASS_DRAGON_TAMER",
        "TRAINER_CLASS_PKMN_BREEDER",
    ],
    "Fighting": [
        "TRAINER_CLASS_YOUNGSTER",
        "TRAINER_CLASS_LASS",
        "TRAINER_CLASS_SCHOOL_KID",
        "TRAINER_CLASS_CAMPER",
        "TRAINER_CLASS_PICNICKER",
        "TRAINER_CLASS_SWIMMER_M",
        "TRAINER_CLASS_RUIN_MANIAC",
        # "TRAINER_CLASS_PARASOL_LADY" # Manually Removed
        "TRAINER_CLASS_SAILOR",
        "TRAINER_CLASS_HIKER",
        "TRAINER_CLASS_TRIATHLETE",
        "TRAINER_CLASS_BLACK_BELT",
        "TRAINER_CLASS_BATTLE_GIRL",
        "TRAINER_CLASS_EXPERT",
        "TRAINER_CLASS_POKEMANIAC",
        "TRAINER_CLASS_GENTLEMAN",
        "TRAINER_CLASS_COLLECTOR",
        "TRAINER_CLASS_BEAUTY",
        "TRAINER_CLASS_COOLTRAINER",
        "TRAINER_CLASS_PKMN_RANGER",
        "TRAINER_CLASS_POKEFAN",
        "TRAINER_CLASS_PKMN_BREEDER",
    ],
    "Poison": [
        "TRAINER_CLASS_YOUNGSTER",
        "TRAINER_CLASS_LASS",
        "TRAINER_CLASS_SCHOOL_KID",
        "TRAINER_CLASS_RICH_BOY",
        "TRAINER_CLASS_LADY",
        "TRAINER_CLASS_CAMPER",
        "TRAINER_CLASS_PICNICKER",
        "TRAINER_CLASS_POKEFAN",
        "TRAINER_CLASS_NINJA_BOY",
        "TRAINER_CLASS_BIRD_KEEPER",
        "TRAINER_CLASS_EXPERT",
        "TRAINER_CLASS_PSYCHIC",
        "TRAINER_CLASS_HEX_MANIAC",
        "TRAINER_CLASS_POKEMANIAC",
        "TRAINER_CLASS_GENTLEMAN",
        "TRAINER_CLASS_COLLECTOR",
        "TRAINER_CLASS_BEAUTY",
        "TRAINER_CLASS_COOLTRAINER",
        "TRAINER_CLASS_PKMN_BREEDER",
    ],
    "Ground": [
        "TRAINER_CLASS_YOUNGSTER",
        "TRAINER_CLASS_LASS",
        "TRAINER_CLASS_SCHOOL_KID",
        "TRAINER_CLASS_RICH_BOY",
        "TRAINER_CLASS_LADY",
        "TRAINER_CLASS_CAMPER",
        "TRAINER_CLASS_PICNICKER",
        "TRAINER_CLASS_POKEFAN",
        "TRAINER_CLASS_BUG_CATCHER",
        "TRAINER_CLASS_NINJA_BOY",
        "TRAINER_CLASS_BUG_MANIAC",
        "TRAINER_CLASS_RUIN_MANIAC",
        "TRAINER_CLASS_PARASOL_LADY",
        "TRAINER_CLASS_BIRD_KEEPER",
        "TRAINER_CLASS_SAILOR",
        "TRAINER_CLASS_HIKER",
        "TRAINER_CLASS_KINDLER",
        "TRAINER_CLASS_TRIATHLETE",
        "TRAINER_CLASS_BLACK_BELT",
        "TRAINER_CLASS_BATTLE_GIRL",
        "TRAINER_CLASS_EXPERT",
        "TRAINER_CLASS_POKEMANIAC",
        "TRAINER_CLASS_GENTLEMAN",
        "TRAINER_CLASS_COLLECTOR",
        "TRAINER_CLASS_COOLTRAINER",
        "TRAINER_CLASS_DRAGON_TAMER",
        "TRAINER_CLASS_PKMN_BREEDER",
    ],
    "Rock": [
        "TRAINER_CLASS_SCHOOL_KID",
        "TRAINER_CLASS_RICH_BOY",
        "TRAINER_CLASS_LADY",
        "TRAINER_CLASS_CAMPER",
        "TRAINER_CLASS_PICNICKER",
        "TRAINER_CLASS_RUIN_MANIAC",
        "TRAINER_CLASS_POKEFAN",
        "TRAINER_CLASS_PARASOL_LADY",
        "TRAINER_CLASS_GUITARIST",
        "TRAINER_CLASS_HIKER",
        "TRAINER_CLASS_KINDLER",
        "TRAINER_CLASS_BLACK_BELT",
        "TRAINER_CLASS_EXPERT",
        "TRAINER_CLASS_POKEMANIAC",
        "TRAINER_CLASS_GENTLEMAN",
        "TRAINER_CLASS_COOLTRAINER",
        "TRAINER_CLASS_DRAGON_TAMER",
        "TRAINER_CLASS_PKMN_BREEDER",
    ],
    "Bug": [
        "TRAINER_CLASS_YOUNGSTER",
        "TRAINER_CLASS_LASS",
        "TRAINER_CLASS_SCHOOL_KID",
        "TRAINER_CLASS_RICH_BOY",
        "TRAINER_CLASS_LADY",
        "TRAINER_CLASS_CAMPER",
        "TRAINER_CLASS_PICNICKER",
        "TRAINER_CLASS_BUG_CATCHER",
        "TRAINER_CLASS_NINJA_BOY",
        "TRAINER_CLASS_BUG_MANIAC",
        "TRAINER_CLASS_EXPERT",
        "TRAINER_CLASS_HEX_MANIAC",
        "TRAINER_CLASS_GENTLEMAN",
        "TRAINER_CLASS_COLLECTOR",
        "TRAINER_CLASS_BEAUTY",
        "TRAINER_CLASS_COOLTRAINER",
        "TRAINER_CLASS_PKMN_RANGER",
        "TRAINER_CLASS_PKMN_BREEDER",
    ],
    "Ghost": [
        "TRAINER_CLASS_YOUNGSTER",
        "TRAINER_CLASS_LASS",
        "TRAINER_CLASS_RICH_BOY",
        "TRAINER_CLASS_LADY",
        "TRAINER_CLASS_NINJA_BOY",
        "TRAINER_CLASS_BUG_MANIAC",
        "TRAINER_CLASS_GUITARIST",
        "TRAINER_CLASS_KINDLER",
        "TRAINER_CLASS_EXPERT",
        "TRAINER_CLASS_PSYCHIC",
        "TRAINER_CLASS_HEX_MANIAC",
        "TRAINER_CLASS_GENTLEMAN",
        "TRAINER_CLASS_COLLECTOR",
        "TRAINER_CLASS_BEAUTY",
        "TRAINER_CLASS_COOLTRAINER",
        "TRAINER_CLASS_PKMN_BREEDER",
    ],
    "Steel": [
        "TRAINER_CLASS_SCHOOL_KID",
        "TRAINER_CLASS_RICH_BOY",
        "TRAINER_CLASS_LADY",
        "TRAINER_CLASS_CAMPER",
        "TRAINER_CLASS_PICNICKER",
        "TRAINER_CLASS_RUIN_MANIAC",
        "TRAINER_CLASS_PARASOL_LADY",
        "TRAINER_CLASS_GUITARIST",
        "TRAINER_CLASS_HIKER",
        "TRAINER_CLASS_KINDLER",
        "TRAINER_CLASS_TRIATHLETE",
        "TRAINER_CLASS_BLACK_BELT",
        "TRAINER_CLASS_EXPERT",
        "TRAINER_CLASS_POKEMANIAC",
        "TRAINER_CLASS_GENTLEMAN",
        "TRAINER_CLASS_COLLECTOR",
        "TRAINER_CLASS_COOLTRAINER",
        "TRAINER_CLASS_DRAGON_TAMER",
        "TRAINER_CLASS_PKMN_BREEDER",
    ],
    "Psychic": [
        "TRAINER_CLASS_YOUNGSTER",
        "TRAINER_CLASS_LASS",
        "TRAINER_CLASS_SCHOOL_KID",
        "TRAINER_CLASS_RICH_BOY",
        "TRAINER_CLASS_LADY",
        "TRAINER_CLASS_CAMPER",
        "TRAINER_CLASS_PICNICKER",
        "TRAINER_CLASS_TUBER_M",
        "TRAINER_CLASS_TUBER_F",
        "TRAINER_CLASS_POKEFAN",
        "TRAINER_CLASS_BUG_CATCHER",
        "TRAINER_CLASS_NINJA_BOY",
        "TRAINER_CLASS_RUIN_MANIAC",
        "TRAINER_CLASS_AROMA_LADY",
        "TRAINER_CLASS_GUITARIST",
        "TRAINER_CLASS_KINDLER",
        "TRAINER_CLASS_TRIATHLETE",
        "TRAINER_CLASS_BLACK_BELT",
        "TRAINER_CLASS_BATTLE_GIRL",
        "TRAINER_CLASS_EXPERT",
        "TRAINER_CLASS_PSYCHIC",
        "TRAINER_CLASS_HEX_MANIAC",
        "TRAINER_CLASS_POKEMANIAC",
        "TRAINER_CLASS_GENTLEMAN",
        "TRAINER_CLASS_COLLECTOR",
        "TRAINER_CLASS_BEAUTY",
        "TRAINER_CLASS_COOLTRAINER",
        "TRAINER_CLASS_DRAGON_TAMER",
        "TRAINER_CLASS_PKMN_BREEDER",
    ],
    "Ice": [
        "TRAINER_CLASS_YOUNGSTER",
        "TRAINER_CLASS_LASS",
        "TRAINER_CLASS_SCHOOL_KID",
        "TRAINER_CLASS_CAMPER",
        "TRAINER_CLASS_PICNICKER",
        "TRAINER_CLASS_TUBER_M",
        "TRAINER_CLASS_TUBER_F",
        "TRAINER_CLASS_SWIMMER_M",
        "TRAINER_CLASS_SWIMMER_F",
        "TRAINER_CLASS_POKEFAN",
        "TRAINER_CLASS_RUIN_MANIAC",
        "TRAINER_CLASS_PARASOL_LADY",
        "TRAINER_CLASS_GUITARIST",
        "TRAINER_CLASS_HIKER",
        "TRAINER_CLASS_TRIATHLETE",
        "TRAINER_CLASS_EXPERT",
        "TRAINER_CLASS_POKEMANIAC",
        "TRAINER_CLASS_GENTLEMAN",
        "TRAINER_CLASS_COLLECTOR",
        "TRAINER_CLASS_BEAUTY",
        "TRAINER_CLASS_COOLTRAINER",
        "TRAINER_CLASS_DRAGON_TAMER",
        "TRAINER_CLASS_PKMN_BREEDER",
    ],
    "Dark": [
        "TRAINER_CLASS_YOUNGSTER",
        "TRAINER_CLASS_LASS",
        "TRAINER_CLASS_RICH_BOY",
        "TRAINER_CLASS_LADY",
        "TRAINER_CLASS_CAMPER",
        "TRAINER_CLASS_PICNICKER",
        "TRAINER_CLASS_POKEFAN",
        "TRAINER_CLASS_GUITARIST",
        "TRAINER_CLASS_TRIATHLETE",
        "TRAINER_CLASS_BLACK_BELT",
        "TRAINER_CLASS_BATTLE_GIRL",  # Manually Added
        "TRAINER_CLASS_EXPERT",
        "TRAINER_CLASS_PSYCHIC",
        "TRAINER_CLASS_HEX_MANIAC",
        "TRAINER_CLASS_POKEMANIAC",
        "TRAINER_CLASS_GENTLEMAN",
        "TRAINER_CLASS_COLLECTOR",
        "TRAINER_CLASS_BEAUTY",
        "TRAINER_CLASS_COOLTRAINER",
        "TRAINER_CLASS_PKMN_BREEDER",
    ],
    "Fairy": [
        "TRAINER_CLASS_YOUNGSTER",
        "TRAINER_CLASS_LASS",
        "TRAINER_CLASS_SCHOOL_KID",
        "TRAINER_CLASS_RICH_BOY",
        "TRAINER_CLASS_LADY",
        "TRAINER_CLASS_TUBER_M",
        "TRAINER_CLASS_TUBER_F",
        "TRAINER_CLASS_SWIMMER_M",
        "TRAINER_CLASS_SWIMMER_F",
        "TRAINER_CLASS_POKEFAN",
        "TRAINER_CLASS_NINJA_BOY",
        "TRAINER_CLASS_AROMA_LADY",
        "TRAINER_CLASS_PARASOL_LADY",  # Manually added
        "TRAINER_CLASS_GUITARIST",
        "TRAINER_CLASS_BIRD_KEEPER",
        "TRAINER_CLASS_KINDLER",
        "TRAINER_CLASS_TRIATHLETE",
        "TRAINER_CLASS_EXPERT",
        "TRAINER_CLASS_POKEMANIAC",
        "TRAINER_CLASS_GENTLEMAN",
        "TRAINER_CLASS_COLLECTOR",
        "TRAINER_CLASS_BEAUTY",
        "TRAINER_CLASS_COOLTRAINER",
        "TRAINER_CLASS_PKMN_RANGER",
        "TRAINER_CLASS_PKMN_BREEDER",
    ],
    "Dragon": [
        "TRAINER_CLASS_SCHOOL_KID",
        "TRAINER_CLASS_RICH_BOY",
        "TRAINER_CLASS_LADY",
        "TRAINER_CLASS_POKEFAN",
        "TRAINER_CLASS_GUITARIST",
        "TRAINER_CLASS_BIRD_KEEPER",
        "TRAINER_CLASS_SAILOR",
        "TRAINER_CLASS_KINDLER",
        "TRAINER_CLASS_TRIATHLETE",
        "TRAINER_CLASS_BLACK_BELT",
        "TRAINER_CLASS_EXPERT",
        "TRAINER_CLASS_POKEMANIAC",
        "TRAINER_CLASS_GENTLEMAN",
        "TRAINER_CLASS_DRAGON_TAMER",
        "TRAINER_CLASS_BEAUTY",
        "TRAINER_CLASS_PKMN_BREEDER",
    ],
}


def get_frontier_mon_types(POKEMON):

    # path to the battle_frontier_trainer_mons.h file
    path = os.path.join(OUTPUT_DIRECTORY, TRAINER_FILENAME)

    trainer_classes = {}

    # Placeholder
    trainer_class = None

    # Open the file
    with open(path, "r") as f:
        lines = f.readlines()

        # Loop over lines
        for line in lines:
            content = line.strip()
            if content.startswith("#define "):
                trainer_class = content[22:][:-2].strip().rsplit("_", 1)[0]
                if trainer_class not in trainer_classes:
                    trainer_classes[trainer_class] = []
            if content.startswith("FRONTIER_MON_"):
                mon = content[13:][:-1].strip()[:-1].rsplit("_", 1)[0]
                id = common.convert_const_to_species_id(mon).lower()

                try:
                    species = POKEMON[id]
                    new_type = True

                    for type in species["types"]:
                        if type in trainer_classes[trainer_class]:
                            new_type = False

                    if new_type == True:
                        trainer_classes[trainer_class] += species["types"]
                except Exception as e:
                    print(f"Failed for species '{mon}': {str(e)}")

    types = {}
    for trainer_class in trainer_classes:
        class_types = trainer_classes[trainer_class]
        for type in class_types:
            if type not in types:
                types[type] = []
            types[type].append(trainer_class)

    # Two different indexing methods
    return types, trainer_classes

def get_pokemon_ids(POKEMON):

    # List of valid Pokemon
    # Excludes alt. Formes, etc.
    pokemon = []

    # Loop over species ids
    for speciesId in POKEMON:
        species = POKEMON[speciesId]

        if speciesId in ignore_species or species["num"] < 1:
            continue  # Skip ignored species

        # Base forme for species
        if "baseSpecies" in species:
            if "forme" in species:
                forme = species["forme"]
                if not (
                    (forme == "Alola" and speciesId != "pikachualola")
                    or forme == "Galar"
                    or forme == "Hisui"
                    or forme == "Paldea"
                ):
                    continue  # Skip non-regional variants

        # Add species id to list
        pokemon.append(speciesId)

    # Pokemon keys
    return pokemon

def generate_pokemon_list(list, key, lookup):

    output = [
        f"#define {standard_constant} {len(standard)}",
        f"const u16 {lookup[trainer_class]}[{standard_constant}] = " + "{"
    ]

    for speciesId in standard:
        species = POKEMON[speciesId]
        constant = common.convert_species_name_to_const(species["name"])
        output.append(f"\t{constant},")
    
    output.append("};\n")
    return output




def get_output_from_lists(lists, lookup):
    
    # Create output content
    output = [
        "// File Auto-Generated By tools/bfg_helpers/trainer_mons.py",
        "",
    ]

    # Loop over the lists
    for list in lists:
        # Loop over the categories
        for category in lists[list]:

            # Get the species list contents
            species_list = lists[list][category]

            # Convert list, category to upper-case key
            key = f"{list.upper()}_{category.upper()}"

            constant = f"SPECIES_LIST_{key}_COUNT"

            # Create standard table (#define, contents)
            output.append(f"#define {constant} {len(species_list)}")
            output.append(
                f"const u16 {lookup[list]}[{constant}] = " + "{"
            )
            for speciesId in species_list:
                species = POKEMON[speciesId]
                constant = common.convert_species_name_to_const(species["name"])
                output.append(f"\t{constant},")
            output.append("};\n")

    return output

def has_mega(species):
    # Species has other formes
    if "otherFormes" in species:
        for forme in species["otherFormes"]:
            if "-Mega" in forme:
                return True # Has mega

    # No megas
    return False

def add_species_to_list(speciesId, key, lists):

    species = POKEMON[speciesId]

    # If the species is NOT a mythical, or mythicals are excluded
    if (not ((include_mythical == False) and common.is_tagged(species, "Mythical"))):

        # Mega Evolutions
        if has_mega(species):
            if not speciesId in lists[key]["mega"]:
                lists[key]["mega"].append(speciesId)

        # Can still be added to below lists

        # Restricted Legendaries
        if (speciesId in restricteds or common.is_tagged(species, "Restricted Legendary")):
            if not speciesId in lists[key]["restricted"]:
                lists[key]["restricted"].append(speciesId)

        # Everything else
        else: 
            if not speciesId in lists[key]["standard"]:
                lists[key]["standard"].append(speciesId)

def is_eevee(species):
    return species["name"] == "Eevee" or \
        "baseSpecies" in species and species["baseSpecies"] == "Eevee" or \
        "changesFrom" in species and species["changesFrom"] == "Eevee" or \
        "prevo" in species and species["prevo"] == "Eevee"

def add_species_to_lists(speciesId, lists):

    species = POKEMON[speciesId]

    # Default Trainer Class (Contains All Species)
    add_species_to_list(speciesId, "TRAINER_CLASS_DEFAULT", lists)

    # Process types, trainer classes
    for type in species["types"]:

        # Add mon to type-specific lists
        add_species_to_list(speciesId, type, lists)

        # Add mon to trainer class-specific lists
        for trainer_class in trainer_class_types[type]:
            add_species_to_list(speciesId, trainer_class, lists)

    # Add mon to special lists
    if common.check_config('BFG_TM_SPECIAL_TRAINER_MONS') == True:

        # Species has no evolutions
        if "evos" not in species:
            # Species is a Pseudo-legendary
            if common.is_tagged(species, "Sub-Legendary"):
                add_species_to_list(speciesId, "PSEUDO_LEGEND", lists)

            # Species is an Ultra Beast
            if common.is_tagged(species, "Ultra Beast"):
                add_species_to_list(speciesId, "ULTRA_BEAST", lists)

            # Species is a mythical
            if common.is_tagged(species, "Mythical"):
                add_species_to_list(speciesId, "MYTHICAL", lists)

            # Species is a starter
            if speciesId in starters:
                add_species_to_list(speciesId, "STARTER", lists)

            # Species is a fossil
            if speciesId in fossils:
                add_species_to_list(speciesId, "FOSSIL", lists)

            # Species is a forme
            if "forme" in species:
                # Get forme key (capitals)
                forme = species["forme"].upper()

                # Forme is a regional forme
                if forme in regionals:
                    add_species_to_list(speciesId, forme, lists)

                # TODO: Other forme handling?

        # Species is a Paradox pokemon
        if common.is_tagged(species, "Paradox"):
            # Future Paradox
            if species["abilities"]["0"] == "Quark Drive":
                add_species_to_list(speciesId, "FUTURE_PARADOX", lists)
            else: # Past Paradox
                add_species_to_list(speciesId, "PAST_PARADOX", lists)
        
        # Species is an eevee
        if is_eevee(species):
            add_species_to_list(speciesId, "EEVEELUTION", lists)

def add_key_to_lists(key, lists, lookup):

    lists[key] = {
        "standard": [],
        "mega": [],
        "restricted": []
    }

    lookup[key] = common.convert_const_to_camel_case(
        f"G_SPECIES_LIST_{key}"
    )

# Main Process
if __name__ == "__main__":

    # If Trainer Mon Set Generation is Enabled
    if common.check_config('BFG_TM_GENERATE_TRAINER_MONS') == True:

        # Get showdown data files
        MOVES, POKEMON = showdown.get_showdown_data()

        # Check if mythicals should be included or not
        include_mythical = common.check_config('BFG_TM_INCLUDE_MYTHICAL') == True

        # Get all of the pokemon ids
        pokemon = get_pokemon_ids(POKEMON)

        # Output Lists
        lists = {}

        # Class lookup table
        lookup = {}

        # Trainer class lists
        for trainer_class in trainer_classes:
            add_key_to_lists(trainer_class, lists, lookup)

        # Monotype lists
        for type in trainer_class_types:
            add_key_to_lists(type, lists, lookup)

        # Regional lists
        for regional in regionals:
            add_key_to_lists(regional, lists, lookup)

        # Special lists
        for special in specials:
            add_key_to_lists(special, lists, lookup)

        # Loop over species
        for speciesId in pokemon:
            species = POKEMON[speciesId]

            add_species_to_lists(speciesId, lists)

        # Generate the output content from the lists
        output = get_output_from_lists(lists, lookup)

        os.makedirs(OUTPUT_DIRECTORY, exist_ok=True)
        outpath = os.path.join(OUTPUT_DIRECTORY, OUTPUT_FILENAME)

        with open(outpath, "w+", encoding="utf8") as f:
            f.write("\n".join(output))

        # Generate Trainer Data
        if common.check_config('BFG_TM_DUMP_TRAINER_DATA') == True:

            trainer_types = get_frontier_mon_types(POKEMON)
            trainerpath = os.path.join(DATA_DIRECTORY, TRAINER_OUTFILE)

            with open(trainerpath, "w+", encoding="utf8") as f:
                json.dump(trainer_types, f, indent=2)
