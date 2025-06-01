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


BattleFrontier_Underground_B1F_EventScript_PokeballClerk::
# 198 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	lock
# 199 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	faceplayer
# 200 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	message gText_HowMayIServeYou
# 201 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	waitmessage
# 202 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	pokemart BattleFrontier_Underground_B1F_Mart_PokeballClerk
# 203 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 204 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	release
	end


BattleFrontier_Underground_B1F_EventScript_GeneralClerk::
# 208 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	lock
# 209 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	faceplayer
# 210 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	message gText_HowMayIServeYou
# 211 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	waitmessage
# 212 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	pokemart 0
# 213 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 214 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	release
	end


BattleFrontier_Underground_B1F_EventScript_OldKeyItemClerk::
# 219 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	lock
# 220 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	faceplayer
# 221 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	message gText_HowMayIServeYou
# 222 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	waitmessage
# 223 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	pokemart BattleFrontier_Underground_B1F_Mart_OldKeyItemClerk
# 224 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 225 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	release
	end


BattleFrontier_Underground_B1F_EventScript_NewKeyItemClerk::
# 230 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	lock
# 231 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	faceplayer
# 232 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	message gText_HowMayIServeYou
# 233 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	waitmessage
# 234 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	pokemart BattleFrontier_Underground_B1F_Mart_NewKeyItemClerk
# 235 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 236 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	release
	end


BattleFrontier_Underground_B1F_EventScript_ComingSoonStaff::
# 242 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	lock
# 243 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	faceplayer
# 244 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	msgbox BattleFrontier_Underground_B1F_EventScript_ComingSoonStaff_Text_0
# 245 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	release
	end


	.align 2
# 251 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
BattleFrontier_Underground_B1F_Mart_PokemonShopItemClerk:
# 252 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_FLAME_PLATE
# 253 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SPLASH_PLATE
# 254 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ZAP_PLATE
# 255 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_MEADOW_PLATE
# 256 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ICICLE_PLATE
# 257 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_FIST_PLATE
# 258 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TOXIC_PLATE
# 259 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_EARTH_PLATE
# 260 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SKY_PLATE
# 261 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_MIND_PLATE
# 262 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_INSECT_PLATE
# 263 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_STONE_PLATE
# 264 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SPOOKY_PLATE
# 265 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_DRACO_PLATE
# 266 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_DREAD_PLATE
# 267 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_IRON_PLATE
# 268 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_PIXIE_PLATE
# 269 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_DOUSE_DRIVE
# 270 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SHOCK_DRIVE
# 271 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_BURN_DRIVE
# 272 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_CHILL_DRIVE
# 273 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_FIRE_MEMORY
# 274 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_WATER_MEMORY
# 275 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ELECTRIC_MEMORY
# 276 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_GRASS_MEMORY
# 277 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ICE_MEMORY
# 278 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_FIGHTING_MEMORY
# 279 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_POISON_MEMORY
# 280 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_GROUND_MEMORY
# 281 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_FLYING_MEMORY
# 282 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_PSYCHIC_MEMORY
# 283 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_BUG_MEMORY
# 284 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ROCK_MEMORY
# 285 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_GHOST_MEMORY
# 286 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_DRAGON_MEMORY
# 287 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_DARK_MEMORY
# 288 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_STEEL_MEMORY
# 289 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_FAIRY_MEMORY
# 290 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_RUSTED_SWORD
# 291 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_RUSTED_SHIELD
# 292 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SOUL_DEW
# 293 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ADAMANT_ORB
# 294 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_LUSTROUS_ORB
# 295 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_GRISEOUS_ORB
# 296 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ADAMANT_CRYSTAL
# 297 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_GRISEOUS_CORE
# 298 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_LUSTROUS_GLOBE
# 299 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SCROLL_OF_DARKNESS
# 300 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SCROLL_OF_WATERS
# 301 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_CORNERSTONE_MASK
# 302 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_WELLSPRING_MASK
# 303 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_HEARTHFLAME_MASK
	.2byte ITEM_NONE

	.align 2
