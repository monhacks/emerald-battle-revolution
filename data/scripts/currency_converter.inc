CurrencyConverterCommon_EventScript_BattlePointConverter::
# 4 "data/scripts/currency_converter.pory"
	msgbox CurrencyConverterCommon_EventScript_BattlePointConverter_Text_0
# 5 "data/scripts/currency_converter.pory"
	msgbox CurrencyConverterCommon_EventScript_BattlePointConverter_Text_1
# 6 "data/scripts/currency_converter.pory"
	goto CurrencyConverterCommon_EventScript_BattlePointConverterToOrFrom
	return


CurrencyConverterCommon_EventScript_BattlePointConverterToOrFrom::
# 10 "data/scripts/currency_converter.pory"
	msgbox CurrencyConverterCommon_EventScript_BattlePointConverterToOrFrom_Text_0
# 11 "data/scripts/currency_converter.pory"
	multichoice2 18, 0, CurrencyConverterCommon_Text_BattlePointConverterBPToOrFrom
# 12 "data/scripts/currency_converter.pory"
	switch VAR_RESULT
# 13 "data/scripts/currency_converter.pory"
	case 0, CurrencyConverterCommon_EventScript_BattlePointConverterToOrFrom_2
# 15 "data/scripts/currency_converter.pory"
	case 1, CurrencyConverterCommon_EventScript_BattlePointConverterToOrFrom_3
# 18 "data/scripts/currency_converter.pory"
	goto CurrencyConverterCommon_EventScript_BattlePointConverterEnd
	return

CurrencyConverterCommon_EventScript_BattlePointConverterToOrFrom_2:
# 14 "data/scripts/currency_converter.pory"
	goto CurrencyConverterCommon_EventScript_BattlePointConverterFromOptions
	return

CurrencyConverterCommon_EventScript_BattlePointConverterToOrFrom_3:
# 16 "data/scripts/currency_converter.pory"
	goto CurrencyConverterCommon_EventScript_BattlePointConverterToOptions
	return


CurrencyConverterCommon_EventScript_BattlePointConverterToOptions::
# 23 "data/scripts/currency_converter.pory"
	showmoneybox 0, 0
# 24 "data/scripts/currency_converter.pory"
	msgbox CurrencyConverterCommon_EventScript_BattlePointConverterToOptions_Text_0
# 25 "data/scripts/currency_converter.pory"
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 26 "data/scripts/currency_converter.pory"
	multichoice2 18, 0, CurrencyConverterCommon_Text_BattlePointConverterBPToOptions
# 27 "data/scripts/currency_converter.pory"
	switch VAR_RESULT
# 28 "data/scripts/currency_converter.pory"
	case 0, CurrencyConverterCommon_EventScript_BattlePointConverterToOptions_3
# 36 "data/scripts/currency_converter.pory"
	case 1, CurrencyConverterCommon_EventScript_BattlePointConverterToOptions_4
# 44 "data/scripts/currency_converter.pory"
	case 2, CurrencyConverterCommon_EventScript_BattlePointConverterToOptions_5
# 52 "data/scripts/currency_converter.pory"
	case 3, CurrencyConverterCommon_EventScript_BattlePointConverterToOptions_6
# 60 "data/scripts/currency_converter.pory"
	case 4, CurrencyConverterCommon_EventScript_BattlePointConverterToOptions_7
# 69 "data/scripts/currency_converter.pory"
	hidemoneybox
# 70 "data/scripts/currency_converter.pory"
	goto CurrencyConverterCommon_EventScript_BattlePointConverterToOrFrom
CurrencyConverterCommon_EventScript_BattlePointConverterToOptions_1:
# 72 "data/scripts/currency_converter.pory"
	playse SE_SHOP
# 73 "data/scripts/currency_converter.pory"
	special GiveFrontierBattlePoints
# 74 "data/scripts/currency_converter.pory"
	updatemoneybox
# 75 "data/scripts/currency_converter.pory"
	msgbox CurrencyConverterCommon_EventScript_BattlePointConverterToOptions_Text_1
# 76 "data/scripts/currency_converter.pory"
	waitse
# 77 "data/scripts/currency_converter.pory"
	hidemoneybox
# 78 "data/scripts/currency_converter.pory"
	goto CurrencyConverterCommon_EventScript_BattlePointConverterToOptions
	return

CurrencyConverterCommon_EventScript_BattlePointConverterToOptions_3:
# 29 "data/scripts/currency_converter.pory"
	checkmoney 9800
# 30 "data/scripts/currency_converter.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CurrencyConverterCommon_EventScript_BattlePointConverterToOptions_9
# 34 "data/scripts/currency_converter.pory"
	goto CurrencyConverterCommon_EventScript_BattlePointConverterToCannotAfford
	goto CurrencyConverterCommon_EventScript_BattlePointConverterToOptions_1

