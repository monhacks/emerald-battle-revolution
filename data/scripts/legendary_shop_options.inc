Auto_EventScript_Legendary_Shop_Controls::
# 5 "data/scripts/legendary_shop_options.pory"
	msgbox Auto_EventScript_Legendary_Shop_Controls_Text_0
# 6 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page1
	return


Auto_EventScript_Legendary_Shop_Page1::
# 11 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Page1
# 12 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 14 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Page1_2
# 16 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Page1_3
# 18 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Page1_4
# 20 "data/scripts/legendary_shop_options.pory"
	case 3, Auto_EventScript_Legendary_Shop_Page1_5
# 22 "data/scripts/legendary_shop_options.pory"
	case 4, Auto_EventScript_Legendary_Shop_Page1_6
# 24 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Page1_7
# 26 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Page1_8
# 29 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_End
	return

Auto_EventScript_Legendary_Shop_Page1_2:
# 15 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Bug_Page1
	return

Auto_EventScript_Legendary_Shop_Page1_3:
# 17 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Dark_Page1
	return

Auto_EventScript_Legendary_Shop_Page1_4:
# 19 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Dragon_Page1
	return

Auto_EventScript_Legendary_Shop_Page1_5:
# 21 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Electric_Page1
	return

Auto_EventScript_Legendary_Shop_Page1_6:
# 23 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Fairy_Page1
	return

Auto_EventScript_Legendary_Shop_Page1_7:
# 25 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page4
	return

Auto_EventScript_Legendary_Shop_Page1_8:
# 27 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page2
	return


Auto_EventScript_Legendary_Shop_Page2::
# 35 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Page2
# 36 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 38 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Page2_2
# 40 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Page2_3
# 42 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Page2_4
# 44 "data/scripts/legendary_shop_options.pory"
	case 3, Auto_EventScript_Legendary_Shop_Page2_5
# 46 "data/scripts/legendary_shop_options.pory"
	case 4, Auto_EventScript_Legendary_Shop_Page2_6
# 48 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Page2_7
# 50 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Page2_8
# 53 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_End
	return

Auto_EventScript_Legendary_Shop_Page2_2:
# 39 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Fighting_Page1
	return

Auto_EventScript_Legendary_Shop_Page2_3:
# 41 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Fire_Page1
	return

Auto_EventScript_Legendary_Shop_Page2_4:
# 43 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Flying_Page1
	return

Auto_EventScript_Legendary_Shop_Page2_5:
# 45 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Ghost_Page1
	return

Auto_EventScript_Legendary_Shop_Page2_6:
# 47 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Grass_Page1
	return

Auto_EventScript_Legendary_Shop_Page2_7:
# 49 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page1
	return

Auto_EventScript_Legendary_Shop_Page2_8:
# 51 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page3
	return


Auto_EventScript_Legendary_Shop_Page3::
# 59 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Page3
# 60 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 62 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Page3_2
# 64 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Page3_3
# 66 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Page3_4
# 68 "data/scripts/legendary_shop_options.pory"
	case 3, Auto_EventScript_Legendary_Shop_Page3_5
# 70 "data/scripts/legendary_shop_options.pory"
	case 4, Auto_EventScript_Legendary_Shop_Page3_6
# 72 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Page3_7
# 74 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Page3_8
# 77 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_End
	return

Auto_EventScript_Legendary_Shop_Page3_2:
# 63 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Ground_Page1
	return

Auto_EventScript_Legendary_Shop_Page3_3:
# 65 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Ice_Page1
	return

Auto_EventScript_Legendary_Shop_Page3_4:
# 67 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Normal_Page1
	return

Auto_EventScript_Legendary_Shop_Page3_5:
# 69 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Poison_Page1
	return

Auto_EventScript_Legendary_Shop_Page3_6:
# 71 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Psychic_Page1
	return

Auto_EventScript_Legendary_Shop_Page3_7:
# 73 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page2
	return

Auto_EventScript_Legendary_Shop_Page3_8:
# 75 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page4
	return


Auto_EventScript_Legendary_Shop_Page4::
# 83 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Page4
# 84 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 86 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Page4_2
# 88 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Page4_3
# 90 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Page4_4
# 92 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Page4_5
# 94 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Page4_6
# 97 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_End
	return

Auto_EventScript_Legendary_Shop_Page4_2:
# 87 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Rock_Page1
	return

Auto_EventScript_Legendary_Shop_Page4_3:
# 89 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Steel_Page1
	return

Auto_EventScript_Legendary_Shop_Page4_4:
# 91 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Water_Page1
	return

Auto_EventScript_Legendary_Shop_Page4_5:
# 93 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page3
	return

Auto_EventScript_Legendary_Shop_Page4_6:
# 95 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page1
	return


Auto_EventScript_Legendary_Shop_Rock_Page1::
# 103 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Rock_Page1
# 104 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 106 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Rock_Page1_2
# 109 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Rock_Page1_3
# 112 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Rock_Page1_4
# 115 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Rock_Page1_5
# 117 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Rock_Page1_6
# 120 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page4
	return

Auto_EventScript_Legendary_Shop_Rock_Page1_2:
# 107 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_DIANCIE, 1
# 108 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Rock_Page1_3:
# 110 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_REGIROCK, 1
# 111 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Rock_Page1_4:
# 113 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_TERRAKION, 1
# 114 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Rock_Page1_5:
# 116 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Rock_Page1
	return

Auto_EventScript_Legendary_Shop_Rock_Page1_6:
# 118 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Rock_Page1
	return


Auto_EventScript_Legendary_Shop_Steel_Page1::
# 126 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Steel_Page1
# 127 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 129 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Steel_Page1_2
# 132 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Steel_Page1_3
# 135 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Steel_Page1_4
# 138 "data/scripts/legendary_shop_options.pory"
	case 3, Auto_EventScript_Legendary_Shop_Steel_Page1_5
# 141 "data/scripts/legendary_shop_options.pory"
	case 4, Auto_EventScript_Legendary_Shop_Steel_Page1_6
# 144 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Steel_Page1_7
# 146 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Steel_Page1_8
# 149 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page4
	return

