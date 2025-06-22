Auto_EventScript_Pokemon_Shop_Controls::
# 5 "data/scripts/pokemon_shop_options.pory"
	msgbox Auto_EventScript_Pokemon_Shop_Controls_Text_0
# 6 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page1
	return


Auto_EventScript_Pokemon_Shop_Page1::
# 11 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Page1
# 12 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 14 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Page1_2
# 16 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Page1_3
# 18 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Page1_4
# 20 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Page1_5
# 22 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Page1_6
# 24 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Page1_7
# 26 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Page1_8
# 29 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_End
	return

Auto_EventScript_Pokemon_Shop_Page1_2:
# 15 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Bug_Page1
	return

Auto_EventScript_Pokemon_Shop_Page1_3:
# 17 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Dark_Page1
	return

Auto_EventScript_Pokemon_Shop_Page1_4:
# 19 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Dragon_Page1
	return

Auto_EventScript_Pokemon_Shop_Page1_5:
# 21 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Electric_Page1
	return

Auto_EventScript_Pokemon_Shop_Page1_6:
# 23 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Fairy_Page1
	return

Auto_EventScript_Pokemon_Shop_Page1_7:
# 25 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page4
	return

Auto_EventScript_Pokemon_Shop_Page1_8:
# 27 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page2
	return


Auto_EventScript_Pokemon_Shop_Page2::
# 35 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Page2
# 36 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 38 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Page2_2
# 40 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Page2_3
# 42 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Page2_4
# 44 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Page2_5
# 46 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Page2_6
# 48 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Page2_7
# 50 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Page2_8
# 53 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_End
	return

Auto_EventScript_Pokemon_Shop_Page2_2:
# 39 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Fighting_Page1
	return

Auto_EventScript_Pokemon_Shop_Page2_3:
# 41 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Fire_Page1
	return

Auto_EventScript_Pokemon_Shop_Page2_4:
# 43 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Flying_Page1
	return

Auto_EventScript_Pokemon_Shop_Page2_5:
# 45 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Ghost_Page1
	return

Auto_EventScript_Pokemon_Shop_Page2_6:
# 47 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Grass_Page1
	return

Auto_EventScript_Pokemon_Shop_Page2_7:
# 49 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page1
	return

Auto_EventScript_Pokemon_Shop_Page2_8:
# 51 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page3
	return


Auto_EventScript_Pokemon_Shop_Page3::
# 59 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Page3
# 60 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 62 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Page3_2
# 64 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Page3_3
# 66 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Page3_4
# 68 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Page3_5
# 70 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Page3_6
# 72 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Page3_7
# 74 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Page3_8
# 77 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_End
	return

Auto_EventScript_Pokemon_Shop_Page3_2:
# 63 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Ground_Page1
	return

Auto_EventScript_Pokemon_Shop_Page3_3:
# 65 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Ice_Page1
	return

Auto_EventScript_Pokemon_Shop_Page3_4:
# 67 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Normal_Page1
	return

Auto_EventScript_Pokemon_Shop_Page3_5:
# 69 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Poison_Page1
	return

Auto_EventScript_Pokemon_Shop_Page3_6:
# 71 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Psychic_Page1
	return

Auto_EventScript_Pokemon_Shop_Page3_7:
# 73 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page2
	return

Auto_EventScript_Pokemon_Shop_Page3_8:
# 75 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page4
	return


Auto_EventScript_Pokemon_Shop_Page4::
# 83 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Page4
# 84 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 86 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Page4_2
# 88 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Page4_3
# 90 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Page4_4
# 92 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Page4_5
# 94 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Page4_6
# 97 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_End
	return

Auto_EventScript_Pokemon_Shop_Page4_2:
# 87 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Rock_Page1
	return

Auto_EventScript_Pokemon_Shop_Page4_3:
# 89 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Steel_Page1
	return

Auto_EventScript_Pokemon_Shop_Page4_4:
# 91 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Water_Page1
	return

Auto_EventScript_Pokemon_Shop_Page4_5:
# 93 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page3
	return

Auto_EventScript_Pokemon_Shop_Page4_6:
# 95 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page1
	return


Auto_EventScript_Pokemon_Shop_Rock_Page1::
# 103 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Rock_Page1
# 104 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 106 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Rock_Page1_2
# 109 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Rock_Page1_3
# 112 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Rock_Page1_4
# 115 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Rock_Page1_5
# 118 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Rock_Page1_6
# 121 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Rock_Page1_7
# 123 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Rock_Page1_8
# 126 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page4
	return

Auto_EventScript_Pokemon_Shop_Rock_Page1_2:
# 107 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_AERODACTYL, 1
# 108 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Rock_Page1_3:
# 110 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_AMAURA, 1
# 111 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Rock_Page1_4:
# 113 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_ANORITH, 1
# 114 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Rock_Page1_5:
# 116 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_ARCHEN, 1
# 117 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Rock_Page1_6:
# 119 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_ARON, 1
# 120 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Rock_Page1_7:
# 122 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Rock_Page8
	return

Auto_EventScript_Pokemon_Shop_Rock_Page1_8:
# 124 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Rock_Page2
	return


Auto_EventScript_Pokemon_Shop_Rock_Page2::
# 132 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Rock_Page2
# 133 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 135 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Rock_Page2_2
# 138 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Rock_Page2_3
# 141 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Rock_Page2_4
# 144 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Rock_Page2_5
# 147 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Rock_Page2_6
# 150 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Rock_Page2_7
# 152 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Rock_Page2_8
# 155 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page4
	return

Auto_EventScript_Pokemon_Shop_Rock_Page2_2:
# 136 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_BINACLE, 1
# 137 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Rock_Page2_3:
# 139 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_BONSLY, 1
# 140 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Rock_Page2_4:
# 142 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_CARBINK, 1
# 143 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Rock_Page2_5:
# 145 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_CORSOLA, 1
# 146 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Rock_Page2_6:
# 148 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_CRANIDOS, 1
# 149 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Rock_Page2_7:
# 151 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Rock_Page1
	return

Auto_EventScript_Pokemon_Shop_Rock_Page2_8:
# 153 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Rock_Page3
	return


Auto_EventScript_Pokemon_Shop_Rock_Page3::
# 161 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Rock_Page3
# 162 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 164 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Rock_Page3_2
# 167 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Rock_Page3_3
# 170 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Rock_Page3_4
# 173 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Rock_Page3_5
# 176 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Rock_Page3_6
# 179 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Rock_Page3_7
# 181 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Rock_Page3_8
# 184 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page4
	return

Auto_EventScript_Pokemon_Shop_Rock_Page3_2:
# 165 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_DWEBBLE, 1
# 166 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Rock_Page3_3:
# 168 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_GEODUDE, 1
# 169 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Rock_Page3_4:
# 171 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_GEODUDE_ALOLA, 1
# 172 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Rock_Page3_5:
# 174 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_GLIMMET, 1
# 175 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Rock_Page3_6:
# 177 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_GROWLITHE_HISUI, 1
# 178 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Rock_Page3_7:
# 180 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Rock_Page2
	return

Auto_EventScript_Pokemon_Shop_Rock_Page3_8:
# 182 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Rock_Page4
	return


Auto_EventScript_Pokemon_Shop_Rock_Page4::
# 190 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Rock_Page4
# 191 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 193 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Rock_Page4_2
# 196 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Rock_Page4_3
# 199 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Rock_Page4_4
# 202 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Rock_Page4_5
# 205 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Rock_Page4_6
# 208 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Rock_Page4_7
# 210 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Rock_Page4_8
# 213 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page4
	return

Auto_EventScript_Pokemon_Shop_Rock_Page4_2:
# 194 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_IRON_BOULDER, 1
# 195 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Rock_Page4_3:
# 197 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_IRON_THORNS, 1
# 198 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Rock_Page4_4:
# 200 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_KABUTO, 1
# 201 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Rock_Page4_5:
# 203 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_KLAWF, 1
# 204 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Rock_Page4_6:
# 206 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_LARVITAR, 1
# 207 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Rock_Page4_7:
# 209 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Rock_Page3
	return

Auto_EventScript_Pokemon_Shop_Rock_Page4_8:
# 211 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Rock_Page5
	return


Auto_EventScript_Pokemon_Shop_Rock_Page5::
# 219 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Rock_Page5
# 220 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 222 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Rock_Page5_2
# 225 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Rock_Page5_3
# 228 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Rock_Page5_4
# 231 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Rock_Page5_5
# 234 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Rock_Page5_6
# 237 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Rock_Page5_7
# 239 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Rock_Page5_8
# 242 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page4
	return

Auto_EventScript_Pokemon_Shop_Rock_Page5_2:
# 223 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_LILEEP, 1
# 224 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Rock_Page5_3:
# 226 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_LUNATONE, 1
# 227 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Rock_Page5_4:
# 229 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_MINIOR, 1
# 230 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Rock_Page5_5:
# 232 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_NACLI, 1
# 233 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Rock_Page5_6:
# 235 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_NIHILEGO, 1
# 236 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Rock_Page5_7:
# 238 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Rock_Page4
	return

Auto_EventScript_Pokemon_Shop_Rock_Page5_8:
# 240 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Rock_Page6
	return


Auto_EventScript_Pokemon_Shop_Rock_Page6::
# 248 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Rock_Page6
# 249 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 251 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Rock_Page6_2
# 254 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Rock_Page6_3
# 257 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Rock_Page6_4
# 260 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Rock_Page6_5
# 263 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Rock_Page6_6
# 266 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Rock_Page6_7
# 268 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Rock_Page6_8
# 271 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page4
	return

Auto_EventScript_Pokemon_Shop_Rock_Page6_2:
# 252 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_NOSEPASS, 1
# 253 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Rock_Page6_3:
# 255 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_OMANYTE, 1
# 256 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Rock_Page6_4:
# 258 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_ONIX, 1
# 259 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Rock_Page6_5:
# 261 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_RELICANTH, 1
# 262 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Rock_Page6_6:
# 264 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_RHYHORN, 1
# 265 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Rock_Page6_7:
# 267 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Rock_Page5
	return

Auto_EventScript_Pokemon_Shop_Rock_Page6_8:
# 269 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Rock_Page7
	return


Auto_EventScript_Pokemon_Shop_Rock_Page7::
# 277 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Rock_Page7
# 278 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 280 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Rock_Page7_2
# 283 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Rock_Page7_3
# 286 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Rock_Page7_4
# 289 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Rock_Page7_5
# 292 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Rock_Page7_6
# 295 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Rock_Page7_7
# 297 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Rock_Page7_8
# 300 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page4
	return

Auto_EventScript_Pokemon_Shop_Rock_Page7_2:
# 281 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_ROCKRUFF, 1
# 282 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Rock_Page7_3:
# 284 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_ROGGENROLA, 1
# 285 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Rock_Page7_4:
# 287 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_ROLYCOLY, 1
# 288 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Rock_Page7_5:
# 290 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SHIELDON, 1
# 291 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Rock_Page7_6:
# 293 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SHUCKLE, 1
# 294 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Rock_Page7_7:
# 296 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Rock_Page6
	return

Auto_EventScript_Pokemon_Shop_Rock_Page7_8:
# 298 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Rock_Page8
	return


Auto_EventScript_Pokemon_Shop_Rock_Page8::
# 306 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Rock_Page8
# 307 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 309 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Rock_Page8_2
# 312 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Rock_Page8_3
# 315 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Rock_Page8_4
# 318 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Rock_Page8_5
# 321 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Rock_Page8_6
# 324 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Rock_Page8_7
# 326 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Rock_Page8_8
# 329 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page4
	return

Auto_EventScript_Pokemon_Shop_Rock_Page8_2:
# 310 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SOLROCK, 1
# 311 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Rock_Page8_3:
# 313 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_STAKATAKA, 1
# 314 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Rock_Page8_4:
# 316 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_STONJOURNER, 1
# 317 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Rock_Page8_5:
# 319 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_TIRTOUGA, 1
# 320 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Rock_Page8_6:
# 322 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_TYRUNT, 1
# 323 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Rock_Page8_7:
# 325 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Rock_Page7
	return

Auto_EventScript_Pokemon_Shop_Rock_Page8_8:
# 327 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Rock_Page1
	return


Auto_EventScript_Pokemon_Shop_Steel_Page1::
# 335 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Steel_Page1
# 336 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 338 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Steel_Page1_2
# 341 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Steel_Page1_3
# 344 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Steel_Page1_4
# 347 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Steel_Page1_5
# 350 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Steel_Page1_6
# 353 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Steel_Page1_7
# 355 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Steel_Page1_8
# 358 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page4
	return

Auto_EventScript_Pokemon_Shop_Steel_Page1_2:
# 339 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_ARON, 1
# 340 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Steel_Page1_3:
# 342 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_BELDUM, 1
# 343 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Steel_Page1_4:
# 345 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_BRONZOR, 1
# 346 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Steel_Page1_5:
# 348 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_CELESTEELA, 1
# 349 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Steel_Page1_6:
# 351 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_CUFANT, 1
# 352 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Steel_Page1_7:
# 354 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Steel_Page6
	return

Auto_EventScript_Pokemon_Shop_Steel_Page1_8:
# 356 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Steel_Page2
	return


Auto_EventScript_Pokemon_Shop_Steel_Page2::
# 364 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Steel_Page2
# 365 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 367 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Steel_Page2_2
# 370 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Steel_Page2_3
# 373 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Steel_Page2_4
# 376 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Steel_Page2_5
# 379 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Steel_Page2_6
# 382 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Steel_Page2_7
# 384 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Steel_Page2_8
# 387 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page4
	return

Auto_EventScript_Pokemon_Shop_Steel_Page2_2:
# 368 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_DIGLETT_ALOLA, 1
# 369 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Steel_Page2_3:
# 371 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_DURALUDON, 1
# 372 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Steel_Page2_4:
# 374 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_DURANT, 1
# 375 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Steel_Page2_5:
# 377 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_FERROSEED, 1
# 378 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Steel_Page2_6:
# 380 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_HONEDGE, 1
# 381 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Steel_Page2_7:
# 383 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Steel_Page1
	return

Auto_EventScript_Pokemon_Shop_Steel_Page2_8:
# 385 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Steel_Page3
	return


Auto_EventScript_Pokemon_Shop_Steel_Page3::
# 393 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Steel_Page3
# 394 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 396 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Steel_Page3_2
# 399 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Steel_Page3_3
# 402 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Steel_Page3_4
# 405 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Steel_Page3_5
# 408 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Steel_Page3_6
# 411 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Steel_Page3_7
# 413 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Steel_Page3_8
# 416 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page4
	return

Auto_EventScript_Pokemon_Shop_Steel_Page3_2:
# 397 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_IRON_CROWN, 1
# 398 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Steel_Page3_3:
# 400 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_IRON_TREADS, 1
# 401 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Steel_Page3_4:
# 403 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_KARTANA, 1
# 404 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Steel_Page3_5:
# 406 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_KLEFKI, 1
# 407 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Steel_Page3_6:
# 409 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_KLINK, 1
# 410 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Steel_Page3_7:
# 412 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Steel_Page2
	return

Auto_EventScript_Pokemon_Shop_Steel_Page3_8:
# 414 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Steel_Page4
	return


Auto_EventScript_Pokemon_Shop_Steel_Page4::
# 422 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Steel_Page4
# 423 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 425 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Steel_Page4_2
# 428 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Steel_Page4_3
# 431 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Steel_Page4_4
# 434 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Steel_Page4_5
# 437 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Steel_Page4_6
# 440 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Steel_Page4_7
# 442 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Steel_Page4_8
# 445 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page4
	return

Auto_EventScript_Pokemon_Shop_Steel_Page4_2:
# 426 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_MAGNEMITE, 1
# 427 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Steel_Page4_3:
# 429 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_MAWILE, 1
# 430 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Steel_Page4_4:
# 432 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_MEOWTH_GALAR, 1
# 433 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Steel_Page4_5:
# 435 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_ORTHWORM, 1
# 436 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Steel_Page4_6:
# 438 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_PAWNIARD, 1
# 439 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Steel_Page4_7:
# 441 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Steel_Page3
	return

Auto_EventScript_Pokemon_Shop_Steel_Page4_8:
# 443 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Steel_Page5
	return


Auto_EventScript_Pokemon_Shop_Steel_Page5::
# 451 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Steel_Page5
# 452 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 454 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Steel_Page5_2
# 457 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Steel_Page5_3
# 460 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Steel_Page5_4
# 463 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Steel_Page5_5
# 466 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Steel_Page5_6
# 469 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Steel_Page5_7
# 471 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Steel_Page5_8
# 474 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page4
	return

Auto_EventScript_Pokemon_Shop_Steel_Page5_2:
# 455 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SANDSHREW_ALOLA, 1
# 456 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Steel_Page5_3:
# 458 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SHIELDON, 1
# 459 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Steel_Page5_4:
# 461 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SKARMORY, 1
# 462 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Steel_Page5_5:
# 464 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_STAKATAKA, 1
# 465 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Steel_Page5_6:
# 467 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_STUNFISK_GALAR, 1
# 468 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Steel_Page5_7:
# 470 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Steel_Page4
	return

Auto_EventScript_Pokemon_Shop_Steel_Page5_8:
# 472 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Steel_Page6
	return


Auto_EventScript_Pokemon_Shop_Steel_Page6::
# 480 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Steel_Page6
# 481 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 483 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Steel_Page6_2
# 486 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Steel_Page6_3
# 489 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Steel_Page6_4
# 492 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Steel_Page6_5
# 494 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Steel_Page6_6
# 497 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page4
	return

Auto_EventScript_Pokemon_Shop_Steel_Page6_2:
# 484 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_TINKATINK, 1
# 485 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Steel_Page6_3:
# 487 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_TOGEDEMARU, 1
# 488 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Steel_Page6_4:
# 490 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_VAROOM, 1
# 491 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Steel_Page6_5:
# 493 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Steel_Page5
	return

Auto_EventScript_Pokemon_Shop_Steel_Page6_6:
# 495 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Steel_Page1
	return


Auto_EventScript_Pokemon_Shop_Water_Page1::
# 503 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Water_Page1
# 504 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 506 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Water_Page1_2
# 509 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Water_Page1_3
# 512 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Water_Page1_4
# 515 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Water_Page1_5
# 518 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Water_Page1_6
# 521 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Water_Page1_7
# 523 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Water_Page1_8
# 526 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page4
	return

Auto_EventScript_Pokemon_Shop_Water_Page1_2:
# 507 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_ALOMOMOLA, 1
# 508 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page1_3:
# 510 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_ARCTOVISH, 1
# 511 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page1_4:
# 513 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_ARROKUDA, 1
# 514 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page1_5:
# 516 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_BARBOACH, 1
# 517 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page1_6:
# 519 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_BASCULIN, 1
# 520 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page1_7:
# 522 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Water_Page15
	return

Auto_EventScript_Pokemon_Shop_Water_Page1_8:
# 524 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Water_Page2
	return


Auto_EventScript_Pokemon_Shop_Water_Page2::
# 532 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Water_Page2
# 533 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 535 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Water_Page2_2
# 538 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Water_Page2_3
# 541 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Water_Page2_4
# 544 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Water_Page2_5
# 547 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Water_Page2_6
# 550 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Water_Page2_7
# 552 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Water_Page2_8
# 555 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page4
	return

Auto_EventScript_Pokemon_Shop_Water_Page2_2:
# 536 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_BINACLE, 1
# 537 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page2_3:
# 539 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_BRUXISH, 1
# 540 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page2_4:
# 542 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_BUIZEL, 1
# 543 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page2_5:
# 545 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_CARVANHA, 1
# 546 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page2_6:
# 548 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_CHEWTLE, 1
# 549 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page2_7:
# 551 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Water_Page1
	return

Auto_EventScript_Pokemon_Shop_Water_Page2_8:
# 553 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Water_Page3
	return


Auto_EventScript_Pokemon_Shop_Water_Page3::
# 561 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Water_Page3
# 562 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 564 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Water_Page3_2
# 567 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Water_Page3_3
# 570 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Water_Page3_4
# 573 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Water_Page3_5
# 576 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Water_Page3_6
# 579 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Water_Page3_7
# 581 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Water_Page3_8
# 584 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page4
	return

Auto_EventScript_Pokemon_Shop_Water_Page3_2:
# 565 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_CHINCHOU, 1
# 566 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page3_3:
# 568 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_CLAMPERL, 1
# 569 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page3_4:
# 571 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_CLAUNCHER, 1
# 572 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page3_5:
# 574 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_CORPHISH, 1
# 575 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page3_6:
# 577 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_CORSOLA, 1
# 578 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page3_7:
# 580 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Water_Page2
	return

Auto_EventScript_Pokemon_Shop_Water_Page3_8:
# 582 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Water_Page4
	return


Auto_EventScript_Pokemon_Shop_Water_Page4::
# 590 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Water_Page4
# 591 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 593 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Water_Page4_2
# 596 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Water_Page4_3
# 599 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Water_Page4_4
# 602 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Water_Page4_5
# 605 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Water_Page4_6
# 608 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Water_Page4_7
# 610 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Water_Page4_8
# 613 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page4
	return

Auto_EventScript_Pokemon_Shop_Water_Page4_2:
# 594 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_CRAMORANT, 1
# 595 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page4_3:
# 597 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_DEWPIDER, 1
# 598 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page4_4:
# 600 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_DONDOZO, 1
# 601 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page4_5:
# 603 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_DRACOVISH, 1
# 604 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page4_6:
# 606 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_DUCKLETT, 1
# 607 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page4_7:
# 609 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Water_Page3
	return

Auto_EventScript_Pokemon_Shop_Water_Page4_8:
# 611 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Water_Page5
	return


Auto_EventScript_Pokemon_Shop_Water_Page5::
# 619 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Water_Page5
# 620 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 622 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Water_Page5_2
# 625 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Water_Page5_3
# 628 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Water_Page5_4
# 631 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Water_Page5_5
# 634 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Water_Page5_6
# 637 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Water_Page5_7
# 639 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Water_Page5_8
# 642 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page4
	return

Auto_EventScript_Pokemon_Shop_Water_Page5_2:
# 623 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_FEEBAS, 1
# 624 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page5_3:
# 626 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_FINIZEN, 1
# 627 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page5_4:
# 629 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_FINNEON, 1
# 630 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page5_5:
# 632 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_FRILLISH, 1
# 633 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page5_6:
# 635 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_FROAKIE, 1
# 636 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page5_7:
# 638 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Water_Page4
	return

Auto_EventScript_Pokemon_Shop_Water_Page5_8:
# 640 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Water_Page6
	return


Auto_EventScript_Pokemon_Shop_Water_Page6::
# 648 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Water_Page6
# 649 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 651 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Water_Page6_2
# 654 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Water_Page6_3
# 657 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Water_Page6_4
# 660 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Water_Page6_5
# 663 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Water_Page6_6
# 666 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Water_Page6_7
# 668 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Water_Page6_8
# 671 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page4
	return

Auto_EventScript_Pokemon_Shop_Water_Page6_2:
# 652 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_GOLDEEN, 1
# 653 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page6_3:
# 655 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_HORSEA, 1
# 656 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page6_4:
# 658 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_IRON_BUNDLE, 1
# 659 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page6_5:
# 661 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_KABUTO, 1
# 662 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page6_6:
# 664 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_KRABBY, 1
# 665 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page6_7:
# 667 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Water_Page5
	return

Auto_EventScript_Pokemon_Shop_Water_Page6_8:
# 669 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Water_Page7
	return


Auto_EventScript_Pokemon_Shop_Water_Page7::
# 677 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Water_Page7
# 678 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 680 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Water_Page7_2
# 683 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Water_Page7_3
# 686 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Water_Page7_4
# 689 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Water_Page7_5
# 692 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Water_Page7_6
# 695 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Water_Page7_7
# 697 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Water_Page7_8
# 700 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page4
	return