CurrencyConverterCommon_EventScript_BattlePointConverterToOptions_4:
# 37 "data/scripts/currency_converter.pory"
	checkmoney 49000
# 38 "data/scripts/currency_converter.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CurrencyConverterCommon_EventScript_BattlePointConverterToOptions_12
# 42 "data/scripts/currency_converter.pory"
	goto CurrencyConverterCommon_EventScript_BattlePointConverterToCannotAfford
	goto CurrencyConverterCommon_EventScript_BattlePointConverterToOptions_1

CurrencyConverterCommon_EventScript_BattlePointConverterToOptions_5:
# 45 "data/scripts/currency_converter.pory"
	checkmoney 98000
# 46 "data/scripts/currency_converter.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CurrencyConverterCommon_EventScript_BattlePointConverterToOptions_15
# 50 "data/scripts/currency_converter.pory"
	goto CurrencyConverterCommon_EventScript_BattlePointConverterToCannotAfford
	goto CurrencyConverterCommon_EventScript_BattlePointConverterToOptions_1

CurrencyConverterCommon_EventScript_BattlePointConverterToOptions_6:
# 53 "data/scripts/currency_converter.pory"
	checkmoney 196000
# 54 "data/scripts/currency_converter.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CurrencyConverterCommon_EventScript_BattlePointConverterToOptions_18
# 58 "data/scripts/currency_converter.pory"
	goto CurrencyConverterCommon_EventScript_BattlePointConverterToCannotAfford
	goto CurrencyConverterCommon_EventScript_BattlePointConverterToOptions_1

CurrencyConverterCommon_EventScript_BattlePointConverterToOptions_7:
# 61 "data/scripts/currency_converter.pory"
	checkmoney 490000
# 62 "data/scripts/currency_converter.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CurrencyConverterCommon_EventScript_BattlePointConverterToOptions_21
# 66 "data/scripts/currency_converter.pory"
	goto CurrencyConverterCommon_EventScript_BattlePointConverterToCannotAfford
	goto CurrencyConverterCommon_EventScript_BattlePointConverterToOptions_1

CurrencyConverterCommon_EventScript_BattlePointConverterToOptions_9:
# 31 "data/scripts/currency_converter.pory"
	setvar VAR_0x8004, 1
# 32 "data/scripts/currency_converter.pory"
	removemoney 9800
	goto CurrencyConverterCommon_EventScript_BattlePointConverterToOptions_1

CurrencyConverterCommon_EventScript_BattlePointConverterToOptions_12:
# 39 "data/scripts/currency_converter.pory"
	setvar VAR_0x8004, 5
# 40 "data/scripts/currency_converter.pory"
	removemoney 49000
	goto CurrencyConverterCommon_EventScript_BattlePointConverterToOptions_1

CurrencyConverterCommon_EventScript_BattlePointConverterToOptions_15:
# 47 "data/scripts/currency_converter.pory"
	setvar VAR_0x8004, 10
# 48 "data/scripts/currency_converter.pory"
	removemoney 98000
	goto CurrencyConverterCommon_EventScript_BattlePointConverterToOptions_1

CurrencyConverterCommon_EventScript_BattlePointConverterToOptions_18:
# 55 "data/scripts/currency_converter.pory"
	setvar VAR_0x8004, 20
# 56 "data/scripts/currency_converter.pory"
	removemoney 196000
	goto CurrencyConverterCommon_EventScript_BattlePointConverterToOptions_1

CurrencyConverterCommon_EventScript_BattlePointConverterToOptions_21:
# 63 "data/scripts/currency_converter.pory"
	setvar VAR_0x8004, 50
# 64 "data/scripts/currency_converter.pory"
	removemoney 490000
	goto CurrencyConverterCommon_EventScript_BattlePointConverterToOptions_1


CurrencyConverterCommon_EventScript_BattlePointConverterToCannotAfford::
# 82 "data/scripts/currency_converter.pory"
	playse SE_FAILURE
# 83 "data/scripts/currency_converter.pory"
	msgbox CurrencyConverterCommon_EventScript_BattlePointConverterToCannotAfford_Text_0
# 84 "data/scripts/currency_converter.pory"
	waitse
# 85 "data/scripts/currency_converter.pory"
	hidemoneybox
# 86 "data/scripts/currency_converter.pory"
	goto CurrencyConverterCommon_EventScript_BattlePointConverterToOrFrom
	return


CurrencyConverterCommon_EventScript_BattlePointConverterFromOptions::
# 90 "data/scripts/currency_converter.pory"
	special ShowBattlePointsWindow
# 91 "data/scripts/currency_converter.pory"
	msgbox CurrencyConverterCommon_EventScript_BattlePointConverterToOptions_Text_0