Auto_EventScript_Legendary_Shop_Steel_Page1_2:
# 130 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_COBALION, 1
# 131 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Steel_Page1_3:
# 133 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_DIALGA, 1
# 134 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Steel_Page1_4:
# 136 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_GENESECT, 1
# 137 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Steel_Page1_5:
# 139 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_HEATRAN, 1
# 140 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Steel_Page1_6:
# 142 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_JIRACHI, 1
# 143 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Steel_Page1_7:
# 145 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Steel_Page2
	return

Auto_EventScript_Legendary_Shop_Steel_Page1_8:
# 147 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Steel_Page2
	return


Auto_EventScript_Legendary_Shop_Steel_Page2::
# 155 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Steel_Page2
# 156 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 158 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Steel_Page2_2
# 161 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Steel_Page2_3
# 164 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Steel_Page2_4
# 167 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Steel_Page2_5
# 169 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Steel_Page2_6
# 172 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page4
	return

Auto_EventScript_Legendary_Shop_Steel_Page2_2:
# 159 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_MAGEARNA, 1
# 160 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Steel_Page2_3:
# 162 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_MELMETAL, 1
# 163 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Steel_Page2_4:
# 165 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_REGISTEEL, 1
# 166 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Steel_Page2_5:
# 168 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Steel_Page1
	return

Auto_EventScript_Legendary_Shop_Steel_Page2_6:
# 170 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Steel_Page1
	return


Auto_EventScript_Legendary_Shop_Water_Page1::
# 178 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Water_Page1
# 179 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 181 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Water_Page1_2
# 184 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Water_Page1_3
# 187 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Water_Page1_4
# 190 "data/scripts/legendary_shop_options.pory"
	case 3, Auto_EventScript_Legendary_Shop_Water_Page1_5
# 193 "data/scripts/legendary_shop_options.pory"
	case 4, Auto_EventScript_Legendary_Shop_Water_Page1_6
# 196 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Water_Page1_7
# 198 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Water_Page1_8
# 201 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page4
	return

Auto_EventScript_Legendary_Shop_Water_Page1_2:
# 182 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_KELDEO, 1
# 183 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Water_Page1_3:
# 185 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_KYOGRE, 1
# 186 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Water_Page1_4:
# 188 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_MANAPHY, 1
# 189 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Water_Page1_5:
# 191 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_PALKIA, 1
# 192 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Water_Page1_6:
# 194 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_PHIONE, 1
# 195 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Water_Page1_7:
# 197 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Water_Page2
	return

Auto_EventScript_Legendary_Shop_Water_Page1_8:
# 199 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Water_Page2
	return


Auto_EventScript_Legendary_Shop_Water_Page2::
# 207 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Water_Page2
# 208 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 210 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Water_Page2_2
# 213 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Water_Page2_3
# 216 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Water_Page2_4
# 219 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Water_Page2_5
# 221 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Water_Page2_6
# 224 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page4
	return

Auto_EventScript_Legendary_Shop_Water_Page2_2:
# 211 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_SUICUNE, 1
# 212 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Water_Page2_3:
# 214 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_TAPU_FINI, 1
# 215 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Water_Page2_4:
# 217 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_VOLCANION, 1
# 218 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Water_Page2_5:
# 220 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Water_Page1
	return

Auto_EventScript_Legendary_Shop_Water_Page2_6:
# 222 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Water_Page1
	return


Auto_EventScript_Legendary_Shop_Ground_Page1::
# 230 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Ground_Page1
# 231 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 233 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Ground_Page1_2
# 236 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Ground_Page1_3
# 239 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Ground_Page1_4
# 242 "data/scripts/legendary_shop_options.pory"
	case 3, Auto_EventScript_Legendary_Shop_Ground_Page1_5
# 245 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Ground_Page1_6
# 247 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Ground_Page1_7
# 250 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page3
	return

Auto_EventScript_Legendary_Shop_Ground_Page1_2:
# 234 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_GROUDON, 1
# 235 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Ground_Page1_3:
# 237 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_LANDORUS, 1
# 238 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Ground_Page1_4:
# 240 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_TING_LU, 1
# 241 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Ground_Page1_5:
# 243 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_ZYGARDE, 1
# 244 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Ground_Page1_6:
# 246 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Ground_Page1
	return

Auto_EventScript_Legendary_Shop_Ground_Page1_7:
# 248 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Ground_Page1
	return


Auto_EventScript_Legendary_Shop_Ice_Page1::
# 256 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Ice_Page1
# 257 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 259 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Ice_Page1_2
# 262 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Ice_Page1_3
# 265 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Ice_Page1_4
# 268 "data/scripts/legendary_shop_options.pory"
	case 3, Auto_EventScript_Legendary_Shop_Ice_Page1_5
# 271 "data/scripts/legendary_shop_options.pory"
	case 4, Auto_EventScript_Legendary_Shop_Ice_Page1_6
# 274 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Ice_Page1_7
# 276 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Ice_Page1_8
# 279 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page3
	return

Auto_EventScript_Legendary_Shop_Ice_Page1_2:
# 260 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_ARTICUNO, 1
# 261 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Ice_Page1_3:
# 263 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_CHIEN_PAO, 1
# 264 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Ice_Page1_4:
# 266 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_GLASTRIER, 1
# 267 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Ice_Page1_5:
# 269 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_KYUREM, 1
# 270 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Ice_Page1_6:
# 272 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_REGICE, 1
# 273 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Ice_Page1_7:
# 275 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Ice_Page1
	return

Auto_EventScript_Legendary_Shop_Ice_Page1_8:
# 277 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Ice_Page1
	return


Auto_EventScript_Legendary_Shop_Normal_Page1::
# 285 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Normal_Page1
# 286 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 288 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Normal_Page1_2
# 291 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Normal_Page1_3
# 294 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Normal_Page1_4
# 297 "data/scripts/legendary_shop_options.pory"
	case 3, Auto_EventScript_Legendary_Shop_Normal_Page1_5
# 300 "data/scripts/legendary_shop_options.pory"
	case 4, Auto_EventScript_Legendary_Shop_Normal_Page1_6
# 303 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Normal_Page1_7
# 305 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Normal_Page1_8
# 308 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page3
	return