Auto_EventScript_Pokemon_Shop_Water_Page7_2:
# 681 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_LAPRAS, 1
# 682 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page7_3:
# 684 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_LOTAD, 1
# 685 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page7_4:
# 687 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_LUVDISC, 1
# 688 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page7_5:
# 690 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_MAGIKARP, 1
# 691 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page7_6:
# 693 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_MANTYKE, 1
# 694 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page7_7:
# 696 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Water_Page6
	return

Auto_EventScript_Pokemon_Shop_Water_Page7_8:
# 698 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Water_Page8
	return


Auto_EventScript_Pokemon_Shop_Water_Page8::
# 706 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Water_Page8
# 707 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 709 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Water_Page8_2
# 712 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Water_Page8_3
# 715 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Water_Page8_4
# 718 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Water_Page8_5
# 721 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Water_Page8_6
# 724 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Water_Page8_7
# 726 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Water_Page8_8
# 729 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page4
	return

Auto_EventScript_Pokemon_Shop_Water_Page8_2:
# 710 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_MAREANIE, 1
# 711 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page8_3:
# 713 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_MUDKIP, 1
# 714 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page8_4:
# 716 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_OMANYTE, 1
# 717 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page8_5:
# 719 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_OSHAWOTT, 1
# 720 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page8_6:
# 722 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_PANPOUR, 1
# 723 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page8_7:
# 725 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Water_Page7
	return

Auto_EventScript_Pokemon_Shop_Water_Page8_8:
# 727 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Water_Page9
	return


Auto_EventScript_Pokemon_Shop_Water_Page9::
# 735 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Water_Page9
# 736 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 738 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Water_Page9_2
# 741 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Water_Page9_3
# 744 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Water_Page9_4
# 747 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Water_Page9_5
# 750 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Water_Page9_6
# 753 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Water_Page9_7
# 755 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Water_Page9_8
# 758 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page4
	return

Auto_EventScript_Pokemon_Shop_Water_Page9_2:
# 739 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_PIPLUP, 1
# 740 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page9_3:
# 742 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_POLIWAG, 1
# 743 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page9_4:
# 745 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_POPPLIO, 1
# 746 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page9_5:
# 748 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_PSYDUCK, 1
# 749 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page9_6:
# 751 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_PYUKUMUKU, 1
# 752 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page9_7:
# 754 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Water_Page8
	return

Auto_EventScript_Pokemon_Shop_Water_Page9_8:
# 756 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Water_Page10
	return


Auto_EventScript_Pokemon_Shop_Water_Page10::
# 764 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Water_Page10
# 765 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 767 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Water_Page10_2
# 770 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Water_Page10_3
# 773 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Water_Page10_4
# 776 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Water_Page10_5
# 779 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Water_Page10_6
# 782 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Water_Page10_7
# 784 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Water_Page10_8
# 787 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page4
	return

Auto_EventScript_Pokemon_Shop_Water_Page10_2:
# 768 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_QUAXLY, 1
# 769 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page10_3:
# 771 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_QWILFISH, 1
# 772 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page10_4:
# 774 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_RELICANTH, 1
# 775 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page10_5:
# 777 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_REMORAID, 1
# 778 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page10_6:
# 780 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SEEL, 1
# 781 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page10_7:
# 783 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Water_Page9
	return

Auto_EventScript_Pokemon_Shop_Water_Page10_8:
# 785 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Water_Page11
	return


Auto_EventScript_Pokemon_Shop_Water_Page11::
# 793 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Water_Page11
# 794 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 796 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Water_Page11_2
# 799 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Water_Page11_3
# 802 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Water_Page11_4
# 805 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Water_Page11_5
# 808 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Water_Page11_6
# 811 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Water_Page11_7
# 813 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Water_Page11_8
# 816 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page4
	return

Auto_EventScript_Pokemon_Shop_Water_Page11_2:
# 797 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SHELLDER, 1
# 798 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page11_3:
# 800 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SHELLOS, 1
# 801 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page11_4:
# 803 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SKRELP, 1
# 804 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page11_5:
# 806 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SLOWPOKE, 1
# 807 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page11_6:
# 809 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SOBBLE, 1
# 810 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page11_7:
# 812 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Water_Page10
	return

Auto_EventScript_Pokemon_Shop_Water_Page11_8:
# 814 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Water_Page12
	return


Auto_EventScript_Pokemon_Shop_Water_Page12::
# 822 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Water_Page12
# 823 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 825 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Water_Page12_2
# 828 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Water_Page12_3
# 831 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Water_Page12_4
# 834 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Water_Page12_5
# 837 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Water_Page12_6
# 840 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Water_Page12_7
# 842 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Water_Page12_8
# 845 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page4
	return

Auto_EventScript_Pokemon_Shop_Water_Page12_2:
# 826 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SPHEAL, 1
# 827 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page12_3:
# 829 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SQUIRTLE, 1
# 830 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page12_4:
# 832 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_STARYU, 1
# 833 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page12_5:
# 835 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SURSKIT, 1
# 836 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page12_6:
# 838 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_TATSUGIRI, 1
# 839 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page12_7:
# 841 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Water_Page11
	return

Auto_EventScript_Pokemon_Shop_Water_Page12_8:
# 843 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Water_Page13
	return


Auto_EventScript_Pokemon_Shop_Water_Page13::
# 851 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Water_Page13
# 852 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 854 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Water_Page13_2
# 857 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Water_Page13_3
# 860 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Water_Page13_4
# 863 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Water_Page13_5
# 866 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Water_Page13_6
# 869 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Water_Page13_7
# 871 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Water_Page13_8
# 874 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page4
	return

Auto_EventScript_Pokemon_Shop_Water_Page13_2:
# 855 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_TENTACOOL, 1
# 856 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page13_3:
# 858 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_TIRTOUGA, 1
# 859 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page13_4:
# 861 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_TOTODILE, 1
# 862 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page13_5:
# 864 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_TYMPOLE, 1
# 865 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page13_6:
# 867 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_VELUZA, 1
# 868 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page13_7:
# 870 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Water_Page12
	return

Auto_EventScript_Pokemon_Shop_Water_Page13_8:
# 872 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Water_Page14
	return


Auto_EventScript_Pokemon_Shop_Water_Page14::
# 880 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Water_Page14
# 881 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 883 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Water_Page14_2
# 886 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Water_Page14_3
# 889 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Water_Page14_4
# 892 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Water_Page14_5
# 895 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Water_Page14_6
# 898 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Water_Page14_7
# 900 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Water_Page14_8
# 903 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page4
	return

Auto_EventScript_Pokemon_Shop_Water_Page14_2:
# 884 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_WAILMER, 1
# 885 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page14_3:
# 887 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_WALKING_WAKE, 1
# 888 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page14_4:
# 890 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_WIGLETT, 1
# 891 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page14_5:
# 893 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_WIMPOD, 1
# 894 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page14_6:
# 896 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_WINGULL, 1
# 897 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page14_7:
# 899 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Water_Page13
	return

Auto_EventScript_Pokemon_Shop_Water_Page14_8:
# 901 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Water_Page15
	return


Auto_EventScript_Pokemon_Shop_Water_Page15::
# 909 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Water_Page15
# 910 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 912 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Water_Page15_2
# 915 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Water_Page15_3
# 918 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Water_Page15_4
# 920 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Water_Page15_5
# 923 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page4
	return

Auto_EventScript_Pokemon_Shop_Water_Page15_2:
# 913 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_WISHIWASHI, 1
# 914 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page15_3:
# 916 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_WOOPER, 1
# 917 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Water_Page15_4:
# 919 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Water_Page14
	return

Auto_EventScript_Pokemon_Shop_Water_Page15_5:
# 921 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Water_Page1
	return


Auto_EventScript_Pokemon_Shop_Ground_Page1::
# 929 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Ground_Page1
# 930 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 932 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Ground_Page1_2
# 935 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Ground_Page1_3
# 938 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Ground_Page1_4
# 941 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Ground_Page1_5
# 944 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Ground_Page1_6
# 947 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Ground_Page1_7
# 949 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Ground_Page1_8
# 952 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page3
	return

Auto_EventScript_Pokemon_Shop_Ground_Page1_2:
# 933 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_BALTOY, 1
# 934 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ground_Page1_3:
# 936 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_BARBOACH, 1
# 937 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ground_Page1_4:
# 939 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_CUBONE, 1
# 940 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ground_Page1_5:
# 942 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_DIGLETT, 1
# 943 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ground_Page1_6:
# 945 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_DIGLETT_ALOLA, 1
# 946 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ground_Page1_7:
# 948 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Ground_Page7
	return

Auto_EventScript_Pokemon_Shop_Ground_Page1_8:
# 950 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Ground_Page2
	return


Auto_EventScript_Pokemon_Shop_Ground_Page2::
# 958 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Ground_Page2
# 959 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 961 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Ground_Page2_2
# 964 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Ground_Page2_3
# 967 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Ground_Page2_4
# 970 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Ground_Page2_5
# 973 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Ground_Page2_6
# 976 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Ground_Page2_7
# 978 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Ground_Page2_8
# 981 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page3
	return

Auto_EventScript_Pokemon_Shop_Ground_Page2_2:
# 962 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_DRILBUR, 1
# 963 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ground_Page2_3:
# 965 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_GEODUDE, 1
# 966 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ground_Page2_4:
# 968 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_GIBLE, 1
# 969 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ground_Page2_5:
# 971 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_GLIGAR, 1
# 972 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ground_Page2_6:
# 974 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_GOLETT, 1
# 975 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ground_Page2_7:
# 977 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Ground_Page1
	return

Auto_EventScript_Pokemon_Shop_Ground_Page2_8:
# 979 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Ground_Page3
	return


Auto_EventScript_Pokemon_Shop_Ground_Page3::
# 987 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Ground_Page3
# 988 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 990 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Ground_Page3_2
# 993 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Ground_Page3_3
# 996 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Ground_Page3_4
# 999 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Ground_Page3_5
# 1002 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Ground_Page3_6
# 1005 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Ground_Page3_7
# 1007 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Ground_Page3_8
# 1010 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page3
	return

Auto_EventScript_Pokemon_Shop_Ground_Page3_2:
# 991 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_GREAT_TUSK, 1
# 992 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ground_Page3_3:
# 994 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_HIPPOPOTAS, 1
# 995 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ground_Page3_4:
# 997 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_IRON_TREADS, 1
# 998 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ground_Page3_5:
# 1000 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_LARVITAR, 1
# 1001 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ground_Page3_6:
# 1003 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_MUDBRAY, 1
# 1004 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ground_Page3_7:
# 1006 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Ground_Page2
	return

Auto_EventScript_Pokemon_Shop_Ground_Page3_8:
# 1008 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Ground_Page4
	return


Auto_EventScript_Pokemon_Shop_Ground_Page4::
# 1016 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Ground_Page4
# 1017 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 1019 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Ground_Page4_2
# 1022 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Ground_Page4_3
# 1025 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Ground_Page4_4
# 1028 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Ground_Page4_5
# 1031 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Ground_Page4_6
# 1034 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Ground_Page4_7
# 1036 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Ground_Page4_8
# 1039 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page3
	return

Auto_EventScript_Pokemon_Shop_Ground_Page4_2:
# 1020 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_NINCADA, 1
# 1021 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ground_Page4_3:
# 1023 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_NUMEL, 1
# 1024 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ground_Page4_4:
# 1026 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_ONIX, 1
# 1027 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ground_Page4_5:
# 1029 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_PHANPY, 1
# 1030 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ground_Page4_6:
# 1032 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_RHYHORN, 1
# 1033 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ground_Page4_7:
# 1035 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Ground_Page3
	return

Auto_EventScript_Pokemon_Shop_Ground_Page4_8:
# 1037 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Ground_Page5
	return


Auto_EventScript_Pokemon_Shop_Ground_Page5::
# 1045 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Ground_Page5
# 1046 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 1048 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Ground_Page5_2
# 1051 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Ground_Page5_3
# 1054 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Ground_Page5_4
# 1057 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Ground_Page5_5
# 1060 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Ground_Page5_6
# 1063 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Ground_Page5_7
# 1065 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Ground_Page5_8
# 1068 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page3
	return

Auto_EventScript_Pokemon_Shop_Ground_Page5_2:
# 1049 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SANDILE, 1
# 1050 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ground_Page5_3:
# 1052 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SANDSHREW, 1
# 1053 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ground_Page5_4:
# 1055 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SANDY_SHOCKS, 1
# 1056 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ground_Page5_5:
# 1058 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SANDYGAST, 1
# 1059 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ground_Page5_6:
# 1061 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SILICOBRA, 1
# 1062 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ground_Page5_7:
# 1064 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Ground_Page4
	return

Auto_EventScript_Pokemon_Shop_Ground_Page5_8:
# 1066 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Ground_Page6
	return


Auto_EventScript_Pokemon_Shop_Ground_Page6::
# 1074 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Ground_Page6
# 1075 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 1077 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Ground_Page6_2
# 1080 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Ground_Page6_3
# 1083 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Ground_Page6_4
# 1086 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Ground_Page6_5
# 1089 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Ground_Page6_6
# 1092 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Ground_Page6_7
# 1094 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Ground_Page6_8
# 1097 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page3
	return

Auto_EventScript_Pokemon_Shop_Ground_Page6_2:
# 1078 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_STUNFISK, 1
# 1079 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ground_Page6_3:
# 1081 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_STUNFISK_GALAR, 1
# 1082 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ground_Page6_4:
# 1084 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SWINUB, 1
# 1085 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ground_Page6_5:
# 1087 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_TOEDSCOOL, 1
# 1088 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ground_Page6_6:
# 1090 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_TRAPINCH, 1
# 1091 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ground_Page6_7:
# 1093 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Ground_Page5
	return

Auto_EventScript_Pokemon_Shop_Ground_Page6_8:
# 1095 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Ground_Page7
	return


Auto_EventScript_Pokemon_Shop_Ground_Page7::
# 1103 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Ground_Page7
# 1104 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 1106 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Ground_Page7_2
# 1109 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Ground_Page7_3
# 1112 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Ground_Page7_4
# 1115 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Ground_Page7_5
# 1117 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Ground_Page7_6
# 1120 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page3
	return

Auto_EventScript_Pokemon_Shop_Ground_Page7_2:
# 1107 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_WOOPER, 1
# 1108 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ground_Page7_3:
# 1110 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_WOOPER_PALDEA, 1
# 1111 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ground_Page7_4:
# 1113 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_YAMASK_GALAR, 1
# 1114 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ground_Page7_5:
# 1116 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Ground_Page6
	return

Auto_EventScript_Pokemon_Shop_Ground_Page7_6:
# 1118 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Ground_Page1
	return


Auto_EventScript_Pokemon_Shop_Ice_Page1::
# 1126 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Ice_Page1
# 1127 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 1129 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Ice_Page1_2
# 1132 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Ice_Page1_3
# 1135 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Ice_Page1_4
# 1138 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Ice_Page1_5
# 1141 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Ice_Page1_6
# 1144 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Ice_Page1_7
# 1146 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Ice_Page1_8
# 1149 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page3
	return

Auto_EventScript_Pokemon_Shop_Ice_Page1_2:
# 1130 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_AMAURA, 1
# 1131 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ice_Page1_3:
# 1133 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_ARCTOVISH, 1
# 1134 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ice_Page1_4:
# 1136 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_ARCTOZOLT, 1
# 1137 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ice_Page1_5:
# 1139 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_BERGMITE, 1
# 1140 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ice_Page1_6:
# 1142 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_CETODDLE, 1
# 1143 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ice_Page1_7:
# 1145 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Ice_Page5
	return

Auto_EventScript_Pokemon_Shop_Ice_Page1_8:
# 1147 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Ice_Page2
	return


Auto_EventScript_Pokemon_Shop_Ice_Page2::
# 1155 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Ice_Page2
# 1156 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 1158 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Ice_Page2_2
# 1161 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Ice_Page2_3
# 1164 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Ice_Page2_4
# 1167 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Ice_Page2_5
# 1170 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Ice_Page2_6
# 1173 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Ice_Page2_7
# 1175 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Ice_Page2_8
# 1178 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page3
	return

Auto_EventScript_Pokemon_Shop_Ice_Page2_2:
# 1159 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_CRYOGONAL, 1
# 1160 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ice_Page2_3:
# 1162 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_CUBCHOO, 1
# 1163 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ice_Page2_4:
# 1165 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_DARUMAKA_GALAR, 1
# 1166 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ice_Page2_5:
# 1168 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_DELIBIRD, 1
# 1169 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ice_Page2_6:
# 1171 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_EISCUE, 1
# 1172 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ice_Page2_7:
# 1174 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Ice_Page1
	return

Auto_EventScript_Pokemon_Shop_Ice_Page2_8:
# 1176 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Ice_Page3
	return


Auto_EventScript_Pokemon_Shop_Ice_Page3::
# 1184 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Ice_Page3
# 1185 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 1187 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Ice_Page3_2
# 1190 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Ice_Page3_3
# 1193 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Ice_Page3_4
# 1196 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Ice_Page3_5
# 1199 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Ice_Page3_6
# 1202 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Ice_Page3_7
# 1204 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Ice_Page3_8
# 1207 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page3
	return

Auto_EventScript_Pokemon_Shop_Ice_Page3_2:
# 1188 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_FRIGIBAX, 1
# 1189 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ice_Page3_3:
# 1191 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_IRON_BUNDLE, 1
# 1192 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ice_Page3_4:
# 1194 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_LAPRAS, 1
# 1195 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ice_Page3_5:
# 1197 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SANDSHREW_ALOLA, 1
# 1198 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ice_Page3_6:
# 1200 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SMOOCHUM, 1
# 1201 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ice_Page3_7:
# 1203 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Ice_Page2
	return

Auto_EventScript_Pokemon_Shop_Ice_Page3_8:
# 1205 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Ice_Page4
	return


Auto_EventScript_Pokemon_Shop_Ice_Page4::
# 1213 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Ice_Page4
# 1214 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 1216 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Ice_Page4_2
# 1219 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Ice_Page4_3
# 1222 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Ice_Page4_4
# 1225 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Ice_Page4_5
# 1228 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Ice_Page4_6
# 1231 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Ice_Page4_7
# 1233 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Ice_Page4_8
# 1236 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page3
	return

Auto_EventScript_Pokemon_Shop_Ice_Page4_2:
# 1217 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SNEASEL, 1
# 1218 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ice_Page4_3:
# 1220 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SNOM, 1
# 1221 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ice_Page4_4:
# 1223 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SNORUNT, 1
# 1224 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ice_Page4_5:
# 1226 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SNOVER, 1
# 1227 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ice_Page4_6:
# 1229 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SPHEAL, 1
# 1230 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ice_Page4_7:
# 1232 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Ice_Page3
	return

Auto_EventScript_Pokemon_Shop_Ice_Page4_8:
# 1234 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Ice_Page5
	return


Auto_EventScript_Pokemon_Shop_Ice_Page5::
# 1242 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Ice_Page5
# 1243 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 1245 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Ice_Page5_2
# 1248 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Ice_Page5_3
# 1251 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Ice_Page5_4
# 1254 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Ice_Page5_5
# 1256 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Ice_Page5_6
# 1259 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page3
	return

Auto_EventScript_Pokemon_Shop_Ice_Page5_2:
# 1246 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SWINUB, 1
# 1247 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ice_Page5_3:
# 1249 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_VANILLITE, 1
# 1250 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ice_Page5_4:
# 1252 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_VULPIX_ALOLA, 1
# 1253 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ice_Page5_5:
# 1255 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Ice_Page4
	return

Auto_EventScript_Pokemon_Shop_Ice_Page5_6:
# 1257 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Ice_Page1
	return


Auto_EventScript_Pokemon_Shop_Normal_Page1::
# 1265 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Normal_Page1
# 1266 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 1268 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Normal_Page1_2
# 1271 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Normal_Page1_3
# 1274 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Normal_Page1_4
# 1277 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Normal_Page1_5
# 1280 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Normal_Page1_6
# 1283 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Normal_Page1_7
# 1285 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Normal_Page1_8
# 1288 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page3
	return

Auto_EventScript_Pokemon_Shop_Normal_Page1_2:
# 1269 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_AIPOM, 1
# 1270 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page1_3:
# 1272 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_AUDINO, 1
# 1273 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page1_4:
# 1275 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_AZURILL, 1
# 1276 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page1_5:
# 1278 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_BIDOOF, 1
# 1279 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page1_6:
# 1281 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_BOUFFALANT, 1
# 1282 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page1_7:
# 1284 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Normal_Page15
	return

Auto_EventScript_Pokemon_Shop_Normal_Page1_8:
# 1286 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Normal_Page2
	return


Auto_EventScript_Pokemon_Shop_Normal_Page2::
# 1294 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Normal_Page2
# 1295 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 1297 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Normal_Page2_2
# 1300 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Normal_Page2_3
# 1303 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Normal_Page2_4
# 1306 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Normal_Page2_5
# 1309 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Normal_Page2_6
# 1312 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Normal_Page2_7
# 1314 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Normal_Page2_8
# 1317 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page3
	return

Auto_EventScript_Pokemon_Shop_Normal_Page2_2:
# 1298 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_BUNEARY, 1
# 1299 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page2_3:
# 1301 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_BUNNELBY, 1
# 1302 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page2_4:
# 1304 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_CASTFORM, 1
# 1305 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page2_5:
# 1307 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_CHATOT, 1
# 1308 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page2_6:
# 1310 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_CYCLIZAR, 1
# 1311 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page2_7:
# 1313 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Normal_Page1
	return

Auto_EventScript_Pokemon_Shop_Normal_Page2_8:
# 1315 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Normal_Page3
	return


Auto_EventScript_Pokemon_Shop_Normal_Page3::
# 1323 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Normal_Page3
# 1324 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 1326 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Normal_Page3_2
# 1329 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Normal_Page3_3
# 1332 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Normal_Page3_4
# 1335 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Normal_Page3_5
# 1338 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Normal_Page3_6
# 1341 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Normal_Page3_7
# 1343 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Normal_Page3_8
# 1346 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page3
	return

Auto_EventScript_Pokemon_Shop_Normal_Page3_2:
# 1327 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_DEERLING, 1
# 1328 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page3_3:
# 1330 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_DITTO, 1
# 1331 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page3_4:
# 1333 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_DODUO, 1
# 1334 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page3_5:
# 1336 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_DRAMPA, 1
# 1337 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page3_6:
# 1339 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_DUNSPARCE, 1
# 1340 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page3_7:
# 1342 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Normal_Page2
	return

Auto_EventScript_Pokemon_Shop_Normal_Page3_8:
# 1344 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Normal_Page4
	return


Auto_EventScript_Pokemon_Shop_Normal_Page4::
# 1352 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Normal_Page4
# 1353 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 1355 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Normal_Page4_2
# 1358 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Normal_Page4_3
# 1361 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Normal_Page4_4
# 1364 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Normal_Page4_5
# 1367 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Normal_Page4_6
# 1370 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Normal_Page4_7
# 1372 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Normal_Page4_8
# 1375 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page3
	return

Auto_EventScript_Pokemon_Shop_Normal_Page4_2:
# 1356 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_EEVEE, 1
# 1357 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page4_3:
# 1359 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_FARFETCHD, 1
# 1360 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page4_4:
# 1362 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_FLETCHLING, 1
# 1363 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page4_5:
# 1365 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_FURFROU, 1
# 1366 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page4_6:
# 1368 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_GIRAFARIG, 1
# 1369 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page4_7:
# 1371 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Normal_Page3
	return

Auto_EventScript_Pokemon_Shop_Normal_Page4_8:
# 1373 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Normal_Page5
	return


Auto_EventScript_Pokemon_Shop_Normal_Page5::
# 1381 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Normal_Page5
# 1382 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 1384 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Normal_Page5_2
# 1387 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Normal_Page5_3
# 1390 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Normal_Page5_4
# 1393 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Normal_Page5_5
# 1396 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Normal_Page5_6
# 1399 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Normal_Page5_7
# 1401 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Normal_Page5_8
# 1404 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page3
	return

