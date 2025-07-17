# 1 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"

# 2 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
BattleFrontier_Underground_B1F_MapScripts::
# 3 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.byte 0

BattleFrontier_Underground_B1F_EventScript_GameCornerGreeter::
# 8 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	lock
# 9 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	faceplayer
# 10 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	msgbox BattleFrontier_Underground_B1F_EventScript_GameCornerGreeter_Text_0
# 11 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	msgbox BattleFrontier_Underground_B1F_EventScript_GameCornerGreeter_Text_1
# 12 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	checkitem ITEM_COIN_CASE
# 13 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BattleFrontier_Underground_B1F_EventScript_GameCornerGreeter_2
BattleFrontier_Underground_B1F_EventScript_GameCornerGreeter_1:
# 17 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	msgbox BattleFrontier_Underground_B1F_EventScript_GameCornerGreeter_Text_3
# 18 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	release
	end

BattleFrontier_Underground_B1F_EventScript_GameCornerGreeter_2:
# 14 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	msgbox BattleFrontier_Underground_B1F_EventScript_GameCornerGreeter_Text_2
# 15 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	giveitem ITEM_COIN_CASE
	goto BattleFrontier_Underground_B1F_EventScript_GameCornerGreeter_1


BattleFrontier_Underground_B1F_EventScript_BerryShopIVTrainingClerk::
# 24 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	lock
# 25 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	faceplayer
# 26 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	message gText_HowMayIServeYou
# 27 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	waitmessage
# 28 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	pokemart BattleFrontier_Underground_B1F_Mart_BerryShopIVTrainingClerk
# 29 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 30 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	release
	end


BattleFrontier_Underground_B1F_EventScript_BerryShopEVTrainingClerk::
# 34 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	lock
# 35 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	faceplayer
# 36 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	message gText_HowMayIServeYou
# 37 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	waitmessage
# 38 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	pokemart BattleFrontier_Underground_B1F_Mart_BerryShopEVTrainingClerk
# 39 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 40 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	release
	end


BattleFrontier_Underground_B1F_EventScript_TrainingShopVitaminClerk::
# 46 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	lock
# 47 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	faceplayer
# 48 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	message gText_HowMayIServeYou
# 49 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	waitmessage
# 50 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	pokemart BattleFrontier_Underground_B1F_Mart_TrainingShopVitaminClerk
# 51 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 52 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	release
	end


BattleFrontier_Underground_B1F_EventScript_TrainingShopMintClerk::
# 56 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	lock
# 57 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	faceplayer
# 58 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	message gText_HowMayIServeYou
# 59 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	waitmessage
# 60 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	pokemart BattleFrontier_Underground_B1F_Mart_TrainingShopMintClerk
# 61 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 62 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	release
	end


BattleFrontier_Underground_B1F_EventScript_TrainingShopOtherClerk::
# 68 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	lock
# 69 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	faceplayer
# 70 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	message gText_HowMayIServeYou
# 71 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	waitmessage
# 72 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	pokemart BattleFrontier_Underground_B1F_Mart_TrainingShopOtherClerk
# 73 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 74 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	release
	end


BattleFrontier_Underground_B1F_EventScript_TrainingShopTeraClerk::
# 78 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	lock
# 79 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	faceplayer
# 80 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	message gText_HowMayIServeYou
# 81 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	waitmessage
# 82 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	pokemart BattleFrontier_Underground_B1F_Mart_TrainingShopTeraClerk
# 83 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 84 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	release
	end


BattleFrontier_Underground_B1F_EventScript_BattleShopMegaClerk::
# 91 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	lock
# 92 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	faceplayer
# 93 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	message gText_HowMayIServeYou
# 94 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	waitmessage
# 95 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	pokemart BattleFrontier_Underground_B1F_Mart_BattleShopMegaClerk
# 96 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 97 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	release
	end


BattleFrontier_Underground_B1F_EventScript_BattleShopZCrystalClerk::
# 101 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	lock
# 102 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	faceplayer
# 103 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	message gText_HowMayIServeYou
# 104 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	waitmessage
# 105 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	pokemart BattleFrontier_Underground_B1F_Mart_BattleShopZCrystalClerk
# 106 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 107 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	release
	end