# 306 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
BattleFrontier_Underground_B1F_Mart_BerryShopIVTrainingClerk:
# 307 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_DURIN_BERRY
# 308 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_BELUE_BERRY
# 309 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_RAZZ_BERRY
# 310 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_BLUK_BERRY
# 311 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_NANAB_BERRY
# 312 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_WEPEAR_BERRY
# 313 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_PINAP_BERRY
# 314 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_CORNN_BERRY
# 315 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_MAGOST_BERRY
# 316 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_RABUTA_BERRY
# 317 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_NOMEL_BERRY
# 318 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SPELON_BERRY
# 319 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_PAMTRE_BERRY
# 320 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_WATMEL_BERRY
	.2byte ITEM_NONE

	.align 2
# 323 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
BattleFrontier_Underground_B1F_Mart_BerryShopEVTrainingClerk:
# 324 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_HEALTH_MOCHI
# 325 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_MUSCLE_MOCHI
# 326 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_RESIST_MOCHI
# 327 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_GENIUS_MOCHI
# 328 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_CLEVER_MOCHI
# 329 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SWIFT_MOCHI
# 330 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_FRESH_START_MOCHI
# 331 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 332 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 333 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 334 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 335 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_GREPA_BERRY
# 336 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TAMATO_BERRY
	.2byte ITEM_NONE

	.align 2
# 339 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
BattleFrontier_Underground_B1F_Mart_TrainingShopVitaminClerk:
# 340 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_HP_UP
# 341 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_HEALTH_FEATHER
# 342 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_PROTEIN
# 343 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_MUSCLE_FEATHER
# 344 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_IRON
# 345 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_RESIST_FEATHER
# 346 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_CALCIUM
# 347 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_GENIUS_FEATHER
# 348 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ZINC
# 349 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_CLEVER_FEATHER
# 350 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_CARBOS
# 351 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SWIFT_FEATHER
# 352 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_PP_UP
# 353 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_PP_MAX
# 354 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_BOTTLE_CAP
# 355 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 356 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
	.2byte ITEM_NONE

	.align 2
# 359 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
BattleFrontier_Underground_B1F_Mart_TrainingShopMintClerk:
# 360 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_LONELY_MINT
# 361 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ADAMANT_MINT
# 362 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_NAUGHTY_MINT
# 363 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_BRAVE_MINT
# 364 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 365 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 366 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_LAX_MINT
# 367 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_RELAXED_MINT
# 368 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 369 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_MILD_MINT
# 370 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_RASH_MINT
# 371 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_QUIET_MINT
# 372 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_CALM_MINT
# 373 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_GENTLE_MINT
# 374 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
# 375 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SASSY_MINT
# 376 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TIMID_MINT
# 377 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 378 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 379 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_NAIVE_MINT
# 380 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
	.2byte ITEM_NONE

	.align 2
# 383 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
BattleFrontier_Underground_B1F_Mart_TrainingShopOtherClerk:
# 384 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_RARE_CANDY
# 385 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_EXP_CANDY_XS
# 386 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 387 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_EXP_CANDY_M
# 388 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_EXP_CANDY_L
# 389 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_EXP_CANDY_XL
# 390 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_DYNAMAX_CANDY
# 391 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_MACHO_BRACE
# 392 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 393 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_POWER_BRACER
# 394 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_POWER_BELT
# 395 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_POWER_LENS
# 396 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_POWER_BAND
# 397 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_POWER_ANKLET
# 398 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_AMULET_COIN
# 399 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_LUCKY_EGG
	.2byte ITEM_NONE

	.align 2