# 92 "data/scripts/currency_converter.pory"
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 93 "data/scripts/currency_converter.pory"
	multichoice2 18, 0, CurrencyConverterCommon_Text_BattlePointConverterBPFromOptions
# 94 "data/scripts/currency_converter.pory"
	switch VAR_RESULT
# 95 "data/scripts/currency_converter.pory"
	case 0, CurrencyConverterCommon_EventScript_BattlePointConverterFromOptions_3
# 102 "data/scripts/currency_converter.pory"
	case 1, CurrencyConverterCommon_EventScript_BattlePointConverterFromOptions_4
# 109 "data/scripts/currency_converter.pory"
	case 2, CurrencyConverterCommon_EventScript_BattlePointConverterFromOptions_5
# 116 "data/scripts/currency_converter.pory"
	case 3, CurrencyConverterCommon_EventScript_BattlePointConverterFromOptions_6
# 123 "data/scripts/currency_converter.pory"
	case 4, CurrencyConverterCommon_EventScript_BattlePointConverterFromOptions_7
# 131 "data/scripts/currency_converter.pory"
	special CloseBattlePointsWindow
# 132 "data/scripts/currency_converter.pory"
	goto CurrencyConverterCommon_EventScript_BattlePointConverterToOrFrom
CurrencyConverterCommon_EventScript_BattlePointConverterFromOptions_1:
# 134 "data/scripts/currency_converter.pory"
	playse SE_SHOP
# 135 "data/scripts/currency_converter.pory"
	special TakeFrontierBattlePoints
# 136 "data/scripts/currency_converter.pory"
	special UpdateBattlePointsWindow
# 137 "data/scripts/currency_converter.pory"
	msgbox CurrencyConverterCommon_EventScript_BattlePointConverterFromOptions_Text_0
# 138 "data/scripts/currency_converter.pory"
	waitse
# 139 "data/scripts/currency_converter.pory"
	special CloseBattlePointsWindow
# 140 "data/scripts/currency_converter.pory"
	goto CurrencyConverterCommon_EventScript_BattlePointConverterFromOptions
	return

CurrencyConverterCommon_EventScript_BattlePointConverterFromOptions_3:
# 96 "data/scripts/currency_converter.pory"
	compare VAR_TEMP_1, 1
	goto_if_ge CurrencyConverterCommon_EventScript_BattlePointConverterFromOptions_9
# 100 "data/scripts/currency_converter.pory"
	goto CurrencyConverterCommon_EventScript_BattlePointConverterFromCannotAfford
	goto CurrencyConverterCommon_EventScript_BattlePointConverterFromOptions_1

CurrencyConverterCommon_EventScript_BattlePointConverterFromOptions_4:
# 103 "data/scripts/currency_converter.pory"
	compare VAR_TEMP_1, 5
	goto_if_ge CurrencyConverterCommon_EventScript_BattlePointConverterFromOptions_12
# 107 "data/scripts/currency_converter.pory"
	goto CurrencyConverterCommon_EventScript_BattlePointConverterFromCannotAfford
	goto CurrencyConverterCommon_EventScript_BattlePointConverterFromOptions_1

CurrencyConverterCommon_EventScript_BattlePointConverterFromOptions_5:
# 110 "data/scripts/currency_converter.pory"
	compare VAR_TEMP_1, 10
	goto_if_ge CurrencyConverterCommon_EventScript_BattlePointConverterFromOptions_15
# 114 "data/scripts/currency_converter.pory"
	goto CurrencyConverterCommon_EventScript_BattlePointConverterFromCannotAfford
	goto CurrencyConverterCommon_EventScript_BattlePointConverterFromOptions_1

CurrencyConverterCommon_EventScript_BattlePointConverterFromOptions_6:
# 117 "data/scripts/currency_converter.pory"
	compare VAR_TEMP_1, 20
	goto_if_ge CurrencyConverterCommon_EventScript_BattlePointConverterFromOptions_18
# 121 "data/scripts/currency_converter.pory"
	goto CurrencyConverterCommon_EventScript_BattlePointConverterFromCannotAfford
	goto CurrencyConverterCommon_EventScript_BattlePointConverterFromOptions_1

CurrencyConverterCommon_EventScript_BattlePointConverterFromOptions_7:
# 124 "data/scripts/currency_converter.pory"
	compare VAR_TEMP_1, 50
	goto_if_ge CurrencyConverterCommon_EventScript_BattlePointConverterFromOptions_21
# 128 "data/scripts/currency_converter.pory"
	goto CurrencyConverterCommon_EventScript_BattlePointConverterFromCannotAfford
	goto CurrencyConverterCommon_EventScript_BattlePointConverterFromOptions_1

CurrencyConverterCommon_EventScript_BattlePointConverterFromOptions_9:
# 97 "data/scripts/currency_converter.pory"
	setvar VAR_0x8004, 1