Auto_EventScript_Pokemon_Shop_Normal_Page5_2:
# 1385 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_GLAMEOW, 1
# 1386 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page5_3:
# 1388 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_HAPPINY, 1
# 1389 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page5_4:
# 1391 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_HELIOPTILE, 1
# 1392 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page5_5:
# 1394 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_HOOTHOOT, 1
# 1395 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page5_6:
# 1397 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_IGGLYBUFF, 1
# 1398 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page5_7:
# 1400 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Normal_Page4
	return

Auto_EventScript_Pokemon_Shop_Normal_Page5_8:
# 1402 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Normal_Page6
	return


Auto_EventScript_Pokemon_Shop_Normal_Page6::
# 1410 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Normal_Page6
# 1411 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 1413 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Normal_Page6_2
# 1416 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Normal_Page6_3
# 1419 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Normal_Page6_4
# 1422 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Normal_Page6_5
# 1425 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Normal_Page6_6
# 1428 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Normal_Page6_7
# 1430 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Normal_Page6_8
# 1433 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page3
	return

Auto_EventScript_Pokemon_Shop_Normal_Page6_2:
# 1414 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_INDEEDEE, 1
# 1415 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page6_3:
# 1417 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_KANGASKHAN, 1
# 1418 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page6_4:
# 1420 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_KECLEON, 1
# 1421 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page6_5:
# 1423 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_KOMALA, 1
# 1424 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page6_6:
# 1426 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_LECHONK, 1
# 1427 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page6_7:
# 1429 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Normal_Page5
	return

Auto_EventScript_Pokemon_Shop_Normal_Page6_8:
# 1431 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Normal_Page7
	return


Auto_EventScript_Pokemon_Shop_Normal_Page7::
# 1439 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Normal_Page7
# 1440 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 1442 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Normal_Page7_2
# 1445 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Normal_Page7_3
# 1448 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Normal_Page7_4
# 1451 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Normal_Page7_5
# 1454 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Normal_Page7_6
# 1457 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Normal_Page7_7
# 1459 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Normal_Page7_8
# 1462 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page3
	return

Auto_EventScript_Pokemon_Shop_Normal_Page7_2:
# 1443 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_LICKITUNG, 1
# 1444 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page7_3:
# 1446 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_LILLIPUP, 1
# 1447 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page7_4:
# 1449 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_LITLEO, 1
# 1450 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page7_5:
# 1452 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_MEOWTH, 1
# 1453 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page7_6:
# 1455 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_MILTANK, 1
# 1456 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page7_7:
# 1458 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Normal_Page6
	return

Auto_EventScript_Pokemon_Shop_Normal_Page7_8:
# 1460 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Normal_Page8
	return


Auto_EventScript_Pokemon_Shop_Normal_Page8::
# 1468 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Normal_Page8
# 1469 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 1471 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Normal_Page8_2
# 1474 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Normal_Page8_3
# 1477 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Normal_Page8_4
# 1480 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Normal_Page8_5
# 1483 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Normal_Page8_6
# 1486 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Normal_Page8_7
# 1488 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Normal_Page8_8
# 1491 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page3
	return

Auto_EventScript_Pokemon_Shop_Normal_Page8_2:
# 1472 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_MINCCINO, 1
# 1473 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page8_3:
# 1475 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_MUNCHLAX, 1
# 1476 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page8_4:
# 1478 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_ORANGURU, 1
# 1479 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page8_5:
# 1481 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_PATRAT, 1
# 1482 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page8_6:
# 1484 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_PIDGEY, 1
# 1485 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page8_7:
# 1487 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Normal_Page7
	return

Auto_EventScript_Pokemon_Shop_Normal_Page8_8:
# 1489 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Normal_Page9
	return


Auto_EventScript_Pokemon_Shop_Normal_Page9::
# 1497 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Normal_Page9
# 1498 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 1500 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Normal_Page9_2
# 1503 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Normal_Page9_3
# 1506 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Normal_Page9_4
# 1509 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Normal_Page9_5
# 1512 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Normal_Page9_6
# 1515 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Normal_Page9_7
# 1517 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Normal_Page9_8
# 1520 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page3
	return

Auto_EventScript_Pokemon_Shop_Normal_Page9_2:
# 1501 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_PIDOVE, 1
# 1502 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page9_3:
# 1504 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_PIKIPEK, 1
# 1505 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page9_4:
# 1507 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_PORYGON, 1
# 1508 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page9_5:
# 1510 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_RATTATA, 1
# 1511 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page9_6:
# 1513 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_RATTATA_ALOLA, 1
# 1514 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page9_7:
# 1516 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Normal_Page8
	return

Auto_EventScript_Pokemon_Shop_Normal_Page9_8:
# 1518 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Normal_Page10
	return


Auto_EventScript_Pokemon_Shop_Normal_Page10::
# 1526 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Normal_Page10
# 1527 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 1529 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Normal_Page10_2
# 1532 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Normal_Page10_3
# 1535 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Normal_Page10_4
# 1538 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Normal_Page10_5
# 1541 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Normal_Page10_6
# 1544 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Normal_Page10_7
# 1546 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Normal_Page10_8
# 1549 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page3
	return

Auto_EventScript_Pokemon_Shop_Normal_Page10_2:
# 1530 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_RUFFLET, 1
# 1531 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page10_3:
# 1533 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SENTRET, 1
# 1534 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page10_4:
# 1536 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SHROODLE, 1
# 1537 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page10_5:
# 1539 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SKITTY, 1
# 1540 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page10_6:
# 1542 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SKWOVET, 1
# 1543 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page10_7:
# 1545 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Normal_Page9
	return

Auto_EventScript_Pokemon_Shop_Normal_Page10_8:
# 1547 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Normal_Page11
	return


Auto_EventScript_Pokemon_Shop_Normal_Page11::
# 1555 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Normal_Page11
# 1556 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 1558 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Normal_Page11_2
# 1561 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Normal_Page11_3
# 1564 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Normal_Page11_4
# 1567 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Normal_Page11_5
# 1570 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Normal_Page11_6
# 1573 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Normal_Page11_7
# 1575 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Normal_Page11_8
# 1578 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page3
	return

Auto_EventScript_Pokemon_Shop_Normal_Page11_2:
# 1559 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SLAKOTH, 1
# 1560 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page11_3:
# 1562 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SMEARGLE, 1
# 1563 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page11_4:
# 1565 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SMOLIV, 1
# 1566 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page11_5:
# 1568 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SPEAROW, 1
# 1569 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page11_6:
# 1571 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SPINDA, 1
# 1572 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page11_7:
# 1574 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Normal_Page10
	return

Auto_EventScript_Pokemon_Shop_Normal_Page11_8:
# 1576 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Normal_Page12
	return


Auto_EventScript_Pokemon_Shop_Normal_Page12::
# 1584 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Normal_Page12
# 1585 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 1587 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Normal_Page12_2
# 1590 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Normal_Page12_3
# 1593 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Normal_Page12_4
# 1596 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Normal_Page12_5
# 1599 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Normal_Page12_6
# 1602 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Normal_Page12_7
# 1604 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Normal_Page12_8
# 1607 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page3
	return

Auto_EventScript_Pokemon_Shop_Normal_Page12_2:
# 1588 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SQUAWKABILLY, 1
# 1589 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page12_3:
# 1591 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_STANTLER, 1
# 1592 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page12_4:
# 1594 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_STARLY, 1
# 1595 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page12_5:
# 1597 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_STUFFUL, 1
# 1598 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page12_6:
# 1600 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SWABLU, 1
# 1601 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page12_7:
# 1603 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Normal_Page11
	return

Auto_EventScript_Pokemon_Shop_Normal_Page12_8:
# 1605 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Normal_Page13
	return


Auto_EventScript_Pokemon_Shop_Normal_Page13::
# 1613 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Normal_Page13
# 1614 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 1616 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Normal_Page13_2
# 1619 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Normal_Page13_3
# 1622 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Normal_Page13_4
# 1625 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Normal_Page13_5
# 1628 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Normal_Page13_6
# 1631 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Normal_Page13_7
# 1633 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Normal_Page13_8
# 1636 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page3
	return

Auto_EventScript_Pokemon_Shop_Normal_Page13_2:
# 1617 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_TAILLOW, 1
# 1618 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page13_3:
# 1620 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_TANDEMAUS, 1
# 1621 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page13_4:
# 1623 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_TAUROS, 1
# 1624 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page13_5:
# 1626 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_TEDDIURSA, 1
# 1627 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page13_6:
# 1629 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_WHISMUR, 1
# 1630 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page13_7:
# 1632 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Normal_Page12
	return

Auto_EventScript_Pokemon_Shop_Normal_Page13_8:
# 1634 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Normal_Page14
	return


Auto_EventScript_Pokemon_Shop_Normal_Page14::
# 1642 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Normal_Page14
# 1643 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 1645 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Normal_Page14_2
# 1648 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Normal_Page14_3
# 1651 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Normal_Page14_4
# 1654 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Normal_Page14_5
# 1657 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Normal_Page14_6
# 1660 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Normal_Page14_7
# 1662 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Normal_Page14_8
# 1665 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page3
	return

Auto_EventScript_Pokemon_Shop_Normal_Page14_2:
# 1646 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_WOOLOO, 1
# 1647 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page14_3:
# 1649 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_YUNGOOS, 1
# 1650 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page14_4:
# 1652 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_ZANGOOSE, 1
# 1653 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page14_5:
# 1655 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_ZIGZAGOON, 1
# 1656 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page14_6:
# 1658 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_ZIGZAGOON_GALAR, 1
# 1659 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page14_7:
# 1661 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Normal_Page13
	return

Auto_EventScript_Pokemon_Shop_Normal_Page14_8:
# 1663 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Normal_Page15
	return


Auto_EventScript_Pokemon_Shop_Normal_Page15::
# 1671 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Normal_Page15
# 1672 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 1674 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Normal_Page15_2
# 1677 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Normal_Page15_3
# 1679 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Normal_Page15_4
# 1682 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page3
	return

Auto_EventScript_Pokemon_Shop_Normal_Page15_2:
# 1675 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_ZORUA_HISUI, 1
# 1676 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Normal_Page15_3:
# 1678 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Normal_Page14
	return

Auto_EventScript_Pokemon_Shop_Normal_Page15_4:
# 1680 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Normal_Page1
	return


Auto_EventScript_Pokemon_Shop_Poison_Page1::
# 1688 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Poison_Page1
# 1689 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 1691 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Poison_Page1_2
# 1694 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Poison_Page1_3
# 1697 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Poison_Page1_4
# 1700 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Poison_Page1_5
# 1703 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Poison_Page1_6
# 1706 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Poison_Page1_7
# 1708 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Poison_Page1_8
# 1711 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page3
	return

Auto_EventScript_Pokemon_Shop_Poison_Page1_2:
# 1692 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_BELLSPROUT, 1
# 1693 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Poison_Page1_3:
# 1695 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_BUDEW, 1
# 1696 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Poison_Page1_4:
# 1698 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_BULBASAUR, 1
# 1699 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Poison_Page1_5:
# 1701 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_CROAGUNK, 1
# 1702 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Poison_Page1_6:
# 1704 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_EKANS, 1
# 1705 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Poison_Page1_7:
# 1707 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Poison_Page8
	return

Auto_EventScript_Pokemon_Shop_Poison_Page1_8:
# 1709 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Poison_Page2
	return


Auto_EventScript_Pokemon_Shop_Poison_Page2::
# 1717 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Poison_Page2
# 1718 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 1720 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Poison_Page2_2
# 1723 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Poison_Page2_3
# 1726 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Poison_Page2_4
# 1729 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Poison_Page2_5
# 1732 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Poison_Page2_6
# 1735 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Poison_Page2_7
# 1737 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Poison_Page2_8
# 1740 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page3
	return

Auto_EventScript_Pokemon_Shop_Poison_Page2_2:
# 1721 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_FOONGUS, 1
# 1722 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Poison_Page2_3:
# 1724 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_GASTLY, 1
# 1725 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Poison_Page2_4:
# 1727 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_GLIMMET, 1
# 1728 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Poison_Page2_5:
# 1730 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_GRIMER, 1
# 1731 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Poison_Page2_6:
# 1733 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_GRIMER_ALOLA, 1
# 1734 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Poison_Page2_7:
# 1736 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Poison_Page1
	return

Auto_EventScript_Pokemon_Shop_Poison_Page2_8:
# 1738 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Poison_Page3
	return


Auto_EventScript_Pokemon_Shop_Poison_Page3::
# 1746 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Poison_Page3
# 1747 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 1749 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Poison_Page3_2
# 1752 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Poison_Page3_3
# 1755 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Poison_Page3_4
# 1758 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Poison_Page3_5
# 1761 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Poison_Page3_6
# 1764 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Poison_Page3_7
# 1766 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Poison_Page3_8
# 1769 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page3
	return

Auto_EventScript_Pokemon_Shop_Poison_Page3_2:
# 1750 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_GULPIN, 1
# 1751 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Poison_Page3_3:
# 1753 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_IRON_MOTH, 1
# 1754 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Poison_Page3_4:
# 1756 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_KOFFING, 1
# 1757 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Poison_Page3_5:
# 1759 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_MAREANIE, 1
# 1760 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Poison_Page3_6:
# 1762 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_NIDORAN_F, 1
# 1763 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Poison_Page3_7:
# 1765 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Poison_Page2
	return

Auto_EventScript_Pokemon_Shop_Poison_Page3_8:
# 1767 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Poison_Page4
	return


Auto_EventScript_Pokemon_Shop_Poison_Page4::
# 1775 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Poison_Page4
# 1776 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 1778 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Poison_Page4_2
# 1781 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Poison_Page4_3
# 1784 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Poison_Page4_4
# 1787 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Poison_Page4_5
# 1790 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Poison_Page4_6
# 1793 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Poison_Page4_7
# 1795 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Poison_Page4_8
# 1798 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page3
	return

Auto_EventScript_Pokemon_Shop_Poison_Page4_2:
# 1779 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_NIDORAN_M, 1
# 1780 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Poison_Page4_3:
# 1782 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_NIHILEGO, 1
# 1783 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Poison_Page4_4:
# 1785 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_ODDISH, 1
# 1786 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Poison_Page4_5:
# 1788 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_POIPOLE, 1
# 1789 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Poison_Page4_6:
# 1791 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_QWILFISH, 1
# 1792 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Poison_Page4_7:
# 1794 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Poison_Page3
	return

Auto_EventScript_Pokemon_Shop_Poison_Page4_8:
# 1796 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Poison_Page5
	return


Auto_EventScript_Pokemon_Shop_Poison_Page5::
# 1804 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Poison_Page5
# 1805 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 1807 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Poison_Page5_2
# 1810 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Poison_Page5_3
# 1813 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Poison_Page5_4
# 1816 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Poison_Page5_5
# 1819 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Poison_Page5_6
# 1822 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Poison_Page5_7
# 1824 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Poison_Page5_8
# 1827 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page3
	return

Auto_EventScript_Pokemon_Shop_Poison_Page5_2:
# 1808 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_QWILFISH_HISUI, 1
# 1809 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Poison_Page5_3:
# 1811 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SALANDIT, 1
# 1812 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Poison_Page5_4:
# 1814 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SEVIPER, 1
# 1815 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Poison_Page5_5:
# 1817 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SHROODLE, 1
# 1818 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Poison_Page5_6:
# 1820 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SKORUPI, 1
# 1821 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Poison_Page5_7:
# 1823 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Poison_Page4
	return

Auto_EventScript_Pokemon_Shop_Poison_Page5_8:
# 1825 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Poison_Page6
	return


Auto_EventScript_Pokemon_Shop_Poison_Page6::
# 1833 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Poison_Page6
# 1834 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 1836 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Poison_Page6_2
# 1839 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Poison_Page6_3
# 1842 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Poison_Page6_4
# 1845 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Poison_Page6_5
# 1848 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Poison_Page6_6
# 1851 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Poison_Page6_7
# 1853 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Poison_Page6_8
# 1856 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page3
	return

Auto_EventScript_Pokemon_Shop_Poison_Page6_2:
# 1837 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SKRELP, 1
# 1838 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Poison_Page6_3:
# 1840 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SNEASEL_HISUI, 1
# 1841 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Poison_Page6_4:
# 1843 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SPINARAK, 1
# 1844 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Poison_Page6_5:
# 1846 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_STUNKY, 1
# 1847 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Poison_Page6_6:
# 1849 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_TENTACOOL, 1
# 1850 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Poison_Page6_7:
# 1852 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Poison_Page5
	return

Auto_EventScript_Pokemon_Shop_Poison_Page6_8:
# 1854 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Poison_Page7
	return


Auto_EventScript_Pokemon_Shop_Poison_Page7::
# 1862 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Poison_Page7
# 1863 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 1865 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Poison_Page7_2
# 1868 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Poison_Page7_3
# 1871 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Poison_Page7_4
# 1874 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Poison_Page7_5
# 1877 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Poison_Page7_6
# 1880 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Poison_Page7_7
# 1882 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Poison_Page7_8
# 1885 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page3
	return

Auto_EventScript_Pokemon_Shop_Poison_Page7_2:
# 1866 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_TOXEL, 1
# 1867 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Poison_Page7_3:
# 1869 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_TRUBBISH, 1
# 1870 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Poison_Page7_4:
# 1872 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_VAROOM, 1
# 1873 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Poison_Page7_5:
# 1875 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_VENIPEDE, 1
# 1876 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Poison_Page7_6:
# 1878 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_VENONAT, 1
# 1879 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Poison_Page7_7:
# 1881 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Poison_Page6
	return

Auto_EventScript_Pokemon_Shop_Poison_Page7_8:
# 1883 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Poison_Page8
	return


Auto_EventScript_Pokemon_Shop_Poison_Page8::
# 1891 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Poison_Page8
# 1892 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 1894 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Poison_Page8_2
# 1897 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Poison_Page8_3
# 1900 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Poison_Page8_4
# 1903 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Poison_Page8_5
# 1905 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Poison_Page8_6
# 1908 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page3
	return

Auto_EventScript_Pokemon_Shop_Poison_Page8_2:
# 1895 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_WEEDLE, 1
# 1896 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Poison_Page8_3:
# 1898 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_WOOPER_PALDEA, 1
# 1899 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Poison_Page8_4:
# 1901 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_ZUBAT, 1
# 1902 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Poison_Page8_5:
# 1904 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Poison_Page7
	return

Auto_EventScript_Pokemon_Shop_Poison_Page8_6:
# 1906 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Poison_Page1
	return


Auto_EventScript_Pokemon_Shop_Psychic_Page1::
# 1914 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Psychic_Page1
# 1915 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 1917 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Psychic_Page1_2
# 1920 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Psychic_Page1_3
# 1923 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Psychic_Page1_4
# 1926 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Psychic_Page1_5
# 1929 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Psychic_Page1_6
# 1932 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Psychic_Page1_7
# 1934 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Psychic_Page1_8
# 1937 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page3
	return

Auto_EventScript_Pokemon_Shop_Psychic_Page1_2:
# 1918 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_ABRA, 1
# 1919 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Psychic_Page1_3:
# 1921 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_ARTICUNO_GALAR, 1
# 1922 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Psychic_Page1_4:
# 1924 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_BALTOY, 1
# 1925 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Psychic_Page1_5:
# 1927 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_BELDUM, 1
# 1928 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Psychic_Page1_6:
# 1930 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_BRONZOR, 1
# 1931 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Psychic_Page1_7:
# 1933 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Psychic_Page8
	return

Auto_EventScript_Pokemon_Shop_Psychic_Page1_8:
# 1935 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Psychic_Page2
	return


Auto_EventScript_Pokemon_Shop_Psychic_Page2::
# 1943 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Psychic_Page2
# 1944 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 1946 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Psychic_Page2_2
# 1949 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Psychic_Page2_3
# 1952 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Psychic_Page2_4
# 1955 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Psychic_Page2_5
# 1958 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Psychic_Page2_6
# 1961 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Psychic_Page2_7
# 1963 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Psychic_Page2_8
# 1966 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page3
	return

Auto_EventScript_Pokemon_Shop_Psychic_Page2_2:
# 1947 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_BRUXISH, 1
# 1948 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Psychic_Page2_3:
# 1950 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_CHINGLING, 1
# 1951 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Psychic_Page2_4:
# 1953 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_DROWZEE, 1
# 1954 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Psychic_Page2_5:
# 1956 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_ELGYEM, 1
# 1957 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Psychic_Page2_6:
# 1959 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_ESPURR, 1
# 1960 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Psychic_Page2_7:
# 1962 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Psychic_Page1
	return

Auto_EventScript_Pokemon_Shop_Psychic_Page2_8:
# 1964 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Psychic_Page3
	return


Auto_EventScript_Pokemon_Shop_Psychic_Page3::
# 1972 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Psychic_Page3
# 1973 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 1975 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Psychic_Page3_2
# 1978 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Psychic_Page3_3
# 1981 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Psychic_Page3_4
# 1984 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Psychic_Page3_5
# 1987 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Psychic_Page3_6
# 1990 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Psychic_Page3_7
# 1992 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Psychic_Page3_8
# 1995 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page3
	return

Auto_EventScript_Pokemon_Shop_Psychic_Page3_2:
# 1976 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_EXEGGCUTE, 1
# 1977 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Psychic_Page3_3:
# 1979 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_FLITTLE, 1
# 1980 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Psychic_Page3_4:
# 1982 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_GIRAFARIG, 1
# 1983 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Psychic_Page3_5:
# 1985 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_GOTHITA, 1
# 1986 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Psychic_Page3_6:
# 1988 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_HATENNA, 1
# 1989 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Psychic_Page3_7:
# 1991 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Psychic_Page2
	return

Auto_EventScript_Pokemon_Shop_Psychic_Page3_8:
# 1993 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Psychic_Page4
	return


Auto_EventScript_Pokemon_Shop_Psychic_Page4::
# 2001 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Psychic_Page4
# 2002 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 2004 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Psychic_Page4_2
# 2007 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Psychic_Page4_3
# 2010 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Psychic_Page4_4
# 2013 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Psychic_Page4_5
# 2016 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Psychic_Page4_6
# 2019 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Psychic_Page4_7
# 2021 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Psychic_Page4_8
# 2024 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page3
	return

Auto_EventScript_Pokemon_Shop_Psychic_Page4_2:
# 2005 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_INDEEDEE, 1
# 2006 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Psychic_Page4_3:
# 2008 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_INKAY, 1
# 2009 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Psychic_Page4_4:
# 2011 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_IRON_BOULDER, 1
# 2012 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Psychic_Page4_5:
# 2014 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_IRON_CROWN, 1
# 2015 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Psychic_Page4_6:
# 2017 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_IRON_LEAVES, 1
# 2018 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Psychic_Page4_7:
# 2020 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Psychic_Page3
	return

Auto_EventScript_Pokemon_Shop_Psychic_Page4_8:
# 2022 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Psychic_Page5
	return


Auto_EventScript_Pokemon_Shop_Psychic_Page5::
# 2030 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Psychic_Page5
# 2031 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 2033 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Psychic_Page5_2
# 2036 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Psychic_Page5_3
# 2039 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Psychic_Page5_4
# 2042 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Psychic_Page5_5
# 2045 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Psychic_Page5_6
# 2048 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Psychic_Page5_7
# 2050 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Psychic_Page5_8
# 2053 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page3
	return

Auto_EventScript_Pokemon_Shop_Psychic_Page5_2:
# 2034 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_LUNATONE, 1
# 2035 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Psychic_Page5_3:
# 2037 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_MEDITITE, 1
# 2038 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Psychic_Page5_4:
# 2040 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_MIME_JR, 1
# 2041 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Psychic_Page5_5:
# 2043 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_MUNNA, 1
# 2044 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Psychic_Page5_6:
# 2046 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_NATU, 1
# 2047 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Psychic_Page5_7:
# 2049 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Psychic_Page4
	return

Auto_EventScript_Pokemon_Shop_Psychic_Page5_8:
# 2051 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Psychic_Page6
	return


