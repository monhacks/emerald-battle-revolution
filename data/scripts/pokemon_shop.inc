Common_EventScript_Pokemon_Shop::
# 2 "data/scripts/pokemon_shop.pory"
	lock
# 3 "data/scripts/pokemon_shop.pory"
	faceplayer
# 4 "data/scripts/pokemon_shop.pory"
	msgbox Common_EventScript_Pokemon_Shop_Text_0
# 5 "data/scripts/pokemon_shop.pory"
	goto Common_EventScript_Pokemon_Shop_CheckMoney
	return


Common_EventScript_Pokemon_Shop_CheckMoney::
# 9 "data/scripts/pokemon_shop.pory"
	showmoneybox 18, 0
# 10 "data/scripts/pokemon_shop.pory"
	checkmoney 4000
# 11 "data/scripts/pokemon_shop.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Common_EventScript_Pokemon_Shop_CheckMoney_1
# 17 "data/scripts/pokemon_shop.pory"
	msgbox Common_EventScript_Pokemon_Shop_CheckMoney_Text_1
# 18 "data/scripts/pokemon_shop.pory"
	goto Auto_EventScript_Pokemon_Shop_End
	return

Common_EventScript_Pokemon_Shop_CheckMoney_1:
# 12 "data/scripts/pokemon_shop.pory"
	msgbox Common_EventScript_Pokemon_Shop_CheckMoney_Text_0
# 13 "data/scripts/pokemon_shop.pory"
	goto Common_EventScript_Pokemon_Shop_CheckGoldBottleCap
	return


Common_EventScript_Pokemon_Shop_CheckGoldBottleCap::
# 23 "data/scripts/pokemon_shop.pory"
	checkitem ITEM_GOLD_BOTTLE_CAP
# 24 "data/scripts/pokemon_shop.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Common_EventScript_Pokemon_Shop_CheckGoldBottleCap_2
# 37 "data/scripts/pokemon_shop.pory"
	setflag P_FLAG_FORCE_NO_SHINY
# 38 "data/scripts/pokemon_shop.pory"
	clearflag P_FLAG_FORCE_SHINY
Common_EventScript_Pokemon_Shop_CheckGoldBottleCap_1:
# 41 "data/scripts/pokemon_shop.pory"
	msgbox Common_EventScript_Pokemon_Shop_CheckGoldBottleCap_Text_1
# 42 "data/scripts/pokemon_shop.pory"
	goto Auto_EventScript_Pokemon_Shop_Controls
	return

Common_EventScript_Pokemon_Shop_CheckGoldBottleCap_2:
# 25 "data/scripts/pokemon_shop.pory"
	msgbox Common_EventScript_Pokemon_Shop_CheckGoldBottleCap_Text_0
# 26 "data/scripts/pokemon_shop.pory"
	yesnobox 0, 8
# 27 "data/scripts/pokemon_shop.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Common_EventScript_Pokemon_Shop_CheckGoldBottleCap_5
# 32 "data/scripts/pokemon_shop.pory"
	setflag P_FLAG_FORCE_NO_SHINY
# 33 "data/scripts/pokemon_shop.pory"
	clearflag P_FLAG_FORCE_SHINY
	goto Common_EventScript_Pokemon_Shop_CheckGoldBottleCap_1

Common_EventScript_Pokemon_Shop_CheckGoldBottleCap_5:
# 28 "data/scripts/pokemon_shop.pory"
	clearflag P_FLAG_FORCE_NO_SHINY
# 29 "data/scripts/pokemon_shop.pory"
	setflag P_FLAG_FORCE_SHINY
	goto Common_EventScript_Pokemon_Shop_CheckGoldBottleCap_1


Common_EventScript_Pokemon_Shop_CheckPurchase::
# 46 "data/scripts/pokemon_shop.pory"
	msgbox Common_EventScript_Pokemon_Shop_CheckPurchase_Text_0
# 47 "data/scripts/pokemon_shop.pory"
	switch VAR_RESULT
# 48 "data/scripts/pokemon_shop.pory"
	case MON_GIVEN_TO_PARTY, Common_EventScript_Pokemon_Shop_CheckPurchase_3