BattleFrontier_Underground_B1F_EventScript_BattleShopBerryClerk::
# 112 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	lock
# 113 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	faceplayer
# 114 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	message gText_HowMayIServeYou
# 115 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	waitmessage
# 116 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	pokemart BattleFrontier_Underground_B1F_Mart_BattleShopBerryClerk
# 117 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 118 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	release
	end


BattleFrontier_Underground_B1F_EventScript_BattleShopResistClerk::
# 122 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	lock
# 123 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	faceplayer
# 124 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	message gText_HowMayIServeYou
# 125 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	waitmessage
# 126 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	pokemart BattleFrontier_Underground_B1F_Mart_BattleShopResistClerk
# 127 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 128 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	release
	end


BattleFrontier_Underground_B1F_EventScript_BattleShopCommonClerk::
# 133 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	lock
# 134 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	faceplayer
# 135 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	message gText_HowMayIServeYou
# 136 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	waitmessage
# 137 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	pokemart BattleFrontier_Underground_B1F_Mart_BattleShopCommonClerk
# 138 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 139 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	release
	end


BattleFrontier_Underground_B1F_EventScript_BattleShopUncommonClerk::
# 143 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	lock
# 144 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	faceplayer
# 145 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	message gText_HowMayIServeYou
# 146 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	waitmessage
# 147 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	pokemart BattleFrontier_Underground_B1F_Mart_BattleShopUncommonClerk
# 148 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 149 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	release
	end


BattleFrontier_Underground_B1F_EventScript_BattleShopTypeItemClerk::
# 154 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	lock
# 155 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	faceplayer
# 156 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	message gText_HowMayIServeYou
# 157 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	waitmessage
# 158 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	pokemart BattleFrontier_Underground_B1F_Mart_BattleShopTypeItemClerk
# 159 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 160 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	release
	end


BattleFrontier_Underground_B1F_EventScript_BattleShopGemstoneClerk::
# 164 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	lock
# 165 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	faceplayer
# 166 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	message gText_HowMayIServeYou
# 167 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	waitmessage
# 168 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	pokemart BattleFrontier_Underground_B1F_Mart_BattleShopGemstoneClerk
# 169 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 170 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	release
	end


BattleFrontier_Underground_B1F_EventScript_TMHMClerk1::
# 177 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	lock
# 178 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	faceplayer
# 179 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	message gText_HowMayIServeYou
# 180 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	waitmessage
# 181 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	pokemart BattleFrontier_Underground_B1F_Mart_TMHMClerk1
# 182 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 183 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	release
	end


BattleFrontier_Underground_B1F_EventScript_TMHMClerk2::
# 187 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	lock
# 188 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	faceplayer
# 189 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	message gText_HowMayIServeYou
# 190 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	waitmessage
# 191 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	pokemart BattleFrontier_Underground_B1F_Mart_TMHMClerk2
# 192 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 193 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	release
	end


BattleFrontier_Underground_B1F_EventScript_GeneralClerk::
# 198 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	lock
# 199 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	faceplayer
# 200 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	message gText_HowMayIServeYou
# 201 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	waitmessage
# 202 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	pokemart BattleFrontier_Underground_B1F_Mart_GeneralClerk
# 203 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 204 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	release
	end


BattleFrontier_Underground_B1F_EventScript_PokeballClerk::
# 209 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	lock
# 210 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	faceplayer
# 211 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	message gText_HowMayIServeYou
# 212 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	waitmessage
# 213 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	pokemart BattleFrontier_Underground_B1F_Mart_PokeballClerk
# 214 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 215 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	release
	end


BattleFrontier_Underground_B1F_EventScript_ComingSoonStaff::
# 221 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	lock
# 222 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	faceplayer
# 223 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	msgbox BattleFrontier_Underground_B1F_EventScript_ComingSoonStaff_Text_0
# 224 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	release
	end


	.align 2