Auto_EventScript_Pokemon_Shop_Psychic_Page6::
# 2059 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Psychic_Page6
# 2060 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 2062 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Psychic_Page6_2
# 2065 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Psychic_Page6_3
# 2068 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Psychic_Page6_4
# 2071 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Psychic_Page6_5
# 2074 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Psychic_Page6_6
# 2077 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Psychic_Page6_7
# 2079 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Psychic_Page6_8
# 2082 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page3
	return

Auto_EventScript_Pokemon_Shop_Psychic_Page6_2:
# 2063 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_ORANGURU, 1
# 2064 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Psychic_Page6_3:
# 2066 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_PONYTA_GALAR, 1
# 2067 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Psychic_Page6_4:
# 2069 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_RALTS, 1
# 2070 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Psychic_Page6_5:
# 2072 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SCREAM_TAIL, 1
# 2073 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Psychic_Page6_6:
# 2075 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SIGILYPH, 1
# 2076 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Psychic_Page6_7:
# 2078 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Psychic_Page5
	return

Auto_EventScript_Pokemon_Shop_Psychic_Page6_8:
# 2080 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Psychic_Page7
	return


Auto_EventScript_Pokemon_Shop_Psychic_Page7::
# 2088 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Psychic_Page7
# 2089 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 2091 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Psychic_Page7_2
# 2094 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Psychic_Page7_3
# 2097 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Psychic_Page7_4
# 2100 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Psychic_Page7_5
# 2103 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Psychic_Page7_6
# 2106 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Psychic_Page7_7
# 2108 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Psychic_Page7_8
# 2111 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page3
	return

Auto_EventScript_Pokemon_Shop_Psychic_Page7_2:
# 2092 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SLOWPOKE, 1
# 2093 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Psychic_Page7_3:
# 2095 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SLOWPOKE_GALAR, 1
# 2096 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Psychic_Page7_4:
# 2098 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SMOOCHUM, 1
# 2099 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Psychic_Page7_5:
# 2101 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SOLOSIS, 1
# 2102 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Psychic_Page7_6:
# 2104 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SOLROCK, 1
# 2105 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Psychic_Page7_7:
# 2107 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Psychic_Page6
	return

Auto_EventScript_Pokemon_Shop_Psychic_Page7_8:
# 2109 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Psychic_Page8
	return


Auto_EventScript_Pokemon_Shop_Psychic_Page8::
# 2117 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Psychic_Page8
# 2118 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 2120 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Psychic_Page8_2
# 2123 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Psychic_Page8_3
# 2126 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Psychic_Page8_4
# 2129 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Psychic_Page8_5
# 2132 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Psychic_Page8_6
# 2135 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Psychic_Page8_7
# 2137 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Psychic_Page8_8
# 2140 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page3
	return

Auto_EventScript_Pokemon_Shop_Psychic_Page8_2:
# 2121 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SPOINK, 1
# 2122 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Psychic_Page8_3:
# 2124 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_UNOWN, 1
# 2125 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Psychic_Page8_4:
# 2127 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_VELUZA, 1
# 2128 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Psychic_Page8_5:
# 2130 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_WOOBAT, 1
# 2131 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Psychic_Page8_6:
# 2133 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_WYNAUT, 1
# 2134 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Psychic_Page8_7:
# 2136 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Psychic_Page7
	return

Auto_EventScript_Pokemon_Shop_Psychic_Page8_8:
# 2138 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Psychic_Page1
	return


Auto_EventScript_Pokemon_Shop_Fighting_Page1::
# 2146 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Fighting_Page1
# 2147 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 2149 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Fighting_Page1_2
# 2152 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Fighting_Page1_3
# 2155 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Fighting_Page1_4
# 2158 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Fighting_Page1_5
# 2161 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Fighting_Page1_6
# 2164 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Fighting_Page1_7
# 2166 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Fighting_Page1_8
# 2169 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page2
	return

Auto_EventScript_Pokemon_Shop_Fighting_Page1_2:
# 2150 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_BUZZWOLE, 1
# 2151 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fighting_Page1_3:
# 2153 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_CLOBBOPUS, 1
# 2154 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fighting_Page1_4:
# 2156 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_CRABRAWLER, 1
# 2157 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fighting_Page1_5:
# 2159 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_CROAGUNK, 1
# 2160 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fighting_Page1_6:
# 2162 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_FALINKS, 1
# 2163 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fighting_Page1_7:
# 2165 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Fighting_Page6
	return

Auto_EventScript_Pokemon_Shop_Fighting_Page1_8:
# 2167 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Fighting_Page2
	return


Auto_EventScript_Pokemon_Shop_Fighting_Page2::
# 2175 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Fighting_Page2
# 2176 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 2178 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Fighting_Page2_2
# 2181 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Fighting_Page2_3
# 2184 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Fighting_Page2_4
# 2187 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Fighting_Page2_5
# 2190 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Fighting_Page2_6
# 2193 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Fighting_Page2_7
# 2195 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Fighting_Page2_8
# 2198 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page2
	return

Auto_EventScript_Pokemon_Shop_Fighting_Page2_2:
# 2179 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_FARFETCHD_GALAR, 1
# 2180 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fighting_Page2_3:
# 2182 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_FLAMIGO, 1
# 2183 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fighting_Page2_4:
# 2185 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_GREAT_TUSK, 1
# 2186 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fighting_Page2_5:
# 2188 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_HAWLUCHA, 1
# 2189 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fighting_Page2_6:
# 2191 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_HERACROSS, 1
# 2192 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fighting_Page2_7:
# 2194 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Fighting_Page1
	return

Auto_EventScript_Pokemon_Shop_Fighting_Page2_8:
# 2196 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Fighting_Page3
	return


Auto_EventScript_Pokemon_Shop_Fighting_Page3::
# 2204 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Fighting_Page3
# 2205 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 2207 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Fighting_Page3_2
# 2210 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Fighting_Page3_3
# 2213 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Fighting_Page3_4
# 2216 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Fighting_Page3_5
# 2219 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Fighting_Page3_6
# 2222 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Fighting_Page3_7
# 2224 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Fighting_Page3_8
# 2227 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page2
	return

Auto_EventScript_Pokemon_Shop_Fighting_Page3_2:
# 2208 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_IRON_HANDS, 1
# 2209 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fighting_Page3_3:
# 2211 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_IRON_VALIANT, 1
# 2212 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fighting_Page3_4:
# 2214 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_MACHOP, 1
# 2215 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fighting_Page3_5:
# 2217 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_MAKUHITA, 1
# 2218 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fighting_Page3_6:
# 2220 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_MANKEY, 1
# 2221 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fighting_Page3_7:
# 2223 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Fighting_Page2
	return

Auto_EventScript_Pokemon_Shop_Fighting_Page3_8:
# 2225 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Fighting_Page4
	return


Auto_EventScript_Pokemon_Shop_Fighting_Page4::
# 2233 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Fighting_Page4
# 2234 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 2236 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Fighting_Page4_2
# 2239 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Fighting_Page4_3
# 2242 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Fighting_Page4_4
# 2245 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Fighting_Page4_5
# 2248 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Fighting_Page4_6
# 2251 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Fighting_Page4_7
# 2253 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Fighting_Page4_8
# 2256 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page2
	return

Auto_EventScript_Pokemon_Shop_Fighting_Page4_2:
# 2237 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_MEDITITE, 1
# 2238 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fighting_Page4_3:
# 2240 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_MIENFOO, 1
# 2241 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fighting_Page4_4:
# 2243 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_PANCHAM, 1
# 2244 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fighting_Page4_5:
# 2246 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_PASSIMIAN, 1
# 2247 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fighting_Page4_6:
# 2249 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_PHEROMOSA, 1
# 2250 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fighting_Page4_7:
# 2252 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Fighting_Page3
	return

Auto_EventScript_Pokemon_Shop_Fighting_Page4_8:
# 2254 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Fighting_Page5
	return


Auto_EventScript_Pokemon_Shop_Fighting_Page5::
# 2262 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Fighting_Page5
# 2263 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 2265 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Fighting_Page5_2
# 2268 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Fighting_Page5_3
# 2271 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Fighting_Page5_4
# 2274 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Fighting_Page5_5
# 2277 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Fighting_Page5_6
# 2280 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Fighting_Page5_7
# 2282 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Fighting_Page5_8
# 2285 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page2
	return

Auto_EventScript_Pokemon_Shop_Fighting_Page5_2:
# 2266 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_RIOLU, 1
# 2267 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fighting_Page5_3:
# 2269 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SAWK, 1
# 2270 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fighting_Page5_4:
# 2272 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SCRAGGY, 1
# 2273 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fighting_Page5_5:
# 2275 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SLITHER_WING, 1
# 2276 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fighting_Page5_6:
# 2278 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SNEASEL_HISUI, 1
# 2279 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fighting_Page5_7:
# 2281 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Fighting_Page4
	return

Auto_EventScript_Pokemon_Shop_Fighting_Page5_8:
# 2283 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Fighting_Page6
	return


Auto_EventScript_Pokemon_Shop_Fighting_Page6::
# 2291 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Fighting_Page6
# 2292 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 2294 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Fighting_Page6_2
# 2297 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Fighting_Page6_3
# 2300 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Fighting_Page6_4
# 2303 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Fighting_Page6_5
# 2306 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Fighting_Page6_6
# 2309 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Fighting_Page6_7
# 2311 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Fighting_Page6_8
# 2314 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page2
	return

Auto_EventScript_Pokemon_Shop_Fighting_Page6_2:
# 2295 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_STUFFUL, 1
# 2296 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fighting_Page6_3:
# 2298 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_THROH, 1
# 2299 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fighting_Page6_4:
# 2301 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_TIMBURR, 1
# 2302 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fighting_Page6_5:
# 2304 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_TYROGUE, 1
# 2305 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fighting_Page6_6:
# 2307 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_ZAPDOS_GALAR, 1
# 2308 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fighting_Page6_7:
# 2310 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Fighting_Page5
	return

Auto_EventScript_Pokemon_Shop_Fighting_Page6_8:
# 2312 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Fighting_Page1
	return


Auto_EventScript_Pokemon_Shop_Fire_Page1::
# 2320 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Fire_Page1
# 2321 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 2323 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Fire_Page1_2
# 2326 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Fire_Page1_3
# 2329 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Fire_Page1_4
# 2332 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Fire_Page1_5
# 2335 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Fire_Page1_6
# 2338 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Fire_Page1_7
# 2340 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Fire_Page1_8
# 2343 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page2
	return

Auto_EventScript_Pokemon_Shop_Fire_Page1_2:
# 2324 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_BLACEPHALON, 1
# 2325 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fire_Page1_3:
# 2327 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_CHARCADET, 1
# 2328 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fire_Page1_4:
# 2330 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_CHARMANDER, 1
# 2331 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fire_Page1_5:
# 2333 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_CHIMCHAR, 1
# 2334 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fire_Page1_6:
# 2336 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_CYNDAQUIL, 1
# 2337 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fire_Page1_7:
# 2339 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Fire_Page7
	return

Auto_EventScript_Pokemon_Shop_Fire_Page1_8:
# 2341 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Fire_Page2
	return


Auto_EventScript_Pokemon_Shop_Fire_Page2::
# 2349 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Fire_Page2
# 2350 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 2352 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Fire_Page2_2
# 2355 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Fire_Page2_3
# 2358 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Fire_Page2_4
# 2361 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Fire_Page2_5
# 2364 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Fire_Page2_6
# 2367 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Fire_Page2_7
# 2369 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Fire_Page2_8
# 2372 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page2
	return

Auto_EventScript_Pokemon_Shop_Fire_Page2_2:
# 2353 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_DARUMAKA, 1
# 2354 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fire_Page2_3:
# 2356 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_FENNEKIN, 1
# 2357 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fire_Page2_4:
# 2359 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_FUECOCO, 1
# 2360 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fire_Page2_5:
# 2362 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_GOUGING_FIRE, 1
# 2363 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fire_Page2_6:
# 2365 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_GROWLITHE, 1
# 2366 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fire_Page2_7:
# 2368 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Fire_Page1
	return

Auto_EventScript_Pokemon_Shop_Fire_Page2_8:
# 2370 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Fire_Page3
	return


Auto_EventScript_Pokemon_Shop_Fire_Page3::
# 2378 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Fire_Page3
# 2379 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 2381 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Fire_Page3_2
# 2384 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Fire_Page3_3
# 2387 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Fire_Page3_4
# 2390 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Fire_Page3_5
# 2393 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Fire_Page3_6
# 2396 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Fire_Page3_7
# 2398 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Fire_Page3_8
# 2401 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page2
	return

Auto_EventScript_Pokemon_Shop_Fire_Page3_2:
# 2382 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_GROWLITHE_HISUI, 1
# 2383 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fire_Page3_3:
# 2385 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_HEATMOR, 1
# 2386 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fire_Page3_4:
# 2388 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_HOUNDOUR, 1
# 2389 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fire_Page3_5:
# 2391 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_IRON_MOTH, 1
# 2392 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fire_Page3_6:
# 2394 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_LARVESTA, 1
# 2395 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fire_Page3_7:
# 2397 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Fire_Page2
	return

Auto_EventScript_Pokemon_Shop_Fire_Page3_8:
# 2399 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Fire_Page4
	return


Auto_EventScript_Pokemon_Shop_Fire_Page4::
# 2407 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Fire_Page4
# 2408 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 2410 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Fire_Page4_2
# 2413 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Fire_Page4_3
# 2416 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Fire_Page4_4
# 2419 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Fire_Page4_5
# 2422 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Fire_Page4_6
# 2425 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Fire_Page4_7
# 2427 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Fire_Page4_8
# 2430 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page2
	return

Auto_EventScript_Pokemon_Shop_Fire_Page4_2:
# 2411 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_LITLEO, 1
# 2412 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fire_Page4_3:
# 2414 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_LITTEN, 1
# 2415 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fire_Page4_4:
# 2417 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_LITWICK, 1
# 2418 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fire_Page4_5:
# 2420 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_MAGBY, 1
# 2421 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fire_Page4_6:
# 2423 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_NUMEL, 1
# 2424 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fire_Page4_7:
# 2426 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Fire_Page3
	return

Auto_EventScript_Pokemon_Shop_Fire_Page4_8:
# 2428 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Fire_Page5
	return


Auto_EventScript_Pokemon_Shop_Fire_Page5::
# 2436 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Fire_Page5
# 2437 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 2439 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Fire_Page5_2
# 2442 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Fire_Page5_3
# 2445 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Fire_Page5_4
# 2448 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Fire_Page5_5
# 2451 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Fire_Page5_6
# 2454 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Fire_Page5_7
# 2456 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Fire_Page5_8
# 2459 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page2
	return

Auto_EventScript_Pokemon_Shop_Fire_Page5_2:
# 2440 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_ORICORIO, 1
# 2441 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fire_Page5_3:
# 2443 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_PANSEAR, 1
# 2444 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fire_Page5_4:
# 2446 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_PONYTA, 1
# 2447 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fire_Page5_5:
# 2449 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SALANDIT, 1
# 2450 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fire_Page5_6:
# 2452 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SCORBUNNY, 1
# 2453 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fire_Page5_7:
# 2455 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Fire_Page4
	return

Auto_EventScript_Pokemon_Shop_Fire_Page5_8:
# 2457 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Fire_Page6
	return


Auto_EventScript_Pokemon_Shop_Fire_Page6::
# 2465 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Fire_Page6
# 2466 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 2468 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Fire_Page6_2
# 2471 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Fire_Page6_3
# 2474 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Fire_Page6_4
# 2477 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Fire_Page6_5
# 2480 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Fire_Page6_6
# 2483 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Fire_Page6_7
# 2485 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Fire_Page6_8
# 2488 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page2
	return

Auto_EventScript_Pokemon_Shop_Fire_Page6_2:
# 2469 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SIZZLIPEDE, 1
# 2470 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fire_Page6_3:
# 2472 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SLUGMA, 1
# 2473 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fire_Page6_4:
# 2475 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_TEPIG, 1
# 2476 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fire_Page6_5:
# 2478 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_TORCHIC, 1
# 2479 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fire_Page6_6:
# 2481 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_TORKOAL, 1
# 2482 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fire_Page6_7:
# 2484 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Fire_Page5
	return

Auto_EventScript_Pokemon_Shop_Fire_Page6_8:
# 2486 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Fire_Page7
	return


Auto_EventScript_Pokemon_Shop_Fire_Page7::
# 2494 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Fire_Page7
# 2495 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 2497 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Fire_Page7_2
# 2500 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Fire_Page7_3
# 2503 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Fire_Page7_4
# 2505 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Fire_Page7_5
# 2508 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page2
	return

Auto_EventScript_Pokemon_Shop_Fire_Page7_2:
# 2498 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_TURTONATOR, 1
# 2499 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fire_Page7_3:
# 2501 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_VULPIX, 1
# 2502 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fire_Page7_4:
# 2504 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Fire_Page6
	return

Auto_EventScript_Pokemon_Shop_Fire_Page7_5:
# 2506 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Fire_Page1
	return


Auto_EventScript_Pokemon_Shop_Flying_Page1::
# 2514 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Flying_Page1
# 2515 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 2517 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Flying_Page1_2
# 2520 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Flying_Page1_3
# 2523 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Flying_Page1_4
# 2526 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Flying_Page1_5
# 2529 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Flying_Page1_6
# 2532 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Flying_Page1_7
# 2534 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Flying_Page1_8
# 2537 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page2
	return

Auto_EventScript_Pokemon_Shop_Flying_Page1_2:
# 2518 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_AERODACTYL, 1
# 2519 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Flying_Page1_3:
# 2521 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_ARCHEN, 1
# 2522 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Flying_Page1_4:
# 2524 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_ARTICUNO_GALAR, 1
# 2525 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Flying_Page1_5:
# 2527 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_BOMBIRDIER, 1
# 2528 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Flying_Page1_6:
# 2530 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_CELESTEELA, 1
# 2531 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Flying_Page1_7:
# 2533 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Flying_Page11
	return

Auto_EventScript_Pokemon_Shop_Flying_Page1_8:
# 2535 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Flying_Page2
	return


Auto_EventScript_Pokemon_Shop_Flying_Page2::
# 2543 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Flying_Page2
# 2544 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 2546 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Flying_Page2_2
# 2549 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Flying_Page2_3
# 2552 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Flying_Page2_4
# 2555 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Flying_Page2_5
# 2558 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Flying_Page2_6
# 2561 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Flying_Page2_7
# 2563 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Flying_Page2_8
# 2566 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page2
	return

Auto_EventScript_Pokemon_Shop_Flying_Page2_2:
# 2547 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_CHATOT, 1
# 2548 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Flying_Page2_3:
# 2550 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_COMBEE, 1
# 2551 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Flying_Page2_4:
# 2553 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_CRAMORANT, 1
# 2554 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Flying_Page2_5:
# 2556 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_DELIBIRD, 1
# 2557 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Flying_Page2_6:
# 2559 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_DODUO, 1
# 2560 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Flying_Page2_7:
# 2562 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Flying_Page1
	return

Auto_EventScript_Pokemon_Shop_Flying_Page2_8:
# 2564 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Flying_Page3
	return


Auto_EventScript_Pokemon_Shop_Flying_Page3::
# 2572 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Flying_Page3
# 2573 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 2575 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Flying_Page3_2
# 2578 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Flying_Page3_3
# 2581 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Flying_Page3_4
# 2584 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Flying_Page3_5
# 2587 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Flying_Page3_6
# 2590 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Flying_Page3_7
# 2592 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Flying_Page3_8
# 2595 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page2
	return

Auto_EventScript_Pokemon_Shop_Flying_Page3_2:
# 2576 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_DRIFLOON, 1
# 2577 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Flying_Page3_3:
# 2579 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_DUCKLETT, 1
# 2580 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Flying_Page3_4:
# 2582 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_EMOLGA, 1
# 2583 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Flying_Page3_5:
# 2585 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_FARFETCHD, 1
# 2586 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Flying_Page3_6:
# 2588 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_FLAMIGO, 1
# 2589 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Flying_Page3_7:
# 2591 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Flying_Page2
	return

Auto_EventScript_Pokemon_Shop_Flying_Page3_8:
# 2593 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Flying_Page4
	return


Auto_EventScript_Pokemon_Shop_Flying_Page4::
# 2601 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Flying_Page4
# 2602 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 2604 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Flying_Page4_2
# 2607 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Flying_Page4_3
# 2610 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Flying_Page4_4
# 2613 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Flying_Page4_5
# 2616 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Flying_Page4_6
# 2619 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Flying_Page4_7
# 2621 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Flying_Page4_8
# 2624 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page2
	return

Auto_EventScript_Pokemon_Shop_Flying_Page4_2:
# 2605 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_FLETCHLING, 1
# 2606 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Flying_Page4_3:
# 2608 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_GLIGAR, 1
# 2609 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Flying_Page4_4:
# 2611 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_HAWLUCHA, 1
# 2612 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Flying_Page4_5:
# 2614 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_HOOTHOOT, 1
# 2615 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Flying_Page4_6:
# 2617 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_HOPPIP, 1
# 2618 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Flying_Page4_7:
# 2620 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Flying_Page3
	return

Auto_EventScript_Pokemon_Shop_Flying_Page4_8:
# 2622 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Flying_Page5
	return


Auto_EventScript_Pokemon_Shop_Flying_Page5::
# 2630 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Flying_Page5
# 2631 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 2633 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Flying_Page5_2
# 2636 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Flying_Page5_3
# 2639 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Flying_Page5_4
# 2642 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Flying_Page5_5
# 2645 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Flying_Page5_6
# 2648 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Flying_Page5_7
# 2650 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Flying_Page5_8
# 2653 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page2
	return

Auto_EventScript_Pokemon_Shop_Flying_Page5_2:
# 2634 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_IRON_JUGULIS, 1
# 2635 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Flying_Page5_3:
# 2637 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_LEDYBA, 1
# 2638 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Flying_Page5_4:
# 2640 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_MANTYKE, 1
# 2641 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Flying_Page5_5:
# 2643 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_MINIOR, 1
# 2644 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Flying_Page5_6:
# 2646 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_MOLTRES_GALAR, 1
# 2647 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Flying_Page5_7:
# 2649 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Flying_Page4
	return

Auto_EventScript_Pokemon_Shop_Flying_Page5_8:
# 2651 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Flying_Page6
	return


Auto_EventScript_Pokemon_Shop_Flying_Page6::
# 2659 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Flying_Page6
# 2660 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 2662 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Flying_Page6_2
# 2665 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Flying_Page6_3
# 2668 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Flying_Page6_4
# 2671 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Flying_Page6_5
# 2674 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Flying_Page6_6
# 2677 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Flying_Page6_7
# 2679 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Flying_Page6_8
# 2682 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page2
	return

Auto_EventScript_Pokemon_Shop_Flying_Page6_2:
# 2663 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_MURKROW, 1
# 2664 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Flying_Page6_3:
# 2666 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_NATU, 1
# 2667 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Flying_Page6_4:
# 2669 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_NOIBAT, 1
# 2670 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Flying_Page6_5:
# 2672 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_ORICORIO, 1
# 2673 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Flying_Page6_6:
# 2675 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_PIDGEY, 1
# 2676 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Flying_Page6_7:
# 2678 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Flying_Page5
	return

Auto_EventScript_Pokemon_Shop_Flying_Page6_8:
# 2680 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Flying_Page7
	return


Auto_EventScript_Pokemon_Shop_Flying_Page7::
# 2688 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Flying_Page7
# 2689 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 2691 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Flying_Page7_2
# 2694 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Flying_Page7_3
# 2697 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Flying_Page7_4
# 2700 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Flying_Page7_5
# 2703 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Flying_Page7_6
# 2706 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Flying_Page7_7
# 2708 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Flying_Page7_8
# 2711 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page2
	return

Auto_EventScript_Pokemon_Shop_Flying_Page7_2:
# 2692 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_PIDOVE, 1
# 2693 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Flying_Page7_3:
# 2695 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_PIKIPEK, 1
# 2696 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Flying_Page7_4:
# 2698 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_ROOKIDEE, 1
# 2699 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Flying_Page7_5:
# 2701 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_ROWLET, 1
# 2702 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Flying_Page7_6:
# 2704 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_RUFFLET, 1
# 2705 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Flying_Page7_7:
# 2707 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Flying_Page6
	return

