Auto_EventScript_Sample_Sets_Controls::
# 5 "data/scripts/sample_sets_options.pory"
	msgbox Auto_EventScript_Sample_Sets_Controls_Text_0
# 6 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page1
	return


Auto_EventScript_Sample_Sets_Page1::
# 11 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Page1
# 12 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 14 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Page1_2
# 16 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Page1_3
# 18 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Page1_4
# 20 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Page1_5
# 22 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Page1_6
# 24 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Page1_7
# 26 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Page1_8
# 29 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_End
	return

Auto_EventScript_Sample_Sets_Page1_2:
# 15 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Amoonguss_Page1
	return

Auto_EventScript_Sample_Sets_Page1_3:
# 17 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Charizard_Page1
	return

Auto_EventScript_Sample_Sets_Page1_4:
# 19 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Gardevoir_Page1
	return

Auto_EventScript_Sample_Sets_Page1_5:
# 21 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Gengar_Page1
	return

Auto_EventScript_Sample_Sets_Page1_6:
# 23 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Incineroar_Page1
	return

Auto_EventScript_Sample_Sets_Page1_7:
# 25 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page3
	return

Auto_EventScript_Sample_Sets_Page1_8:
# 27 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page2
	return


Auto_EventScript_Sample_Sets_Page2::
# 35 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Page2
# 36 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 38 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Page2_2
# 40 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Page2_3
# 42 "data/scripts/sample_sets_options.pory"
	case 2, Auto_EventScript_Sample_Sets_Page2_4
# 44 "data/scripts/sample_sets_options.pory"
	case 3, Auto_EventScript_Sample_Sets_Page2_5
# 46 "data/scripts/sample_sets_options.pory"
	case 4, Auto_EventScript_Sample_Sets_Page2_6
# 48 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Page2_7
# 50 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Page2_8
# 53 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_End
	return

Auto_EventScript_Sample_Sets_Page2_2:
# 39 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Iron_Hands_Page1
	return

Auto_EventScript_Sample_Sets_Page2_3:
# 41 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Kangaskhan_Page1
	return

Auto_EventScript_Sample_Sets_Page2_4:
# 43 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Landorus_Therian_Page1
	return

Auto_EventScript_Sample_Sets_Page2_5:
# 45 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Manectric_Page1
	return

Auto_EventScript_Sample_Sets_Page2_6:
# 47 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Metagross_Page1
	return

Auto_EventScript_Sample_Sets_Page2_7:
# 49 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page1
	return

Auto_EventScript_Sample_Sets_Page2_8:
# 51 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page3
	return


Auto_EventScript_Sample_Sets_Page3::
# 59 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Page3
# 60 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 62 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Page3_2
# 64 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Page3_3
# 66 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Page3_4
# 68 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Page3_5
# 71 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_End
	return

Auto_EventScript_Sample_Sets_Page3_2:
# 63 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Rillaboom_Page1
	return

Auto_EventScript_Sample_Sets_Page3_3:
# 65 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Salamence_Page1
	return

Auto_EventScript_Sample_Sets_Page3_4:
# 67 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page2
	return

Auto_EventScript_Sample_Sets_Page3_5:
# 69 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page1
	return


Auto_EventScript_Sample_Sets_Rillaboom_Page1::
# 77 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Rillaboom_Page1
# 78 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 80 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Rillaboom_Page1_2
# 83 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Rillaboom_Page1_3
# 85 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Rillaboom_Page1_4
# 88 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page3
	return

Auto_EventScript_Sample_Sets_Rillaboom_Page1_2:
# 81 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_RILLABOOM, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 132, 36, 60, 68, 0, 212, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_WOOD_HAMMER, MOVE_GRASSY_GLIDE, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 82 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Rillaboom_Page1_3:
# 84 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Rillaboom_Page1
	return

Auto_EventScript_Sample_Sets_Rillaboom_Page1_4:
# 86 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Rillaboom_Page1
	return


Auto_EventScript_Sample_Sets_Salamence_Page1::
# 94 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Salamence_Page1
# 95 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 97 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Salamence_Page1_2
# 100 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Salamence_Page1_3
# 103 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Salamence_Page1_4
# 105 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Salamence_Page1_5
# 108 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page3
	return