# 230 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
BattleFrontier_Underground_B1F_Mart_PokemonShopItemClerk:
# 231 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_FLAME_PLATE
# 232 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SPLASH_PLATE
# 233 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ZAP_PLATE
# 234 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_MEADOW_PLATE
# 235 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ICICLE_PLATE
# 236 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_FIST_PLATE
# 237 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TOXIC_PLATE
# 238 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_EARTH_PLATE
# 239 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SKY_PLATE
# 240 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_MIND_PLATE
# 241 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_INSECT_PLATE
# 242 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_STONE_PLATE
# 243 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SPOOKY_PLATE
# 244 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_DRACO_PLATE
# 245 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_DREAD_PLATE
# 246 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_IRON_PLATE
# 247 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_PIXIE_PLATE
# 248 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_DOUSE_DRIVE
# 249 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SHOCK_DRIVE
# 250 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_BURN_DRIVE
# 251 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_CHILL_DRIVE
# 252 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_FIRE_MEMORY
# 253 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_WATER_MEMORY
# 254 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ELECTRIC_MEMORY
# 255 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_GRASS_MEMORY
# 256 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ICE_MEMORY
# 257 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_FIGHTING_MEMORY
# 258 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_POISON_MEMORY
# 259 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_GROUND_MEMORY
# 260 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_FLYING_MEMORY
# 261 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_PSYCHIC_MEMORY
# 262 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_BUG_MEMORY
# 263 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ROCK_MEMORY
# 264 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_GHOST_MEMORY
# 265 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_DRAGON_MEMORY
# 266 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_DARK_MEMORY
# 267 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_STEEL_MEMORY
# 268 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_FAIRY_MEMORY
# 269 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_RUSTED_SWORD
# 270 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_RUSTED_SHIELD
# 271 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SOUL_DEW
# 272 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ADAMANT_ORB
# 273 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_LUSTROUS_ORB
# 274 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_GRISEOUS_ORB
# 275 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ADAMANT_CRYSTAL
# 276 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_GRISEOUS_CORE
# 277 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_LUSTROUS_GLOBE
# 278 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_CORNERSTONE_MASK
# 279 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_WELLSPRING_MASK
# 280 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_HEARTHFLAME_MASK
	.2byte ITEM_NONE

	.align 2
# 283 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
BattleFrontier_Underground_B1F_Mart_BerryShopIVTrainingClerk:
# 284 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_DURIN_BERRY
# 285 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_BELUE_BERRY
# 286 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_RAZZ_BERRY
# 287 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_BLUK_BERRY
# 288 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_NANAB_BERRY
# 289 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_WEPEAR_BERRY
# 290 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_PINAP_BERRY
# 291 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_CORNN_BERRY
# 292 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_MAGOST_BERRY
# 293 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_RABUTA_BERRY
# 294 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_NOMEL_BERRY
# 295 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SPELON_BERRY
# 296 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_PAMTRE_BERRY
# 297 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_WATMEL_BERRY
	.2byte ITEM_NONE

	.align 2
# 300 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
BattleFrontier_Underground_B1F_Mart_BerryShopEVTrainingClerk:
# 301 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_HEALTH_MOCHI
# 302 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_MUSCLE_MOCHI
# 303 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_RESIST_MOCHI
# 304 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_GENIUS_MOCHI
# 305 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_CLEVER_MOCHI
# 306 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SWIFT_MOCHI
# 307 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_FRESH_START_MOCHI
# 308 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 309 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 310 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 311 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 312 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_GREPA_BERRY
# 313 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TAMATO_BERRY
	.2byte ITEM_NONE

	.align 2
# 316 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
BattleFrontier_Underground_B1F_Mart_TrainingShopVitaminClerk:
# 317 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_HP_UP
# 318 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_HEALTH_FEATHER
# 319 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_PROTEIN
# 320 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_MUSCLE_FEATHER
# 321 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_IRON
# 322 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_RESIST_FEATHER
# 323 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_CALCIUM
# 324 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_GENIUS_FEATHER
# 325 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ZINC
# 326 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_CLEVER_FEATHER
# 327 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_CARBOS
# 328 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SWIFT_FEATHER
# 329 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_PP_UP
# 330 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_PP_MAX
# 331 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_BOTTLE_CAP
# 332 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 333 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
	.2byte ITEM_NONE

	.align 2