Auto_EventScript_Pokemon_Shop_Flying_Page7_8:
# 2709 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Flying_Page8
	return


Auto_EventScript_Pokemon_Shop_Flying_Page8::
# 2717 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Flying_Page8
# 2718 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 2720 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Flying_Page8_2
# 2723 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Flying_Page8_3
# 2726 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Flying_Page8_4
# 2729 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Flying_Page8_5
# 2732 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Flying_Page8_6
# 2735 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Flying_Page8_7
# 2737 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Flying_Page8_8
# 2740 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page2
	return

Auto_EventScript_Pokemon_Shop_Flying_Page8_2:
# 2721 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SCYTHER, 1
# 2722 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Flying_Page8_3:
# 2724 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SIGILYPH, 1
# 2725 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Flying_Page8_4:
# 2727 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SKARMORY, 1
# 2728 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Flying_Page8_5:
# 2730 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SPEAROW, 1
# 2731 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Flying_Page8_6:
# 2733 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SQUAWKABILLY, 1
# 2734 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Flying_Page8_7:
# 2736 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Flying_Page7
	return

Auto_EventScript_Pokemon_Shop_Flying_Page8_8:
# 2738 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Flying_Page9
	return


Auto_EventScript_Pokemon_Shop_Flying_Page9::
# 2746 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Flying_Page9
# 2747 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 2749 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Flying_Page9_2
# 2752 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Flying_Page9_3
# 2755 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Flying_Page9_4
# 2758 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Flying_Page9_5
# 2761 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Flying_Page9_6
# 2764 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Flying_Page9_7
# 2766 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Flying_Page9_8
# 2769 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page2
	return

Auto_EventScript_Pokemon_Shop_Flying_Page9_2:
# 2750 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_STARLY, 1
# 2751 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Flying_Page9_3:
# 2753 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SWABLU, 1
# 2754 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Flying_Page9_4:
# 2756 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_TAILLOW, 1
# 2757 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Flying_Page9_5:
# 2759 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_TROPIUS, 1
# 2760 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Flying_Page9_6:
# 2762 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_VULLABY, 1
# 2763 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Flying_Page9_7:
# 2765 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Flying_Page8
	return

Auto_EventScript_Pokemon_Shop_Flying_Page9_8:
# 2767 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Flying_Page10
	return


Auto_EventScript_Pokemon_Shop_Flying_Page10::
# 2775 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Flying_Page10
# 2776 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 2778 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Flying_Page10_2
# 2781 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Flying_Page10_3
# 2784 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Flying_Page10_4
# 2787 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Flying_Page10_5
# 2790 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Flying_Page10_6
# 2793 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Flying_Page10_7
# 2795 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Flying_Page10_8
# 2798 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page2
	return

Auto_EventScript_Pokemon_Shop_Flying_Page10_2:
# 2779 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_WATTREL, 1
# 2780 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Flying_Page10_3:
# 2782 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_WINGULL, 1
# 2783 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Flying_Page10_4:
# 2785 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_WOOBAT, 1
# 2786 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Flying_Page10_5:
# 2788 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_YANMA, 1
# 2789 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Flying_Page10_6:
# 2791 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_ZAPDOS_GALAR, 1
# 2792 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Flying_Page10_7:
# 2794 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Flying_Page9
	return

Auto_EventScript_Pokemon_Shop_Flying_Page10_8:
# 2796 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Flying_Page11
	return


Auto_EventScript_Pokemon_Shop_Flying_Page11::
# 2804 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Flying_Page11
# 2805 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 2807 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Flying_Page11_2
# 2810 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Flying_Page11_3
# 2812 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Flying_Page11_4
# 2815 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page2
	return

Auto_EventScript_Pokemon_Shop_Flying_Page11_2:
# 2808 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_ZUBAT, 1
# 2809 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Flying_Page11_3:
# 2811 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Flying_Page10
	return

Auto_EventScript_Pokemon_Shop_Flying_Page11_4:
# 2813 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Flying_Page1
	return


Auto_EventScript_Pokemon_Shop_Ghost_Page1::
# 2821 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Ghost_Page1
# 2822 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 2824 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Ghost_Page1_2
# 2827 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Ghost_Page1_3
# 2830 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Ghost_Page1_4
# 2833 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Ghost_Page1_5
# 2836 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Ghost_Page1_6
# 2839 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Ghost_Page1_7
# 2841 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Ghost_Page1_8
# 2844 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page2
	return

Auto_EventScript_Pokemon_Shop_Ghost_Page1_2:
# 2825 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_BLACEPHALON, 1
# 2826 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ghost_Page1_3:
# 2828 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_BRAMBLIN, 1
# 2829 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ghost_Page1_4:
# 2831 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_CORSOLA_GALAR, 1
# 2832 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ghost_Page1_5:
# 2834 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_DHELMISE, 1
# 2835 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ghost_Page1_6:
# 2837 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_DREEPY, 1
# 2838 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ghost_Page1_7:
# 2840 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Ghost_Page6
	return

Auto_EventScript_Pokemon_Shop_Ghost_Page1_8:
# 2842 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Ghost_Page2
	return


Auto_EventScript_Pokemon_Shop_Ghost_Page2::
# 2850 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Ghost_Page2
# 2851 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 2853 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Ghost_Page2_2
# 2856 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Ghost_Page2_3
# 2859 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Ghost_Page2_4
# 2862 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Ghost_Page2_5
# 2865 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Ghost_Page2_6
# 2868 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Ghost_Page2_7
# 2870 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Ghost_Page2_8
# 2873 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page2
	return

Auto_EventScript_Pokemon_Shop_Ghost_Page2_2:
# 2854 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_DRIFLOON, 1
# 2855 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ghost_Page2_3:
# 2857 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_DUSKULL, 1
# 2858 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ghost_Page2_4:
# 2860 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_FLUTTER_MANE, 1
# 2861 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ghost_Page2_5:
# 2863 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_FRILLISH, 1
# 2864 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ghost_Page2_6:
# 2866 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_GASTLY, 1
# 2867 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ghost_Page2_7:
# 2869 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Ghost_Page1
	return

Auto_EventScript_Pokemon_Shop_Ghost_Page2_8:
# 2871 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Ghost_Page3
	return


Auto_EventScript_Pokemon_Shop_Ghost_Page3::
# 2879 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Ghost_Page3
# 2880 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 2882 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Ghost_Page3_2
# 2885 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Ghost_Page3_3
# 2888 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Ghost_Page3_4
# 2891 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Ghost_Page3_5
# 2894 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Ghost_Page3_6
# 2897 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Ghost_Page3_7
# 2899 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Ghost_Page3_8
# 2902 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page2
	return

Auto_EventScript_Pokemon_Shop_Ghost_Page3_2:
# 2883 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_GIMMIGHOUL, 1
# 2884 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ghost_Page3_3:
# 2886 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_GOLETT, 1
# 2887 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ghost_Page3_4:
# 2889 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_GREAVARD, 1
# 2890 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ghost_Page3_5:
# 2892 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_HONEDGE, 1
# 2893 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ghost_Page3_6:
# 2895 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_LITWICK, 1
# 2896 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ghost_Page3_7:
# 2898 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Ghost_Page2
	return

Auto_EventScript_Pokemon_Shop_Ghost_Page3_8:
# 2900 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Ghost_Page4
	return


Auto_EventScript_Pokemon_Shop_Ghost_Page4::
# 2908 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Ghost_Page4
# 2909 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 2911 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Ghost_Page4_2
# 2914 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Ghost_Page4_3
# 2917 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Ghost_Page4_4
# 2920 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Ghost_Page4_5
# 2923 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Ghost_Page4_6
# 2926 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Ghost_Page4_7
# 2928 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Ghost_Page4_8
# 2931 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page2
	return

Auto_EventScript_Pokemon_Shop_Ghost_Page4_2:
# 2912 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_MIMIKYU, 1
# 2913 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ghost_Page4_3:
# 2915 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_MISDREAVUS, 1
# 2916 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ghost_Page4_4:
# 2918 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_PHANTUMP, 1
# 2919 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ghost_Page4_5:
# 2921 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_POLTCHAGEIST, 1
# 2922 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ghost_Page4_6:
# 2924 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_PUMPKABOO, 1
# 2925 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ghost_Page4_7:
# 2927 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Ghost_Page3
	return

Auto_EventScript_Pokemon_Shop_Ghost_Page4_8:
# 2929 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Ghost_Page5
	return


Auto_EventScript_Pokemon_Shop_Ghost_Page5::
# 2937 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Ghost_Page5
# 2938 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 2940 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Ghost_Page5_2
# 2943 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Ghost_Page5_3
# 2946 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Ghost_Page5_4
# 2949 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Ghost_Page5_5
# 2952 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Ghost_Page5_6
# 2955 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Ghost_Page5_7
# 2957 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Ghost_Page5_8
# 2960 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page2
	return

Auto_EventScript_Pokemon_Shop_Ghost_Page5_2:
# 2941 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_ROTOM, 1
# 2942 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ghost_Page5_3:
# 2944 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SABLEYE, 1
# 2945 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ghost_Page5_4:
# 2947 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SANDYGAST, 1
# 2948 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ghost_Page5_5:
# 2950 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SHUPPET, 1
# 2951 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ghost_Page5_6:
# 2953 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SINISTEA, 1
# 2954 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ghost_Page5_7:
# 2956 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Ghost_Page4
	return

Auto_EventScript_Pokemon_Shop_Ghost_Page5_8:
# 2958 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Ghost_Page6
	return


Auto_EventScript_Pokemon_Shop_Ghost_Page6::
# 2966 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Ghost_Page6
# 2967 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 2969 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Ghost_Page6_2
# 2972 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Ghost_Page6_3
# 2975 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Ghost_Page6_4
# 2978 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Ghost_Page6_5
# 2981 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Ghost_Page6_6
# 2983 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Ghost_Page6_7
# 2986 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page2
	return

Auto_EventScript_Pokemon_Shop_Ghost_Page6_2:
# 2970 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SPIRITOMB, 1
# 2971 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ghost_Page6_3:
# 2973 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_YAMASK, 1
# 2974 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ghost_Page6_4:
# 2976 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_YAMASK_GALAR, 1
# 2977 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ghost_Page6_5:
# 2979 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_ZORUA_HISUI, 1
# 2980 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Ghost_Page6_6:
# 2982 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Ghost_Page5
	return

Auto_EventScript_Pokemon_Shop_Ghost_Page6_7:
# 2984 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Ghost_Page1
	return


Auto_EventScript_Pokemon_Shop_Grass_Page1::
# 2992 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Grass_Page1
# 2993 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 2995 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Grass_Page1_2
# 2998 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Grass_Page1_3
# 3001 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Grass_Page1_4
# 3004 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Grass_Page1_5
# 3007 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Grass_Page1_6
# 3010 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Grass_Page1_7
# 3012 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Grass_Page1_8
# 3015 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page2
	return

Auto_EventScript_Pokemon_Shop_Grass_Page1_2:
# 2996 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_APPLIN, 1
# 2997 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Grass_Page1_3:
# 2999 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_BELLSPROUT, 1
# 3000 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Grass_Page1_4:
# 3002 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_BOUNSWEET, 1
# 3003 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Grass_Page1_5:
# 3005 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_BRAMBLIN, 1
# 3006 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Grass_Page1_6:
# 3008 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_BRUTE_BONNET, 1
# 3009 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Grass_Page1_7:
# 3011 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Grass_Page11
	return

Auto_EventScript_Pokemon_Shop_Grass_Page1_8:
# 3013 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Grass_Page2
	return


Auto_EventScript_Pokemon_Shop_Grass_Page2::
# 3021 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Grass_Page2
# 3022 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 3024 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Grass_Page2_2
# 3027 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Grass_Page2_3
# 3030 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Grass_Page2_4
# 3033 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Grass_Page2_5
# 3036 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Grass_Page2_6
# 3039 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Grass_Page2_7
# 3041 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Grass_Page2_8
# 3044 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page2
	return

Auto_EventScript_Pokemon_Shop_Grass_Page2_2:
# 3025 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_BUDEW, 1
# 3026 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Grass_Page2_3:
# 3028 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_BULBASAUR, 1
# 3029 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Grass_Page2_4:
# 3031 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_CACNEA, 1
# 3032 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Grass_Page2_5:
# 3034 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_CAPSAKID, 1
# 3035 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Grass_Page2_6:
# 3037 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_CARNIVINE, 1
# 3038 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Grass_Page2_7:
# 3040 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Grass_Page1
	return

Auto_EventScript_Pokemon_Shop_Grass_Page2_8:
# 3042 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Grass_Page3
	return


Auto_EventScript_Pokemon_Shop_Grass_Page3::
# 3050 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Grass_Page3
# 3051 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 3053 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Grass_Page3_2
# 3056 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Grass_Page3_3
# 3059 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Grass_Page3_4
# 3062 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Grass_Page3_5
# 3065 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Grass_Page3_6
# 3068 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Grass_Page3_7
# 3070 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Grass_Page3_8
# 3073 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page2
	return

Auto_EventScript_Pokemon_Shop_Grass_Page3_2:
# 3054 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_CHERUBI, 1
# 3055 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Grass_Page3_3:
# 3057 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_CHESPIN, 1
# 3058 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Grass_Page3_4:
# 3060 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_CHIKORITA, 1
# 3061 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Grass_Page3_5:
# 3063 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_COTTONEE, 1
# 3064 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Grass_Page3_6:
# 3066 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_DEERLING, 1
# 3067 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Grass_Page3_7:
# 3069 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Grass_Page2
	return

Auto_EventScript_Pokemon_Shop_Grass_Page3_8:
# 3071 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Grass_Page4
	return


Auto_EventScript_Pokemon_Shop_Grass_Page4::
# 3079 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Grass_Page4
# 3080 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 3082 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Grass_Page4_2
# 3085 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Grass_Page4_3
# 3088 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Grass_Page4_4
# 3091 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Grass_Page4_5
# 3094 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Grass_Page4_6
# 3097 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Grass_Page4_7
# 3099 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Grass_Page4_8
# 3102 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page2
	return

Auto_EventScript_Pokemon_Shop_Grass_Page4_2:
# 3083 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_DHELMISE, 1
# 3084 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Grass_Page4_3:
# 3086 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_EXEGGCUTE, 1
# 3087 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Grass_Page4_4:
# 3089 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_FERROSEED, 1
# 3090 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Grass_Page4_5:
# 3092 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_FOMANTIS, 1
# 3093 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Grass_Page4_6:
# 3095 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_FOONGUS, 1
# 3096 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Grass_Page4_7:
# 3098 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Grass_Page3
	return

Auto_EventScript_Pokemon_Shop_Grass_Page4_8:
# 3100 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Grass_Page5
	return


Auto_EventScript_Pokemon_Shop_Grass_Page5::
# 3108 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Grass_Page5
# 3109 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 3111 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Grass_Page5_2
# 3114 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Grass_Page5_3
# 3117 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Grass_Page5_4
# 3120 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Grass_Page5_5
# 3123 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Grass_Page5_6
# 3126 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Grass_Page5_7
# 3128 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Grass_Page5_8
# 3131 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page2
	return

Auto_EventScript_Pokemon_Shop_Grass_Page5_2:
# 3112 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_GOSSIFLEUR, 1
# 3113 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Grass_Page5_3:
# 3115 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_GROOKEY, 1
# 3116 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Grass_Page5_4:
# 3118 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_HOPPIP, 1
# 3119 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Grass_Page5_5:
# 3121 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_IRON_LEAVES, 1
# 3122 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Grass_Page5_6:
# 3124 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_KARTANA, 1
# 3125 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Grass_Page5_7:
# 3127 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Grass_Page4
	return

Auto_EventScript_Pokemon_Shop_Grass_Page5_8:
# 3129 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Grass_Page6
	return


Auto_EventScript_Pokemon_Shop_Grass_Page6::
# 3137 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Grass_Page6
# 3138 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 3140 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Grass_Page6_2
# 3143 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Grass_Page6_3
# 3146 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Grass_Page6_4
# 3149 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Grass_Page6_5
# 3152 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Grass_Page6_6
# 3155 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Grass_Page6_7
# 3157 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Grass_Page6_8
# 3160 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page2
	return

Auto_EventScript_Pokemon_Shop_Grass_Page6_2:
# 3141 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_LILEEP, 1
# 3142 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Grass_Page6_3:
# 3144 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_LOTAD, 1
# 3145 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Grass_Page6_4:
# 3147 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_MARACTUS, 1
# 3148 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Grass_Page6_5:
# 3150 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_MORELULL, 1
# 3151 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Grass_Page6_6:
# 3153 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_ODDISH, 1
# 3154 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Grass_Page6_7:
# 3156 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Grass_Page5
	return

Auto_EventScript_Pokemon_Shop_Grass_Page6_8:
# 3158 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Grass_Page7
	return


Auto_EventScript_Pokemon_Shop_Grass_Page7::
# 3166 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Grass_Page7
# 3167 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 3169 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Grass_Page7_2
# 3172 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Grass_Page7_3
# 3175 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Grass_Page7_4
# 3178 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Grass_Page7_5
# 3181 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Grass_Page7_6
# 3184 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Grass_Page7_7
# 3186 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Grass_Page7_8
# 3189 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page2
	return

Auto_EventScript_Pokemon_Shop_Grass_Page7_2:
# 3170 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_PANSAGE, 1
# 3171 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Grass_Page7_3:
# 3173 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_PARAS, 1
# 3174 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Grass_Page7_4:
# 3176 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_PETILIL, 1
# 3177 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Grass_Page7_5:
# 3179 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_PHANTUMP, 1
# 3180 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Grass_Page7_6:
# 3182 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_POLTCHAGEIST, 1
# 3183 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Grass_Page7_7:
# 3185 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Grass_Page6
	return

Auto_EventScript_Pokemon_Shop_Grass_Page7_8:
# 3187 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Grass_Page8
	return


Auto_EventScript_Pokemon_Shop_Grass_Page8::
# 3195 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Grass_Page8
# 3196 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 3198 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Grass_Page8_2
# 3201 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Grass_Page8_3
# 3204 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Grass_Page8_4
# 3207 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Grass_Page8_5
# 3210 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Grass_Page8_6
# 3213 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Grass_Page8_7
# 3215 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Grass_Page8_8
# 3218 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page2
	return

Auto_EventScript_Pokemon_Shop_Grass_Page8_2:
# 3199 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_PUMPKABOO, 1
# 3200 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Grass_Page8_3:
# 3202 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_ROWLET, 1
# 3203 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Grass_Page8_4:
# 3205 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SEEDOT, 1
# 3206 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Grass_Page8_5:
# 3208 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SEWADDLE, 1
# 3209 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Grass_Page8_6:
# 3211 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SHROOMISH, 1
# 3212 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Grass_Page8_7:
# 3214 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Grass_Page7
	return

Auto_EventScript_Pokemon_Shop_Grass_Page8_8:
# 3216 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Grass_Page9
	return


Auto_EventScript_Pokemon_Shop_Grass_Page9::
# 3224 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Grass_Page9
# 3225 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 3227 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Grass_Page9_2
# 3230 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Grass_Page9_3
# 3233 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Grass_Page9_4
# 3236 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Grass_Page9_5
# 3239 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Grass_Page9_6
# 3242 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Grass_Page9_7
# 3244 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Grass_Page9_8
# 3247 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page2
	return

Auto_EventScript_Pokemon_Shop_Grass_Page9_2:
# 3228 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SKIDDO, 1
# 3229 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Grass_Page9_3:
# 3231 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SMOLIV, 1
# 3232 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Grass_Page9_4:
# 3234 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SNIVY, 1
# 3235 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Grass_Page9_5:
# 3237 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SNOVER, 1
# 3238 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Grass_Page9_6:
# 3240 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SPRIGATITO, 1
# 3241 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Grass_Page9_7:
# 3243 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Grass_Page8
	return

Auto_EventScript_Pokemon_Shop_Grass_Page9_8:
# 3245 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Grass_Page10
	return


Auto_EventScript_Pokemon_Shop_Grass_Page10::
# 3253 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Grass_Page10
# 3254 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 3256 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Grass_Page10_2
# 3259 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Grass_Page10_3
# 3262 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Grass_Page10_4
# 3265 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Grass_Page10_5
# 3268 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Grass_Page10_6
# 3271 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Grass_Page10_7
# 3273 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Grass_Page10_8
# 3276 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page2
	return

Auto_EventScript_Pokemon_Shop_Grass_Page10_2:
# 3257 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SUNKERN, 1
# 3258 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Grass_Page10_3:
# 3260 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_TANGELA, 1
# 3261 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Grass_Page10_4:
# 3263 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_TOEDSCOOL, 1
# 3264 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Grass_Page10_5:
# 3266 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_TREECKO, 1
# 3267 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Grass_Page10_6:
# 3269 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_TROPIUS, 1
# 3270 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Grass_Page10_7:
# 3272 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Grass_Page9
	return

Auto_EventScript_Pokemon_Shop_Grass_Page10_8:
# 3274 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Grass_Page11
	return


Auto_EventScript_Pokemon_Shop_Grass_Page11::
# 3282 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Grass_Page11
# 3283 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 3285 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Grass_Page11_2
# 3288 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Grass_Page11_3
# 3291 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Grass_Page11_4
# 3293 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Grass_Page11_5
# 3296 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page2
	return

Auto_EventScript_Pokemon_Shop_Grass_Page11_2:
# 3286 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_TURTWIG, 1
# 3287 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Grass_Page11_3:
# 3289 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_VOLTORB_HISUI, 1
# 3290 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Grass_Page11_4:
# 3292 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Grass_Page10
	return

Auto_EventScript_Pokemon_Shop_Grass_Page11_5:
# 3294 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Grass_Page1
	return


Auto_EventScript_Pokemon_Shop_Bug_Page1::
# 3302 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Bug_Page1
# 3303 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 3305 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Bug_Page1_2
# 3308 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Bug_Page1_3
# 3311 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Bug_Page1_4
# 3314 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Bug_Page1_5
# 3317 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Bug_Page1_6
# 3320 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Bug_Page1_7
# 3322 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Bug_Page1_8
# 3325 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page1
	return

Auto_EventScript_Pokemon_Shop_Bug_Page1_2:
# 3306 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_ANORITH, 1
# 3307 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Bug_Page1_3:
# 3309 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_BLIPBUG, 1
# 3310 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Bug_Page1_4:
# 3312 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_BURMY, 1
# 3313 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Bug_Page1_5:
# 3315 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_BUZZWOLE, 1
# 3316 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Bug_Page1_6:
# 3318 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_CATERPIE, 1
# 3319 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Bug_Page1_7:
# 3321 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Bug_Page9
	return

Auto_EventScript_Pokemon_Shop_Bug_Page1_8:
# 3323 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Bug_Page2
	return


Auto_EventScript_Pokemon_Shop_Bug_Page2::
# 3331 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Bug_Page2
# 3332 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 3334 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Bug_Page2_2
# 3337 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Bug_Page2_3
# 3340 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Bug_Page2_4
# 3343 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Bug_Page2_5
# 3346 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Bug_Page2_6
# 3349 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Bug_Page2_7
# 3351 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Bug_Page2_8
# 3354 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page1
	return

Auto_EventScript_Pokemon_Shop_Bug_Page2_2:
# 3335 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_COMBEE, 1
# 3336 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Bug_Page2_3:
# 3338 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_CUTIEFLY, 1
# 3339 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Bug_Page2_4:
# 3341 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_DEWPIDER, 1
# 3342 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Bug_Page2_5:
# 3344 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_DURANT, 1
# 3345 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Bug_Page2_6:
# 3347 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_DWEBBLE, 1
# 3348 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Bug_Page2_7:
# 3350 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Bug_Page1
	return

