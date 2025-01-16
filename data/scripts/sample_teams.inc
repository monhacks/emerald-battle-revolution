Common_EventScript_Sample_Team_Shop::
# 2 "data/scripts/sample_teams.pory"
	lock
# 3 "data/scripts/sample_teams.pory"
	faceplayer
# 4 "data/scripts/sample_teams.pory"
	msgbox Common_EventScript_Sample_Team_Shop_Text_0
# 5 "data/scripts/sample_teams.pory"
	msgbox Common_EventScript_Sample_Team_Shop_Text_1
# 6 "data/scripts/sample_teams.pory"
	msgbox Common_EventScript_Sample_Team_Shop_Text_2
# 7 "data/scripts/sample_teams.pory"
	goto Common_EventScript_Sample_Team_CheckMoney
	return


Common_EventScript_Sample_Team_CheckMoney::
# 11 "data/scripts/sample_teams.pory"
	showmoneybox 18, 0
# 12 "data/scripts/sample_teams.pory"
	checkmoney 50000
# 13 "data/scripts/sample_teams.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Common_EventScript_Sample_Team_CheckMoney_1
# 19 "data/scripts/sample_teams.pory"
	msgbox Common_EventScript_Sample_Team_CheckMoney_Text_1
# 20 "data/scripts/sample_teams.pory"
	goto Auto_EventScript_Sample_Teams_End
	return

Common_EventScript_Sample_Team_CheckMoney_1:
# 14 "data/scripts/sample_teams.pory"
	msgbox Common_EventScript_Sample_Team_CheckMoney_Text_0
# 15 "data/scripts/sample_teams.pory"
	goto Auto_EventScript_Sample_Teams_Controls
	return


Common_EventScript_Sample_Team_CheckPurchase::
# 25 "data/scripts/sample_teams.pory"
	msgbox Common_EventScript_Sample_Team_CheckPurchase_Text_0
# 26 "data/scripts/sample_teams.pory"
	switch VAR_RESULT
# 27 "data/scripts/sample_teams.pory"
	case MON_GIVEN_TO_PARTY, Common_EventScript_Sample_Team_CheckPurchase_3
# 32 "data/scripts/sample_teams.pory"
	case MON_GIVEN_TO_PC, Common_EventScript_Sample_Team_CheckPurchase_4
# 37 "data/scripts/sample_teams.pory"
	case MON_CANT_GIVE, Common_EventScript_Sample_Team_CheckPurchase_5
Common_EventScript_Sample_Team_CheckPurchase_1:
# 43 "data/scripts/sample_teams.pory"
	msgbox Common_EventScript_Sample_Team_CheckPurchase_Text_6
# 44 "data/scripts/sample_teams.pory"
	removemoney 50000
# 45 "data/scripts/sample_teams.pory"
	updatemoneybox
# 46 "data/scripts/sample_teams.pory"
	playse SE_SHOP
# 47 "data/scripts/sample_teams.pory"
	waitse
# 48 "data/scripts/sample_teams.pory"
	msgbox Common_EventScript_Sample_Team_CheckPurchase_Text_7
# 49 "data/scripts/sample_teams.pory"
	msgbox Common_EventScript_Sample_Team_CheckPurchase_Text_8
# 50 "data/scripts/sample_teams.pory"
	yesnobox 0, 8
# 51 "data/scripts/sample_teams.pory"
	compare VAR_RESULT, YES
	goto_if_eq Common_EventScript_Sample_Team_CheckPurchase_7
Common_EventScript_Sample_Team_CheckPurchase_6:
# 54 "data/scripts/sample_teams.pory"
	goto Auto_EventScript_Sample_Teams_End
	return

Common_EventScript_Sample_Team_CheckPurchase_3:
# 28 "data/scripts/sample_teams.pory"
	playse SE_SUCCESS
# 29 "data/scripts/sample_teams.pory"
	msgbox Common_EventScript_Sample_Team_CheckPurchase_Text_1
# 30 "data/scripts/sample_teams.pory"
	msgbox Common_EventScript_Sample_Team_CheckPurchase_Text_2
# 31 "data/scripts/sample_teams.pory"
	waitse
	goto Common_EventScript_Sample_Team_CheckPurchase_1

Common_EventScript_Sample_Team_CheckPurchase_4:
# 33 "data/scripts/sample_teams.pory"
	playse SE_SUCCESS