# 336 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
BattleFrontier_Underground_B1F_Mart_TrainingShopMintClerk:
# 337 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_LONELY_MINT
# 338 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ADAMANT_MINT
# 339 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_NAUGHTY_MINT
# 340 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_BRAVE_MINT
# 341 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 342 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 343 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_LAX_MINT
# 344 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_RELAXED_MINT
# 345 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 346 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_MILD_MINT
# 347 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_RASH_MINT
# 348 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_QUIET_MINT
# 349 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_CALM_MINT
# 350 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_GENTLE_MINT
# 351 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
# 352 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SASSY_MINT
# 353 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TIMID_MINT
# 354 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 355 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 356 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_NAIVE_MINT
# 357 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
	.2byte ITEM_NONE

	.align 2
# 360 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
BattleFrontier_Underground_B1F_Mart_TrainingShopOtherClerk:
# 361 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_RARE_CANDY
# 362 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 363 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 364 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_EXP_CANDY_M
# 365 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_EXP_CANDY_L
# 366 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_EXP_CANDY_XL
# 367 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_DYNAMAX_CANDY
# 368 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_MACHO_BRACE
# 369 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 370 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_POWER_BRACER
# 371 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_POWER_BELT
# 372 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_POWER_LENS
# 373 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_POWER_BAND
# 374 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_POWER_ANKLET
# 375 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_AMULET_COIN
# 376 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_LUCKY_EGG
	.2byte ITEM_NONE

	.align 2
# 379 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
BattleFrontier_Underground_B1F_Mart_TrainingShopTeraClerk:
# 380 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_BUG_TERA_SHARD
# 381 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_DARK_TERA_SHARD
# 382 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_DRAGON_TERA_SHARD
# 383 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ELECTRIC_TERA_SHARD
# 384 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_FAIRY_TERA_SHARD
# 385 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_FIGHTING_TERA_SHARD
# 386 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_FIRE_TERA_SHARD
# 387 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_FLYING_TERA_SHARD
# 388 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_GHOST_TERA_SHARD
# 389 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_GRASS_TERA_SHARD
# 390 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_GROUND_TERA_SHARD
# 391 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ICE_TERA_SHARD
# 392 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 393 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_POISON_TERA_SHARD
# 394 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_PSYCHIC_TERA_SHARD
# 395 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ROCK_TERA_SHARD
# 396 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_STEEL_TERA_SHARD
# 397 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_WATER_TERA_SHARD
	.2byte ITEM_NONE

	.align 2
# 400 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
BattleFrontier_Underground_B1F_Mart_BattleShopMegaClerk:
# 401 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_VENUSAURITE
# 402 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_CHARIZARDITE_X
# 403 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_CHARIZARDITE_Y
# 404 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_BLASTOISINITE
# 405 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_BEEDRILLITE
# 406 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_PIDGEOTITE
# 407 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ALAKAZITE
# 408 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SLOWBRONITE
# 409 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_GENGARITE
# 410 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_KANGASKHANITE
# 411 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_PINSIRITE
# 412 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_GYARADOSITE
# 413 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_AERODACTYLITE
# 414 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_MEWTWONITE_X
# 415 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_MEWTWONITE_Y
# 416 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_AMPHAROSITE
# 417 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_STEELIXITE
# 418 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SCIZORITE
# 419 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_HERACRONITE
# 420 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_HOUNDOOMINITE
# 421 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TYRANITARITE
# 422 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SCEPTILITE
# 423 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_BLAZIKENITE
# 424 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SWAMPERTITE
# 425 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_GARDEVOIRITE
# 426 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SABLENITE
# 427 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_MAWILITE
# 428 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_AGGRONITE
# 429 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_MEDICHAMITE
# 430 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_MANECTITE
# 431 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SHARPEDONITE
# 432 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_CAMERUPTITE
# 433 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ALTARIANITE
# 434 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_BANETTITE
# 435 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ABSOLITE
# 436 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_GLALITITE
# 437 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SALAMENCITE
# 438 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_METAGROSSITE
# 439 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_LATIASITE
# 440 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_LATIOSITE
# 441 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_LOPUNNITE
# 442 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_GARCHOMPITE
# 443 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_LUCARIONITE
# 444 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ABOMASITE
# 445 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_GALLADITE
# 446 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_AUDINITE
# 447 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_DIANCITE
# 448 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_RED_ORB
# 449 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_BLUE_ORB
	.2byte ITEM_NONE

	.align 2
