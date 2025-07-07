from datetime import datetime
import src.cparser as cparser

CONFIG_FILE = "./include/config/battle_frontier_generator.h"

# Moves to ignore, effectively a banlist for moves
# used for both move_ratings.py and move_options.py
MOVE_EXCLUSIONS = [

]

def get_timestamp(time=datetime.now()):
    return time.strftime("%d-%m-%y %H:%M:%S")

def convert_str_to_capital_case(string):

    list = []
    tokens = string.split(" ")
    for t in tokens:

        a = t[:1]
        b = t[1:]

        list.append(f"{a.upper()}{b}")

    return " ".join(list)

def convert_const_to_camel_case(const):
    parts = const.split("_")
    return parts[0].lower() + "".join(word.capitalize() for word in parts[1:])

def convert_const_to_move_id(const):
    return const.lower().replace("_", "").replace("move", "", 1)

def convert_string_to_const(string):

    # Convert to upper case
    constant = string.upper()

    # Update formatting
    constant = constant.replace(" ", "_").replace("-", "_")
    constant = constant.replace("'", "").replace(":", "")

    # Replace Special Characters
    constant = (
        constant.replace("’", "").replace(":", "").replace("%", "").replace(".", "")
    )

    return constant

def convert_const_to_species_id(const):
    if const.startswith("SPECIES_"):
        const = const[len("SPECIES_") :]
    parts = const.split("_")
    return "".join(part.capitalize() for part in parts)


def convert_species_name_to_const(species_name):

    # Convert to generic constant
    constant = convert_string_to_const(species_name)

    # Update characers / constants
    constant = constant.replace("É", "E")

    return f"SPECIES_{constant}"


def convert_species_name_to_species_id(species_name):

    # Convert species name to lower case
    constant = species_name.lower()

    # Update formatting
    return (
        constant.replace(" ", "")
        .replace("-", "")
        .replace("'", "")
        .replace(":", "")
        .replace("_", "")
    )


def parse_gender(gender_string):
    gender = gender_string.lower()
    if gender == "m" or gender == "n":  # Male
        return 0
    elif gender == "f":  # Female
        return 1


def is_tagged(species, tag):
    return "tags" in species and tag in species["tags"]


def is_forme(species, forme):
    return "forme" in species and species["forme"] == forme


def get_config():
    with open(CONFIG_FILE, "r") as f:
        return cparser.parse_defines(f.readlines())

CONFIG = get_config()

def check_config(value):
    if value in CONFIG:
        return CONFIG[value]
    return False