# 402 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
BattleFrontier_Underground_B1F_Mart_TrainingShopTeraClerk:
# 403 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_BUG_TERA_SHARD
# 404 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_DARK_TERA_SHARD
# 405 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_DRAGON_TERA_SHARD
# 406 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ELECTRIC_TERA_SHARD
# 407 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_FAIRY_TERA_SHARD
# 408 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_FIGHTING_TERA_SHARD
# 409 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_FIRE_TERA_SHARD
# 410 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_FLYING_TERA_SHARD
# 411 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_GHOST_TERA_SHARD
# 412 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_GRASS_TERA_SHARD
# 413 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_GROUND_TERA_SHARD
# 414 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ICE_TERA_SHARD
# 415 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_NORMAL_TERA_SHARD
# 416 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_POISON_TERA_SHARD
# 417 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_PSYCHIC_TERA_SHARD
# 418 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ROCK_TERA_SHARD
# 419 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_STEEL_TERA_SHARD
# 420 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_WATER_TERA_SHARD
	.2byte ITEM_NONE

	.align 2
# 423 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
BattleFrontier_Underground_B1F_Mart_BattleShopMegaClerk:
# 424 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_VENUSAURITE
# 425 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_CHARIZARDITE_X
# 426 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_CHARIZARDITE_Y
# 427 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_BLASTOISINITE
# 428 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_BEEDRILLITE
# 429 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_PIDGEOTITE
# 430 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ALAKAZITE
# 431 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SLOWBRONITE
# 432 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_GENGARITE
# 433 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_KANGASKHANITE
# 434 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_PINSIRITE
# 435 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_GYARADOSITE
# 436 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_AERODACTYLITE
# 437 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_MEWTWONITE_X
# 438 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_MEWTWONITE_Y
# 439 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_AMPHAROSITE
# 440 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_STEELIXITE
# 441 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SCIZORITE
# 442 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_HERACRONITE
# 443 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_HOUNDOOMINITE
# 444 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TYRANITARITE
# 445 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SCEPTILITE
# 446 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_BLAZIKENITE
# 447 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SWAMPERTITE
# 448 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_GARDEVOIRITE
# 449 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SABLENITE
# 450 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_MAWILITE
# 451 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_AGGRONITE
# 452 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_MEDICHAMITE
# 453 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_MANECTITE
# 454 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SHARPEDONITE
# 455 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_CAMERUPTITE
# 456 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ALTARIANITE
# 457 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_BANETTITE
# 458 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ABSOLITE
# 459 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_GLALITITE
# 460 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SALAMENCITE
# 461 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_METAGROSSITE
# 462 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_LATIASITE
# 463 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_LATIOSITE
# 464 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_LOPUNNITE
# 465 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_GARCHOMPITE
# 466 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_LUCARIONITE
# 467 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ABOMASITE
# 468 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_GALLADITE
# 469 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_AUDINITE
# 470 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_DIANCITE
# 471 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_RED_ORB
# 472 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_BLUE_ORB
	.2byte ITEM_NONE

	.align 2
# 475 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
BattleFrontier_Underground_B1F_Mart_BattleShopZCrystalClerk:
# 476 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_NORMALIUM_Z
# 477 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_FIRIUM_Z
# 478 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_WATERIUM_Z
# 479 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ELECTRIUM_Z
# 480 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_GRASSIUM_Z
# 481 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ICIUM_Z
# 482 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_FIGHTINIUM_Z
# 483 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_POISONIUM_Z
# 484 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_GROUNDIUM_Z
# 485 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_FLYINIUM_Z
# 486 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_PSYCHIUM_Z
# 487 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_BUGINIUM_Z
# 488 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ROCKIUM_Z
# 489 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_GHOSTIUM_Z
# 490 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_DRAGONIUM_Z
# 491 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_DARKINIUM_Z
# 492 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_STEELIUM_Z
# 493 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_FAIRIUM_Z
# 494 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_PIKANIUM_Z
# 495 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_EEVIUM_Z
# 496 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SNORLIUM_Z
# 497 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_MEWNIUM_Z
# 498 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_DECIDIUM_Z
# 499 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_INCINIUM_Z
# 500 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_PRIMARIUM_Z
# 501 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_LYCANIUM_Z
# 502 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_MIMIKIUM_Z
# 503 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_KOMMONIUM_Z
# 504 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TAPUNIUM_Z
# 505 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SOLGANIUM_Z
# 506 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_LUNALIUM_Z
# 507 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_MARSHADIUM_Z
# 508 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ALORAICHIUM_Z
# 509 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_PIKASHUNIUM_Z
# 510 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ULTRANECROZIUM_Z
	.2byte ITEM_NONE

	.align 2