# 452 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
BattleFrontier_Underground_B1F_Mart_BattleShopZCrystalClerk:
# 453 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_NORMALIUM_Z
# 454 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_FIRIUM_Z
# 455 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_WATERIUM_Z
# 456 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ELECTRIUM_Z
# 457 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_GRASSIUM_Z
# 458 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ICIUM_Z
# 459 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_FIGHTINIUM_Z
# 460 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_POISONIUM_Z
# 461 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_GROUNDIUM_Z
# 462 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_FLYINIUM_Z
# 463 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_PSYCHIUM_Z
# 464 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_BUGINIUM_Z
# 465 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ROCKIUM_Z
# 466 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_GHOSTIUM_Z
# 467 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_DRAGONIUM_Z
# 468 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_DARKINIUM_Z
# 469 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_STEELIUM_Z
# 470 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_FAIRIUM_Z
# 471 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_PIKANIUM_Z
# 472 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_EEVIUM_Z
# 473 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SNORLIUM_Z
# 474 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_MEWNIUM_Z
# 475 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_DECIDIUM_Z
# 476 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_INCINIUM_Z
# 477 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_PRIMARIUM_Z
# 478 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_LYCANIUM_Z
# 479 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_MIMIKIUM_Z
# 480 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_KOMMONIUM_Z
# 481 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TAPUNIUM_Z
# 482 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SOLGANIUM_Z
# 483 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_LUNALIUM_Z
# 484 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_MARSHADIUM_Z
# 485 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ALORAICHIUM_Z
# 486 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_PIKASHUNIUM_Z
# 487 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ULTRANECROZIUM_Z
	.2byte ITEM_NONE

	.align 2
# 490 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
BattleFrontier_Underground_B1F_Mart_BattleShopCommonClerk:
# 491 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_CHOICE_BAND
# 492 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_CHOICE_SPECS
# 493 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_CHOICE_SCARF
# 494 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_FLAME_ORB
# 495 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TOXIC_ORB
# 496 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ELECTRIC_SEED
# 497 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_PSYCHIC_SEED
# 498 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_MISTY_SEED
# 499 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_GRASSY_SEED
# 500 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 501 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_LEFTOVERS
# 502 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_EXPERT_BELT
# 503 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_LIGHT_CLAY
# 504 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_LIFE_ORB
# 505 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_POWER_HERB
# 506 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_FOCUS_SASH
# 507 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_LAGGING_TAIL
# 508 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_IRON_BALL
# 509 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SHED_SHELL
# 510 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_EVIOLITE
# 511 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ROCKY_HELMET
# 512 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_AIR_BALLOON
# 513 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_RED_CARD
# 514 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_EJECT_BUTTON
# 515 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_WEAKNESS_POLICY
# 516 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ASSAULT_VEST
# 517 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SAFETY_GOGGLES
# 518 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ADRENALINE_ORB
# 519 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TERRAIN_EXTENDER
# 520 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_PROTECTIVE_PADS
# 521 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_THROAT_SPRAY
# 522 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_EJECT_PACK
# 523 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_HEAVY_DUTY_BOOTS
# 524 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_BLUNDER_POLICY
# 525 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ROOM_SERVICE
# 526 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_UTILITY_UMBRELLA
# 527 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ABILITY_SHIELD
# 528 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_CLEAR_AMULET
# 529 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_PUNCHING_GLOVE
# 530 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_COVERT_CLOAK
# 531 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_LOADED_DICE
# 532 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_BOOSTER_ENERGY
# 533 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_MIRROR_HERB
	.2byte ITEM_NONE

	.align 2