Auto_EventScript_Sample_Sets_Salamence_Page1_2:
# 98 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SALAMENCE, 65, ITEM_SALAMENCITE, ITEM_SPORT_BALL, NATURE_NAIVE, 0, 0, 0, 44, 0, 212, 252, 0, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_TAILWIND, MOVE_HYPER_VOICE, MOVE_DOUBLE_EDGE, FALSE, FALSE, FALSE
# 99 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Salamence_Page1_3:
# 101 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_SALAMENCE, 65, ITEM_SALAMENCITE, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 252, 36, 4, 92, 0, 124, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_ROOST, MOVE_DOUBLE_EDGE, MOVE_DRAGON_DANCE, FALSE, FALSE, FALSE
# 102 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Salamence_Page1_4:
# 104 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Salamence_Page1
	return

Auto_EventScript_Sample_Sets_Salamence_Page1_5:
# 106 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Salamence_Page1
	return


Auto_EventScript_Sample_Sets_Iron_Hands_Page1::
# 114 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Iron_Hands_Page1
# 115 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 117 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Iron_Hands_Page1_2
# 120 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Iron_Hands_Page1_3
# 122 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Iron_Hands_Page1_4
# 125 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page2
	return

Auto_EventScript_Sample_Sets_Iron_Hands_Page1_2:
# 118 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_IRON_HANDS, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 60, 156, 36, 4, 0, 252, 31, 31, 31, 31, 31, 31, MOVE_DRAIN_PUNCH, MOVE_WILD_CHARGE, MOVE_HEAVY_SLAM, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 119 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Iron_Hands_Page1_3:
# 121 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Iron_Hands_Page1
	return

Auto_EventScript_Sample_Sets_Iron_Hands_Page1_4:
# 123 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Iron_Hands_Page1
	return


Auto_EventScript_Sample_Sets_Kangaskhan_Page1::
# 131 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Kangaskhan_Page1
# 132 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 134 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Kangaskhan_Page1_2
# 137 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Kangaskhan_Page1_3
# 139 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Kangaskhan_Page1_4
# 142 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page2
	return

Auto_EventScript_Sample_Sets_Kangaskhan_Page1_2:
# 135 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_KANGASKHAN, 65, ITEM_KANGASKHANITE, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 36, 196, 20, 20, 0, 236, 31, 31, 31, 31, 31, 31, MOVE_RETURN, MOVE_LOW_KICK, MOVE_SUCKER_PUNCH, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 136 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Kangaskhan_Page1_3:
# 138 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Kangaskhan_Page1
	return

Auto_EventScript_Sample_Sets_Kangaskhan_Page1_4:
# 140 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Kangaskhan_Page1
	return


Auto_EventScript_Sample_Sets_Landorus_Therian_Page1::
# 148 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Landorus_Therian_Page1
# 149 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 151 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Landorus_Therian_Page1_2
# 154 "data/scripts/sample_sets_options.pory"
	case 1, Auto_EventScript_Sample_Sets_Landorus_Therian_Page1_3
# 157 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Landorus_Therian_Page1_4
# 159 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Landorus_Therian_Page1_5
# 162 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page2
	return

Auto_EventScript_Sample_Sets_Landorus_Therian_Page1_2:
# 152 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_GROUNDIUM_Z, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 156, 116, 36, 92, 0, 108, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SWORDS_DANCE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, FALSE, FALSE, FALSE
# 153 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Landorus_Therian_Page1_3:
# 155 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_LANDORUS_THERIAN, 65, ITEM_ASSAULT_VEST, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 4, 196, 4, 252, 0, 52, 31, 31, 31, 31, 31, 31, MOVE_U_TURN, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SUPERPOWER, FALSE, FALSE, FALSE
# 156 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Landorus_Therian_Page1_4:
# 158 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Landorus_Therian_Page1
	return

Auto_EventScript_Sample_Sets_Landorus_Therian_Page1_5:
# 160 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Landorus_Therian_Page1
	return


Auto_EventScript_Sample_Sets_Manectric_Page1::
# 168 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Manectric_Page1
# 169 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 171 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Manectric_Page1_2
# 174 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Manectric_Page1_3
# 176 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Manectric_Page1_4
# 179 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page2
	return

Auto_EventScript_Sample_Sets_Manectric_Page1_2:
# 172 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_MANECTRIC, 65, ITEM_MANECTITE, ITEM_SPORT_BALL, NATURE_TIMID, 1, 0, 244, 0, 4, 220, 36, 4, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_VOLT_SWITCH, MOVE_OVERHEAT, MOVE_SNARL, FALSE, FALSE, FALSE
# 173 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Manectric_Page1_3:
# 175 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Manectric_Page1
	return

Auto_EventScript_Sample_Sets_Manectric_Page1_4:
# 177 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Manectric_Page1
	return