# 513 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
BattleFrontier_Underground_B1F_Mart_BattleShopCommonClerk:
# 514 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_CHOICE_BAND
# 515 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_CHOICE_SPECS
# 516 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_CHOICE_SCARF
# 517 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_FLAME_ORB
# 518 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TOXIC_ORB
# 519 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ELECTRIC_SEED
# 520 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_PSYCHIC_SEED
# 521 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_MISTY_SEED
# 522 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_GRASSY_SEED
# 523 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 524 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_LEFTOVERS
# 525 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_EXPERT_BELT
# 526 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_LIGHT_CLAY
# 527 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_LIFE_ORB
# 528 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_POWER_HERB
# 529 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_FOCUS_SASH
# 530 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_LAGGING_TAIL
# 531 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_IRON_BALL
# 532 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SHED_SHELL
# 533 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_EVIOLITE
# 534 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ROCKY_HELMET
# 535 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_AIR_BALLOON
# 536 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_RED_CARD
# 537 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_EJECT_BUTTON
# 538 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_WEAKNESS_POLICY
# 539 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ASSAULT_VEST
# 540 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SAFETY_GOGGLES
# 541 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ADRENALINE_ORB
# 542 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TERRAIN_EXTENDER
# 543 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_PROTECTIVE_PADS
# 544 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_THROAT_SPRAY
# 545 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_EJECT_PACK
# 546 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_HEAVY_DUTY_BOOTS
# 547 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_BLUNDER_POLICY
# 548 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ROOM_SERVICE
# 549 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_UTILITY_UMBRELLA
# 550 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ABILITY_SHIELD
# 551 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_CLEAR_AMULET
# 552 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_PUNCHING_GLOVE
# 553 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_COVERT_CLOAK
# 554 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_LOADED_DICE
# 555 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_BOOSTER_ENERGY
# 556 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_MIRROR_HERB
	.2byte ITEM_NONE

	.align 2
# 559 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
BattleFrontier_Underground_B1F_Mart_BattleShopUncommonClerk:
# 560 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_DAMP_ROCK
# 561 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_HEAT_ROCK
# 562 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SMOOTH_ROCK
# 563 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ICY_ROCK
# 564 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ABSORB_BULB
# 565 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_CELL_BATTERY
# 566 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_LUMINOUS_MOSS
# 567 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SNOWBALL
# 568 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_BRIGHT_POWDER
# 569 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_WHITE_HERB
# 570 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_QUICK_CLAW
# 571 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SOOTHE_BELL
# 572 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_AMULET_COIN
# 573 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_CLEANSE_TAG
# 574 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SMOKE_BALL
# 575 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_FOCUS_BAND
# 576 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_LUCKY_EGG
# 577 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SCOPE_LENS
# 578 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SHELL_BELL
# 579 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_WIDE_LENS
# 580 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_MUSCLE_BAND
# 581 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_WISE_GLASSES
# 582 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_BLACK_SLUDGE
# 583 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_GRIP_CLAW
# 584 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_STICKY_BARB
# 585 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_BIG_ROOT
# 586 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_FLOAT_STONE
# 587 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_RING_TARGET
# 588 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_DESTINY_KNOT
# 589 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_BINDING_BAND
# 590 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ZOOM_LENS
# 591 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_METRONOME
# 592 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_LIGHT_BALL
# 593 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_LEEK
# 594 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_THICK_CLUB
# 595 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_LUCKY_PUNCH
# 596 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_BERSERK_GENE
# 597 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_METAL_POWDER
# 598 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_QUICK_POWDER
# 599 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SEA_INCENSE
# 600 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_LAX_INCENSE
# 601 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ODD_INCENSE
# 602 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ROCK_INCENSE
# 603 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_FULL_INCENSE
# 604 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_WAVE_INCENSE
# 605 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ROSE_INCENSE
# 606 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_LUCK_INCENSE
# 607 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_PURE_INCENSE
	.2byte ITEM_NONE

	.align 2