Auto_EventScript_Pokemon_Shop_Bug_Page2_8:
# 3352 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Bug_Page3
	return


Auto_EventScript_Pokemon_Shop_Bug_Page3::
# 3360 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Bug_Page3
# 3361 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 3363 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Bug_Page3_2
# 3366 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Bug_Page3_3
# 3369 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Bug_Page3_4
# 3372 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Bug_Page3_5
# 3375 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Bug_Page3_6
# 3378 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Bug_Page3_7
# 3380 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Bug_Page3_8
# 3383 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page1
	return

Auto_EventScript_Pokemon_Shop_Bug_Page3_2:
# 3364 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_GRUBBIN, 1
# 3365 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Bug_Page3_3:
# 3367 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_HERACROSS, 1
# 3368 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Bug_Page3_4:
# 3370 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_ILLUMISE, 1
# 3371 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Bug_Page3_5:
# 3373 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_JOLTIK, 1
# 3374 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Bug_Page3_6:
# 3376 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_KARRABLAST, 1
# 3377 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Bug_Page3_7:
# 3379 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Bug_Page2
	return

Auto_EventScript_Pokemon_Shop_Bug_Page3_8:
# 3381 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Bug_Page4
	return


Auto_EventScript_Pokemon_Shop_Bug_Page4::
# 3389 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Bug_Page4
# 3390 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 3392 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Bug_Page4_2
# 3395 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Bug_Page4_3
# 3398 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Bug_Page4_4
# 3401 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Bug_Page4_5
# 3404 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Bug_Page4_6
# 3407 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Bug_Page4_7
# 3409 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Bug_Page4_8
# 3412 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page1
	return

Auto_EventScript_Pokemon_Shop_Bug_Page4_2:
# 3393 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_KRICKETOT, 1
# 3394 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Bug_Page4_3:
# 3396 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_LARVESTA, 1
# 3397 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Bug_Page4_4:
# 3399 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_LEDYBA, 1
# 3400 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Bug_Page4_5:
# 3402 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_NINCADA, 1
# 3403 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Bug_Page4_6:
# 3405 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_NYMBLE, 1
# 3406 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Bug_Page4_7:
# 3408 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Bug_Page3
	return

Auto_EventScript_Pokemon_Shop_Bug_Page4_8:
# 3410 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Bug_Page5
	return


Auto_EventScript_Pokemon_Shop_Bug_Page5::
# 3418 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Bug_Page5
# 3419 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 3421 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Bug_Page5_2
# 3424 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Bug_Page5_3
# 3427 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Bug_Page5_4
# 3430 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Bug_Page5_5
# 3433 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Bug_Page5_6
# 3436 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Bug_Page5_7
# 3438 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Bug_Page5_8
# 3441 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page1
	return

Auto_EventScript_Pokemon_Shop_Bug_Page5_2:
# 3422 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_PARAS, 1
# 3423 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Bug_Page5_3:
# 3425 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_PHEROMOSA, 1
# 3426 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Bug_Page5_4:
# 3428 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_PINECO, 1
# 3429 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Bug_Page5_5:
# 3431 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_PINSIR, 1
# 3432 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Bug_Page5_6:
# 3434 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_RELLOR, 1
# 3435 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Bug_Page5_7:
# 3437 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Bug_Page4
	return

Auto_EventScript_Pokemon_Shop_Bug_Page5_8:
# 3439 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Bug_Page6
	return


Auto_EventScript_Pokemon_Shop_Bug_Page6::
# 3447 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Bug_Page6
# 3448 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 3450 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Bug_Page6_2
# 3453 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Bug_Page6_3
# 3456 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Bug_Page6_4
# 3459 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Bug_Page6_5
# 3462 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Bug_Page6_6
# 3465 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Bug_Page6_7
# 3467 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Bug_Page6_8
# 3470 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page1
	return

Auto_EventScript_Pokemon_Shop_Bug_Page6_2:
# 3451 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SCATTERBUG, 1
# 3452 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Bug_Page6_3:
# 3454 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SCYTHER, 1
# 3455 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Bug_Page6_4:
# 3457 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SEWADDLE, 1
# 3458 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Bug_Page6_5:
# 3460 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SHELMET, 1
# 3461 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Bug_Page6_6:
# 3463 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SHUCKLE, 1
# 3464 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Bug_Page6_7:
# 3466 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Bug_Page5
	return

Auto_EventScript_Pokemon_Shop_Bug_Page6_8:
# 3468 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Bug_Page7
	return


Auto_EventScript_Pokemon_Shop_Bug_Page7::
# 3476 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Bug_Page7
# 3477 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 3479 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Bug_Page7_2
# 3482 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Bug_Page7_3
# 3485 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Bug_Page7_4
# 3488 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Bug_Page7_5
# 3491 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Bug_Page7_6
# 3494 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Bug_Page7_7
# 3496 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Bug_Page7_8
# 3499 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page1
	return

Auto_EventScript_Pokemon_Shop_Bug_Page7_2:
# 3480 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SIZZLIPEDE, 1
# 3481 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Bug_Page7_3:
# 3483 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SKORUPI, 1
# 3484 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Bug_Page7_4:
# 3486 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SLITHER_WING, 1
# 3487 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Bug_Page7_5:
# 3489 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SNOM, 1
# 3490 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Bug_Page7_6:
# 3492 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SPINARAK, 1
# 3493 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Bug_Page7_7:
# 3495 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Bug_Page6
	return

Auto_EventScript_Pokemon_Shop_Bug_Page7_8:
# 3497 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Bug_Page8
	return


Auto_EventScript_Pokemon_Shop_Bug_Page8::
# 3505 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Bug_Page8
# 3506 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 3508 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Bug_Page8_2
# 3511 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Bug_Page8_3
# 3514 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Bug_Page8_4
# 3517 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Bug_Page8_5
# 3520 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Bug_Page8_6
# 3523 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Bug_Page8_7
# 3525 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Bug_Page8_8
# 3528 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page1
	return

Auto_EventScript_Pokemon_Shop_Bug_Page8_2:
# 3509 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SURSKIT, 1
# 3510 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Bug_Page8_3:
# 3512 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_TAROUNTULA, 1
# 3513 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Bug_Page8_4:
# 3515 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_VENIPEDE, 1
# 3516 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Bug_Page8_5:
# 3518 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_VENONAT, 1
# 3519 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Bug_Page8_6:
# 3521 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_VOLBEAT, 1
# 3522 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Bug_Page8_7:
# 3524 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Bug_Page7
	return

Auto_EventScript_Pokemon_Shop_Bug_Page8_8:
# 3526 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Bug_Page9
	return


Auto_EventScript_Pokemon_Shop_Bug_Page9::
# 3534 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Bug_Page9
# 3535 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 3537 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Bug_Page9_2
# 3540 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Bug_Page9_3
# 3543 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Bug_Page9_4
# 3546 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Bug_Page9_5
# 3549 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Bug_Page9_6
# 3551 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Bug_Page9_7
# 3554 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page1
	return

Auto_EventScript_Pokemon_Shop_Bug_Page9_2:
# 3538 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_WEEDLE, 1
# 3539 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Bug_Page9_3:
# 3541 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_WIMPOD, 1
# 3542 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Bug_Page9_4:
# 3544 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_WURMPLE, 1
# 3545 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Bug_Page9_5:
# 3547 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_YANMA, 1
# 3548 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Bug_Page9_6:
# 3550 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Bug_Page8
	return

Auto_EventScript_Pokemon_Shop_Bug_Page9_7:
# 3552 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Bug_Page1
	return


Auto_EventScript_Pokemon_Shop_Dark_Page1::
# 3560 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Dark_Page1
# 3561 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 3563 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Dark_Page1_2
# 3566 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Dark_Page1_3
# 3569 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Dark_Page1_4
# 3572 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Dark_Page1_5
# 3575 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Dark_Page1_6
# 3578 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Dark_Page1_7
# 3580 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Dark_Page1_8
# 3583 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page1
	return

Auto_EventScript_Pokemon_Shop_Dark_Page1_2:
# 3564 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_ABSOL, 1
# 3565 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Dark_Page1_3:
# 3567 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_BOMBIRDIER, 1
# 3568 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Dark_Page1_4:
# 3570 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_BRUTE_BONNET, 1
# 3571 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Dark_Page1_5:
# 3573 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_CARVANHA, 1
# 3574 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Dark_Page1_6:
# 3576 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_DEINO, 1
# 3577 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Dark_Page1_7:
# 3579 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Dark_Page7
	return

Auto_EventScript_Pokemon_Shop_Dark_Page1_8:
# 3581 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Dark_Page2
	return


Auto_EventScript_Pokemon_Shop_Dark_Page2::
# 3589 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Dark_Page2
# 3590 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 3592 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Dark_Page2_2
# 3595 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Dark_Page2_3
# 3598 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Dark_Page2_4
# 3601 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Dark_Page2_5
# 3604 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Dark_Page2_6
# 3607 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Dark_Page2_7
# 3609 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Dark_Page2_8
# 3612 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page1
	return

Auto_EventScript_Pokemon_Shop_Dark_Page2_2:
# 3593 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_GRIMER_ALOLA, 1
# 3594 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Dark_Page2_3:
# 3596 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_GUZZLORD, 1
# 3597 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Dark_Page2_4:
# 3599 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_HOUNDOUR, 1
# 3600 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Dark_Page2_5:
# 3602 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_IMPIDIMP, 1
# 3603 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Dark_Page2_6:
# 3605 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_INKAY, 1
# 3606 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Dark_Page2_7:
# 3608 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Dark_Page1
	return

Auto_EventScript_Pokemon_Shop_Dark_Page2_8:
# 3610 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Dark_Page3
	return


Auto_EventScript_Pokemon_Shop_Dark_Page3::
# 3618 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Dark_Page3
# 3619 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 3621 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Dark_Page3_2
# 3624 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Dark_Page3_3
# 3627 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Dark_Page3_4
# 3630 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Dark_Page3_5
# 3633 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Dark_Page3_6
# 3636 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Dark_Page3_7
# 3638 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Dark_Page3_8
# 3641 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page1
	return

Auto_EventScript_Pokemon_Shop_Dark_Page3_2:
# 3622 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_IRON_JUGULIS, 1
# 3623 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Dark_Page3_3:
# 3625 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_MASCHIFF, 1
# 3626 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Dark_Page3_4:
# 3628 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_MEOWTH_ALOLA, 1
# 3629 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Dark_Page3_5:
# 3631 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_MOLTRES_GALAR, 1
# 3632 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Dark_Page3_6:
# 3634 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_MORPEKO, 1
# 3635 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Dark_Page3_7:
# 3637 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Dark_Page2
	return

Auto_EventScript_Pokemon_Shop_Dark_Page3_8:
# 3639 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Dark_Page4
	return


Auto_EventScript_Pokemon_Shop_Dark_Page4::
# 3647 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Dark_Page4
# 3648 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 3650 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Dark_Page4_2
# 3653 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Dark_Page4_3
# 3656 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Dark_Page4_4
# 3659 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Dark_Page4_5
# 3662 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Dark_Page4_6
# 3665 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Dark_Page4_7
# 3667 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Dark_Page4_8
# 3670 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page1
	return

Auto_EventScript_Pokemon_Shop_Dark_Page4_2:
# 3651 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_MURKROW, 1
# 3652 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Dark_Page4_3:
# 3654 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_NICKIT, 1
# 3655 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Dark_Page4_4:
# 3657 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_PAWNIARD, 1
# 3658 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Dark_Page4_5:
# 3660 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_POOCHYENA, 1
# 3661 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Dark_Page4_6:
# 3663 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_PURRLOIN, 1
# 3664 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Dark_Page4_7:
# 3666 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Dark_Page3
	return

Auto_EventScript_Pokemon_Shop_Dark_Page4_8:
# 3668 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Dark_Page5
	return


Auto_EventScript_Pokemon_Shop_Dark_Page5::
# 3676 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Dark_Page5
# 3677 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 3679 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Dark_Page5_2
# 3682 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Dark_Page5_3
# 3685 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Dark_Page5_4
# 3688 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Dark_Page5_5
# 3691 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Dark_Page5_6
# 3694 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Dark_Page5_7
# 3696 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Dark_Page5_8
# 3699 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page1
	return

Auto_EventScript_Pokemon_Shop_Dark_Page5_2:
# 3680 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_QWILFISH_HISUI, 1
# 3681 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Dark_Page5_3:
# 3683 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_RATTATA_ALOLA, 1
# 3684 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Dark_Page5_4:
# 3686 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_ROARING_MOON, 1
# 3687 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Dark_Page5_5:
# 3689 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SABLEYE, 1
# 3690 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Dark_Page5_6:
# 3692 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SANDILE, 1
# 3693 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Dark_Page5_7:
# 3695 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Dark_Page4
	return

Auto_EventScript_Pokemon_Shop_Dark_Page5_8:
# 3697 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Dark_Page6
	return


Auto_EventScript_Pokemon_Shop_Dark_Page6::
# 3705 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Dark_Page6
# 3706 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 3708 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Dark_Page6_2
# 3711 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Dark_Page6_3
# 3714 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Dark_Page6_4
# 3717 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Dark_Page6_5
# 3720 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Dark_Page6_6
# 3723 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Dark_Page6_7
# 3725 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Dark_Page6_8
# 3728 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page1
	return

Auto_EventScript_Pokemon_Shop_Dark_Page6_2:
# 3709 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SCRAGGY, 1
# 3710 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Dark_Page6_3:
# 3712 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SNEASEL, 1
# 3713 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Dark_Page6_4:
# 3715 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SPIRITOMB, 1
# 3716 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Dark_Page6_5:
# 3718 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_STUNKY, 1
# 3719 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Dark_Page6_6:
# 3721 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_VULLABY, 1
# 3722 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Dark_Page6_7:
# 3724 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Dark_Page5
	return

Auto_EventScript_Pokemon_Shop_Dark_Page6_8:
# 3726 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Dark_Page7
	return


Auto_EventScript_Pokemon_Shop_Dark_Page7::
# 3734 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Dark_Page7
# 3735 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 3737 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Dark_Page7_2
# 3740 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Dark_Page7_3
# 3743 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Dark_Page7_4
# 3745 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Dark_Page7_5
# 3748 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page1
	return

Auto_EventScript_Pokemon_Shop_Dark_Page7_2:
# 3738 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_ZIGZAGOON_GALAR, 1
# 3739 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Dark_Page7_3:
# 3741 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_ZORUA, 1
# 3742 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Dark_Page7_4:
# 3744 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Dark_Page6
	return

Auto_EventScript_Pokemon_Shop_Dark_Page7_5:
# 3746 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Dark_Page1
	return


Auto_EventScript_Pokemon_Shop_Dragon_Page1::
# 3754 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Dragon_Page1
# 3755 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 3757 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Dragon_Page1_2
# 3760 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Dragon_Page1_3
# 3763 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Dragon_Page1_4
# 3766 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Dragon_Page1_5
# 3769 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Dragon_Page1_6
# 3772 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Dragon_Page1_7
# 3774 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Dragon_Page1_8
# 3777 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page1
	return

Auto_EventScript_Pokemon_Shop_Dragon_Page1_2:
# 3758 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_APPLIN, 1
# 3759 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Dragon_Page1_3:
# 3761 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_AXEW, 1
# 3762 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Dragon_Page1_4:
# 3764 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_BAGON, 1
# 3765 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Dragon_Page1_5:
# 3767 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_CYCLIZAR, 1
# 3768 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Dragon_Page1_6:
# 3770 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_DEINO, 1
# 3771 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Dragon_Page1_7:
# 3773 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Dragon_Page5
	return

Auto_EventScript_Pokemon_Shop_Dragon_Page1_8:
# 3775 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Dragon_Page2
	return


Auto_EventScript_Pokemon_Shop_Dragon_Page2::
# 3783 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Dragon_Page2
# 3784 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 3786 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Dragon_Page2_2
# 3789 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Dragon_Page2_3
# 3792 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Dragon_Page2_4
# 3795 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Dragon_Page2_5
# 3798 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Dragon_Page2_6
# 3801 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Dragon_Page2_7
# 3803 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Dragon_Page2_8
# 3806 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page1
	return

Auto_EventScript_Pokemon_Shop_Dragon_Page2_2:
# 3787 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_DRACOVISH, 1
# 3788 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Dragon_Page2_3:
# 3790 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_DRACOZOLT, 1
# 3791 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Dragon_Page2_4:
# 3793 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_DRAMPA, 1
# 3794 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Dragon_Page2_5:
# 3796 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_DRATINI, 1
# 3797 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Dragon_Page2_6:
# 3799 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_DREEPY, 1
# 3800 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Dragon_Page2_7:
# 3802 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Dragon_Page1
	return

Auto_EventScript_Pokemon_Shop_Dragon_Page2_8:
# 3804 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Dragon_Page3
	return


Auto_EventScript_Pokemon_Shop_Dragon_Page3::
# 3812 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Dragon_Page3
# 3813 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 3815 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Dragon_Page3_2
# 3818 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Dragon_Page3_3
# 3821 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Dragon_Page3_4
# 3824 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Dragon_Page3_5
# 3827 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Dragon_Page3_6
# 3830 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Dragon_Page3_7
# 3832 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Dragon_Page3_8
# 3835 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page1
	return

Auto_EventScript_Pokemon_Shop_Dragon_Page3_2:
# 3816 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_DRUDDIGON, 1
# 3817 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Dragon_Page3_3:
# 3819 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_DURALUDON, 1
# 3820 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Dragon_Page3_4:
# 3822 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_FRIGIBAX, 1
# 3823 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Dragon_Page3_5:
# 3825 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_GIBLE, 1
# 3826 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Dragon_Page3_6:
# 3828 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_GOOMY, 1
# 3829 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Dragon_Page3_7:
# 3831 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Dragon_Page2
	return

Auto_EventScript_Pokemon_Shop_Dragon_Page3_8:
# 3833 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Dragon_Page4
	return


Auto_EventScript_Pokemon_Shop_Dragon_Page4::
# 3841 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Dragon_Page4
# 3842 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 3844 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Dragon_Page4_2
# 3847 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Dragon_Page4_3
# 3850 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Dragon_Page4_4
# 3853 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Dragon_Page4_5
# 3856 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Dragon_Page4_6
# 3859 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Dragon_Page4_7
# 3861 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Dragon_Page4_8
# 3864 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page1
	return

Auto_EventScript_Pokemon_Shop_Dragon_Page4_2:
# 3845 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_GOUGING_FIRE, 1
# 3846 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Dragon_Page4_3:
# 3848 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_GUZZLORD, 1
# 3849 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Dragon_Page4_4:
# 3851 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_JANGMO_O, 1
# 3852 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Dragon_Page4_5:
# 3854 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_NOIBAT, 1
# 3855 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Dragon_Page4_6:
# 3857 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_RAGING_BOLT, 1
# 3858 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Dragon_Page4_7:
# 3860 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Dragon_Page3
	return

Auto_EventScript_Pokemon_Shop_Dragon_Page4_8:
# 3862 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Dragon_Page5
	return


Auto_EventScript_Pokemon_Shop_Dragon_Page5::
# 3870 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Dragon_Page5
# 3871 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 3873 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Dragon_Page5_2
# 3876 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Dragon_Page5_3
# 3879 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Dragon_Page5_4
# 3882 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Dragon_Page5_5
# 3885 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Dragon_Page5_6
# 3888 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Dragon_Page5_7
# 3890 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Dragon_Page5_8
# 3893 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page1
	return

Auto_EventScript_Pokemon_Shop_Dragon_Page5_2:
# 3874 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_ROARING_MOON, 1
# 3875 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Dragon_Page5_3:
# 3877 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_TATSUGIRI, 1
# 3878 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Dragon_Page5_4:
# 3880 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_TURTONATOR, 1
# 3881 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Dragon_Page5_5:
# 3883 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_TYRUNT, 1
# 3884 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Dragon_Page5_6:
# 3886 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_WALKING_WAKE, 1
# 3887 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Dragon_Page5_7:
# 3889 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Dragon_Page4
	return

Auto_EventScript_Pokemon_Shop_Dragon_Page5_8:
# 3891 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Dragon_Page1
	return


Auto_EventScript_Pokemon_Shop_Electric_Page1::
# 3899 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Electric_Page1
# 3900 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 3902 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Electric_Page1_2
# 3905 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Electric_Page1_3
# 3908 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Electric_Page1_4
# 3911 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Electric_Page1_5
# 3914 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Electric_Page1_6
# 3917 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Electric_Page1_7
# 3919 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Electric_Page1_8
# 3922 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page1
	return

Auto_EventScript_Pokemon_Shop_Electric_Page1_2:
# 3903 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_ARCTOZOLT, 1
# 3904 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Electric_Page1_3:
# 3906 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_BLITZLE, 1
# 3907 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Electric_Page1_4:
# 3909 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_CHINCHOU, 1
# 3910 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Electric_Page1_5:
# 3912 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_DEDENNE, 1
# 3913 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Electric_Page1_6:
# 3915 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_DRACOZOLT, 1
# 3916 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Electric_Page1_7:
# 3918 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Electric_Page8
	return

Auto_EventScript_Pokemon_Shop_Electric_Page1_8:
# 3920 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Electric_Page2
	return


Auto_EventScript_Pokemon_Shop_Electric_Page2::
# 3928 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Electric_Page2
# 3929 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 3931 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Electric_Page2_2
# 3934 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Electric_Page2_3
# 3937 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Electric_Page2_4
# 3940 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Electric_Page2_5
# 3943 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Electric_Page2_6
# 3946 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Electric_Page2_7
# 3948 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Electric_Page2_8
# 3951 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page1
	return

Auto_EventScript_Pokemon_Shop_Electric_Page2_2:
# 3932 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_ELECTRIKE, 1
# 3933 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Electric_Page2_3:
# 3935 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_ELEKID, 1
# 3936 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Electric_Page2_4:
# 3938 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_EMOLGA, 1
# 3939 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Electric_Page2_5:
# 3941 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_GEODUDE_ALOLA, 1
# 3942 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Electric_Page2_6:
# 3944 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_HELIOPTILE, 1
# 3945 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Electric_Page2_7:
# 3947 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Electric_Page1
	return

Auto_EventScript_Pokemon_Shop_Electric_Page2_8:
# 3949 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Electric_Page3
	return


Auto_EventScript_Pokemon_Shop_Electric_Page3::
# 3957 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Electric_Page3
# 3958 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 3960 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Electric_Page3_2
# 3963 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Electric_Page3_3
# 3966 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Electric_Page3_4
# 3969 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Electric_Page3_5
# 3972 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Electric_Page3_6
# 3975 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Electric_Page3_7
# 3977 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Electric_Page3_8
# 3980 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page1
	return

Auto_EventScript_Pokemon_Shop_Electric_Page3_2:
# 3961 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_IRON_HANDS, 1
# 3962 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Electric_Page3_3:
# 3964 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_IRON_THORNS, 1
# 3965 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Electric_Page3_4:
# 3967 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_JOLTIK, 1
# 3968 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Electric_Page3_5:
# 3970 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_MAGNEMITE, 1
# 3971 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Electric_Page3_6:
# 3973 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_MAREEP, 1
# 3974 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Electric_Page3_7:
# 3976 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Electric_Page2
	return

Auto_EventScript_Pokemon_Shop_Electric_Page3_8:
# 3978 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Electric_Page4
	return


Auto_EventScript_Pokemon_Shop_Electric_Page4::
# 3986 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Electric_Page4
# 3987 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 3989 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Electric_Page4_2
# 3992 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Electric_Page4_3
# 3995 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Electric_Page4_4
# 3998 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Electric_Page4_5
# 4001 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Electric_Page4_6
# 4004 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Electric_Page4_7
# 4006 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Electric_Page4_8
# 4009 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page1
	return

Auto_EventScript_Pokemon_Shop_Electric_Page4_2:
# 3990 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_MINUN, 1
# 3991 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Electric_Page4_3:
# 3993 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_MORPEKO, 1
# 3994 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Electric_Page4_4:
# 3996 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_PACHIRISU, 1
# 3997 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Electric_Page4_5:
# 3999 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_PAWMI, 1
# 4000 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Electric_Page4_6:
# 4002 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_PICHU, 1
# 4003 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Electric_Page4_7:
# 4005 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Electric_Page3
	return

