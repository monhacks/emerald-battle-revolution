Common_EventScript_Sample_Sets_Shop::
# 2 "data/scripts/sample_sets.pory"
	lock
# 3 "data/scripts/sample_sets.pory"
	faceplayer
# 4 "data/scripts/sample_sets.pory"
	msgbox Common_EventScript_Sample_Sets_Shop_Text_0
# 5 "data/scripts/sample_sets.pory"
	msgbox Common_EventScript_Sample_Sets_Shop_Text_1
# 6 "data/scripts/sample_sets.pory"
	msgbox Common_EventScript_Sample_Sets_Shop_Text_2
# 7 "data/scripts/sample_sets.pory"
	goto Common_EventScript_Sample_Sets_CheckMoney
	return


Common_EventScript_Sample_Sets_CheckMoney::
# 11 "data/scripts/sample_sets.pory"
	showmoneybox 18, 0
# 12 "data/scripts/sample_sets.pory"
	checkmoney 20000
# 13 "data/scripts/sample_sets.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Common_EventScript_Sample_Sets_CheckMoney_1
# 19 "data/scripts/sample_sets.pory"
	msgbox Common_EventScript_Sample_Sets_CheckMoney_Text_1
# 20 "data/scripts/sample_sets.pory"
	goto Auto_EventScript_Sample_Sets_End
	return

Common_EventScript_Sample_Sets_CheckMoney_1:
# 14 "data/scripts/sample_sets.pory"
	msgbox Common_EventScript_Sample_Sets_CheckMoney_Text_0
# 15 "data/scripts/sample_sets.pory"
	goto Auto_EventScript_Sample_Sets_Controls
	return


Common_EventScript_Sample_Sets_CheckPurchase::
# 25 "data/scripts/sample_sets.pory"
	msgbox Common_EventScript_Sample_Sets_CheckPurchase_Text_0
# 26 "data/scripts/sample_sets.pory"
	switch VAR_RESULT
# 27 "data/scripts/sample_sets.pory"
	case MON_GIVEN_TO_PARTY, Common_EventScript_Sample_Sets_CheckPurchase_3
# 32 "data/scripts/sample_sets.pory"
	case MON_GIVEN_TO_PC, Common_EventScript_Sample_Sets_CheckPurchase_4
# 37 "data/scripts/sample_sets.pory"
	case MON_CANT_GIVE, Common_EventScript_Sample_Sets_CheckPurchase_5
Common_EventScript_Sample_Sets_CheckPurchase_1:
# 43 "data/scripts/sample_sets.pory"
	msgbox Common_EventScript_Sample_Sets_CheckPurchase_Text_6
# 44 "data/scripts/sample_sets.pory"
	removemoney 20000
# 45 "data/scripts/sample_sets.pory"
	updatemoneybox
# 46 "data/scripts/sample_sets.pory"
	playse SE_SHOP
# 47 "data/scripts/sample_sets.pory"
	waitse
# 48 "data/scripts/sample_sets.pory"
	msgbox Common_EventScript_Sample_Sets_CheckPurchase_Text_7
# 49 "data/scripts/sample_sets.pory"
	msgbox Common_EventScript_Sample_Sets_CheckPurchase_Text_8
# 50 "data/scripts/sample_sets.pory"
	yesnobox 0, 8
# 51 "data/scripts/sample_sets.pory"
	compare VAR_RESULT, YES
	goto_if_eq Common_EventScript_Sample_Sets_CheckPurchase_7
Common_EventScript_Sample_Sets_CheckPurchase_6:
# 54 "data/scripts/sample_sets.pory"
	goto Auto_EventScript_Sample_Sets_End
	return

Common_EventScript_Sample_Sets_CheckPurchase_3:
# 28 "data/scripts/sample_sets.pory"
	playse SE_SUCCESS
# 29 "data/scripts/sample_sets.pory"
	msgbox Common_EventScript_Sample_Sets_CheckPurchase_Text_1
# 30 "data/scripts/sample_sets.pory"
	msgbox Common_EventScript_Sample_Sets_CheckPurchase_Text_2
# 31 "data/scripts/sample_sets.pory"
	waitse
	goto Common_EventScript_Sample_Sets_CheckPurchase_1

Common_EventScript_Sample_Sets_CheckPurchase_4:
# 33 "data/scripts/sample_sets.pory"
	playse SE_SUCCESS