# 53 "data/scripts/pokemon_shop.pory"
	case MON_GIVEN_TO_PC, Common_EventScript_Pokemon_Shop_CheckPurchase_4
# 58 "data/scripts/pokemon_shop.pory"
	case MON_CANT_GIVE, Common_EventScript_Pokemon_Shop_CheckPurchase_5
Common_EventScript_Pokemon_Shop_CheckPurchase_1:
# 64 "data/scripts/pokemon_shop.pory"
	msgbox Common_EventScript_Pokemon_Shop_CheckPurchase_Text_6
# 65 "data/scripts/pokemon_shop.pory"
	removemoney 4000
# 66 "data/scripts/pokemon_shop.pory"
	updatemoneybox
# 67 "data/scripts/pokemon_shop.pory"
	playse SE_SHOP
# 68 "data/scripts/pokemon_shop.pory"
	waitse
# 69 "data/scripts/pokemon_shop.pory"
	goto_if_set P_FLAG_FORCE_SHINY, Common_EventScript_Pokemon_Shop_CheckPurchase_7
Common_EventScript_Pokemon_Shop_CheckPurchase_6:
# 73 "data/scripts/pokemon_shop.pory"
	msgbox Common_EventScript_Pokemon_Shop_CheckPurchase_Text_8
# 74 "data/scripts/pokemon_shop.pory"
	msgbox Common_EventScript_Pokemon_Shop_CheckPurchase_Text_9
# 75 "data/scripts/pokemon_shop.pory"
	yesnobox 0, 8
# 76 "data/scripts/pokemon_shop.pory"
	compare VAR_RESULT, YES
	goto_if_eq Common_EventScript_Pokemon_Shop_CheckPurchase_10
Common_EventScript_Pokemon_Shop_CheckPurchase_9:
# 79 "data/scripts/pokemon_shop.pory"
	goto Auto_EventScript_Pokemon_Shop_End
	return

Common_EventScript_Pokemon_Shop_CheckPurchase_3:
# 49 "data/scripts/pokemon_shop.pory"
	playse SE_SUCCESS
# 50 "data/scripts/pokemon_shop.pory"
	msgbox Common_EventScript_Pokemon_Shop_CheckPurchase_Text_1
# 51 "data/scripts/pokemon_shop.pory"
	msgbox Common_EventScript_Pokemon_Shop_CheckPurchase_Text_2
# 52 "data/scripts/pokemon_shop.pory"
	waitse
	goto Common_EventScript_Pokemon_Shop_CheckPurchase_1

Common_EventScript_Pokemon_Shop_CheckPurchase_4:
# 54 "data/scripts/pokemon_shop.pory"
	playse SE_SUCCESS
# 55 "data/scripts/pokemon_shop.pory"
	msgbox Common_EventScript_Pokemon_Shop_CheckPurchase_Text_3
# 56 "data/scripts/pokemon_shop.pory"
	msgbox Common_EventScript_Pokemon_Shop_CheckPurchase_Text_4
# 57 "data/scripts/pokemon_shop.pory"
	waitse
	goto Common_EventScript_Pokemon_Shop_CheckPurchase_1

Common_EventScript_Pokemon_Shop_CheckPurchase_5:
# 59 "data/scripts/pokemon_shop.pory"
	playse SE_FAILURE
# 60 "data/scripts/pokemon_shop.pory"
	msgbox Common_EventScript_Pokemon_Shop_CheckPurchase_Text_5
# 61 "data/scripts/pokemon_shop.pory"
	waitse
# 62 "data/scripts/pokemon_shop.pory"
	goto Auto_EventScript_Pokemon_Shop_End
	goto Common_EventScript_Pokemon_Shop_CheckPurchase_1

Common_EventScript_Pokemon_Shop_CheckPurchase_7:
# 70 "data/scripts/pokemon_shop.pory"
	msgbox Common_EventScript_Pokemon_Shop_CheckPurchase_Text_7
# 71 "data/scripts/pokemon_shop.pory"
	removeitem ITEM_GOLD_BOTTLE_CAP, 1
	goto Common_EventScript_Pokemon_Shop_CheckPurchase_6