# 98 "data/scripts/currency_converter.pory"
	addmoney 9800
	goto CurrencyConverterCommon_EventScript_BattlePointConverterFromOptions_1

CurrencyConverterCommon_EventScript_BattlePointConverterFromOptions_12:
# 104 "data/scripts/currency_converter.pory"
	setvar VAR_0x8004, 5
# 105 "data/scripts/currency_converter.pory"
	addmoney 49000
	goto CurrencyConverterCommon_EventScript_BattlePointConverterFromOptions_1

CurrencyConverterCommon_EventScript_BattlePointConverterFromOptions_15:
# 111 "data/scripts/currency_converter.pory"
	setvar VAR_0x8004, 10
# 112 "data/scripts/currency_converter.pory"
	addmoney 98000
	goto CurrencyConverterCommon_EventScript_BattlePointConverterFromOptions_1

CurrencyConverterCommon_EventScript_BattlePointConverterFromOptions_18:
# 118 "data/scripts/currency_converter.pory"
	setvar VAR_0x8004, 20
# 119 "data/scripts/currency_converter.pory"
	addmoney 196000
	goto CurrencyConverterCommon_EventScript_BattlePointConverterFromOptions_1

CurrencyConverterCommon_EventScript_BattlePointConverterFromOptions_21:
# 125 "data/scripts/currency_converter.pory"
	setvar VAR_0x8004, 50
# 126 "data/scripts/currency_converter.pory"
	addmoney 490000
	goto CurrencyConverterCommon_EventScript_BattlePointConverterFromOptions_1


CurrencyConverterCommon_EventScript_BattlePointConverterFromCannotAfford::
# 144 "data/scripts/currency_converter.pory"
	playse SE_FAILURE
# 145 "data/scripts/currency_converter.pory"
	msgbox CurrencyConverterCommon_EventScript_BattlePointConverterFromCannotAfford_Text_0
# 146 "data/scripts/currency_converter.pory"
	waitse
# 147 "data/scripts/currency_converter.pory"
	special CloseBattlePointsWindow
# 148 "data/scripts/currency_converter.pory"
	goto CurrencyConverterCommon_EventScript_BattlePointConverterToOrFrom
	return


CurrencyConverterCommon_EventScript_BattlePointConverterEnd::
# 152 "data/scripts/currency_converter.pory"
	msgbox CurrencyConverterCommon_EventScript_BattlePointConverterEnd_Text_0
# 153 "data/scripts/currency_converter.pory"
	release
	end


CurrencyConverterCommon_EventScript_CoinConverter::
# 187 "data/scripts/currency_converter.pory"
	msgbox CurrencyConverterCommon_EventScript_CoinConverter_Text_0
# 188 "data/scripts/currency_converter.pory"
	msgbox CurrencyConverterCommon_EventScript_CoinConverter_Text_1
# 189 "data/scripts/currency_converter.pory"
	checkitem ITEM_COIN_CASE
# 190 "data/scripts/currency_converter.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CurrencyConverterCommon_EventScript_CoinConverter_2
CurrencyConverterCommon_EventScript_CoinConverter_1:
# 193 "data/scripts/currency_converter.pory"
	msgbox CurrencyConverterCommon_EventScript_CoinConverter_Text_2
# 194 "data/scripts/currency_converter.pory"
	release
	end

CurrencyConverterCommon_EventScript_CoinConverter_2:
# 191 "data/scripts/currency_converter.pory"
	goto CurrencyConverterCommon_EventScript_CoinConverterToOrFrom
	goto CurrencyConverterCommon_EventScript_CoinConverter_1


CurrencyConverterCommon_EventScript_CoinConverterToOrFrom::
# 199 "data/scripts/currency_converter.pory"
	msgbox CurrencyConverterCommon_EventScript_BattlePointConverterToOrFrom_Text_0
# 200 "data/scripts/currency_converter.pory"
	multichoice2 18, 0, CurrencyConverterCommon_Text_CoinConverterToOrFrom
# 201 "data/scripts/currency_converter.pory"
	switch VAR_RESULT
# 202 "data/scripts/currency_converter.pory"
	case 0, CurrencyConverterCommon_EventScript_CoinConverterToOrFrom_2
# 204 "data/scripts/currency_converter.pory"
	case 1, CurrencyConverterCommon_EventScript_CoinConverterToOrFrom_3
# 207 "data/scripts/currency_converter.pory"
	goto CurrencyConverterCommon_EventScript_CoinConverterEnd
	return

CurrencyConverterCommon_EventScript_CoinConverterToOrFrom_2:
# 203 "data/scripts/currency_converter.pory"
	goto CurrencyConverterCommon_EventScript_CoinConverterFromOptions
	return

CurrencyConverterCommon_EventScript_CoinConverterToOrFrom_3:
# 205 "data/scripts/currency_converter.pory"
	goto CurrencyConverterCommon_EventScript_CoinConverterToOptions
	return