Auto_EventScript_Pokemon_Shop_Electric_Page4_8:
# 4007 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Electric_Page5
	return


Auto_EventScript_Pokemon_Shop_Electric_Page5::
# 4015 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Electric_Page5
# 4016 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 4018 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Electric_Page5_2
# 4021 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Electric_Page5_3
# 4024 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Electric_Page5_4
# 4027 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Electric_Page5_5
# 4030 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Electric_Page5_6
# 4033 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Electric_Page5_7
# 4035 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Electric_Page5_8
# 4038 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page1
	return

Auto_EventScript_Pokemon_Shop_Electric_Page5_2:
# 4019 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_PINCURCHIN, 1
# 4020 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Electric_Page5_3:
# 4022 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_PLUSLE, 1
# 4023 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Electric_Page5_4:
# 4025 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_RAGING_BOLT, 1
# 4026 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Electric_Page5_5:
# 4028 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_ROTOM, 1
# 4029 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Electric_Page5_6:
# 4031 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SANDY_SHOCKS, 1
# 4032 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Electric_Page5_7:
# 4034 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Electric_Page4
	return

Auto_EventScript_Pokemon_Shop_Electric_Page5_8:
# 4036 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Electric_Page6
	return


Auto_EventScript_Pokemon_Shop_Electric_Page6::
# 4044 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Electric_Page6
# 4045 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 4047 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Electric_Page6_2
# 4050 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Electric_Page6_3
# 4053 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Electric_Page6_4
# 4056 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Electric_Page6_5
# 4059 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Electric_Page6_6
# 4062 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Electric_Page6_7
# 4064 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Electric_Page6_8
# 4067 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page1
	return

Auto_EventScript_Pokemon_Shop_Electric_Page6_2:
# 4048 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SHINX, 1
# 4049 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Electric_Page6_3:
# 4051 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_STUNFISK, 1
# 4052 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Electric_Page6_4:
# 4054 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_TADBULB, 1
# 4055 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Electric_Page6_5:
# 4057 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_TOGEDEMARU, 1
# 4058 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Electric_Page6_6:
# 4060 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_TOXEL, 1
# 4061 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Electric_Page6_7:
# 4063 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Electric_Page5
	return

Auto_EventScript_Pokemon_Shop_Electric_Page6_8:
# 4065 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Electric_Page7
	return


Auto_EventScript_Pokemon_Shop_Electric_Page7::
# 4073 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Electric_Page7
# 4074 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 4076 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Electric_Page7_2
# 4079 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Electric_Page7_3
# 4082 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Electric_Page7_4
# 4085 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Electric_Page7_5
# 4088 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Electric_Page7_6
# 4091 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Electric_Page7_7
# 4093 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Electric_Page7_8
# 4096 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page1
	return

Auto_EventScript_Pokemon_Shop_Electric_Page7_2:
# 4077 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_TYNAMO, 1
# 4078 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Electric_Page7_3:
# 4080 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_VOLTORB, 1
# 4081 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Electric_Page7_4:
# 4083 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_VOLTORB_HISUI, 1
# 4084 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Electric_Page7_5:
# 4086 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_WATTREL, 1
# 4087 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Electric_Page7_6:
# 4089 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_XURKITREE, 1
# 4090 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Electric_Page7_7:
# 4092 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Electric_Page6
	return

Auto_EventScript_Pokemon_Shop_Electric_Page7_8:
# 4094 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Electric_Page8
	return


Auto_EventScript_Pokemon_Shop_Electric_Page8::
# 4102 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Electric_Page8
# 4103 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 4105 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Electric_Page8_2
# 4108 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Electric_Page8_3
# 4110 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Electric_Page8_4
# 4113 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page1
	return

Auto_EventScript_Pokemon_Shop_Electric_Page8_2:
# 4106 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_YAMPER, 1
# 4107 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Electric_Page8_3:
# 4109 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Electric_Page7
	return

Auto_EventScript_Pokemon_Shop_Electric_Page8_4:
# 4111 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Electric_Page1
	return


Auto_EventScript_Pokemon_Shop_Fairy_Page1::
# 4119 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Fairy_Page1
# 4120 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 4122 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Fairy_Page1_2
# 4125 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Fairy_Page1_3
# 4128 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Fairy_Page1_4
# 4131 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Fairy_Page1_5
# 4134 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Fairy_Page1_6
# 4137 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Fairy_Page1_7
# 4139 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Fairy_Page1_8
# 4142 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page1
	return

Auto_EventScript_Pokemon_Shop_Fairy_Page1_2:
# 4123 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_AZURILL, 1
# 4124 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fairy_Page1_3:
# 4126 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_CARBINK, 1
# 4127 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fairy_Page1_4:
# 4129 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_CLEFFA, 1
# 4130 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fairy_Page1_5:
# 4132 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_COMFEY, 1
# 4133 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fairy_Page1_6:
# 4135 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_COTTONEE, 1
# 4136 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fairy_Page1_7:
# 4138 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Fairy_Page6
	return

Auto_EventScript_Pokemon_Shop_Fairy_Page1_8:
# 4140 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Fairy_Page2
	return


Auto_EventScript_Pokemon_Shop_Fairy_Page2::
# 4148 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Fairy_Page2
# 4149 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 4151 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Fairy_Page2_2
# 4154 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Fairy_Page2_3
# 4157 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Fairy_Page2_4
# 4160 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Fairy_Page2_5
# 4163 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Fairy_Page2_6
# 4166 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Fairy_Page2_7
# 4168 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Fairy_Page2_8
# 4171 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page1
	return

Auto_EventScript_Pokemon_Shop_Fairy_Page2_2:
# 4152 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_CUTIEFLY, 1
# 4153 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fairy_Page2_3:
# 4155 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_DEDENNE, 1
# 4156 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fairy_Page2_4:
# 4158 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_FIDOUGH, 1
# 4159 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fairy_Page2_5:
# 4161 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_FLABEBE, 1
# 4162 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fairy_Page2_6:
# 4164 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_FLUTTER_MANE, 1
# 4165 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fairy_Page2_7:
# 4167 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Fairy_Page1
	return

Auto_EventScript_Pokemon_Shop_Fairy_Page2_8:
# 4169 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Fairy_Page3
	return


Auto_EventScript_Pokemon_Shop_Fairy_Page3::
# 4177 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Fairy_Page3
# 4178 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 4180 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Fairy_Page3_2
# 4183 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Fairy_Page3_3
# 4186 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Fairy_Page3_4
# 4189 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Fairy_Page3_5
# 4192 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Fairy_Page3_6
# 4195 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Fairy_Page3_7
# 4197 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Fairy_Page3_8
# 4200 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page1
	return

Auto_EventScript_Pokemon_Shop_Fairy_Page3_2:
# 4181 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_IGGLYBUFF, 1
# 4182 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fairy_Page3_3:
# 4184 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_IMPIDIMP, 1
# 4185 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fairy_Page3_4:
# 4187 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_IRON_VALIANT, 1
# 4188 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fairy_Page3_5:
# 4190 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_KLEFKI, 1
# 4191 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fairy_Page3_6:
# 4193 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_MAWILE, 1
# 4194 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fairy_Page3_7:
# 4196 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Fairy_Page2
	return

Auto_EventScript_Pokemon_Shop_Fairy_Page3_8:
# 4198 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Fairy_Page4
	return


Auto_EventScript_Pokemon_Shop_Fairy_Page4::
# 4206 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Fairy_Page4
# 4207 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 4209 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Fairy_Page4_2
# 4212 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Fairy_Page4_3
# 4215 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Fairy_Page4_4
# 4218 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Fairy_Page4_5
# 4221 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Fairy_Page4_6
# 4224 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Fairy_Page4_7
# 4226 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Fairy_Page4_8
# 4229 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page1
	return

Auto_EventScript_Pokemon_Shop_Fairy_Page4_2:
# 4210 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_MILCERY, 1
# 4211 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fairy_Page4_3:
# 4213 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_MIME_JR, 1
# 4214 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fairy_Page4_4:
# 4216 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_MIMIKYU, 1
# 4217 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fairy_Page4_5:
# 4219 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_MORELULL, 1
# 4220 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fairy_Page4_6:
# 4222 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_RALTS, 1
# 4223 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fairy_Page4_7:
# 4225 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Fairy_Page3
	return

Auto_EventScript_Pokemon_Shop_Fairy_Page4_8:
# 4227 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Fairy_Page5
	return


Auto_EventScript_Pokemon_Shop_Fairy_Page5::
# 4235 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Fairy_Page5
# 4236 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 4238 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Fairy_Page5_2
# 4241 "data/scripts/pokemon_shop_options.pory"
	case 1, Auto_EventScript_Pokemon_Shop_Fairy_Page5_3
# 4244 "data/scripts/pokemon_shop_options.pory"
	case 2, Auto_EventScript_Pokemon_Shop_Fairy_Page5_4
# 4247 "data/scripts/pokemon_shop_options.pory"
	case 3, Auto_EventScript_Pokemon_Shop_Fairy_Page5_5
# 4250 "data/scripts/pokemon_shop_options.pory"
	case 4, Auto_EventScript_Pokemon_Shop_Fairy_Page5_6
# 4253 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Fairy_Page5_7
# 4255 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Fairy_Page5_8
# 4258 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page1
	return

Auto_EventScript_Pokemon_Shop_Fairy_Page5_2:
# 4239 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SCREAM_TAIL, 1
# 4240 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fairy_Page5_3:
# 4242 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SNUBBULL, 1
# 4243 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fairy_Page5_4:
# 4245 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SPRITZEE, 1
# 4246 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fairy_Page5_5:
# 4248 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_SWIRLIX, 1
# 4249 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fairy_Page5_6:
# 4251 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_TINKATINK, 1
# 4252 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fairy_Page5_7:
# 4254 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Fairy_Page4
	return

Auto_EventScript_Pokemon_Shop_Fairy_Page5_8:
# 4256 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Fairy_Page6
	return


Auto_EventScript_Pokemon_Shop_Fairy_Page6::
# 4264 "data/scripts/pokemon_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Pokemon_Shop_Fairy_Page6
# 4265 "data/scripts/pokemon_shop_options.pory"
	switch VAR_RESULT
# 4267 "data/scripts/pokemon_shop_options.pory"
	case 0, Auto_EventScript_Pokemon_Shop_Fairy_Page6_2
# 4270 "data/scripts/pokemon_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Pokemon_Shop_Fairy_Page6_3
# 4272 "data/scripts/pokemon_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Pokemon_Shop_Fairy_Page6_4
# 4275 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Page1
	return

Auto_EventScript_Pokemon_Shop_Fairy_Page6_2:
# 4268 "data/scripts/pokemon_shop_options.pory"
	givemon SPECIES_TOGEPI, 1
# 4269 "data/scripts/pokemon_shop_options.pory"
	goto Common_EventScript_Pokemon_Shop_CheckPurchase
	return

Auto_EventScript_Pokemon_Shop_Fairy_Page6_3:
# 4271 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Fairy_Page5
	return

Auto_EventScript_Pokemon_Shop_Fairy_Page6_4:
# 4273 "data/scripts/pokemon_shop_options.pory"
	goto Auto_EventScript_Pokemon_Shop_Fairy_Page1
	return


Auto_EventScript_Pokemon_Shop_Controls_Text_0:
# 5 "data/scripts/pokemon_shop_options.pory"
	.string "L: Previous Page                    R: Next Page\nA: Confirm                               B: Go Back$"

Auto_Text_Pokemon_Shop_Page1::
# 4279 "data/scripts/pokemon_shop_options.pory"
	.string "BUG$"
	.string "DARK$"
	.string "DRAGON$"
	.string "ELECTRIC$"
	.string "FAIRY$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Page2::
# 4290 "data/scripts/pokemon_shop_options.pory"
	.string "FIGHTING$"
	.string "FIRE$"
	.string "FLYING$"
	.string "GHOST$"
	.string "GRASS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Page3::
# 4301 "data/scripts/pokemon_shop_options.pory"
	.string "GROUND$"
	.string "ICE$"
	.string "NORMAL$"
	.string "POISON$"
	.string "PSYCHIC$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Page4::
# 4312 "data/scripts/pokemon_shop_options.pory"
	.string "ROCK$"
	.string "STEEL$"
	.string "WATER$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Rock_Page1::
# 4321 "data/scripts/pokemon_shop_options.pory"
	.string "AERODACTYL$"
	.string "AMAURA$"
	.string "ANORITH$"
	.string "ARCHEN$"
	.string "ARON$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Rock_Page2::
# 4332 "data/scripts/pokemon_shop_options.pory"
	.string "BINACLE$"
	.string "BONSLY$"
	.string "CARBINK$"
	.string "CORSOLA$"
	.string "CRANIDOS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Rock_Page3::
# 4343 "data/scripts/pokemon_shop_options.pory"
	.string "DWEBBLE$"
	.string "GEODUDE$"
	.string "GEODUDE-ALOLA$"
	.string "GLIMMET$"
	.string "GROWLITHE-HISUI$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Rock_Page4::
# 4354 "data/scripts/pokemon_shop_options.pory"
	.string "IRON BOULDER$"
	.string "IRON THORNS$"
	.string "KABUTO$"
	.string "KLAWF$"
	.string "LARVITAR$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Rock_Page5::
# 4365 "data/scripts/pokemon_shop_options.pory"
	.string "LILEEP$"
	.string "LUNATONE$"
	.string "MINIOR$"
	.string "NACLI$"
	.string "NIHILEGO$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Rock_Page6::
# 4376 "data/scripts/pokemon_shop_options.pory"
	.string "NOSEPASS$"
	.string "OMANYTE$"
	.string "ONIX$"
	.string "RELICANTH$"
	.string "RHYHORN$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Rock_Page7::
# 4387 "data/scripts/pokemon_shop_options.pory"
	.string "ROCKRUFF$"
	.string "ROGGENROLA$"
	.string "ROLYCOLY$"
	.string "SHIELDON$"
	.string "SHUCKLE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Rock_Page8::
# 4398 "data/scripts/pokemon_shop_options.pory"
	.string "SOLROCK$"
	.string "STAKATAKA$"
	.string "STONJOURNER$"
	.string "TIRTOUGA$"
	.string "TYRUNT$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Steel_Page1::
# 4409 "data/scripts/pokemon_shop_options.pory"
	.string "ARON$"
	.string "BELDUM$"
	.string "BRONZOR$"
	.string "CELESTEELA$"
	.string "CUFANT$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Steel_Page2::
# 4420 "data/scripts/pokemon_shop_options.pory"
	.string "DIGLETT-ALOLA$"
	.string "DURALUDON$"
	.string "DURANT$"
	.string "FERROSEED$"
	.string "HONEDGE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Steel_Page3::
# 4431 "data/scripts/pokemon_shop_options.pory"
	.string "IRON CROWN$"
	.string "IRON TREADS$"
	.string "KARTANA$"
	.string "KLEFKI$"
	.string "KLINK$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Steel_Page4::
# 4442 "data/scripts/pokemon_shop_options.pory"
	.string "MAGNEMITE$"
	.string "MAWILE$"
	.string "MEOWTH-GALAR$"
	.string "ORTHWORM$"
	.string "PAWNIARD$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Steel_Page5::
# 4453 "data/scripts/pokemon_shop_options.pory"
	.string "SANDSHREW-ALOLA$"
	.string "SHIELDON$"
	.string "SKARMORY$"
	.string "STAKATAKA$"
	.string "STUNFISK-GALAR$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Steel_Page6::
# 4464 "data/scripts/pokemon_shop_options.pory"
	.string "TINKATINK$"
	.string "TOGEDEMARU$"
	.string "VAROOM$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Water_Page1::
# 4473 "data/scripts/pokemon_shop_options.pory"
	.string "ALOMOMOLA$"
	.string "ARCTOVISH$"
	.string "ARROKUDA$"
	.string "BARBOACH$"
	.string "BASCULIN$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Water_Page2::
# 4484 "data/scripts/pokemon_shop_options.pory"
	.string "BINACLE$"
	.string "BRUXISH$"
	.string "BUIZEL$"
	.string "CARVANHA$"
	.string "CHEWTLE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Water_Page3::
# 4495 "data/scripts/pokemon_shop_options.pory"
	.string "CHINCHOU$"
	.string "CLAMPERL$"
	.string "CLAUNCHER$"
	.string "CORPHISH$"
	.string "CORSOLA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Water_Page4::
# 4506 "data/scripts/pokemon_shop_options.pory"
	.string "CRAMORANT$"
	.string "DEWPIDER$"
	.string "DONDOZO$"
	.string "DRACOVISH$"
	.string "DUCKLETT$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Water_Page5::
# 4517 "data/scripts/pokemon_shop_options.pory"
	.string "FEEBAS$"
	.string "FINIZEN$"
	.string "FINNEON$"
	.string "FRILLISH$"
	.string "FROAKIE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Water_Page6::
# 4528 "data/scripts/pokemon_shop_options.pory"
	.string "GOLDEEN$"
	.string "HORSEA$"
	.string "IRON BUNDLE$"
	.string "KABUTO$"
	.string "KRABBY$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Water_Page7::
# 4539 "data/scripts/pokemon_shop_options.pory"
	.string "LAPRAS$"
	.string "LOTAD$"
	.string "LUVDISC$"
	.string "MAGIKARP$"
	.string "MANTYKE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Water_Page8::
# 4550 "data/scripts/pokemon_shop_options.pory"
	.string "MAREANIE$"
	.string "MUDKIP$"
	.string "OMANYTE$"
	.string "OSHAWOTT$"
	.string "PANPOUR$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Water_Page9::
# 4561 "data/scripts/pokemon_shop_options.pory"
	.string "PIPLUP$"
	.string "POLIWAG$"
	.string "POPPLIO$"
	.string "PSYDUCK$"
	.string "PYUKUMUKU$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Water_Page10::
# 4572 "data/scripts/pokemon_shop_options.pory"
	.string "QUAXLY$"
	.string "QWILFISH$"
	.string "RELICANTH$"
	.string "REMORAID$"
	.string "SEEL$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Water_Page11::
# 4583 "data/scripts/pokemon_shop_options.pory"
	.string "SHELLDER$"
	.string "SHELLOS$"
	.string "SKRELP$"
	.string "SLOWPOKE$"
	.string "SOBBLE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Water_Page12::
# 4594 "data/scripts/pokemon_shop_options.pory"
	.string "SPHEAL$"
	.string "SQUIRTLE$"
	.string "STARYU$"
	.string "SURSKIT$"
	.string "TATSUGIRI$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Water_Page13::
# 4605 "data/scripts/pokemon_shop_options.pory"
	.string "TENTACOOL$"
	.string "TIRTOUGA$"
	.string "TOTODILE$"
	.string "TYMPOLE$"
	.string "VELUZA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Water_Page14::
# 4616 "data/scripts/pokemon_shop_options.pory"
	.string "WAILMER$"
	.string "WALKING WAKE$"
	.string "WIGLETT$"
	.string "WIMPOD$"
	.string "WINGULL$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Water_Page15::
# 4627 "data/scripts/pokemon_shop_options.pory"
	.string "WISHIWASHI$"
	.string "WOOPER$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Ground_Page1::
# 4635 "data/scripts/pokemon_shop_options.pory"
	.string "BALTOY$"
	.string "BARBOACH$"
	.string "CUBONE$"
	.string "DIGLETT$"
	.string "DIGLETT-ALOLA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Ground_Page2::
# 4646 "data/scripts/pokemon_shop_options.pory"
	.string "DRILBUR$"
	.string "GEODUDE$"
	.string "GIBLE$"
	.string "GLIGAR$"
	.string "GOLETT$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Ground_Page3::
# 4657 "data/scripts/pokemon_shop_options.pory"
	.string "GREAT TUSK$"
	.string "HIPPOPOTAS$"
	.string "IRON TREADS$"
	.string "LARVITAR$"
	.string "MUDBRAY$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Ground_Page4::
# 4668 "data/scripts/pokemon_shop_options.pory"
	.string "NINCADA$"
	.string "NUMEL$"
	.string "ONIX$"
	.string "PHANPY$"
	.string "RHYHORN$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Ground_Page5::
# 4679 "data/scripts/pokemon_shop_options.pory"
	.string "SANDILE$"
	.string "SANDSHREW$"
	.string "SANDY SHOCKS$"
	.string "SANDYGAST$"
	.string "SILICOBRA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Ground_Page6::
# 4690 "data/scripts/pokemon_shop_options.pory"
	.string "STUNFISK$"
	.string "STUNFISK-GALAR$"
	.string "SWINUB$"
	.string "TOEDSCOOL$"
	.string "TRAPINCH$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Ground_Page7::
# 4701 "data/scripts/pokemon_shop_options.pory"
	.string "WOOPER$"
	.string "WOOPER-PALDEA$"
	.string "YAMASK-GALAR$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Ice_Page1::
# 4710 "data/scripts/pokemon_shop_options.pory"
	.string "AMAURA$"
	.string "ARCTOVISH$"
	.string "ARCTOZOLT$"
	.string "BERGMITE$"
	.string "CETODDLE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Ice_Page2::
# 4721 "data/scripts/pokemon_shop_options.pory"
	.string "CRYOGONAL$"
	.string "CUBCHOO$"
	.string "DARUMAKA-GALAR$"
	.string "DELIBIRD$"
	.string "EISCUE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Ice_Page3::
# 4732 "data/scripts/pokemon_shop_options.pory"
	.string "FRIGIBAX$"
	.string "IRON BUNDLE$"
	.string "LAPRAS$"
	.string "SANDSHREW-ALOLA$"
	.string "SMOOCHUM$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Ice_Page4::
# 4743 "data/scripts/pokemon_shop_options.pory"
	.string "SNEASEL$"
	.string "SNOM$"
	.string "SNORUNT$"
	.string "SNOVER$"
	.string "SPHEAL$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Ice_Page5::
# 4754 "data/scripts/pokemon_shop_options.pory"
	.string "SWINUB$"
	.string "VANILLITE$"
	.string "VULPIX-ALOLA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Normal_Page1::
# 4763 "data/scripts/pokemon_shop_options.pory"
	.string "AIPOM$"
	.string "AUDINO$"
	.string "AZURILL$"
	.string "BIDOOF$"
	.string "BOUFFALANT$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Normal_Page2::
# 4774 "data/scripts/pokemon_shop_options.pory"
	.string "BUNEARY$"
	.string "BUNNELBY$"
	.string "CASTFORM$"
	.string "CHATOT$"
	.string "CYCLIZAR$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Normal_Page3::
# 4785 "data/scripts/pokemon_shop_options.pory"
	.string "DEERLING$"
	.string "DITTO$"
	.string "DODUO$"
	.string "DRAMPA$"
	.string "DUNSPARCE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Normal_Page4::
# 4796 "data/scripts/pokemon_shop_options.pory"
	.string "EEVEE$"
	.string "FARFETCHD$"
	.string "FLETCHLING$"
	.string "FURFROU$"
	.string "GIRAFARIG$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Normal_Page5::
# 4807 "data/scripts/pokemon_shop_options.pory"
	.string "GLAMEOW$"
	.string "HAPPINY$"
	.string "HELIOPTILE$"
	.string "HOOTHOOT$"
	.string "IGGLYBUFF$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Normal_Page6::
# 4818 "data/scripts/pokemon_shop_options.pory"
	.string "INDEEDEE$"
	.string "KANGASKHAN$"
	.string "KECLEON$"
	.string "KOMALA$"
	.string "LECHONK$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Normal_Page7::
# 4829 "data/scripts/pokemon_shop_options.pory"
	.string "LICKITUNG$"
	.string "LILLIPUP$"
	.string "LITLEO$"
	.string "MEOWTH$"
	.string "MILTANK$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Normal_Page8::