Common_EventScript_Pokemon_Shop_CheckPurchase_10:
# 77 "data/scripts/pokemon_shop.pory"
	goto Common_EventScript_Pokemon_Shop_CheckMoney
	goto Common_EventScript_Pokemon_Shop_CheckPurchase_9


Auto_EventScript_Pokemon_Shop_End::
# 83 "data/scripts/pokemon_shop.pory"
	msgbox Auto_EventScript_Pokemon_Shop_End_Text_0
# 84 "data/scripts/pokemon_shop.pory"
	clearflag P_FLAG_FORCE_NO_SHINY
# 85 "data/scripts/pokemon_shop.pory"
	clearflag P_FLAG_FORCE_SHINY
# 86 "data/scripts/pokemon_shop.pory"
	hidemoneybox
# 87 "data/scripts/pokemon_shop.pory"
	releaseall
	end


Common_EventScript_Pokemon_Shop_Text_0:
# 4 "data/scripts/pokemon_shop.pory"
	.string "Hello there! I'm the POKéMON breeder!$"

Common_EventScript_Pokemon_Shop_CheckMoney_Text_0:
# 12 "data/scripts/pokemon_shop.pory"
	.string "All Pokemon cost a mere ¥4000.$"

Common_EventScript_Pokemon_Shop_CheckMoney_Text_1:
# 17 "data/scripts/pokemon_shop.pory"
	.string "Oh, sorry! You need at least ¥4000 to\n"
	.string "buy anything here!$"

Common_EventScript_Pokemon_Shop_CheckGoldBottleCap_Text_0:
# 25 "data/scripts/pokemon_shop.pory"
	.string "Oh, you have a gold bottle cap! Would\n"
	.string "you redeem it for a shiny Pokemon?$"

Common_EventScript_Pokemon_Shop_CheckGoldBottleCap_Text_1:
# 41 "data/scripts/pokemon_shop.pory"
	.string "What are you looking for today?$"

Common_EventScript_Pokemon_Shop_CheckPurchase_Text_0:
# 46 "data/scripts/pokemon_shop.pory"
	.string "Sure! Let's see if I can get one of\n"
	.string "those for you ...$"

Common_EventScript_Pokemon_Shop_CheckPurchase_Text_1:
# 50 "data/scripts/pokemon_shop.pory"
	.string "Here you go!$"

Common_EventScript_Pokemon_Shop_CheckPurchase_Text_2:
# 51 "data/scripts/pokemon_shop.pory"
	.string "The POKéMON has been added to your\n"
	.string "party.$"

Common_EventScript_Pokemon_Shop_CheckPurchase_Text_3:
# 55 "data/scripts/pokemon_shop.pory"
	.string "All done!$"

Common_EventScript_Pokemon_Shop_CheckPurchase_Text_4:
# 56 "data/scripts/pokemon_shop.pory"
	.string "The POKéMON has been sent to your PC\n"
	.string "boxes.$"

Common_EventScript_Pokemon_Shop_CheckPurchase_Text_5:
# 60 "data/scripts/pokemon_shop.pory"
	.string "It looks like I can't give you any more\n"
	.string "POKéMON right now - Sorry!$"

Common_EventScript_Pokemon_Shop_CheckPurchase_Text_6:
# 64 "data/scripts/pokemon_shop.pory"
	.string "I'll take your payment now, please.$"

Common_EventScript_Pokemon_Shop_CheckPurchase_Text_7:
# 70 "data/scripts/pokemon_shop.pory"
	.string "You also gave a Gold Bottle Cap in\n"
	.string "exchange.$"

Common_EventScript_Pokemon_Shop_CheckPurchase_Text_8:
# 73 "data/scripts/pokemon_shop.pory"
	.string "Thanks for your business!$"

Common_EventScript_Pokemon_Shop_CheckPurchase_Text_9:
# 74 "data/scripts/pokemon_shop.pory"
	.string "Can we help you with anything else?$"

Auto_EventScript_Pokemon_Shop_End_Text_0:
# 83 "data/scripts/pokemon_shop.pory"
	.string "Come back again soon!$"