# 610 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
BattleFrontier_Underground_B1F_Mart_BattleShopTypeItemClerk:
# 611 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SILK_SCARF
# 612 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_CHARCOAL
# 613 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 614 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_MAGNET
# 615 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
# 616 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 617 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_BLACK_BELT
# 618 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_POISON_BARB
# 619 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SOFT_SAND
# 620 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SHARP_BEAK
# 621 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TWISTED_SPOON
# 622 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SILVER_POWDER
# 623 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_HARD_STONE
# 624 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SPELL_TAG
# 625 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_DRAGON_FANG
# 626 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_BLACK_GLASSES
# 627 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_METAL_COAT
# 628 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_FAIRY_FEATHER
	.2byte ITEM_NONE

	.align 2
# 631 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
BattleFrontier_Underground_B1F_Mart_BattleShopGemstoneClerk:
# 632 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_NORMAL_GEM
# 633 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_FIRE_GEM
# 634 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_WATER_GEM
# 635 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ELECTRIC_GEM
# 636 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_GRASS_GEM
# 637 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ICE_GEM
# 638 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_FIGHTING_GEM
# 639 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_POISON_GEM
# 640 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_GROUND_GEM
# 641 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_FLYING_GEM
# 642 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_PSYCHIC_GEM
# 643 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_BUG_GEM
# 644 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ROCK_GEM
# 645 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_GHOST_GEM
# 646 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_DRAGON_GEM
# 647 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_DARK_GEM
# 648 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_STEEL_GEM
# 649 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_FAIRY_GEM
	.2byte ITEM_NONE

	.align 2
# 652 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
BattleFrontier_Underground_B1F_Mart_BattleShopBerryClerk:
# 653 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 654 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 655 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 656 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 657 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 658 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 659 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 660 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_PERSIM_BERRY
# 661 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_LUM_BERRY
# 662 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 663 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_FIGY_BERRY
# 664 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_WIKI_BERRY
# 665 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_MAGO_BERRY
# 666 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_AGUAV_BERRY
# 667 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_IAPAPA_BERRY
# 668 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_LIECHI_BERRY
# 669 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_GANLON_BERRY
# 670 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SALAC_BERRY
# 671 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_PETAYA_BERRY
# 672 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_APICOT_BERRY
# 673 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_LANSAT_BERRY
# 674 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_STARF_BERRY
# 675 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ENIGMA_BERRY
# 676 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_MICLE_BERRY
# 677 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_CUSTAP_BERRY
# 678 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_JABOCA_BERRY
# 679 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ROWAP_BERRY
# 680 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_KEE_BERRY
# 681 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_MARANGA_BERRY
	.2byte ITEM_NONE

	.align 2
# 684 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
BattleFrontier_Underground_B1F_Mart_BattleShopResistClerk:
# 685 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_CHILAN_BERRY
# 686 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_OCCA_BERRY
# 687 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_PASSHO_BERRY
# 688 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_WACAN_BERRY
# 689 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_RINDO_BERRY
# 690 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_YACHE_BERRY
# 691 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_CHOPLE_BERRY
# 692 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_KEBIA_BERRY
# 693 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SHUCA_BERRY
# 694 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_COBA_BERRY
# 695 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_PAYAPA_BERRY
# 696 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TANGA_BERRY
# 697 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_CHARTI_BERRY
# 698 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_KASIB_BERRY
# 699 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_HABAN_BERRY
# 700 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_COLBUR_BERRY
# 701 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_BABIRI_BERRY
# 702 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ROSELI_BERRY
	.2byte ITEM_NONE

	.align 2