# 34 "data/scripts/sample_sets.pory"
	msgbox Common_EventScript_Sample_Sets_CheckPurchase_Text_3
# 35 "data/scripts/sample_sets.pory"
	msgbox Common_EventScript_Sample_Sets_CheckPurchase_Text_4
# 36 "data/scripts/sample_sets.pory"
	waitse
	goto Common_EventScript_Sample_Sets_CheckPurchase_1

Common_EventScript_Sample_Sets_CheckPurchase_5:
# 38 "data/scripts/sample_sets.pory"
	playse SE_FAILURE
# 39 "data/scripts/sample_sets.pory"
	msgbox Common_EventScript_Sample_Sets_CheckPurchase_Text_5
# 40 "data/scripts/sample_sets.pory"
	waitse
# 41 "data/scripts/sample_sets.pory"
	goto Auto_EventScript_Sample_Sets_End
	goto Common_EventScript_Sample_Sets_CheckPurchase_1

Common_EventScript_Sample_Sets_CheckPurchase_7:
# 52 "data/scripts/sample_sets.pory"
	goto Common_EventScript_Sample_Sets_CheckMoney
	goto Common_EventScript_Sample_Sets_CheckPurchase_6


Auto_EventScript_Sample_Sets_End::
# 58 "data/scripts/sample_sets.pory"
	msgbox Auto_EventScript_Sample_Sets_End_Text_0
# 59 "data/scripts/sample_sets.pory"
	hidemoneybox
# 60 "data/scripts/sample_sets.pory"
	releaseall
	end


Common_EventScript_Sample_Sets_Shop_Text_0:
# 4 "data/scripts/sample_sets.pory"
	.string "Hello and welcome to the Battle POKéMON\n"
	.string "Shop!$"

Common_EventScript_Sample_Sets_Shop_Text_1:
# 5 "data/scripts/sample_sets.pory"
	.string "You can get many pre-trained POKéMON\n"
	.string "here.$"

Common_EventScript_Sample_Sets_Shop_Text_2:
# 6 "data/scripts/sample_sets.pory"
	.string "You select the POKéMON you want first,\n"
	.string "and then the EVs.$"

Common_EventScript_Sample_Sets_CheckMoney_Text_0:
# 14 "data/scripts/sample_sets.pory"
	.string "All POKéMON here cost a mere ¥20000.\n"
	.string "What would you like?$"

Common_EventScript_Sample_Sets_CheckMoney_Text_1:
# 19 "data/scripts/sample_sets.pory"
	.string "Oh, sorry! You need at least ¥20000 to\n"
	.string "buy anything here!$"

Common_EventScript_Sample_Sets_CheckPurchase_Text_0:
# 25 "data/scripts/sample_sets.pory"
	.string "Sure! Let's see if I can handle that for\n"
	.string "you ...$"

Common_EventScript_Sample_Sets_CheckPurchase_Text_1:
# 29 "data/scripts/sample_sets.pory"
	.string "Here you go!$"

Common_EventScript_Sample_Sets_CheckPurchase_Text_2:
# 30 "data/scripts/sample_sets.pory"
	.string "The POKéMON have been added to your\n"
	.string "party.$"

Common_EventScript_Sample_Sets_CheckPurchase_Text_3:
# 34 "data/scripts/sample_sets.pory"
	.string "All done!$"

Common_EventScript_Sample_Sets_CheckPurchase_Text_4:
# 35 "data/scripts/sample_sets.pory"
	.string "The POKéMON have been sent to your PC\n"
	.string "boxes.$"

Common_EventScript_Sample_Sets_CheckPurchase_Text_5:
# 39 "data/scripts/sample_sets.pory"
	.string "It looks like I can't give you any more\n"
	.string "POKéMON right now - Sorry!$"

Common_EventScript_Sample_Sets_CheckPurchase_Text_6:
# 43 "data/scripts/sample_sets.pory"
	.string "I'll take your payment now, please.$"

Common_EventScript_Sample_Sets_CheckPurchase_Text_7:
# 48 "data/scripts/sample_sets.pory"
	.string "Thanks for your business!$"

Common_EventScript_Sample_Sets_CheckPurchase_Text_8:
# 49 "data/scripts/sample_sets.pory"
	.string "Can we help you with anything else?$"

Auto_EventScript_Sample_Sets_End_Text_0:
# 58 "data/scripts/sample_sets.pory"
	.string "Come back again soon!$"
