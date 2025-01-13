# 1 "data/maps/BattleFrontier_Underground_B2F_GameCorner/scripts.pory"

# 2 "data/maps/BattleFrontier_Underground_B2F_GameCorner/scripts.pory"
BattleFrontier_Underground_B2F_GameCorner_MapScripts::
# 3 "data/maps/BattleFrontier_Underground_B2F_GameCorner/scripts.pory"
	.byte 0

BattleFrontier_Underground_B2F_GameCorner_EventScript_PokefanM::
# 7 "data/maps/BattleFrontier_Underground_B2F_GameCorner/scripts.pory"
	lock
# 8 "data/maps/BattleFrontier_Underground_B2F_GameCorner/scripts.pory"
	faceplayer
# 9 "data/maps/BattleFrontier_Underground_B2F_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 10 "data/maps/BattleFrontier_Underground_B2F_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_GameCorner_EventScript_TryGive20Coins
# 11 "data/maps/BattleFrontier_Underground_B2F_GameCorner/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_GameCorner_EventScript_PokefanM_Text_0
# 12 "data/maps/BattleFrontier_Underground_B2F_GameCorner/scripts.pory"
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
	end


BattleFrontier_Underground_B2F_GameCorner_EventScript_PokefanM_Text_0:
# 11 "data/maps/BattleFrontier_Underground_B2F_GameCorner/scripts.pory"
	.string "Hey kid, if you want to play here, you\n"
	.string "need a COIN CASE. You can get one from\l"
	.string "the greeter outside!$"
