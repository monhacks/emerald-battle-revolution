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

# Seperate tables for mega pokemon
megas = [
    "venusaur",
    "charizard",
    "blastoise",
    "beedrill",
    "pidgeot",
    "alakazam",
    "slowbro",
    "gengar",
    "kangaskhan",
    "pinsir",
    "gyarados",
    "aerodactyl",
    "mewtwo",
    "ampharos",
    "steelix",
    "scizor",
    "heracross",
    "houndoom",
    "tyranitar",
    "sceptile",
    "blaziken",
    "swampert",
    "gardevoir",
    "sableye",
    "mawile",
    "aggron",
    "medicham",
    "manectric",
    "sharpedo",
    "camerupt",
    "altaria",
    "banette",
    "absol",
    "glalie",
    "salamence",
    "metagross",
    "latias",
    "latios",
    "rayquaza",
    "lopunny",
    "garchomp",
    "lucario",
    "abomasnow",
    "gallade",
    "audino",
    "diancie",
]

eevees = [
    "jolteon",
    "flareon",
    "umbreon",
    "leafeon",
    "sylveon",
    "glaceon",
    "espeon",
    "vaporean",
    "eevee",
]

regis = ["regirock", "regice", "registeel", "regigigas", "regidrago", "regieleki"]

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

def generate_pokemon_data():

    # Add Trainer Class Lists

    # Loop over the trainer classes
    for trainer_class in trainer_classes:

        # Sort species list, remove duplicates
        class_list = sorted(list(set(classes[trainer_class])))

        # Trainer Class Constant
        class_constant = f"SPECIES_LIST_{trainer_class}_COUNT"

        ### Standard ###

        # Create standard table (#define, contents)
        output.append(f"#define {class_constant} {len(class_list)}")
        output.append(
            f"const u16 {classes_lookup[trainer_class]}[{class_constant}] = " + "{"
        )
        for speciesId in class_list:
            species = POKEMON[speciesId]
            constant = common.convert_species_name_to_const(species["name"])
            output.append(f"\t{constant},")
        output.append("};\n")

        ### Megas ###

        # Sort megas list, remove duplicates
        mega_list = sorted(list(set(classes_mega[trainer_class])))

        # Trainer Class Megas Constant
        mega_constant = f"SPECIES_LIST_{trainer_class}_MEGA_COUNT"

        # Create mega table (#define, contents)
        output.append(f"#define {mega_constant} {len(mega_list)}")
        output.append(
            f"const u16 {classes_lookup[trainer_class]}Mega[{mega_constant}] = "
            + "{"
        )
        for speciesId in mega_list:
            species = POKEMON[speciesId]
            constant = common.convert_species_name_to_const(species["name"])
            output.append(f"\t{constant},")
        output.append("};\n")

        ### Restricteds ###

        # Sort restricted list, remove duplicates
        restricted_list = sorted(list(set(classes_restricted[trainer_class])))

        # Trainer Class Restricted Constant
        restricted_constant = f"SPECIES_LIST_{trainer_class}_RESTRICTED_COUNT"

        # Create restricted table (#define, contents)
        output.append(f"#define {restricted_constant} {len(restricted_list)}")
        output.append(
            f"const u16 {classes_lookup[trainer_class]}Restricted[{restricted_constant}] = "
            + "{"
        )
        for speciesId in restricted_list:
            species = POKEMON[speciesId]
            constant = common.convert_species_name_to_const(species["name"])
            output.append(f"\t{constant},")
        output.append("};\n")