CurrencyConverterCommon_EventScript_CoinConverterToOptions::
# 212 "data/scripts/currency_converter.pory"
	showmoneybox 0, 0
# 213 "data/scripts/currency_converter.pory"
	msgbox CurrencyConverterCommon_EventScript_BattlePointConverterToOptions_Text_0
# 214 "data/scripts/currency_converter.pory"
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 215 "data/scripts/currency_converter.pory"
	multichoice2 18, 0, CurrencyConverterCommon_Text_CoinConverterToOptions
# 216 "data/scripts/currency_converter.pory"
	switch VAR_RESULT
# 217 "data/scripts/currency_converter.pory"
	case 0, CurrencyConverterCommon_EventScript_CoinConverterToOptions_3
# 225 "data/scripts/currency_converter.pory"
	case 1, CurrencyConverterCommon_EventScript_CoinConverterToOptions_4
# 233 "data/scripts/currency_converter.pory"
	case 2, CurrencyConverterCommon_EventScript_CoinConverterToOptions_5
# 241 "data/scripts/currency_converter.pory"
	case 3, CurrencyConverterCommon_EventScript_CoinConverterToOptions_6
# 249 "data/scripts/currency_converter.pory"
	case 4, CurrencyConverterCommon_EventScript_CoinConverterToOptions_7
# 258 "data/scripts/currency_converter.pory"
	hidemoneybox
# 259 "data/scripts/currency_converter.pory"
	goto CurrencyConverterCommon_EventScript_CoinConverterToOrFrom
CurrencyConverterCommon_EventScript_CoinConverterToOptions_1:
# 261 "data/scripts/currency_converter.pory"
	playse SE_SHOP
# 262 "data/scripts/currency_converter.pory"
	updatemoneybox
# 263 "data/scripts/currency_converter.pory"
	msgbox CurrencyConverterCommon_EventScript_CoinConverterToOptions_Text_0
# 264 "data/scripts/currency_converter.pory"
	waitse
# 265 "data/scripts/currency_converter.pory"
	hidemoneybox
# 266 "data/scripts/currency_converter.pory"
	goto CurrencyConverterCommon_EventScript_CoinConverterToOptions
	return

CurrencyConverterCommon_EventScript_CoinConverterToOptions_3:
# 218 "data/scripts/currency_converter.pory"
	checkmoney 200
# 219 "data/scripts/currency_converter.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CurrencyConverterCommon_EventScript_CoinConverterToOptions_9
# 223 "data/scripts/currency_converter.pory"
	goto CurrencyConverterCommon_EventScript_CoinConverterToCannotAfford
	goto CurrencyConverterCommon_EventScript_CoinConverterToOptions_1

CurrencyConverterCommon_EventScript_CoinConverterToOptions_4:
# 226 "data/scripts/currency_converter.pory"
	checkmoney 1000
# 227 "data/scripts/currency_converter.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CurrencyConverterCommon_EventScript_CoinConverterToOptions_12
# 231 "data/scripts/currency_converter.pory"
	goto CurrencyConverterCommon_EventScript_CoinConverterToCannotAfford
	goto CurrencyConverterCommon_EventScript_CoinConverterToOptions_1

CurrencyConverterCommon_EventScript_CoinConverterToOptions_5:
# 234 "data/scripts/currency_converter.pory"
	checkmoney 2000
# 235 "data/scripts/currency_converter.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CurrencyConverterCommon_EventScript_CoinConverterToOptions_15
# 239 "data/scripts/currency_converter.pory"
	goto CurrencyConverterCommon_EventScript_CoinConverterToCannotAfford
	goto CurrencyConverterCommon_EventScript_CoinConverterToOptions_1

CurrencyConverterCommon_EventScript_CoinConverterToOptions_6:
# 242 "data/scripts/currency_converter.pory"
	checkmoney 4000
# 243 "data/scripts/currency_converter.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CurrencyConverterCommon_EventScript_CoinConverterToOptions_18
# 247 "data/scripts/currency_converter.pory"
	goto CurrencyConverterCommon_EventScript_CoinConverterToCannotAfford
	goto CurrencyConverterCommon_EventScript_CoinConverterToOptions_1

CurrencyConverterCommon_EventScript_CoinConverterToOptions_7:
# 250 "data/scripts/currency_converter.pory"
	checkmoney 10000
# 251 "data/scripts/currency_converter.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CurrencyConverterCommon_EventScript_CoinConverterToOptions_21
# 255 "data/scripts/currency_converter.pory"
	goto CurrencyConverterCommon_EventScript_CoinConverterToCannotAfford
	goto CurrencyConverterCommon_EventScript_CoinConverterToOptions_1

CurrencyConverterCommon_EventScript_CoinConverterToOptions_9:
# 220 "data/scripts/currency_converter.pory"
	addcoins 10