# 536 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
BattleFrontier_Underground_B1F_Mart_BattleShopUncommonClerk:
# 537 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_DAMP_ROCK
# 538 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_HEAT_ROCK
# 539 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SMOOTH_ROCK
# 540 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ICY_ROCK
# 541 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ABSORB_BULB
# 542 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_CELL_BATTERY
# 543 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_LUMINOUS_MOSS
# 544 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SNOWBALL
# 545 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_BRIGHT_POWDER
# 546 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_WHITE_HERB
# 547 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_QUICK_CLAW
# 548 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SOOTHE_BELL
# 549 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_AMULET_COIN
# 550 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_CLEANSE_TAG
# 551 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SMOKE_BALL
# 552 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_FOCUS_BAND
# 553 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_LUCKY_EGG
# 554 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SCOPE_LENS
# 555 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SHELL_BELL
# 556 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_WIDE_LENS
# 557 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_MUSCLE_BAND
# 558 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_WISE_GLASSES
# 559 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_BLACK_SLUDGE
# 560 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_GRIP_CLAW
# 561 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_STICKY_BARB
# 562 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_BIG_ROOT
# 563 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_FLOAT_STONE
# 564 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_RING_TARGET
# 565 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_DESTINY_KNOT
# 566 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_BINDING_BAND
# 567 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ZOOM_LENS
# 568 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_METRONOME
# 569 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_LIGHT_BALL
# 570 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_LEEK
# 571 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_THICK_CLUB
# 572 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_LUCKY_PUNCH
# 573 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_BERSERK_GENE
# 574 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_METAL_POWDER
# 575 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_QUICK_POWDER
# 576 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SEA_INCENSE
# 577 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_LAX_INCENSE
# 578 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ODD_INCENSE
# 579 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ROCK_INCENSE
# 580 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_FULL_INCENSE
# 581 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_WAVE_INCENSE
# 582 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ROSE_INCENSE
# 583 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_LUCK_INCENSE
# 584 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_PURE_INCENSE
	.2byte ITEM_NONE

	.align 2
# 587 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
BattleFrontier_Underground_B1F_Mart_BattleShopTypeItemClerk:
# 588 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SILK_SCARF
# 589 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_CHARCOAL
# 590 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 591 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_MAGNET
# 592 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
# 593 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 594 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_BLACK_BELT
# 595 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_POISON_BARB
# 596 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SOFT_SAND
# 597 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SHARP_BEAK
# 598 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TWISTED_SPOON
# 599 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SILVER_POWDER
# 600 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_HARD_STONE
# 601 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SPELL_TAG
# 602 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_DRAGON_FANG
# 603 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_BLACK_GLASSES
# 604 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_METAL_COAT
# 605 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_FAIRY_FEATHER
	.2byte ITEM_NONE

	.align 2
# 608 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
BattleFrontier_Underground_B1F_Mart_BattleShopGemstoneClerk:
# 609 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_NORMAL_GEM
# 610 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_FIRE_GEM
# 611 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_WATER_GEM
# 612 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ELECTRIC_GEM
# 613 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_GRASS_GEM
# 614 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ICE_GEM
# 615 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_FIGHTING_GEM
# 616 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_POISON_GEM
# 617 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_GROUND_GEM
# 618 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_FLYING_GEM
# 619 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_PSYCHIC_GEM
# 620 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_BUG_GEM
# 621 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ROCK_GEM
# 622 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_GHOST_GEM
# 623 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_DRAGON_GEM
# 624 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_DARK_GEM
# 625 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_STEEL_GEM
# 626 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_FAIRY_GEM
	.2byte ITEM_NONE

	.align 2
# 629 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
BattleFrontier_Underground_B1F_Mart_BattleShopBerryClerk:
# 630 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 631 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 632 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 633 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 634 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 635 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 636 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 637 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_PERSIM_BERRY
# 638 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_LUM_BERRY
# 639 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 640 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_FIGY_BERRY
# 641 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_WIKI_BERRY
# 642 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_MAGO_BERRY
# 643 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_AGUAV_BERRY
# 644 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_IAPAPA_BERRY
# 645 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_LIECHI_BERRY
# 646 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_GANLON_BERRY
# 647 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SALAC_BERRY
# 648 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_PETAYA_BERRY
# 649 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_APICOT_BERRY
# 650 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_LANSAT_BERRY
# 651 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_STARF_BERRY
# 652 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ENIGMA_BERRY
# 653 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_MICLE_BERRY
# 654 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_CUSTAP_BERRY
# 655 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_JABOCA_BERRY
# 656 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ROWAP_BERRY
# 657 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_KEE_BERRY
# 658 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_MARANGA_BERRY
	.2byte ITEM_NONE

	.align 2