# 34 "data/scripts/sample_teams.pory"
	msgbox Common_EventScript_Sample_Team_CheckPurchase_Text_3
# 35 "data/scripts/sample_teams.pory"
	msgbox Common_EventScript_Sample_Team_CheckPurchase_Text_4
# 36 "data/scripts/sample_teams.pory"
	waitse
	goto Common_EventScript_Sample_Team_CheckPurchase_1

Common_EventScript_Sample_Team_CheckPurchase_5:
# 38 "data/scripts/sample_teams.pory"
	playse SE_FAILURE
# 39 "data/scripts/sample_teams.pory"
	msgbox Common_EventScript_Sample_Team_CheckPurchase_Text_5
# 40 "data/scripts/sample_teams.pory"
	waitse
# 41 "data/scripts/sample_teams.pory"
	goto Auto_EventScript_Sample_Teams_End
	goto Common_EventScript_Sample_Team_CheckPurchase_1

Common_EventScript_Sample_Team_CheckPurchase_7:
# 52 "data/scripts/sample_teams.pory"
	goto Common_EventScript_Sample_Team_CheckMoney
	goto Common_EventScript_Sample_Team_CheckPurchase_6


Auto_EventScript_Sample_Teams_End::
# 58 "data/scripts/sample_teams.pory"
	msgbox Auto_EventScript_Sample_Teams_End_Text_0
# 59 "data/scripts/sample_teams.pory"
	hidemoneybox
# 60 "data/scripts/sample_teams.pory"
	releaseall
	end


Common_EventScript_Sample_Team_Shop_Text_0:
# 4 "data/scripts/sample_teams.pory"
	.string "Hello and welcome to the Battle Team\n"
	.string "Shop!$"

Common_EventScript_Sample_Team_Shop_Text_1:
# 5 "data/scripts/sample_teams.pory"
	.string "You can buy pre-made teams with three\n"
	.string "to four POKéMON here!$"

Common_EventScript_Sample_Team_Shop_Text_2:
# 6 "data/scripts/sample_teams.pory"
	.string "For now, our selection is limited to\n"
	.string "DOUBLE BATTLE teams only.$"

Common_EventScript_Sample_Team_CheckMoney_Text_0:
# 14 "data/scripts/sample_teams.pory"
	.string "All teams cost a mere ¥50000. What\n"
	.string "would you like?$"

Common_EventScript_Sample_Team_CheckMoney_Text_1:
# 19 "data/scripts/sample_teams.pory"
	.string "Oh, sorry! You need at least ¥50000 to\n"
	.string "buy anything here!$"

Common_EventScript_Sample_Team_CheckPurchase_Text_0:
# 25 "data/scripts/sample_teams.pory"
	.string "Sure! Let's see if I can handle that for\n"
	.string "you ...$"

Common_EventScript_Sample_Team_CheckPurchase_Text_1:
# 29 "data/scripts/sample_teams.pory"
	.string "Here you go!$"

Common_EventScript_Sample_Team_CheckPurchase_Text_2:
# 30 "data/scripts/sample_teams.pory"
	.string "The POKéMON have been added to your\n"
	.string "party.$"

Common_EventScript_Sample_Team_CheckPurchase_Text_3:
# 34 "data/scripts/sample_teams.pory"
	.string "All done!$"

Common_EventScript_Sample_Team_CheckPurchase_Text_4:
# 35 "data/scripts/sample_teams.pory"
	.string "The POKéMON have been sent to your PC\n"
	.string "boxes.$"

Common_EventScript_Sample_Team_CheckPurchase_Text_5:
# 39 "data/scripts/sample_teams.pory"
	.string "It looks like I can't give you any more\n"
	.string "POKéMON right now - Sorry!$"

Common_EventScript_Sample_Team_CheckPurchase_Text_6:
# 43 "data/scripts/sample_teams.pory"
	.string "I'll take your payment now, please.$"

Common_EventScript_Sample_Team_CheckPurchase_Text_7:
# 48 "data/scripts/sample_teams.pory"
	.string "Thanks for your business!$"

Common_EventScript_Sample_Team_CheckPurchase_Text_8:
# 49 "data/scripts/sample_teams.pory"
	.string "Can we help you with anything else?$"

Auto_EventScript_Sample_Teams_End_Text_0:
# 58 "data/scripts/sample_teams.pory"
	.string "Come back again soon!$"