Auto_EventScript_Legendary_Shop_Normal_Page1_2:
# 289 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_ARCEUS, 1
# 290 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Normal_Page1_3:
# 292 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_MELOETTA, 1
# 293 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Normal_Page1_4:
# 295 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_REGIGIGAS, 1
# 296 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Normal_Page1_5:
# 298 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_TERAPAGOS, 1
# 299 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Normal_Page1_6:
# 301 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_TYPE_NULL, 1
# 302 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Normal_Page1_7:
# 304 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Normal_Page1
	return

Auto_EventScript_Legendary_Shop_Normal_Page1_8:
# 306 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Normal_Page1
	return


Auto_EventScript_Legendary_Shop_Poison_Page1::
# 314 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Poison_Page1
# 315 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 317 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Poison_Page1_2
# 320 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Poison_Page1_3
# 323 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Poison_Page1_4
# 326 "data/scripts/legendary_shop_options.pory"
	case 3, Auto_EventScript_Legendary_Shop_Poison_Page1_5
# 329 "data/scripts/legendary_shop_options.pory"
	case 4, Auto_EventScript_Legendary_Shop_Poison_Page1_6
# 332 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Poison_Page1_7
# 334 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Poison_Page1_8
# 337 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page3
	return

Auto_EventScript_Legendary_Shop_Poison_Page1_2:
# 318 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_ETERNATUS, 1
# 319 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Poison_Page1_3:
# 321 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_FEZANDIPITI, 1
# 322 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Poison_Page1_4:
# 324 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_MUNKIDORI, 1
# 325 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Poison_Page1_5:
# 327 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_OKIDOGI, 1
# 328 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Poison_Page1_6:
# 330 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_PECHARUNT, 1
# 331 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Poison_Page1_7:
# 333 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Poison_Page1
	return

Auto_EventScript_Legendary_Shop_Poison_Page1_8:
# 335 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Poison_Page1
	return


Auto_EventScript_Legendary_Shop_Psychic_Page1::
# 343 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Psychic_Page1
# 344 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 346 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Psychic_Page1_2
# 349 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Psychic_Page1_3
# 352 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Psychic_Page1_4
# 355 "data/scripts/legendary_shop_options.pory"
	case 3, Auto_EventScript_Legendary_Shop_Psychic_Page1_5
# 358 "data/scripts/legendary_shop_options.pory"
	case 4, Auto_EventScript_Legendary_Shop_Psychic_Page1_6
# 361 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Psychic_Page1_7
# 363 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Psychic_Page1_8
# 366 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page3
	return

Auto_EventScript_Legendary_Shop_Psychic_Page1_2:
# 347 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_AZELF, 1
# 348 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Psychic_Page1_3:
# 350 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_CALYREX, 1
# 351 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Psychic_Page1_4:
# 353 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_CELEBI, 1
# 354 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Psychic_Page1_5:
# 356 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_CRESSELIA, 1
# 357 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Psychic_Page1_6:
# 359 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_DEOXYS, 1
# 360 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Psychic_Page1_7:
# 362 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Psychic_Page4
	return

Auto_EventScript_Legendary_Shop_Psychic_Page1_8:
# 364 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Psychic_Page2
	return


Auto_EventScript_Legendary_Shop_Psychic_Page2::
# 372 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Psychic_Page2
# 373 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 375 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Psychic_Page2_2
# 378 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Psychic_Page2_3
# 381 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Psychic_Page2_4
# 384 "data/scripts/legendary_shop_options.pory"
	case 3, Auto_EventScript_Legendary_Shop_Psychic_Page2_5
# 387 "data/scripts/legendary_shop_options.pory"
	case 4, Auto_EventScript_Legendary_Shop_Psychic_Page2_6
# 390 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Psychic_Page2_7
# 392 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Psychic_Page2_8
# 395 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page3
	return

Auto_EventScript_Legendary_Shop_Psychic_Page2_2:
# 376 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_HOOPA, 1
# 377 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Psychic_Page2_3:
# 379 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_JIRACHI, 1
# 380 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Psychic_Page2_4:
# 382 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_LATIAS, 1
# 383 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Psychic_Page2_5:
# 385 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_LATIOS, 1
# 386 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Psychic_Page2_6:
# 388 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_LUGIA, 1
# 389 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Psychic_Page2_7:
# 391 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Psychic_Page1
	return

Auto_EventScript_Legendary_Shop_Psychic_Page2_8:
# 393 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Psychic_Page3
	return


Auto_EventScript_Legendary_Shop_Psychic_Page3::
# 401 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Psychic_Page3
# 402 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 404 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Psychic_Page3_2
# 407 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Psychic_Page3_3
# 410 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Psychic_Page3_4
# 413 "data/scripts/legendary_shop_options.pory"
	case 3, Auto_EventScript_Legendary_Shop_Psychic_Page3_5
# 416 "data/scripts/legendary_shop_options.pory"
	case 4, Auto_EventScript_Legendary_Shop_Psychic_Page3_6
# 419 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Psychic_Page3_7
# 421 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Psychic_Page3_8
# 424 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page3
	return

Auto_EventScript_Legendary_Shop_Psychic_Page3_2:
# 405 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_MELOETTA, 1
# 406 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Psychic_Page3_3:
# 408 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_MESPRIT, 1
# 409 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Psychic_Page3_4:
# 411 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_MEW, 1
# 412 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Psychic_Page3_5:
# 414 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_MEWTWO, 1
# 415 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Psychic_Page3_6:
# 417 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_MUNKIDORI, 1
# 418 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Psychic_Page3_7:
# 420 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Psychic_Page2
	return

Auto_EventScript_Legendary_Shop_Psychic_Page3_8:
# 422 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Psychic_Page4
	return


Auto_EventScript_Legendary_Shop_Psychic_Page4::
# 430 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Psychic_Page4
# 431 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 433 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Psychic_Page4_2
# 436 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Psychic_Page4_3
# 439 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Psychic_Page4_4
# 442 "data/scripts/legendary_shop_options.pory"
	case 3, Auto_EventScript_Legendary_Shop_Psychic_Page4_5
# 445 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Psychic_Page4_6
# 447 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Psychic_Page4_7
# 450 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page3
	return