# 221 "data/scripts/currency_converter.pory"
	removemoney 200
	goto CurrencyConverterCommon_EventScript_CoinConverterToOptions_1

CurrencyConverterCommon_EventScript_CoinConverterToOptions_12:
# 228 "data/scripts/currency_converter.pory"
	addcoins 50
# 229 "data/scripts/currency_converter.pory"
	removemoney 1000
	goto CurrencyConverterCommon_EventScript_CoinConverterToOptions_1

CurrencyConverterCommon_EventScript_CoinConverterToOptions_15:
# 236 "data/scripts/currency_converter.pory"
	addcoins 100
# 237 "data/scripts/currency_converter.pory"
	removemoney 2000
	goto CurrencyConverterCommon_EventScript_CoinConverterToOptions_1

CurrencyConverterCommon_EventScript_CoinConverterToOptions_18:
# 244 "data/scripts/currency_converter.pory"
	addcoins 200
# 245 "data/scripts/currency_converter.pory"
	removemoney 4000
	goto CurrencyConverterCommon_EventScript_CoinConverterToOptions_1

CurrencyConverterCommon_EventScript_CoinConverterToOptions_21:
# 252 "data/scripts/currency_converter.pory"
	addcoins 500
# 253 "data/scripts/currency_converter.pory"
	removemoney 10000
	goto CurrencyConverterCommon_EventScript_CoinConverterToOptions_1


CurrencyConverterCommon_EventScript_CoinConverterToCannotAfford::
# 270 "data/scripts/currency_converter.pory"
	playse SE_FAILURE
# 271 "data/scripts/currency_converter.pory"
	msgbox CurrencyConverterCommon_EventScript_BattlePointConverterToCannotAfford_Text_0
# 272 "data/scripts/currency_converter.pory"
	waitse
# 273 "data/scripts/currency_converter.pory"
	hidemoneybox
# 274 "data/scripts/currency_converter.pory"
	goto CurrencyConverterCommon_EventScript_CoinConverterToOrFrom
	return


CurrencyConverterCommon_EventScript_CoinConverterFromOptions::
# 278 "data/scripts/currency_converter.pory"
	showcoinsbox 1, 1
# 279 "data/scripts/currency_converter.pory"
	msgbox CurrencyConverterCommon_EventScript_CoinConverterFromOptions_Text_0
# 280 "data/scripts/currency_converter.pory"
	checkcoins VAR_TEMP_1
# 281 "data/scripts/currency_converter.pory"
	multichoice2 18, 0, CurrencyConverterCommon_Text_CoinConverterFromOptions
# 282 "data/scripts/currency_converter.pory"
	switch VAR_RESULT
# 283 "data/scripts/currency_converter.pory"
	case 0, CurrencyConverterCommon_EventScript_CoinConverterFromOptions_3
# 290 "data/scripts/currency_converter.pory"
	case 1, CurrencyConverterCommon_EventScript_CoinConverterFromOptions_4
# 297 "data/scripts/currency_converter.pory"
	case 2, CurrencyConverterCommon_EventScript_CoinConverterFromOptions_5
# 304 "data/scripts/currency_converter.pory"
	case 3, CurrencyConverterCommon_EventScript_CoinConverterFromOptions_6
# 311 "data/scripts/currency_converter.pory"
	case 4, CurrencyConverterCommon_EventScript_CoinConverterFromOptions_7
# 319 "data/scripts/currency_converter.pory"
	hidecoinsbox 1, 1
# 320 "data/scripts/currency_converter.pory"
	goto CurrencyConverterCommon_EventScript_CoinConverterToOrFrom
CurrencyConverterCommon_EventScript_CoinConverterFromOptions_1:
# 322 "data/scripts/currency_converter.pory"
	playse SE_SHOP
# 323 "data/scripts/currency_converter.pory"
	updatecoinsbox 1, 1
# 324 "data/scripts/currency_converter.pory"
	msgbox CurrencyConverterCommon_EventScript_CoinConverterFromOptions_Text_1
# 325 "data/scripts/currency_converter.pory"
	waitse
# 326 "data/scripts/currency_converter.pory"
	hidecoinsbox 1, 1
# 327 "data/scripts/currency_converter.pory"
	goto CurrencyConverterCommon_EventScript_CoinConverterFromOptions
	return

CurrencyConverterCommon_EventScript_CoinConverterFromOptions_3:
# 284 "data/scripts/currency_converter.pory"
	compare VAR_TEMP_1, 10
	goto_if_ge CurrencyConverterCommon_EventScript_CoinConverterFromOptions_9
# 288 "data/scripts/currency_converter.pory"
	goto CurrencyConverterCommon_EventScript_CoinConverterFromCannotAfford
	goto CurrencyConverterCommon_EventScript_CoinConverterFromOptions_1