# Main Process
if __name__ == "__main__":

    # Get Game Config
    config = common.get_config()

    # If Trainer Mon Set Generation is Enabled
    if config["BFG_TM_GENERATE_TRAINER_MONS"] == True:

        # Get showdown data files
        MOVES, POKEMON = showdown.get_showdown_data()

        # Check if mythicals should be included or not
        include_mythical = config["BFG_TM_INCLUDE_MYTHICAL"] == True

        # Get all of the pokemon ids
        pokemon = get_pokemon_ids(POKEMON)

        ### Trainer Classes ###

        # Class species table
        classes = {}
        classes_mega = {}
        classes_restricted = {}

        # Class lookup table
        classes_lookup = {}

        # Initialise lists
        for trainer_class in trainer_classes:
            classes[trainer_class] = []
            classes_mega[trainer_class] = []
            classes_restricted[trainer_class] = []

            classes_lookup[trainer_class] = common.convert_const_to_camel_case(
                f"G_SPECIES_LIST_{trainer_class}"
            )

        ### Monotype ###

        # Types species table
        types = {}
        types_mega = {}
        types_restricted = {}

        # Monotype lookup table
        types_lookup = {}

        # Initialise type lists
        for type in trainer_class_types:

            types[type] = []
            types_mega[type] = []
            types_restricted[type] = []

            types_lookup[type] = common.convert_const_to_camel_case(
                f"G_SPECIES_LIST_{type}"
            )

        ### Special ###

        # Special species lists
        special = {
            "FUTURE_PARADOX": [],
            "PAST_PARADOX": [],
            "PSEUDO_LEGEND": [],
            "EEVEELUTION": [],
        }

        # Special lookup table
        special_lookup = {}

        # Initialise type lists
        for category in special:

            special_lookup[category] = common.convert_const_to_camel_case(
                f"G_SPECIES_LIST_{category}"
            )

        # Lookup table of species which have appeared
        # in at least one facility class species list
        coverage = {}

        def add_species(speciesId, trainer_class):
            
            species = POKEMON[speciesId]

            # If the species is NOT a mythical, or mythicals are excluded
            if (not ((include_mythical == False) and common.is_tagged(species, "Mythical"))):

                # Mega Evolutions
                if speciesId in megas:
                    classes_mega[trainer_class].append(speciesId)
                    for type in species["types"]:
                        types_mega[type].append(speciesId)

                
                # Restricted Pokemon
                if (speciesId in restricteds or common.is_tagged(species, "Restricted Legendary")):
                    classes_restricted[trainer_class].append(speciesId)
                    for type in species["types"]:
                        types_restricted[type].append(speciesId)

                # Everything else
                else: 
                    classes[trainer_class].append(speciesId)
                    for type in species["types"]:
                        types[type].append(speciesId)

                # Increment mon coverage
                coverage[speciesId] += 1

                # Generate special trainer mon lists
                if config['BFG_TM_SPECIAL_TRAINER_MONS'] == True:

                    # Species is a Pseudo-legendary
                    if common.is_tagged(species, "Sub-Legendary"):
                        special["PSEUDO_LEGEND"].append(speciesId)
                    # Species is a Paradox pokemon
                    if common.is_tagged(species, "Paradox"):
                        # Future Paradox
                        if species["abilities"]["0"] == "Quark Drive":
                            special["FUTURE_PARADOX"].append(speciesId)
                        else: # Past Paradox
                            special["PAST_PARADOX"].append(speciesId)
                    # Species is an eeveelution
                    if speciesId in eevees:
                        special["EEVEELUTION"].append(speciesId)
                    
                    # TODO: Add more special classes :)

        # Loop over species
        for speciesId in pokemon:

            coverage[speciesId] = 0
            species = POKEMON[speciesId]

            # Default Trainer Class (Contains All Species)
            add_species(speciesId, "TRAINER_CLASS_DEFAULT")

            # Process classes based on types
            for type in species["types"]:
                for trainer_class in trainer_class_types[type]:
                    add_species(speciesId, trainer_class)

        # Create output content
        output = [
            "// File Auto-Generated By tools/bfg_helpers/trainer_mons.py",
            "",
        ]

        
        os.makedirs(OUTPUT_DIRECTORY, exist_ok=True)
        outpath = os.path.join(OUTPUT_DIRECTORY, OUTPUT_FILENAME)

        with open(outpath, "w+", encoding="utf8") as f:
            f.write("\n".join(output))

        # Dump Coverage Data
        if config["BFG_TM_DUMP_COVERAGE_DATA"] == True:
            os.makedirs(DATA_DIRECTORY, exist_ok=True)
            datapath = os.path.join(DATA_DIRECTORY, DATA_FILENAME)

            with open(datapath, "w+", encoding="utf8") as f:
                json.dump(coverage, f, indent=2)

        # Generate Trainer Data
        if config["BFG_TM_DUMP_TRAINER_DATA"] == True:
            trainer_types = get_frontier_mon_types(POKEMON)
            trainerpath = os.path.join(DATA_DIRECTORY, TRAINER_OUTFILE)

            with open(trainerpath, "w+", encoding="utf8") as f:
                json.dump(trainer_types, f, indent=2)