# 4840 "data/scripts/pokemon_shop_options.pory"
	.string "MINCCINO$"
	.string "MUNCHLAX$"
	.string "ORANGURU$"
	.string "PATRAT$"
	.string "PIDGEY$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Normal_Page9::
# 4851 "data/scripts/pokemon_shop_options.pory"
	.string "PIDOVE$"
	.string "PIKIPEK$"
	.string "PORYGON$"
	.string "RATTATA$"
	.string "RATTATA-ALOLA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Normal_Page10::
# 4862 "data/scripts/pokemon_shop_options.pory"
	.string "RUFFLET$"
	.string "SENTRET$"
	.string "SHROODLE$"
	.string "SKITTY$"
	.string "SKWOVET$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Normal_Page11::
# 4873 "data/scripts/pokemon_shop_options.pory"
	.string "SLAKOTH$"
	.string "SMEARGLE$"
	.string "SMOLIV$"
	.string "SPEAROW$"
	.string "SPINDA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Normal_Page12::
# 4884 "data/scripts/pokemon_shop_options.pory"
	.string "SQUAWKABILLY$"
	.string "STANTLER$"
	.string "STARLY$"
	.string "STUFFUL$"
	.string "SWABLU$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Normal_Page13::
# 4895 "data/scripts/pokemon_shop_options.pory"
	.string "TAILLOW$"
	.string "TANDEMAUS$"
	.string "TAUROS$"
	.string "TEDDIURSA$"
	.string "WHISMUR$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Normal_Page14::
# 4906 "data/scripts/pokemon_shop_options.pory"
	.string "WOOLOO$"
	.string "YUNGOOS$"
	.string "ZANGOOSE$"
	.string "ZIGZAGOON$"
	.string "ZIGZAGOON-GALAR$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Normal_Page15::
# 4917 "data/scripts/pokemon_shop_options.pory"
	.string "ZORUA-HISUI$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Poison_Page1::
# 4924 "data/scripts/pokemon_shop_options.pory"
	.string "BELLSPROUT$"
	.string "BUDEW$"
	.string "BULBASAUR$"
	.string "CROAGUNK$"
	.string "EKANS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Poison_Page2::
# 4935 "data/scripts/pokemon_shop_options.pory"
	.string "FOONGUS$"
	.string "GASTLY$"
	.string "GLIMMET$"
	.string "GRIMER$"
	.string "GRIMER-ALOLA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Poison_Page3::
# 4946 "data/scripts/pokemon_shop_options.pory"
	.string "GULPIN$"
	.string "IRON MOTH$"
	.string "KOFFING$"
	.string "MAREANIE$"
	.string "NIDORAN-F$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Poison_Page4::
# 4957 "data/scripts/pokemon_shop_options.pory"
	.string "NIDORAN-M$"
	.string "NIHILEGO$"
	.string "ODDISH$"
	.string "POIPOLE$"
	.string "QWILFISH$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Poison_Page5::
# 4968 "data/scripts/pokemon_shop_options.pory"
	.string "QWILFISH-HISUI$"
	.string "SALANDIT$"
	.string "SEVIPER$"
	.string "SHROODLE$"
	.string "SKORUPI$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Poison_Page6::
# 4979 "data/scripts/pokemon_shop_options.pory"
	.string "SKRELP$"
	.string "SNEASEL-HISUI$"
	.string "SPINARAK$"
	.string "STUNKY$"
	.string "TENTACOOL$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Poison_Page7::
# 4990 "data/scripts/pokemon_shop_options.pory"
	.string "TOXEL$"
	.string "TRUBBISH$"
	.string "VAROOM$"
	.string "VENIPEDE$"
	.string "VENONAT$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Poison_Page8::
# 5001 "data/scripts/pokemon_shop_options.pory"
	.string "WEEDLE$"
	.string "WOOPER-PALDEA$"
	.string "ZUBAT$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Psychic_Page1::
# 5010 "data/scripts/pokemon_shop_options.pory"
	.string "ABRA$"
	.string "ARTICUNO-GALAR$"
	.string "BALTOY$"
	.string "BELDUM$"
	.string "BRONZOR$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Psychic_Page2::
# 5021 "data/scripts/pokemon_shop_options.pory"
	.string "BRUXISH$"
	.string "CHINGLING$"
	.string "DROWZEE$"
	.string "ELGYEM$"
	.string "ESPURR$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Psychic_Page3::
# 5032 "data/scripts/pokemon_shop_options.pory"
	.string "EXEGGCUTE$"
	.string "FLITTLE$"
	.string "GIRAFARIG$"
	.string "GOTHITA$"
	.string "HATENNA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Psychic_Page4::
# 5043 "data/scripts/pokemon_shop_options.pory"
	.string "INDEEDEE$"
	.string "INKAY$"
	.string "IRON BOULDER$"
	.string "IRON CROWN$"
	.string "IRON LEAVES$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Psychic_Page5::
# 5054 "data/scripts/pokemon_shop_options.pory"
	.string "LUNATONE$"
	.string "MEDITITE$"
	.string "MIME JR.$"
	.string "MUNNA$"
	.string "NATU$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Psychic_Page6::
# 5065 "data/scripts/pokemon_shop_options.pory"
	.string "ORANGURU$"
	.string "PONYTA-GALAR$"
	.string "RALTS$"
	.string "SCREAM TAIL$"
	.string "SIGILYPH$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Psychic_Page7::
# 5076 "data/scripts/pokemon_shop_options.pory"
	.string "SLOWPOKE$"
	.string "SLOWPOKE-GALAR$"
	.string "SMOOCHUM$"
	.string "SOLOSIS$"
	.string "SOLROCK$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Psychic_Page8::
# 5087 "data/scripts/pokemon_shop_options.pory"
	.string "SPOINK$"
	.string "UNOWN$"
	.string "VELUZA$"
	.string "WOOBAT$"
	.string "WYNAUT$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Fighting_Page1::
# 5098 "data/scripts/pokemon_shop_options.pory"
	.string "BUZZWOLE$"
	.string "CLOBBOPUS$"
	.string "CRABRAWLER$"
	.string "CROAGUNK$"
	.string "FALINKS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Fighting_Page2::
# 5109 "data/scripts/pokemon_shop_options.pory"
	.string "FARFETCHD-GALAR$"
	.string "FLAMIGO$"
	.string "GREAT TUSK$"
	.string "HAWLUCHA$"
	.string "HERACROSS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Fighting_Page3::
# 5120 "data/scripts/pokemon_shop_options.pory"
	.string "IRON HANDS$"
	.string "IRON VALIANT$"
	.string "MACHOP$"
	.string "MAKUHITA$"
	.string "MANKEY$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Fighting_Page4::
# 5131 "data/scripts/pokemon_shop_options.pory"
	.string "MEDITITE$"
	.string "MIENFOO$"
	.string "PANCHAM$"
	.string "PASSIMIAN$"
	.string "PHEROMOSA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Fighting_Page5::
# 5142 "data/scripts/pokemon_shop_options.pory"
	.string "RIOLU$"
	.string "SAWK$"
	.string "SCRAGGY$"
	.string "SLITHER WING$"
	.string "SNEASEL-HISUI$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Fighting_Page6::
# 5153 "data/scripts/pokemon_shop_options.pory"
	.string "STUFFUL$"
	.string "THROH$"
	.string "TIMBURR$"
	.string "TYROGUE$"
	.string "ZAPDOS-GALAR$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Fire_Page1::
# 5164 "data/scripts/pokemon_shop_options.pory"
	.string "BLACEPHALON$"
	.string "CHARCADET$"
	.string "CHARMANDER$"
	.string "CHIMCHAR$"
	.string "CYNDAQUIL$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Fire_Page2::
# 5175 "data/scripts/pokemon_shop_options.pory"
	.string "DARUMAKA$"
	.string "FENNEKIN$"
	.string "FUECOCO$"
	.string "GOUGING FIRE$"
	.string "GROWLITHE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Fire_Page3::
# 5186 "data/scripts/pokemon_shop_options.pory"
	.string "GROWLITHE-HISUI$"
	.string "HEATMOR$"
	.string "HOUNDOUR$"
	.string "IRON MOTH$"
	.string "LARVESTA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Fire_Page4::
# 5197 "data/scripts/pokemon_shop_options.pory"
	.string "LITLEO$"
	.string "LITTEN$"
	.string "LITWICK$"
	.string "MAGBY$"
	.string "NUMEL$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Fire_Page5::
# 5208 "data/scripts/pokemon_shop_options.pory"
	.string "ORICORIO$"
	.string "PANSEAR$"
	.string "PONYTA$"
	.string "SALANDIT$"
	.string "SCORBUNNY$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Fire_Page6::
# 5219 "data/scripts/pokemon_shop_options.pory"
	.string "SIZZLIPEDE$"
	.string "SLUGMA$"
	.string "TEPIG$"
	.string "TORCHIC$"
	.string "TORKOAL$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Fire_Page7::
# 5230 "data/scripts/pokemon_shop_options.pory"
	.string "TURTONATOR$"
	.string "VULPIX$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Flying_Page1::
# 5238 "data/scripts/pokemon_shop_options.pory"
	.string "AERODACTYL$"
	.string "ARCHEN$"
	.string "ARTICUNO-GALAR$"
	.string "BOMBIRDIER$"
	.string "CELESTEELA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Flying_Page2::
# 5249 "data/scripts/pokemon_shop_options.pory"
	.string "CHATOT$"
	.string "COMBEE$"
	.string "CRAMORANT$"
	.string "DELIBIRD$"
	.string "DODUO$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Flying_Page3::
# 5260 "data/scripts/pokemon_shop_options.pory"
	.string "DRIFLOON$"
	.string "DUCKLETT$"
	.string "EMOLGA$"
	.string "FARFETCHD$"
	.string "FLAMIGO$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Flying_Page4::
# 5271 "data/scripts/pokemon_shop_options.pory"
	.string "FLETCHLING$"
	.string "GLIGAR$"
	.string "HAWLUCHA$"
	.string "HOOTHOOT$"
	.string "HOPPIP$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Flying_Page5::
# 5282 "data/scripts/pokemon_shop_options.pory"
	.string "IRON JUGULIS$"
	.string "LEDYBA$"
	.string "MANTYKE$"
	.string "MINIOR$"
	.string "MOLTRES-GALAR$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Flying_Page6::
# 5293 "data/scripts/pokemon_shop_options.pory"
	.string "MURKROW$"
	.string "NATU$"
	.string "NOIBAT$"
	.string "ORICORIO$"
	.string "PIDGEY$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Flying_Page7::
# 5304 "data/scripts/pokemon_shop_options.pory"
	.string "PIDOVE$"
	.string "PIKIPEK$"
	.string "ROOKIDEE$"
	.string "ROWLET$"
	.string "RUFFLET$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Flying_Page8::
# 5315 "data/scripts/pokemon_shop_options.pory"
	.string "SCYTHER$"
	.string "SIGILYPH$"
	.string "SKARMORY$"
	.string "SPEAROW$"
	.string "SQUAWKABILLY$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Flying_Page9::
# 5326 "data/scripts/pokemon_shop_options.pory"
	.string "STARLY$"
	.string "SWABLU$"
	.string "TAILLOW$"
	.string "TROPIUS$"
	.string "VULLABY$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Flying_Page10::
# 5337 "data/scripts/pokemon_shop_options.pory"
	.string "WATTREL$"
	.string "WINGULL$"
	.string "WOOBAT$"
	.string "YANMA$"
	.string "ZAPDOS-GALAR$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Flying_Page11::
# 5348 "data/scripts/pokemon_shop_options.pory"
	.string "ZUBAT$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Ghost_Page1::
# 5355 "data/scripts/pokemon_shop_options.pory"
	.string "BLACEPHALON$"
	.string "BRAMBLIN$"
	.string "CORSOLA-GALAR$"
	.string "DHELMISE$"
	.string "DREEPY$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Ghost_Page2::
# 5366 "data/scripts/pokemon_shop_options.pory"
	.string "DRIFLOON$"
	.string "DUSKULL$"
	.string "FLUTTER MANE$"
	.string "FRILLISH$"
	.string "GASTLY$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Ghost_Page3::
# 5377 "data/scripts/pokemon_shop_options.pory"
	.string "GIMMIGHOUL$"
	.string "GOLETT$"
	.string "GREAVARD$"
	.string "HONEDGE$"
	.string "LITWICK$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Ghost_Page4::
# 5388 "data/scripts/pokemon_shop_options.pory"
	.string "MIMIKYU$"
	.string "MISDREAVUS$"
	.string "PHANTUMP$"
	.string "POLTCHAGEIST$"
	.string "PUMPKABOO$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Ghost_Page5::
# 5399 "data/scripts/pokemon_shop_options.pory"
	.string "ROTOM$"
	.string "SABLEYE$"
	.string "SANDYGAST$"
	.string "SHUPPET$"
	.string "SINISTEA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Ghost_Page6::
# 5410 "data/scripts/pokemon_shop_options.pory"
	.string "SPIRITOMB$"
	.string "YAMASK$"
	.string "YAMASK-GALAR$"
	.string "ZORUA-HISUI$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Grass_Page1::
# 5420 "data/scripts/pokemon_shop_options.pory"
	.string "APPLIN$"
	.string "BELLSPROUT$"
	.string "BOUNSWEET$"
	.string "BRAMBLIN$"
	.string "BRUTE BONNET$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Grass_Page2::
# 5431 "data/scripts/pokemon_shop_options.pory"
	.string "BUDEW$"
	.string "BULBASAUR$"
	.string "CACNEA$"
	.string "CAPSAKID$"
	.string "CARNIVINE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Grass_Page3::
# 5442 "data/scripts/pokemon_shop_options.pory"
	.string "CHERUBI$"
	.string "CHESPIN$"
	.string "CHIKORITA$"
	.string "COTTONEE$"
	.string "DEERLING$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Grass_Page4::
# 5453 "data/scripts/pokemon_shop_options.pory"
	.string "DHELMISE$"
	.string "EXEGGCUTE$"
	.string "FERROSEED$"
	.string "FOMANTIS$"
	.string "FOONGUS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Grass_Page5::
# 5464 "data/scripts/pokemon_shop_options.pory"
	.string "GOSSIFLEUR$"
	.string "GROOKEY$"
	.string "HOPPIP$"
	.string "IRON LEAVES$"
	.string "KARTANA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Grass_Page6::
# 5475 "data/scripts/pokemon_shop_options.pory"
	.string "LILEEP$"
	.string "LOTAD$"
	.string "MARACTUS$"
	.string "MORELULL$"
	.string "ODDISH$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Grass_Page7::
# 5486 "data/scripts/pokemon_shop_options.pory"
	.string "PANSAGE$"
	.string "PARAS$"
	.string "PETILIL$"
	.string "PHANTUMP$"
	.string "POLTCHAGEIST$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Grass_Page8::
# 5497 "data/scripts/pokemon_shop_options.pory"
	.string "PUMPKABOO$"
	.string "ROWLET$"
	.string "SEEDOT$"
	.string "SEWADDLE$"
	.string "SHROOMISH$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Grass_Page9::
# 5508 "data/scripts/pokemon_shop_options.pory"
	.string "SKIDDO$"
	.string "SMOLIV$"
	.string "SNIVY$"
	.string "SNOVER$"
	.string "SPRIGATITO$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Grass_Page10::
# 5519 "data/scripts/pokemon_shop_options.pory"
	.string "SUNKERN$"
	.string "TANGELA$"
	.string "TOEDSCOOL$"
	.string "TREECKO$"
	.string "TROPIUS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Grass_Page11::
# 5530 "data/scripts/pokemon_shop_options.pory"
	.string "TURTWIG$"
	.string "VOLTORB-HISUI$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Bug_Page1::
# 5538 "data/scripts/pokemon_shop_options.pory"
	.string "ANORITH$"
	.string "BLIPBUG$"
	.string "BURMY$"
	.string "BUZZWOLE$"
	.string "CATERPIE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Bug_Page2::
# 5549 "data/scripts/pokemon_shop_options.pory"
	.string "COMBEE$"
	.string "CUTIEFLY$"
	.string "DEWPIDER$"
	.string "DURANT$"
	.string "DWEBBLE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Bug_Page3::
# 5560 "data/scripts/pokemon_shop_options.pory"
	.string "GRUBBIN$"
	.string "HERACROSS$"
	.string "ILLUMISE$"
	.string "JOLTIK$"
	.string "KARRABLAST$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Bug_Page4::
# 5571 "data/scripts/pokemon_shop_options.pory"
	.string "KRICKETOT$"
	.string "LARVESTA$"
	.string "LEDYBA$"
	.string "NINCADA$"
	.string "NYMBLE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Bug_Page5::
# 5582 "data/scripts/pokemon_shop_options.pory"
	.string "PARAS$"
	.string "PHEROMOSA$"
	.string "PINECO$"
	.string "PINSIR$"
	.string "RELLOR$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Bug_Page6::
# 5593 "data/scripts/pokemon_shop_options.pory"
	.string "SCATTERBUG$"
	.string "SCYTHER$"
	.string "SEWADDLE$"
	.string "SHELMET$"
	.string "SHUCKLE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Bug_Page7::
# 5604 "data/scripts/pokemon_shop_options.pory"
	.string "SIZZLIPEDE$"
	.string "SKORUPI$"
	.string "SLITHER WING$"
	.string "SNOM$"
	.string "SPINARAK$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Bug_Page8::
# 5615 "data/scripts/pokemon_shop_options.pory"
	.string "SURSKIT$"
	.string "TAROUNTULA$"
	.string "VENIPEDE$"
	.string "VENONAT$"
	.string "VOLBEAT$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Bug_Page9::
# 5626 "data/scripts/pokemon_shop_options.pory"
	.string "WEEDLE$"
	.string "WIMPOD$"
	.string "WURMPLE$"
	.string "YANMA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Dark_Page1::
# 5636 "data/scripts/pokemon_shop_options.pory"
	.string "ABSOL$"
	.string "BOMBIRDIER$"
	.string "BRUTE BONNET$"
	.string "CARVANHA$"
	.string "DEINO$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Dark_Page2::
# 5647 "data/scripts/pokemon_shop_options.pory"
	.string "GRIMER-ALOLA$"
	.string "GUZZLORD$"
	.string "HOUNDOUR$"
	.string "IMPIDIMP$"
	.string "INKAY$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Dark_Page3::
# 5658 "data/scripts/pokemon_shop_options.pory"
	.string "IRON JUGULIS$"
	.string "MASCHIFF$"
	.string "MEOWTH-ALOLA$"
	.string "MOLTRES-GALAR$"
	.string "MORPEKO$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Dark_Page4::
# 5669 "data/scripts/pokemon_shop_options.pory"
	.string "MURKROW$"
	.string "NICKIT$"
	.string "PAWNIARD$"
	.string "POOCHYENA$"
	.string "PURRLOIN$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Dark_Page5::
# 5680 "data/scripts/pokemon_shop_options.pory"
	.string "QWILFISH-HISUI$"
	.string "RATTATA-ALOLA$"
	.string "ROARING MOON$"
	.string "SABLEYE$"
	.string "SANDILE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Dark_Page6::
# 5691 "data/scripts/pokemon_shop_options.pory"
	.string "SCRAGGY$"
	.string "SNEASEL$"
	.string "SPIRITOMB$"
	.string "STUNKY$"
	.string "VULLABY$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Dark_Page7::
# 5702 "data/scripts/pokemon_shop_options.pory"
	.string "ZIGZAGOON-GALAR$"
	.string "ZORUA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Dragon_Page1::
# 5710 "data/scripts/pokemon_shop_options.pory"
	.string "APPLIN$"
	.string "AXEW$"
	.string "BAGON$"
	.string "CYCLIZAR$"
	.string "DEINO$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Dragon_Page2::
# 5721 "data/scripts/pokemon_shop_options.pory"
	.string "DRACOVISH$"
	.string "DRACOZOLT$"
	.string "DRAMPA$"
	.string "DRATINI$"
	.string "DREEPY$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Dragon_Page3::
# 5732 "data/scripts/pokemon_shop_options.pory"
	.string "DRUDDIGON$"
	.string "DURALUDON$"
	.string "FRIGIBAX$"
	.string "GIBLE$"
	.string "GOOMY$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Dragon_Page4::
# 5743 "data/scripts/pokemon_shop_options.pory"
	.string "GOUGING FIRE$"
	.string "GUZZLORD$"
	.string "JANGMO-O$"
	.string "NOIBAT$"
	.string "RAGING BOLT$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Dragon_Page5::
# 5754 "data/scripts/pokemon_shop_options.pory"
	.string "ROARING MOON$"
	.string "TATSUGIRI$"
	.string "TURTONATOR$"
	.string "TYRUNT$"
	.string "WALKING WAKE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Electric_Page1::
# 5765 "data/scripts/pokemon_shop_options.pory"
	.string "ARCTOZOLT$"
	.string "BLITZLE$"
	.string "CHINCHOU$"
	.string "DEDENNE$"
	.string "DRACOZOLT$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Electric_Page2::
# 5776 "data/scripts/pokemon_shop_options.pory"
	.string "ELECTRIKE$"
	.string "ELEKID$"
	.string "EMOLGA$"
	.string "GEODUDE-ALOLA$"
	.string "HELIOPTILE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Electric_Page3::
# 5787 "data/scripts/pokemon_shop_options.pory"
	.string "IRON HANDS$"
	.string "IRON THORNS$"
	.string "JOLTIK$"
	.string "MAGNEMITE$"
	.string "MAREEP$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Electric_Page4::
# 5798 "data/scripts/pokemon_shop_options.pory"
	.string "MINUN$"
	.string "MORPEKO$"
	.string "PACHIRISU$"
	.string "PAWMI$"
	.string "PICHU$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Electric_Page5::
# 5809 "data/scripts/pokemon_shop_options.pory"
	.string "PINCURCHIN$"
	.string "PLUSLE$"
	.string "RAGING BOLT$"
	.string "ROTOM$"
	.string "SANDY SHOCKS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Electric_Page6::
# 5820 "data/scripts/pokemon_shop_options.pory"
	.string "SHINX$"
	.string "STUNFISK$"
	.string "TADBULB$"
	.string "TOGEDEMARU$"
	.string "TOXEL$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Electric_Page7::
# 5831 "data/scripts/pokemon_shop_options.pory"
	.string "TYNAMO$"
	.string "VOLTORB$"
	.string "VOLTORB-HISUI$"
	.string "WATTREL$"
	.string "XURKITREE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Electric_Page8::
# 5842 "data/scripts/pokemon_shop_options.pory"
	.string "YAMPER$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Fairy_Page1::
# 5849 "data/scripts/pokemon_shop_options.pory"
	.string "AZURILL$"
	.string "CARBINK$"
	.string "CLEFFA$"
	.string "COMFEY$"
	.string "COTTONEE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Fairy_Page2::
# 5860 "data/scripts/pokemon_shop_options.pory"
	.string "CUTIEFLY$"
	.string "DEDENNE$"
	.string "FIDOUGH$"
	.string "FLABEBE$"
	.string "FLUTTER MANE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Fairy_Page3::
# 5871 "data/scripts/pokemon_shop_options.pory"
	.string "IGGLYBUFF$"
	.string "IMPIDIMP$"
	.string "IRON VALIANT$"
	.string "KLEFKI$"
	.string "MAWILE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Fairy_Page4::
# 5882 "data/scripts/pokemon_shop_options.pory"
	.string "MILCERY$"
	.string "MIME JR.$"
	.string "MIMIKYU$"
	.string "MORELULL$"
	.string "RALTS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Fairy_Page5::
# 5893 "data/scripts/pokemon_shop_options.pory"
	.string "SCREAM TAIL$"
	.string "SNUBBULL$"
	.string "SPRITZEE$"
	.string "SWIRLIX$"
	.string "TINKATINK$"
	.string "Go Back$"
	.string "$"

Auto_Text_Pokemon_Shop_Fairy_Page6::
# 5904 "data/scripts/pokemon_shop_options.pory"
	.string "TOGEPI$"
	.string "Go Back$"
	.string "$"