CurrencyConverterCommon_EventScript_CoinConverterFromOptions_4:
# 291 "data/scripts/currency_converter.pory"
	compare VAR_TEMP_1, 50
	goto_if_ge CurrencyConverterCommon_EventScript_CoinConverterFromOptions_12
# 295 "data/scripts/currency_converter.pory"
	goto CurrencyConverterCommon_EventScript_CoinConverterFromCannotAfford
	goto CurrencyConverterCommon_EventScript_CoinConverterFromOptions_1

CurrencyConverterCommon_EventScript_CoinConverterFromOptions_5:
# 298 "data/scripts/currency_converter.pory"
	compare VAR_TEMP_1, 100
	goto_if_ge CurrencyConverterCommon_EventScript_CoinConverterFromOptions_15
# 302 "data/scripts/currency_converter.pory"
	goto CurrencyConverterCommon_EventScript_CoinConverterFromCannotAfford
	goto CurrencyConverterCommon_EventScript_CoinConverterFromOptions_1

CurrencyConverterCommon_EventScript_CoinConverterFromOptions_6:
# 305 "data/scripts/currency_converter.pory"
	compare VAR_TEMP_1, 200
	goto_if_ge CurrencyConverterCommon_EventScript_CoinConverterFromOptions_18
# 309 "data/scripts/currency_converter.pory"
	goto CurrencyConverterCommon_EventScript_CoinConverterFromCannotAfford
	goto CurrencyConverterCommon_EventScript_CoinConverterFromOptions_1

CurrencyConverterCommon_EventScript_CoinConverterFromOptions_7:
# 312 "data/scripts/currency_converter.pory"
	compare VAR_TEMP_1, 500
	goto_if_ge CurrencyConverterCommon_EventScript_CoinConverterFromOptions_21
# 316 "data/scripts/currency_converter.pory"
	goto CurrencyConverterCommon_EventScript_CoinConverterFromCannotAfford
	goto CurrencyConverterCommon_EventScript_CoinConverterFromOptions_1

CurrencyConverterCommon_EventScript_CoinConverterFromOptions_9:
# 285 "data/scripts/currency_converter.pory"
	removecoins 10
# 286 "data/scripts/currency_converter.pory"
	addmoney 200
	goto CurrencyConverterCommon_EventScript_CoinConverterFromOptions_1

CurrencyConverterCommon_EventScript_CoinConverterFromOptions_12:
# 292 "data/scripts/currency_converter.pory"
	removecoins 50
# 293 "data/scripts/currency_converter.pory"
	addmoney 1000
	goto CurrencyConverterCommon_EventScript_CoinConverterFromOptions_1

CurrencyConverterCommon_EventScript_CoinConverterFromOptions_15:
# 299 "data/scripts/currency_converter.pory"
	removecoins 100
# 300 "data/scripts/currency_converter.pory"
	addmoney 2000
	goto CurrencyConverterCommon_EventScript_CoinConverterFromOptions_1

CurrencyConverterCommon_EventScript_CoinConverterFromOptions_18:
# 306 "data/scripts/currency_converter.pory"
	removecoins 200
# 307 "data/scripts/currency_converter.pory"
	addmoney 4000
	goto CurrencyConverterCommon_EventScript_CoinConverterFromOptions_1

CurrencyConverterCommon_EventScript_CoinConverterFromOptions_21:
# 313 "data/scripts/currency_converter.pory"
	removecoins 500
# 314 "data/scripts/currency_converter.pory"
	addmoney 10000
	goto CurrencyConverterCommon_EventScript_CoinConverterFromOptions_1


CurrencyConverterCommon_EventScript_CoinConverterFromCannotAfford::
# 331 "data/scripts/currency_converter.pory"
	playse SE_FAILURE
# 332 "data/scripts/currency_converter.pory"
	msgbox CurrencyConverterCommon_EventScript_CoinConverterFromCannotAfford_Text_0
# 333 "data/scripts/currency_converter.pory"
	waitse
# 334 "data/scripts/currency_converter.pory"
	hidecoinsbox 1, 1
# 335 "data/scripts/currency_converter.pory"
	goto CurrencyConverterCommon_EventScript_CoinConverterToOrFrom
	return


CurrencyConverterCommon_EventScript_CoinConverterEnd::
# 339 "data/scripts/currency_converter.pory"
	msgbox CurrencyConverterCommon_EventScript_BattlePointConverterEnd_Text_0
# 340 "data/scripts/currency_converter.pory"
	release
	end


CurrencyConverterCommon_EventScript_BattlePointConverter_Text_0:
# 4 "data/scripts/currency_converter.pory"
	.string "This is a machine for converting\n"
	.string "currency between BP and ¥!$"

CurrencyConverterCommon_EventScript_BattlePointConverter_Text_1:
# 5 "data/scripts/currency_converter.pory"
	.string "The exchange rate is ¥9800 for every 1\n"
	.string "BP.$"