Auto_EventScript_Sample_Sets_Metagross_Page1::
# 185 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Metagross_Page1
# 186 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 188 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Metagross_Page1_2
# 191 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Metagross_Page1_3
# 193 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Metagross_Page1_4
# 196 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page2
	return

Auto_EventScript_Sample_Sets_Metagross_Page1_2:
# 189 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_METAGROSS, 65, ITEM_METAGROSSITE, ITEM_SPORT_BALL, NATURE_ADAMANT, 0, 0, 124, 196, 12, 140, 0, 36, 31, 31, 31, 31, 31, 31, MOVE_PROTECT, MOVE_IRON_HEAD, MOVE_ICE_PUNCH, MOVE_STOMPING_TANTRUM, FALSE, FALSE, FALSE
# 190 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Metagross_Page1_3:
# 192 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Metagross_Page1
	return

Auto_EventScript_Sample_Sets_Metagross_Page1_4:
# 194 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Metagross_Page1
	return


Auto_EventScript_Sample_Sets_Amoonguss_Page1::
# 202 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Amoonguss_Page1
# 203 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 205 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Amoonguss_Page1_2
# 208 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Amoonguss_Page1_3
# 210 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Amoonguss_Page1_4
# 213 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page1
	return

Auto_EventScript_Sample_Sets_Amoonguss_Page1_2:
# 206 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_AMOONGUSS, 65, ITEM_ROCKY_HELMET, ITEM_SPORT_BALL, NATURE_CALM, 1, 0, 252, 0, 172, 4, 4, 76, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_RAGE_POWDER, MOVE_POLLEN_PUFF, MOVE_SPORE, FALSE, FALSE, FALSE
# 207 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Amoonguss_Page1_3:
# 209 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Amoonguss_Page1
	return

Auto_EventScript_Sample_Sets_Amoonguss_Page1_4:
# 211 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Amoonguss_Page1
	return


Auto_EventScript_Sample_Sets_Charizard_Page1::
# 219 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Charizard_Page1
# 220 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 222 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Charizard_Page1_2
# 225 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Charizard_Page1_3
# 227 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Charizard_Page1_4
# 230 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page1
	return

Auto_EventScript_Sample_Sets_Charizard_Page1_2:
# 223 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_CHARIZARD, 65, ITEM_CHARIZARDITE_Y, ITEM_SPORT_BALL, NATURE_MODEST, 0, 0, 204, 0, 108, 188, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SCORCHING_SANDS, MOVE_FLAMETHROWER, MOVE_SOLAR_BEAM, FALSE, FALSE, FALSE
# 224 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Charizard_Page1_3:
# 226 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Charizard_Page1
	return

Auto_EventScript_Sample_Sets_Charizard_Page1_4:
# 228 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Charizard_Page1
	return


Auto_EventScript_Sample_Sets_Gardevoir_Page1::
# 236 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Gardevoir_Page1
# 237 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 239 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Gardevoir_Page1_2
# 242 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Gardevoir_Page1_3
# 244 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Gardevoir_Page1_4
# 247 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page1
	return

Auto_EventScript_Sample_Sets_Gardevoir_Page1_2:
# 240 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GARDEVOIR, 65, ITEM_GARDEVOIRITE, ITEM_SPORT_BALL, NATURE_MODEST, 0, 1, 244, 0, 196, 28, 36, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_HYPER_VOICE, MOVE_TRICK_ROOM, MOVE_PSYCHIC, FALSE, FALSE, FALSE
# 241 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Gardevoir_Page1_3:
# 243 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Gardevoir_Page1
	return

Auto_EventScript_Sample_Sets_Gardevoir_Page1_4:
# 245 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Gardevoir_Page1
	return


Auto_EventScript_Sample_Sets_Gengar_Page1::
# 253 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Gengar_Page1
# 254 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 256 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Gengar_Page1_2
# 259 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Gengar_Page1_3
# 261 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Gengar_Page1_4
# 264 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page1
	return

Auto_EventScript_Sample_Sets_Gengar_Page1_2:
# 257 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_GENGAR, 65, ITEM_GENGARITE, ITEM_SPORT_BALL, NATURE_TIMID, 0, 1, 252, 0, 68, 180, 4, 4, 31, 0, 31, 31, 31, 31, MOVE_PROTECT, MOVE_SHADOW_BALL, MOVE_PERISH_SONG, MOVE_DISABLE, FALSE, FALSE, FALSE
# 258 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Gengar_Page1_3:
# 260 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Gengar_Page1
	return

Auto_EventScript_Sample_Sets_Gengar_Page1_4:
# 262 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Gengar_Page1
	return