Auto_EventScript_Legendary_Shop_Psychic_Page4_2:
# 434 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_NECROZMA, 1
# 435 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Psychic_Page4_3:
# 437 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_TAPU_LELE, 1
# 438 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Psychic_Page4_4:
# 440 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_UXIE, 1
# 441 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Psychic_Page4_5:
# 443 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_VICTINI, 1
# 444 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Psychic_Page4_6:
# 446 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Psychic_Page3
	return

Auto_EventScript_Legendary_Shop_Psychic_Page4_7:
# 448 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Psychic_Page1
	return


Auto_EventScript_Legendary_Shop_Fighting_Page1::
# 456 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Fighting_Page1
# 457 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 459 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Fighting_Page1_2
# 462 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Fighting_Page1_3
# 465 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Fighting_Page1_4
# 468 "data/scripts/legendary_shop_options.pory"
	case 3, Auto_EventScript_Legendary_Shop_Fighting_Page1_5
# 471 "data/scripts/legendary_shop_options.pory"
	case 4, Auto_EventScript_Legendary_Shop_Fighting_Page1_6
# 474 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Fighting_Page1_7
# 476 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Fighting_Page1_8
# 479 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page2
	return

Auto_EventScript_Legendary_Shop_Fighting_Page1_2:
# 460 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_COBALION, 1
# 461 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fighting_Page1_3:
# 463 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_KELDEO, 1
# 464 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fighting_Page1_4:
# 466 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_KORAIDON, 1
# 467 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fighting_Page1_5:
# 469 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_KUBFU, 1
# 470 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fighting_Page1_6:
# 472 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_MARSHADOW, 1
# 473 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fighting_Page1_7:
# 475 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Fighting_Page2
	return

Auto_EventScript_Legendary_Shop_Fighting_Page1_8:
# 477 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Fighting_Page2
	return


Auto_EventScript_Legendary_Shop_Fighting_Page2::
# 485 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Fighting_Page2
# 486 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 488 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Fighting_Page2_2
# 491 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Fighting_Page2_3
# 494 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Fighting_Page2_4
# 497 "data/scripts/legendary_shop_options.pory"
	case 3, Auto_EventScript_Legendary_Shop_Fighting_Page2_5
# 500 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Fighting_Page2_6
# 502 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Fighting_Page2_7
# 505 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page2
	return

Auto_EventScript_Legendary_Shop_Fighting_Page2_2:
# 489 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_OKIDOGI, 1
# 490 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fighting_Page2_3:
# 492 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_TERRAKION, 1
# 493 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fighting_Page2_4:
# 495 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_VIRIZION, 1
# 496 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fighting_Page2_5:
# 498 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_ZAMAZENTA, 1
# 499 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fighting_Page2_6:
# 501 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Fighting_Page1
	return

Auto_EventScript_Legendary_Shop_Fighting_Page2_7:
# 503 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Fighting_Page1
	return


Auto_EventScript_Legendary_Shop_Fire_Page1::
# 511 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Fire_Page1
# 512 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 514 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Fire_Page1_2
# 517 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Fire_Page1_3
# 520 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Fire_Page1_4
# 523 "data/scripts/legendary_shop_options.pory"
	case 3, Auto_EventScript_Legendary_Shop_Fire_Page1_5
# 526 "data/scripts/legendary_shop_options.pory"
	case 4, Auto_EventScript_Legendary_Shop_Fire_Page1_6
# 529 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Fire_Page1_7
# 531 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Fire_Page1_8
# 534 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page2
	return

Auto_EventScript_Legendary_Shop_Fire_Page1_2:
# 515 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_CHI_YU, 1
# 516 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fire_Page1_3:
# 518 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_ENTEI, 1
# 519 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fire_Page1_4:
# 521 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_HEATRAN, 1
# 522 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fire_Page1_5:
# 524 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_HO_OH, 1
# 525 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fire_Page1_6:
# 527 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_MOLTRES, 1
# 528 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fire_Page1_7:
# 530 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Fire_Page2
	return

Auto_EventScript_Legendary_Shop_Fire_Page1_8:
# 532 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Fire_Page2
	return


Auto_EventScript_Legendary_Shop_Fire_Page2::
# 540 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Fire_Page2
# 541 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 543 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Fire_Page2_2
# 546 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Fire_Page2_3
# 549 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Fire_Page2_4
# 552 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Fire_Page2_5
# 554 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Fire_Page2_6
# 557 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page2
	return

Auto_EventScript_Legendary_Shop_Fire_Page2_2:
# 544 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_RESHIRAM, 1
# 545 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fire_Page2_3:
# 547 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_VICTINI, 1
# 548 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fire_Page2_4:
# 550 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_VOLCANION, 1
# 551 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fire_Page2_5:
# 553 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Fire_Page1
	return

Auto_EventScript_Legendary_Shop_Fire_Page2_6:
# 555 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Fire_Page1
	return


Auto_EventScript_Legendary_Shop_Flying_Page1::
# 563 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Flying_Page1
# 564 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 566 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Flying_Page1_2
# 569 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Flying_Page1_3
# 572 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Flying_Page1_4
# 575 "data/scripts/legendary_shop_options.pory"
	case 3, Auto_EventScript_Legendary_Shop_Flying_Page1_5
# 578 "data/scripts/legendary_shop_options.pory"
	case 4, Auto_EventScript_Legendary_Shop_Flying_Page1_6
# 581 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Flying_Page1_7
# 583 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Flying_Page1_8
# 586 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page2
	return

Auto_EventScript_Legendary_Shop_Flying_Page1_2:
# 567 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_ARTICUNO, 1
# 568 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Flying_Page1_3:
# 570 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_ENAMORUS, 1
# 571 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Flying_Page1_4:
# 573 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_HO_OH, 1
# 574 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Flying_Page1_5:
# 576 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_LANDORUS, 1
# 577 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Flying_Page1_6:
# 579 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_LUGIA, 1
# 580 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Flying_Page1_7:
# 582 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Flying_Page3
	return

Auto_EventScript_Legendary_Shop_Flying_Page1_8:
# 584 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Flying_Page2
	return


Auto_EventScript_Legendary_Shop_Flying_Page2::
# 592 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Flying_Page2
# 593 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 595 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Flying_Page2_2
# 598 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Flying_Page2_3
# 601 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Flying_Page2_4
# 604 "data/scripts/legendary_shop_options.pory"
	case 3, Auto_EventScript_Legendary_Shop_Flying_Page2_5
