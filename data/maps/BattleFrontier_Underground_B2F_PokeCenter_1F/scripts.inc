# 1 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"

# 2 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 3 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"

# 4 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
BattleFrontier_Underground_B2F_PokeCenter_1F_MapScripts::
# 5 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_Underground_B2F_PokeCenter_1F_OnTransition
# 6 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	.byte 0
# 8 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"

# 9 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
BattleFrontier_Underground_B2F_PokeCenter_1F_OnTransition:
# 10 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_BATTLE_FRONTIER_UNDERGROUND
# 11 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	end
# 12 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"

# 13 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_Nurse::
# 14 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 15 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 16 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	waitmessage
# 17 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	waitbuttonpress
# 18 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	release
# 19 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	end

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_Gentleman::
# 23 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	lock
# 24 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	faceplayer
# 25 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_Gentleman_Text_0
# 26 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	goto BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanCheckBattlePoints
	return


BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanCheckBattlePoints::
# 30 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 31 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	compare VAR_TEMP_1, 50
	goto_if_ge BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanCheckBattlePoints_2
BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanCheckBattlePoints_1:
# 34 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanCheckBattlePoints_Text_0
# 35 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	goto BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanEnd
	return

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanCheckBattlePoints_2:
# 32 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	goto BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanCheckSelection
	goto BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanCheckBattlePoints_1


BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanCheckSelection::
# 39 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanCheckSelection_Text_0
# 40 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	special ShowBattlePointsWindow
# 41 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	multichoice2 18, 0, BattleFrontier_Underground_B2F_PokeCenter_1F_Text_Gentleman
# 42 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	switch VAR_RESULT
# 43 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	case 0, BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanCheckSelection_3
# 45 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	case 1, BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanCheckSelection_4
# 48 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	special CloseBattlePointsWindow
# 49 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	goto BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanEnd
BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanCheckSelection_1:
# 51 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	setvar VAR_0x8004, 50
# 52 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanCheckSelection_Text_1
# 53 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	special TakeFrontierBattlePoints
# 54 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	playse SE_SHOP
# 55 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	special UpdateBattlePointsWindow
# 56 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	waitse
# 57 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	special CloseBattlePointsWindow
# 58 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanCheckSelection_Text_2
# 59 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanCheckSelection_Text_3
# 60 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	yesnobox 0, 8
# 61 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanCheckSelection_7
BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanCheckSelection_6:
# 64 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	goto BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanEnd
	return

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanCheckSelection_3:
# 44 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	giveitem ITEM_CHERISH_BALL
	goto BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanCheckSelection_1

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanCheckSelection_4:
# 46 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	giveitem ITEM_GOLD_BOTTLE_CAP
	goto BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanCheckSelection_1

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanCheckSelection_7:
# 62 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	goto BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanCheckBattlePoints
	goto BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanCheckSelection_6


BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanEnd::
# 68 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanEnd_Text_0
# 69 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	release
	end


BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpert::
# 74 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	lock
# 75 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	faceplayer
# 76 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpert_Text_0
# 77 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpert_Text_1
# 78 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	goto BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertCheckMoney
	return


BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertCheckMoney::
# 82 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	showmoneybox 0, 0
# 83 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	checkmoney 500
# 84 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertCheckMoney_2
BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertCheckMoney_1:
# 87 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	goto BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertCantAfford
	return

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertCheckMoney_2:
# 85 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	goto BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon
	goto BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertCheckMoney_1


BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon::
# 91 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon_Text_0
# 92 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	special ChooseMonForMoveRelearner
# 93 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	waitstate
# 96 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	showmoneybox 0, 0
# 99 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon_2
BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon_1:
# 104 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	special IsSelectedMonEgg
# 107 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon_5
BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon_4:
# 112 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	hasgigantamaxfactor VAR_0x8004
# 114 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon_8
# 118 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon_Text_2
BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon_7:
# 120 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	yesnobox 0, 8
# 121 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon_12
# 139 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	hidemoneybox
# 140 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	goto BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertEnd
BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon_11:
# 142 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	hidemoneybox
# 143 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	goto BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertAsk
	return

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon_2:
# 100 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	goto BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertEnd
	goto BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon_1

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon_5:
# 108 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	goto BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertCantTeachEgg
	goto BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon_4

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon_8:
# 115 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon_Text_1
	goto BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon_7

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon_12:
# 124 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	togglegigantamaxfactor VAR_0x8004
# 126 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon_15
# 136 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon_Text_5
	goto BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon_11

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon_15:
# 127 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon_Text_3
# 128 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon_Text_4
# 129 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	removemoney 500
# 130 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	playse SE_SHOP
# 131 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	updatemoneybox
# 132 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	waitse
	goto BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon_11


BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertAsk::
# 147 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertAsk_Text_0
# 148 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	yesnobox 0, 8
# 149 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertAsk_1
# 152 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	goto BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertEnd
	return

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertAsk_1:
# 150 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	goto BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertCheckMoney
	return


BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertCantAfford::
# 157 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertCantAfford_Text_0
# 158 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_MoveTutorEnd
	return


BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertCantTeachEgg::
# 162 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertCantTeachEgg_Text_0
# 163 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	goto BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertEnd
	return


BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertEnd::
# 167 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	msgbox BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertEnd_Text_0
# 168 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	release
	end


BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_Gentleman_Text_0:
# 25 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	.string "Good to see you. I offer rare items in\n"
	.string "exchange for battle points.$"

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanCheckBattlePoints_Text_0:
# 34 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	.string "You'll need at least 50 BP before you\n"
	.string "can buy anything from me.$"

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanCheckSelection_Text_0:
# 39 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	.string "What would you like? All of my items\n"
	.string "cost 50 BP.$"

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanCheckSelection_Text_1:
# 52 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	.string "I'll take your payment now, please.$"

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanCheckSelection_Text_2:
# 58 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	.string "Thank you for that.$"

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanCheckSelection_Text_3:
# 59 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	.string "Would you like anything else?$"

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GentlemanEnd_Text_0:
# 68 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	.string "Please come see me again.$"

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpert_Text_0:
# 76 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	.string "Hello, I'm the Gigantamax Expert! I can\n"
	.string "change the gigantamax factor of your\l"
	.string "POKéMON.$"

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpert_Text_1:
# 77 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	.string "My services cost a mere ¥500 per\n"
	.string "POKéMON.$"

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon_Text_0:
# 91 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	.string "Which POKéMON would you like me to\n"
	.string "change?$"

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon_Text_1:
# 115 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	.string "Would you like me to remove the\n"
	.string "Gigantamax factor from this POKéMON?$"

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon_Text_2:
# 118 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	.string "Would you like me to add the Gigantamax\n"
	.string "factor to this POKéMON?$"

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon_Text_3:
# 127 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	.string "Done! Your POKéMON's gigantamax factor\n"
	.string "has been changed.$"

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon_Text_4:
# 128 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	.string "I'll accept your payment now, please.$"

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertSelectMon_Text_5:
# 136 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	.string "Sorry, I was unable to change the\n"
	.string "gigantamax factor of this POKéMON!$"

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertAsk_Text_0:
# 147 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	.string "Would you like me to teach anything\n"
	.string "else?$"

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertCantAfford_Text_0:
# 157 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	.string "Sorry, you need ¥500 for me to change\n"
	.string "your POKéMON's gigantamax state!$"

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertCantTeachEgg_Text_0:
# 162 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	.string "I can't change the gigantamax status\n"
	.string "of an egg!$"

BattleFrontier_Underground_B2F_PokeCenter_1F_EventScript_GigantamaxExpertEnd_Text_0:
# 167 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	.string "Please come back again soon!$"

BattleFrontier_Underground_B2F_PokeCenter_1F_Text_Gentleman::
# 172 "data/maps/BattleFrontier_Underground_B2F_PokeCenter_1F/scripts.pory"
	.string "CHERISH BALL$"
	.string "GOLD BOTTLE CAP$"
	.string "NOTHING$"
	.string "$"