CurrencyConverterCommon_EventScript_BattlePointConverterToOrFrom_Text_0:
# 10 "data/scripts/currency_converter.pory"
	.string "What would you like to do?$"

CurrencyConverterCommon_EventScript_BattlePointConverterToOptions_Text_0:
# 24 "data/scripts/currency_converter.pory"
	.string "How much would you like?$"

CurrencyConverterCommon_EventScript_BattlePointConverterToOptions_Text_1:
# 75 "data/scripts/currency_converter.pory"
	.string "BP redeemed successfully!$"

CurrencyConverterCommon_EventScript_BattlePointConverterToCannotAfford_Text_0:
# 83 "data/scripts/currency_converter.pory"
	.string "Not enough ¥!$"

CurrencyConverterCommon_EventScript_BattlePointConverterFromOptions_Text_0:
# 137 "data/scripts/currency_converter.pory"
	.string "BP exchanged successfully!$"

CurrencyConverterCommon_EventScript_BattlePointConverterFromCannotAfford_Text_0:
# 145 "data/scripts/currency_converter.pory"
	.string "Not enough BP!$"

CurrencyConverterCommon_EventScript_BattlePointConverterEnd_Text_0:
# 152 "data/scripts/currency_converter.pory"
	.string "You decided to stop using the\n"
	.string "converter.$"

CurrencyConverterCommon_EventScript_CoinConverter_Text_0:
# 187 "data/scripts/currency_converter.pory"
	.string "This is a machine for converting\n"
	.string "currency between coins and ¥!$"

CurrencyConverterCommon_EventScript_CoinConverter_Text_1:
# 188 "data/scripts/currency_converter.pory"
	.string "The exchange rate is ¥20 for every 1\n"
	.string "coin.$"

CurrencyConverterCommon_EventScript_CoinConverter_Text_2:
# 193 "data/scripts/currency_converter.pory"
	.string "Before you can use this machine, you\n"
	.string "will need a COIN CASE.$"

CurrencyConverterCommon_EventScript_CoinConverterToOptions_Text_0:
# 263 "data/scripts/currency_converter.pory"
	.string "Coins redeemed successfully!$"

CurrencyConverterCommon_EventScript_CoinConverterFromOptions_Text_0:
# 279 "data/scripts/currency_converter.pory"
	.string "How many would you like?$"

CurrencyConverterCommon_EventScript_CoinConverterFromOptions_Text_1:
# 324 "data/scripts/currency_converter.pory"
	.string "Coins exchanged successfully!$"

CurrencyConverterCommon_EventScript_CoinConverterFromCannotAfford_Text_0:
# 332 "data/scripts/currency_converter.pory"
	.string "Not enough coins!$"

CurrencyConverterCommon_Text_BattlePointConverterBPToOrFrom::
# 157 "data/scripts/currency_converter.pory"
	.string "Convert BP to ¥$"
	.string "Convert ¥ to BP$"
	.string "CANCEL$"
	.string "$"

CurrencyConverterCommon_Text_BattlePointConverterBPToOptions::
# 164 "data/scripts/currency_converter.pory"
	.string "¥9800 (1BP)$"
	.string "¥49000 (5BP)$"
	.string "¥98000 (10BP)$"
	.string "¥196000 (20BP)$"
	.string "¥490000 (50BP)$"
	.string "GO BACK$"
	.string "$"

CurrencyConverterCommon_Text_BattlePointConverterBPFromOptions::
# 174 "data/scripts/currency_converter.pory"
	.string "1BP (¥9800)$"
	.string "5BP (¥49000)$"
	.string "10BP (¥98000)$"
	.string "20BP (¥196000)$"
	.string "50BP (¥490000)$"
	.string "GO BACK$"
	.string "$"

CurrencyConverterCommon_Text_CoinConverterToOrFrom::
# 344 "data/scripts/currency_converter.pory"
	.string "Convert coins to ¥$"
	.string "Convert ¥ to coins$"
	.string "CANCEL$"
	.string "$"

CurrencyConverterCommon_Text_CoinConverterToOptions::
# 351 "data/scripts/currency_converter.pory"
	.string "¥200 (10 coins)$"
	.string "¥1000 (50 coins)$"
	.string "¥2000 (100 coins)$"
	.string "¥4000 (200 coins)$"
	.string "¥10000 (500 coins)$"
	.string "GO BACK$"
	.string "$"

CurrencyConverterCommon_Text_CoinConverterFromOptions::
# 361 "data/scripts/currency_converter.pory"
	.string "10 coins (¥200)$"
	.string "50 coins (¥1000)$"
	.string "100 coins (¥2000)$"
	.string "200 coins (¥4000)$"
	.string "500 coins (¥10000)$"
	.string "GO BACK$"
	.string "$"