# 607 "data/scripts/legendary_shop_options.pory"
	case 4, Auto_EventScript_Legendary_Shop_Flying_Page2_6
# 610 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Flying_Page2_7
# 612 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Flying_Page2_8
# 615 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page2
	return

Auto_EventScript_Legendary_Shop_Flying_Page2_2:
# 596 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_MOLTRES, 1
# 597 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Flying_Page2_3:
# 599 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_RAYQUAZA, 1
# 600 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Flying_Page2_4:
# 602 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_THUNDURUS, 1
# 603 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Flying_Page2_5:
# 605 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_TORNADUS, 1
# 606 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Flying_Page2_6:
# 608 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_YVELTAL, 1
# 609 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Flying_Page2_7:
# 611 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Flying_Page1
	return

Auto_EventScript_Legendary_Shop_Flying_Page2_8:
# 613 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Flying_Page3
	return


Auto_EventScript_Legendary_Shop_Flying_Page3::
# 621 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Flying_Page3
# 622 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 624 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Flying_Page3_2
# 627 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Flying_Page3_3
# 629 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Flying_Page3_4
# 632 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page2
	return

Auto_EventScript_Legendary_Shop_Flying_Page3_2:
# 625 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_ZAPDOS, 1
# 626 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Flying_Page3_3:
# 628 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Flying_Page2
	return

Auto_EventScript_Legendary_Shop_Flying_Page3_4:
# 630 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Flying_Page1
	return


Auto_EventScript_Legendary_Shop_Ghost_Page1::
# 638 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Ghost_Page1
# 639 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 641 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Ghost_Page1_2
# 644 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Ghost_Page1_3
# 647 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Ghost_Page1_4
# 650 "data/scripts/legendary_shop_options.pory"
	case 3, Auto_EventScript_Legendary_Shop_Ghost_Page1_5
# 653 "data/scripts/legendary_shop_options.pory"
	case 4, Auto_EventScript_Legendary_Shop_Ghost_Page1_6
# 656 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Ghost_Page1_7
# 658 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Ghost_Page1_8
# 661 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page2
	return

Auto_EventScript_Legendary_Shop_Ghost_Page1_2:
# 642 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_GIRATINA, 1
# 643 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Ghost_Page1_3:
# 645 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_HOOPA, 1
# 646 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Ghost_Page1_4:
# 648 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_MARSHADOW, 1
# 649 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Ghost_Page1_5:
# 651 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_PECHARUNT, 1
# 652 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Ghost_Page1_6:
# 654 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_SPECTRIER, 1
# 655 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Ghost_Page1_7:
# 657 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Ghost_Page1
	return

Auto_EventScript_Legendary_Shop_Ghost_Page1_8:
# 659 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Ghost_Page1
	return


Auto_EventScript_Legendary_Shop_Grass_Page1::
# 667 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Grass_Page1
# 668 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 670 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Grass_Page1_2
# 673 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Grass_Page1_3
# 676 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Grass_Page1_4
# 679 "data/scripts/legendary_shop_options.pory"
	case 3, Auto_EventScript_Legendary_Shop_Grass_Page1_5
# 682 "data/scripts/legendary_shop_options.pory"
	case 4, Auto_EventScript_Legendary_Shop_Grass_Page1_6
# 685 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Grass_Page1_7
# 687 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Grass_Page1_8
# 690 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page2
	return

Auto_EventScript_Legendary_Shop_Grass_Page1_2:
# 671 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_CALYREX, 1
# 672 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Grass_Page1_3:
# 674 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_CELEBI, 1
# 675 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Grass_Page1_4:
# 677 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_OGERPON, 1
# 678 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Grass_Page1_5:
# 680 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_SHAYMIN, 1
# 681 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Grass_Page1_6:
# 683 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_TAPU_BULU, 1
# 684 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Grass_Page1_7:
# 686 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Grass_Page2
	return

Auto_EventScript_Legendary_Shop_Grass_Page1_8:
# 688 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Grass_Page2
	return


Auto_EventScript_Legendary_Shop_Grass_Page2::
# 696 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Grass_Page2
# 697 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 699 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Grass_Page2_2
# 702 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Grass_Page2_3
# 705 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Grass_Page2_4
# 708 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Grass_Page2_5
# 710 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Grass_Page2_6
# 713 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page2
	return

Auto_EventScript_Legendary_Shop_Grass_Page2_2:
# 700 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_VIRIZION, 1
# 701 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Grass_Page2_3:
# 703 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_WO_CHIEN, 1
# 704 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Grass_Page2_4:
# 706 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_ZARUDE, 1
# 707 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Grass_Page2_5:
# 709 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Grass_Page1
	return

Auto_EventScript_Legendary_Shop_Grass_Page2_6:
# 711 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Grass_Page1
	return


Auto_EventScript_Legendary_Shop_Bug_Page1::
# 719 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Bug_Page1
# 720 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 722 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Bug_Page1_2
# 725 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Bug_Page1_3
# 727 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Bug_Page1_4
# 730 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page1
	return

Auto_EventScript_Legendary_Shop_Bug_Page1_2:
# 723 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_GENESECT, 1
# 724 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Bug_Page1_3:
# 726 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Bug_Page1
	return

Auto_EventScript_Legendary_Shop_Bug_Page1_4:
# 728 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Bug_Page1
	return


Auto_EventScript_Legendary_Shop_Dark_Page1::
# 736 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Dark_Page1
# 737 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 739 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Dark_Page1_2
# 742 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Dark_Page1_3
# 745 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Dark_Page1_4
# 748 "data/scripts/legendary_shop_options.pory"
	case 3, Auto_EventScript_Legendary_Shop_Dark_Page1_5
# 751 "data/scripts/legendary_shop_options.pory"
	case 4, Auto_EventScript_Legendary_Shop_Dark_Page1_6
# 754 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Dark_Page1_7
# 756 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Dark_Page1_8
# 759 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page1
	return

Auto_EventScript_Legendary_Shop_Dark_Page1_2:
# 740 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_CHI_YU, 1
# 741 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Dark_Page1_3:
# 743 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_CHIEN_PAO, 1
# 744 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Dark_Page1_4:
# 746 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_DARKRAI, 1
# 747 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Dark_Page1_5:
# 749 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_TING_LU, 1
# 750 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Dark_Page1_6:
# 752 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_WO_CHIEN, 1
# 753 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Dark_Page1_7:
# 755 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Dark_Page2
	return