# 705 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
BattleFrontier_Underground_B1F_Mart_TMHMClerk1:
# 706 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM01
# 707 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM02
# 708 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM03
# 709 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM04
# 710 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM05
# 711 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM06
# 712 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM07
# 713 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM08
# 714 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM09
# 715 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM10
# 716 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM11
# 717 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM12
# 718 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM13
# 719 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM14
# 720 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM15
# 721 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM16
# 722 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM17
# 723 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM18
# 724 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM19
# 725 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM20
# 726 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM21
# 727 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM22
# 728 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM23
# 729 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM24
# 730 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM25
# 731 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_HM01
# 732 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_HM02
# 733 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_HM03
# 734 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_HM04
	.2byte ITEM_NONE

	.align 2
# 736 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
BattleFrontier_Underground_B1F_Mart_TMHMClerk2:
# 737 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM26
# 738 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM27
# 739 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM28
# 740 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM29
# 741 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM30
# 742 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM31
# 743 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM32
# 744 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM33
# 745 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM34
# 746 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM35
# 747 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM36
# 748 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM37
# 749 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM38
# 750 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM39
# 751 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM40
# 752 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM41
# 753 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM42
# 754 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM43
# 755 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM44
# 756 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM45
# 757 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM46
# 758 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM47
# 759 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM48
# 760 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM49
# 761 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TM50
# 762 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_HM05
# 763 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_HM06
# 764 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_HM07
# 765 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_HM08
	.2byte ITEM_NONE

	.align 2
# 768 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
BattleFrontier_Underground_B1F_Mart_OldKeyItemClerk:
# 769 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_EXP_SHARE
# 770 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ACRO_BIKE
# 771 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SOOT_SACK
# 772 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_OLD_ROD
# 773 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_GOOD_ROD
# 774 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SUPER_ROD
# 775 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_POWDER_JAR
# 776 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_WAILMER_PAIL
# 777 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_POKEBLOCK_CASE
# 778 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_DOWSING_MACHINE
# 780 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SS_TICKET
# 781 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_EON_TICKET
# 782 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_MYSTIC_TICKET
# 783 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_AURORA_TICKET
# 784 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_OLD_SEA_MAP
# 785 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_GO_GOGGLES
# 786 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_DEVON_SCOPE
# 787 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_METEORITE
	.2byte ITEM_NONE

	.align 2
# 790 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
BattleFrontier_Underground_B1F_Mart_NewKeyItemClerk:
# 791 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_MEGA_RING
# 792 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_Z_POWER_RING
# 793 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_DYNAMAX_BAND
# 794 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TERA_ORB
# 795 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ROTOM_CATALOG
# 796 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_GRACIDEA
# 797 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_REVEAL_GLASS
# 798 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_DNA_SPLICERS
# 799 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ZYGARDE_CUBE
# 800 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_PRISON_BOTTLE
# 801 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_N_SOLARIZER
# 802 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_N_LUNARIZER
# 803 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_REINS_OF_UNITY
	.2byte ITEM_NONE

	.align 2
# 806 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
BattleFrontier_Underground_B1F_Mart_PokeballClerk:
# 807 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_POKE_BALL
# 808 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 809 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 810 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_MASTER_BALL
# 811 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_PREMIER_BALL
# 812 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_HEAL_BALL
# 813 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_NET_BALL
# 814 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_NEST_BALL
# 815 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 816 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_DUSK_BALL
# 817 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_TIMER_BALL
# 818 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 819 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 820 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_LUXURY_BALL
# 821 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_LEVEL_BALL
# 822 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_LURE_BALL
# 823 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_MOON_BALL
# 824 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_FRIEND_BALL
# 825 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_LOVE_BALL
# 826 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_FAST_BALL
# 827 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_HEAVY_BALL
# 828 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_DREAM_BALL
# 829 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SAFARI_BALL
# 830 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_SPORT_BALL
# 831 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.2byte ITEM_PARK_BALL
# 832 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
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
# 244 "data/maps/BattleFrontier_Underground_B1F/scripts.pory"
	.string "This area isn't available right now,\n"
	.string "sorry! Please come back soon!$"