# 661 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
BattleFrontier_Underground_B1F_Mart_BattleShopResistClerk:
# 662 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_CHILAN_BERRY
# 663 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_OCCA_BERRY
# 664 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_PASSHO_BERRY
# 665 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_WACAN_BERRY
# 666 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_RINDO_BERRY
# 667 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_YACHE_BERRY
# 668 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_CHOPLE_BERRY
# 669 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_KEBIA_BERRY
# 670 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SHUCA_BERRY
# 671 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_COBA_BERRY
# 672 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_PAYAPA_BERRY
# 673 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TANGA_BERRY
# 674 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_CHARTI_BERRY
# 675 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_KASIB_BERRY
# 676 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_HABAN_BERRY
# 677 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_COLBUR_BERRY
# 678 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_BABIRI_BERRY
# 679 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ROSELI_BERRY
	.2byte ITEM_NONE

	.align 2
# 682 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
BattleFrontier_Underground_B1F_Mart_TMHMClerk1:
# 683 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM01
# 684 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM02
# 685 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM03
# 686 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM04
# 687 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM05
# 688 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM06
# 689 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM07
# 690 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM08
# 691 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM09
# 692 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM10
# 693 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM11
# 694 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM12
# 695 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM13
# 696 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM14
# 697 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM15
# 698 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM16
# 699 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM17
# 700 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM18
# 701 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM19
# 702 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM20
# 703 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM21
# 704 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM22
# 705 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM23
# 706 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM24
# 707 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM25
	.2byte ITEM_NONE

	.align 2
# 709 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
BattleFrontier_Underground_B1F_Mart_TMHMClerk2:
# 710 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM26
# 711 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM27
# 712 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM28
# 713 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM29
# 714 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM30
# 715 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM31
# 716 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM32
# 717 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM33
# 718 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM34
# 719 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM35
# 720 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM36
# 721 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM37
# 722 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM38
# 723 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM39
# 724 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM40
# 725 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM41
# 726 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM42
# 727 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM43
# 728 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM44
# 729 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM45
# 730 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM46
# 731 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM47
# 732 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM48
# 733 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM49
# 734 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM50
	.2byte ITEM_NONE

	.align 2
# 737 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
BattleFrontier_Underground_B1F_Mart_GeneralClerk:
# 738 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_POKE_BALL
# 739 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 740 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 741 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 742 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_MAX_POTION
# 743 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 744 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 745 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_REVIVE
# 746 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 747 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_PROTEIN
# 748 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_CALCIUM
# 749 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_IRON
# 750 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ZINC
# 751 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_CARBOS
# 752 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_HP_UP
	.2byte ITEM_NONE

	.align 2
# 755 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
BattleFrontier_Underground_B1F_Mart_PokeballClerk:
# 756 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_MASTER_BALL
# 757 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_PREMIER_BALL
# 758 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_HEAL_BALL
# 759 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_NET_BALL
# 760 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_NEST_BALL
# 761 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 762 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_DUSK_BALL
# 763 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TIMER_BALL
# 764 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 765 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 766 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_LUXURY_BALL
# 767 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_LEVEL_BALL
# 768 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_LURE_BALL
# 769 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_MOON_BALL
# 770 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_FRIEND_BALL
# 771 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_LOVE_BALL
# 772 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_FAST_BALL
# 773 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_HEAVY_BALL
# 774 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_DREAM_BALL
# 775 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SAFARI_BALL
# 776 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SPORT_BALL
# 777 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_PARK_BALL
# 778 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_BEAST_BALL
	.2byte ITEM_NONE

BattleFrontier_Underground_B1F_EventScript_GameCornerGreeter_Text_0:
# 10 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.string "Welcome to the Battle Frontier\n"
	.string "Underground!$"

BattleFrontier_Underground_B1F_EventScript_GameCornerGreeter_Text_1:
# 11 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.string "This is the entrance to the Battle\n"
	.string "Frontier Games Corner.$"

BattleFrontier_Underground_B1F_EventScript_GameCornerGreeter_Text_2:
# 14 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.string "You will need a coin case to play here.\n"
	.string "Here you go!$"

BattleFrontier_Underground_B1F_EventScript_GameCornerGreeter_Text_3:
# 17 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.string "I hope you enjoy your stay!$"

BattleFrontier_Underground_B1F_EventScript_ComingSoonStaff_Text_0:
# 223 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.string "This area isn't available right now,\n"
	.string "sorry! Please come back soon!$"