Auto_EventScript_Legendary_Shop_Dark_Page1_8:
# 757 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Dark_Page2
	return


Auto_EventScript_Legendary_Shop_Dark_Page2::
# 765 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Dark_Page2
# 766 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 768 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Dark_Page2_2
# 771 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Dark_Page2_3
# 774 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Dark_Page2_4
# 776 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Dark_Page2_5
# 779 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page1
	return

Auto_EventScript_Legendary_Shop_Dark_Page2_2:
# 769 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_YVELTAL, 1
# 770 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Dark_Page2_3:
# 772 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_ZARUDE, 1
# 773 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Dark_Page2_4:
# 775 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Dark_Page1
	return

Auto_EventScript_Legendary_Shop_Dark_Page2_5:
# 777 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Dark_Page1
	return


Auto_EventScript_Legendary_Shop_Dragon_Page1::
# 785 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Dragon_Page1
# 786 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 788 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Dragon_Page1_2
# 791 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Dragon_Page1_3
# 794 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Dragon_Page1_4
# 797 "data/scripts/legendary_shop_options.pory"
	case 3, Auto_EventScript_Legendary_Shop_Dragon_Page1_5
# 800 "data/scripts/legendary_shop_options.pory"
	case 4, Auto_EventScript_Legendary_Shop_Dragon_Page1_6
# 803 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Dragon_Page1_7
# 805 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Dragon_Page1_8
# 808 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page1
	return

Auto_EventScript_Legendary_Shop_Dragon_Page1_2:
# 789 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_DIALGA, 1
# 790 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Dragon_Page1_3:
# 792 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_ETERNATUS, 1
# 793 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Dragon_Page1_4:
# 795 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_GIRATINA, 1
# 796 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Dragon_Page1_5:
# 798 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_KORAIDON, 1
# 799 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Dragon_Page1_6:
# 801 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_KYUREM, 1
# 802 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Dragon_Page1_7:
# 804 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Dragon_Page3
	return

Auto_EventScript_Legendary_Shop_Dragon_Page1_8:
# 806 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Dragon_Page2
	return


Auto_EventScript_Legendary_Shop_Dragon_Page2::
# 814 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Dragon_Page2
# 815 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 817 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Dragon_Page2_2
# 820 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Dragon_Page2_3
# 823 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Dragon_Page2_4
# 826 "data/scripts/legendary_shop_options.pory"
	case 3, Auto_EventScript_Legendary_Shop_Dragon_Page2_5
# 829 "data/scripts/legendary_shop_options.pory"
	case 4, Auto_EventScript_Legendary_Shop_Dragon_Page2_6
# 832 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Dragon_Page2_7
# 834 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Dragon_Page2_8
# 837 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page1
	return

Auto_EventScript_Legendary_Shop_Dragon_Page2_2:
# 818 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_LATIAS, 1
# 819 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Dragon_Page2_3:
# 821 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_LATIOS, 1
# 822 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Dragon_Page2_4:
# 824 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_MIRAIDON, 1
# 825 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Dragon_Page2_5:
# 827 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_PALKIA, 1
# 828 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Dragon_Page2_6:
# 830 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_RAYQUAZA, 1
# 831 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Dragon_Page2_7:
# 833 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Dragon_Page1
	return

Auto_EventScript_Legendary_Shop_Dragon_Page2_8:
# 835 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Dragon_Page3
	return


Auto_EventScript_Legendary_Shop_Dragon_Page3::
# 843 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Dragon_Page3
# 844 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 846 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Dragon_Page3_2
# 849 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Dragon_Page3_3
# 852 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Dragon_Page3_4
# 855 "data/scripts/legendary_shop_options.pory"
	case 3, Auto_EventScript_Legendary_Shop_Dragon_Page3_5
# 858 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Dragon_Page3_6
# 860 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Dragon_Page3_7
# 863 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page1
	return

Auto_EventScript_Legendary_Shop_Dragon_Page3_2:
# 847 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_REGIDRAGO, 1
# 848 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Dragon_Page3_3:
# 850 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_RESHIRAM, 1
# 851 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Dragon_Page3_4:
# 853 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_ZEKROM, 1
# 854 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Dragon_Page3_5:
# 856 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_ZYGARDE, 1
# 857 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Dragon_Page3_6:
# 859 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Dragon_Page2
	return

Auto_EventScript_Legendary_Shop_Dragon_Page3_7:
# 861 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Dragon_Page1
	return


Auto_EventScript_Legendary_Shop_Electric_Page1::
# 869 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Electric_Page1
# 870 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 872 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Electric_Page1_2
# 875 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Electric_Page1_3
# 878 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Electric_Page1_4
# 881 "data/scripts/legendary_shop_options.pory"
	case 3, Auto_EventScript_Legendary_Shop_Electric_Page1_5
# 884 "data/scripts/legendary_shop_options.pory"
	case 4, Auto_EventScript_Legendary_Shop_Electric_Page1_6
# 887 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Electric_Page1_7
# 889 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Electric_Page1_8
# 892 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page1
	return

Auto_EventScript_Legendary_Shop_Electric_Page1_2:
# 873 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_MIRAIDON, 1
# 874 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Electric_Page1_3:
# 876 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_RAIKOU, 1
# 877 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Electric_Page1_4:
# 879 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_REGIELEKI, 1
# 880 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Electric_Page1_5:
# 882 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_TAPU_KOKO, 1
# 883 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Electric_Page1_6:
# 885 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_THUNDURUS, 1
# 886 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Electric_Page1_7:
# 888 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Electric_Page2
	return

Auto_EventScript_Legendary_Shop_Electric_Page1_8:
# 890 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Electric_Page2
	return


Auto_EventScript_Legendary_Shop_Electric_Page2::
# 898 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Electric_Page2
# 899 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 901 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Electric_Page2_2
# 904 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Electric_Page2_3
# 907 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Electric_Page2_4
# 910 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Electric_Page2_5
# 912 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Electric_Page2_6
# 915 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page1
	return