Auto_EventScript_Sample_Sets_Incineroar_Page1::
# 270 "data/scripts/sample_sets_options.pory"
	multichoice2 0, 0, Auto_Text_Sample_Sets_Incineroar_Page1
# 271 "data/scripts/sample_sets_options.pory"
	switch VAR_RESULT
# 273 "data/scripts/sample_sets_options.pory"
	case 0, Auto_EventScript_Sample_Sets_Incineroar_Page1_2
# 276 "data/scripts/sample_sets_options.pory"
	case MULTI_L_PRESSED, Auto_EventScript_Sample_Sets_Incineroar_Page1_3
# 278 "data/scripts/sample_sets_options.pory"
	case MULTI_R_PRESSED, Auto_EventScript_Sample_Sets_Incineroar_Page1_4
# 281 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Page1
	return

Auto_EventScript_Sample_Sets_Incineroar_Page1_2:
# 274 "data/scripts/sample_sets_options.pory"
	givemon SPECIES_INCINEROAR, 65, ITEM_SITRUS_BERRY, ITEM_SPORT_BALL, NATURE_ADAMANT, 1, 1, 236, 36, 4, 28, 0, 204, 31, 31, 31, 31, 31, 31, MOVE_PARTING_SHOT, MOVE_FLARE_BLITZ, MOVE_KNOCK_OFF, MOVE_FAKE_OUT, FALSE, FALSE, FALSE
# 275 "data/scripts/sample_sets_options.pory"
	goto Common_EventScript_Sample_Sets_CheckPurchase
	return

Auto_EventScript_Sample_Sets_Incineroar_Page1_3:
# 277 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Incineroar_Page1
	return

Auto_EventScript_Sample_Sets_Incineroar_Page1_4:
# 279 "data/scripts/sample_sets_options.pory"
	goto Auto_EventScript_Sample_Sets_Incineroar_Page1
	return


Auto_EventScript_Sample_Sets_Controls_Text_0:
# 5 "data/scripts/sample_sets_options.pory"
	.string "L: Previous Page                    R: Next Page\nA: Confirm                    B: Go Back$"

Auto_Text_Sample_Sets_Page1::
# 285 "data/scripts/sample_sets_options.pory"
	.string "AMOONGUSS$"
	.string "CHARIZARD$"
	.string "GARDEVOIR$"
	.string "GENGAR$"
	.string "INCINEROAR$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Page2::
# 296 "data/scripts/sample_sets_options.pory"
	.string "IRON HANDS$"
	.string "KANGASKHAN$"
	.string "LANDORUS-THERIAN$"
	.string "MANECTRIC$"
	.string "METAGROSS$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Page3::
# 307 "data/scripts/sample_sets_options.pory"
	.string "RILLABOOM$"
	.string "SALAMENCE$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Rillaboom_Page1::
# 315 "data/scripts/sample_sets_options.pory"
	.string "132/36+/60/0-/212/68$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Salamence_Page1::
# 322 "data/scripts/sample_sets_options.pory"
	.string "0/44/0/252/0-/212+$"
	.string "252/36+/4/0-/124/92$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Iron_Hands_Page1::
# 330 "data/scripts/sample_sets_options.pory"
	.string "60/156+/36/0-/252/4$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Kangaskhan_Page1::
# 337 "data/scripts/sample_sets_options.pory"
	.string "36/196+/20/0-/236/20$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Landorus_Therian_Page1::
# 344 "data/scripts/sample_sets_options.pory"
	.string "156/116+/36/0-/108/92$"
	.string "4/196+/4/0-/52/252$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Manectric_Page1::
# 352 "data/scripts/sample_sets_options.pory"
	.string "244/0-/4/36/4/220+$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Metagross_Page1::
# 359 "data/scripts/sample_sets_options.pory"
	.string "124/196+/12/0-/36/140$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Amoonguss_Page1::
# 366 "data/scripts/sample_sets_options.pory"
	.string "252/0-/172/4/76+/4$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Charizard_Page1::
# 373 "data/scripts/sample_sets_options.pory"
	.string "204/0-/108/4+/4/188$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Gardevoir_Page1::
# 380 "data/scripts/sample_sets_options.pory"
	.string "244/0-/196/36+/4/28$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Gengar_Page1::
# 387 "data/scripts/sample_sets_options.pory"
	.string "252/0-/68/4/4/180+$"
	.string "Go Back$"
	.string "$"

Auto_Text_Sample_Sets_Incineroar_Page1::
# 394 "data/scripts/sample_sets_options.pory"
	.string "236/36+/4/0-/204/28$"
	.string "Go Back$"
	.string "$"