Auto_EventScript_Legendary_Shop_Electric_Page2_2:
# 902 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_ZAPDOS, 1
# 903 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Electric_Page2_3:
# 905 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_ZEKROM, 1
# 906 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Electric_Page2_4:
# 908 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_ZERAORA, 1
# 909 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Electric_Page2_5:
# 911 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Electric_Page1
	return

Auto_EventScript_Legendary_Shop_Electric_Page2_6:
# 913 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Electric_Page1
	return


Auto_EventScript_Legendary_Shop_Fairy_Page1::
# 921 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Fairy_Page1
# 922 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 924 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Fairy_Page1_2
# 927 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Fairy_Page1_3
# 930 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Fairy_Page1_4
# 933 "data/scripts/legendary_shop_options.pory"
	case 3, Auto_EventScript_Legendary_Shop_Fairy_Page1_5
# 936 "data/scripts/legendary_shop_options.pory"
	case 4, Auto_EventScript_Legendary_Shop_Fairy_Page1_6
# 939 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Fairy_Page1_7
# 941 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Fairy_Page1_8
# 944 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page1
	return

Auto_EventScript_Legendary_Shop_Fairy_Page1_2:
# 925 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_DIANCIE, 1
# 926 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fairy_Page1_3:
# 928 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_ENAMORUS, 1
# 929 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fairy_Page1_4:
# 931 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_FEZANDIPITI, 1
# 932 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fairy_Page1_5:
# 934 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_MAGEARNA, 1
# 935 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fairy_Page1_6:
# 937 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_TAPU_BULU, 1
# 938 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fairy_Page1_7:
# 940 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Fairy_Page2
	return

Auto_EventScript_Legendary_Shop_Fairy_Page1_8:
# 942 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Fairy_Page2
	return


Auto_EventScript_Legendary_Shop_Fairy_Page2::
# 950 "data/scripts/legendary_shop_options.pory"
	multichoice2 0, 0, Auto_Text_Legendary_Shop_Fairy_Page2
# 951 "data/scripts/legendary_shop_options.pory"
	switch VAR_RESULT
# 953 "data/scripts/legendary_shop_options.pory"
	case 0, Auto_EventScript_Legendary_Shop_Fairy_Page2_2
# 956 "data/scripts/legendary_shop_options.pory"
	case 1, Auto_EventScript_Legendary_Shop_Fairy_Page2_3
# 959 "data/scripts/legendary_shop_options.pory"
	case 2, Auto_EventScript_Legendary_Shop_Fairy_Page2_4
# 962 "data/scripts/legendary_shop_options.pory"
	case 3, Auto_EventScript_Legendary_Shop_Fairy_Page2_5
# 965 "data/scripts/legendary_shop_options.pory"
	case 4, Auto_EventScript_Legendary_Shop_Fairy_Page2_6
# 968 "data/scripts/legendary_shop_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Legendary_Shop_Fairy_Page2_7
# 970 "data/scripts/legendary_shop_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Legendary_Shop_Fairy_Page2_8
# 973 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Page1
	return

Auto_EventScript_Legendary_Shop_Fairy_Page2_2:
# 954 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_TAPU_FINI, 1
# 955 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fairy_Page2_3:
# 957 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_TAPU_KOKO, 1
# 958 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fairy_Page2_4:
# 960 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_TAPU_LELE, 1
# 961 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fairy_Page2_5:
# 963 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_XERNEAS, 1
# 964 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fairy_Page2_6:
# 966 "data/scripts/legendary_shop_options.pory"
	givemon SPECIES_ZACIAN, 1
# 967 "data/scripts/legendary_shop_options.pory"
	goto Common_EventScript_Legendary_Shop_CheckPurchase
	return

Auto_EventScript_Legendary_Shop_Fairy_Page2_7:
# 969 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Fairy_Page1
	return

Auto_EventScript_Legendary_Shop_Fairy_Page2_8:
# 971 "data/scripts/legendary_shop_options.pory"
	goto Auto_EventScript_Legendary_Shop_Fairy_Page1
	return


Auto_EventScript_Legendary_Shop_Controls_Text_0:
# 5 "data/scripts/legendary_shop_options.pory"
	.string "L: Previous Page                    R: Next Page\nA: Confirm                               B: Go Back$"

Auto_Text_Legendary_Shop_Page1::
# 977 "data/scripts/legendary_shop_options.pory"
	.string "BUG$"
	.string "DARK$"
	.string "DRAGON$"
	.string "ELECTRIC$"
	.string "FAIRY$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Page2::
# 988 "data/scripts/legendary_shop_options.pory"
	.string "FIGHTING$"
	.string "FIRE$"
	.string "FLYING$"
	.string "GHOST$"
	.string "GRASS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Page3::
# 999 "data/scripts/legendary_shop_options.pory"
	.string "GROUND$"
	.string "ICE$"
	.string "NORMAL$"
	.string "POISON$"
	.string "PSYCHIC$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Page4::
# 1010 "data/scripts/legendary_shop_options.pory"
	.string "ROCK$"
	.string "STEEL$"
	.string "WATER$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Rock_Page1::
# 1019 "data/scripts/legendary_shop_options.pory"
	.string "DIANCIE$"
	.string "REGIROCK$"
	.string "TERRAKION$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Steel_Page1::
# 1028 "data/scripts/legendary_shop_options.pory"
	.string "COBALION$"
	.string "DIALGA$"
	.string "GENESECT$"
	.string "HEATRAN$"
	.string "JIRACHI$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Steel_Page2::
# 1039 "data/scripts/legendary_shop_options.pory"
	.string "MAGEARNA$"
	.string "MELMETAL$"
	.string "REGISTEEL$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Water_Page1::
# 1048 "data/scripts/legendary_shop_options.pory"
	.string "KELDEO$"
	.string "KYOGRE$"
	.string "MANAPHY$"
	.string "PALKIA$"
	.string "PHIONE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Water_Page2::
# 1059 "data/scripts/legendary_shop_options.pory"
	.string "SUICUNE$"
	.string "TAPU FINI$"
	.string "VOLCANION$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Ground_Page1::
# 1068 "data/scripts/legendary_shop_options.pory"
	.string "GROUDON$"
	.string "LANDORUS$"
	.string "TING-LU$"
	.string "ZYGARDE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Ice_Page1::
# 1078 "data/scripts/legendary_shop_options.pory"
	.string "ARTICUNO$"
	.string "CHIEN-PAO$"
	.string "GLASTRIER$"
	.string "KYUREM$"
	.string "REGICE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Normal_Page1::
# 1089 "data/scripts/legendary_shop_options.pory"
	.string "ARCEUS$"
	.string "MELOETTA$"
	.string "REGIGIGAS$"
	.string "TERAPAGOS$"
	.string "TYPE: NULL$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Poison_Page1::
# 1100 "data/scripts/legendary_shop_options.pory"
	.string "ETERNATUS$"
	.string "FEZANDIPITI$"
	.string "MUNKIDORI$"
	.string "OKIDOGI$"
	.string "PECHARUNT$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Psychic_Page1::
# 1111 "data/scripts/legendary_shop_options.pory"
	.string "AZELF$"
	.string "CALYREX$"
	.string "CELEBI$"
	.string "CRESSELIA$"
	.string "DEOXYS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Psychic_Page2::
# 1122 "data/scripts/legendary_shop_options.pory"
	.string "HOOPA$"
	.string "JIRACHI$"
	.string "LATIAS$"
	.string "LATIOS$"
	.string "LUGIA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Psychic_Page3::
# 1133 "data/scripts/legendary_shop_options.pory"
	.string "MELOETTA$"
	.string "MESPRIT$"
	.string "MEW$"
	.string "MEWTWO$"
	.string "MUNKIDORI$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Psychic_Page4::
# 1144 "data/scripts/legendary_shop_options.pory"
	.string "NECROZMA$"
	.string "TAPU LELE$"
	.string "UXIE$"
	.string "VICTINI$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Fighting_Page1::
# 1154 "data/scripts/legendary_shop_options.pory"
	.string "COBALION$"
	.string "KELDEO$"
	.string "KORAIDON$"
	.string "KUBFU$"
	.string "MARSHADOW$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Fighting_Page2::
# 1165 "data/scripts/legendary_shop_options.pory"
	.string "OKIDOGI$"
	.string "TERRAKION$"
	.string "VIRIZION$"
	.string "ZAMAZENTA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Fire_Page1::
# 1175 "data/scripts/legendary_shop_options.pory"
	.string "CHI-YU$"
	.string "ENTEI$"
	.string "HEATRAN$"
	.string "HO-OH$"
	.string "MOLTRES$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Fire_Page2::
# 1186 "data/scripts/legendary_shop_options.pory"
	.string "RESHIRAM$"
	.string "VICTINI$"
	.string "VOLCANION$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Flying_Page1::
# 1195 "data/scripts/legendary_shop_options.pory"
	.string "ARTICUNO$"
	.string "ENAMORUS$"
	.string "HO-OH$"
	.string "LANDORUS$"
	.string "LUGIA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Flying_Page2::
# 1206 "data/scripts/legendary_shop_options.pory"
	.string "MOLTRES$"
	.string "RAYQUAZA$"
	.string "THUNDURUS$"
	.string "TORNADUS$"
	.string "YVELTAL$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Flying_Page3::
# 1217 "data/scripts/legendary_shop_options.pory"
	.string "ZAPDOS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Ghost_Page1::
# 1224 "data/scripts/legendary_shop_options.pory"
	.string "GIRATINA$"
	.string "HOOPA$"
	.string "MARSHADOW$"
	.string "PECHARUNT$"
	.string "SPECTRIER$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Grass_Page1::
# 1235 "data/scripts/legendary_shop_options.pory"
	.string "CALYREX$"
	.string "CELEBI$"
	.string "OGERPON$"
	.string "SHAYMIN$"
	.string "TAPU BULU$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Grass_Page2::
# 1246 "data/scripts/legendary_shop_options.pory"
	.string "VIRIZION$"
	.string "WO-CHIEN$"
	.string "ZARUDE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Bug_Page1::
# 1255 "data/scripts/legendary_shop_options.pory"
	.string "GENESECT$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Dark_Page1::
# 1262 "data/scripts/legendary_shop_options.pory"
	.string "CHI-YU$"
	.string "CHIEN-PAO$"
	.string "DARKRAI$"
	.string "TING-LU$"
	.string "WO-CHIEN$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Dark_Page2::
# 1273 "data/scripts/legendary_shop_options.pory"
	.string "YVELTAL$"
	.string "ZARUDE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Dragon_Page1::
# 1281 "data/scripts/legendary_shop_options.pory"
	.string "DIALGA$"
	.string "ETERNATUS$"
	.string "GIRATINA$"
	.string "KORAIDON$"
	.string "KYUREM$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Dragon_Page2::
# 1292 "data/scripts/legendary_shop_options.pory"
	.string "LATIAS$"
	.string "LATIOS$"
	.string "MIRAIDON$"
	.string "PALKIA$"
	.string "RAYQUAZA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Dragon_Page3::
# 1303 "data/scripts/legendary_shop_options.pory"
	.string "REGIDRAGO$"
	.string "RESHIRAM$"
	.string "ZEKROM$"
	.string "ZYGARDE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Electric_Page1::
# 1313 "data/scripts/legendary_shop_options.pory"
	.string "MIRAIDON$"
	.string "RAIKOU$"
	.string "REGIELEKI$"
	.string "TAPU KOKO$"
	.string "THUNDURUS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Electric_Page2::
# 1324 "data/scripts/legendary_shop_options.pory"
	.string "ZAPDOS$"
	.string "ZEKROM$"
	.string "ZERAORA$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Fairy_Page1::
# 1333 "data/scripts/legendary_shop_options.pory"
	.string "DIANCIE$"
	.string "ENAMORUS$"
	.string "FEZANDIPITI$"
	.string "MAGEARNA$"
	.string "TAPU BULU$"
	.string "Go Back$"
	.string "$"

Auto_Text_Legendary_Shop_Fairy_Page2::
# 1344 "data/scripts/legendary_shop_options.pory"
	.string "TAPU FINI$"
	.string "TAPU KOKO$"
	.string "TAPU LELE$"
	.string "XERNEAS$"
	.string "ZACIAN$"
	.string "Go Back$"
	.string "$"
