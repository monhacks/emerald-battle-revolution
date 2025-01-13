Introduction_EventScript_Startup::
# 5 "data/scripts/introduction.pory"
	setflag FLAG_SYS_B_DASH
# 6 "data/scripts/introduction.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 9 "data/scripts/introduction.pory"
	msgbox Introduction_EventScript_Startup_Text_0
# 10 "data/scripts/introduction.pory"
	msgbox Introduction_EventScript_Startup_Text_1
# 11 "data/scripts/introduction.pory"
	msgbox Introduction_EventScript_Startup_Text_2
# 12 "data/scripts/introduction.pory"
	msgbox Introduction_EventScript_Startup_Text_3
# 13 "data/scripts/introduction.pory"
	msgbox Introduction_EventScript_Startup_Text_4
# 14 "data/scripts/introduction.pory"
	goto Introduction_EventScript_AskSandboxMode
	return


Introduction_EventScript_AskSandboxMode::
# 18 "data/scripts/introduction.pory"
	msgbox Introduction_EventScript_AskSandboxMode_Text_0
# 19 "data/scripts/introduction.pory"
	msgbox Introduction_EventScript_AskSandboxMode_Text_1
# 20 "data/scripts/introduction.pory"
	msgbox Introduction_EventScript_AskSandboxMode_Text_2
# 21 "data/scripts/introduction.pory"
	msgbox Introduction_EventScript_AskSandboxMode_Text_3
# 22 "data/scripts/introduction.pory"
	msgbox Introduction_EventScript_AskSandboxMode_Text_4
# 23 "data/scripts/introduction.pory"
	yesnobox 0, 8
# 24 "data/scripts/introduction.pory"
	compare VAR_RESULT, YES
	goto_if_eq Introduction_EventScript_AskSandboxMode_2
# 29 "data/scripts/introduction.pory"
	msgbox Introduction_EventScript_AskSandboxMode_Text_6
Introduction_EventScript_AskSandboxMode_1:
# 31 "data/scripts/introduction.pory"
	releaseall
	end

Introduction_EventScript_AskSandboxMode_2:
# 25 "data/scripts/introduction.pory"
	msgbox Introduction_EventScript_AskSandboxMode_Text_5
# 26 "data/scripts/introduction.pory"
	goto Introduction_EventScript_SetupSandboxMode
	goto Introduction_EventScript_AskSandboxMode_1


Introduction_EventScript_SetupSandboxMode::
# 40 "data/scripts/introduction.pory"
	checkplayergender
# 41 "data/scripts/introduction.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Introduction_EventScript_SetupSandboxMode_2
# 57 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 58 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_SIBLING
# 59 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MAY
# 60 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 61 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_MOM
# 62 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
# 63 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_PICHU_DOLL
# 66 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_MOM
Introduction_EventScript_SetupSandboxMode_1:
# 70 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_SKY_PILLAR_TOP_RAYQUAZA_STILL
# 71 "data/scripts/introduction.pory"
	setflag FLAG_SET_WALL_CLOCK
# 72 "data/scripts/introduction.pory"
	setflag FLAG_RESCUED_BIRCH
# 73 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_CONTEST_POKE_BALL
# 74 "data/scripts/introduction.pory"
	setflag FLAG_MET_RIVAL_MOM
# 75 "data/scripts/introduction.pory"
	setflag FLAG_BIRCH_AIDE_MET
# 76 "data/scripts/introduction.pory"
	setflag FLAG_RECEIVED_BIKE
# 77 "data/scripts/introduction.pory"
	setflag FLAG_WATTSON_REMATCH_AVAILABLE
# 78 "data/scripts/introduction.pory"
	setflag FLAG_MET_TEAM_AQUA_HARBOR
# 79 "data/scripts/introduction.pory"
	setflag FLAG_TV_EXPLAINED
# 80 "data/scripts/introduction.pory"
	setflag FLAG_WHITEOUT_TO_LAVARIDGE
# 81 "data/scripts/introduction.pory"
	setflag FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT
# 82 "data/scripts/introduction.pory"
	setflag FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE
# 83 "data/scripts/introduction.pory"
	setflag FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE
# 84 "data/scripts/introduction.pory"
	setflag FLAG_RECEIVED_METEORITE
# 85 "data/scripts/introduction.pory"
	setflag FLAG_MET_HIDDEN_POWER_GIVER
# 86 "data/scripts/introduction.pory"
	setflag FLAG_DEFEATED_WALLY_VICTORY_ROAD
# 87 "data/scripts/introduction.pory"
	setflag FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN
# 88 "data/scripts/introduction.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE103
# 89 "data/scripts/introduction.pory"
	setflag FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY
# 90 "data/scripts/introduction.pory"
	setflag FLAG_RECOVERED_DEVON_GOODS
# 91 "data/scripts/introduction.pory"
	setflag FLAG_RETURNED_DEVON_GOODS
# 92 "data/scripts/introduction.pory"
	setflag FLAG_MR_BRINEY_SAILING_INTRO
# 93 "data/scripts/introduction.pory"
	setflag FLAG_DOCK_REJECTED_DEVON_GOODS
# 94 "data/scripts/introduction.pory"
	setflag FLAG_DELIVERED_DEVON_GOODS
# 95 "data/scripts/introduction.pory"
	setflag FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE
# 96 "data/scripts/introduction.pory"
	setflag FLAG_INTERACTED_WITH_DEVON_EMPLOYEE_GOODS_STOLEN
# 97 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_SECRET_BASE_TRAINER
# 98 "data/scripts/introduction.pory"
	setflag FLAG_RECEIVED_POKENAV
# 99 "data/scripts/introduction.pory"
	setflag FLAG_DELIVERED_STEVEN_LETTER
# 100 "data/scripts/introduction.pory"
	setflag FLAG_DEFEATED_WALLY_MAUVILLE
# 101 "data/scripts/introduction.pory"
	setflag FLAG_DEFEATED_GRUNT_SPACE_CENTER_1F
# 102 "data/scripts/introduction.pory"
	setflag FLAG_WALLY_SPEECH
# 103 "data/scripts/introduction.pory"
	setflag FLAG_RUSTURF_TUNNEL_OPENED
# 104 "data/scripts/introduction.pory"
	setflag FLAG_INTERACTED_WITH_STEVEN_SPACE_CENTER
# 105 "data/scripts/introduction.pory"
	setflag FLAG_MET_ARCHIE_METEOR_FALLS
# 106 "data/scripts/introduction.pory"
	setflag FLAG_GOT_BASEMENT_KEY_FROM_WATTSON
# 107 "data/scripts/introduction.pory"
	setflag FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON
# 108 "data/scripts/introduction.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 109 "data/scripts/introduction.pory"
	setflag FLAG_RECEIVED_RED_OR_BLUE_ORB
# 110 "data/scripts/introduction.pory"
	setflag FLAG_ENABLE_WALLY_MATCH_CALL
# 111 "data/scripts/introduction.pory"
	setflag FLAG_ENABLE_SCOTT_MATCH_CALL
# 112 "data/scripts/introduction.pory"
	setflag FLAG_ENABLE_MOM_MATCH_CALL
# 113 "data/scripts/introduction.pory"
	setflag FLAG_MET_WAILMER_TRAINER
# 114 "data/scripts/introduction.pory"
	setflag FLAG_EVIL_LEADER_PLEASE_STOP
# 115 "data/scripts/introduction.pory"
	setflag FLAG_RECEIVED_GO_GOGGLES
# 116 "data/scripts/introduction.pory"
	setflag FLAG_MET_PROF_COZMO
# 117 "data/scripts/introduction.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 118 "data/scripts/introduction.pory"
	setflag FLAG_LATIOS_OR_LATIAS_ROAMING
# 119 "data/scripts/introduction.pory"
	setflag FLAG_ENTERED_ELITE_FOUR
# 120 "data/scripts/introduction.pory"
	setflag FLAG_EVIL_TEAM_ESCAPED_STERN_SPOKE
# 121 "data/scripts/introduction.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 122 "data/scripts/introduction.pory"
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
# 123 "data/scripts/introduction.pory"
	setflag FLAG_RECEIVED_DEVON_SCOPE
# 124 "data/scripts/introduction.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 125 "data/scripts/introduction.pory"
	setflag FLAG_RECEIVED_SS_TICKET
# 126 "data/scripts/introduction.pory"
	setflag FLAG_MET_RIVAL_LILYCOVE
# 127 "data/scripts/introduction.pory"
	setflag FLAG_KECLEON_FLED_FORTREE
# 128 "data/scripts/introduction.pory"
	setflag FLAG_PETALBURG_MART_EXPANDED_ITEMS
# 129 "data/scripts/introduction.pory"
	setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
# 130 "data/scripts/introduction.pory"
	setflag FLAG_OMIT_DIVE_FROM_STEVEN_LETTER
# 131 "data/scripts/introduction.pory"
	setflag FLAG_HAS_MATCH_CALL
# 132 "data/scripts/introduction.pory"
	setflag FLAG_ADDED_MATCH_CALL_TO_POKENAV
# 133 "data/scripts/introduction.pory"
	setflag FLAG_REGISTERED_STEVEN_POKENAV
# 134 "data/scripts/introduction.pory"
	setflag FLAG_ENABLE_NORMAN_MATCH_CALL
# 135 "data/scripts/introduction.pory"
	setflag FLAG_STEVEN_GUIDES_TO_CAVE_OF_ORIGIN
# 136 "data/scripts/introduction.pory"
	setflag FLAG_MET_ARCHIE_SOOTOPOLIS
# 137 "data/scripts/introduction.pory"
	setflag FLAG_MET_MAXIE_SOOTOPOLIS
# 138 "data/scripts/introduction.pory"
	setflag FLAG_WALLACE_GOES_TO_SKY_PILLAR
# 139 "data/scripts/introduction.pory"
	setflag FLAG_BEAT_MAGMA_GRUNT_JAGGED_PASS
# 140 "data/scripts/introduction.pory"
	setflag FLAG_MIRAGE_TOWER_VISIBLE
# 141 "data/scripts/introduction.pory"
	setflag FLAG_ENABLE_MR_STONE_POKENAV
# 142 "data/scripts/introduction.pory"
	setflag FLAG_MATCH_CALL_REGISTERED
# 143 "data/scripts/introduction.pory"
	setflag FLAG_ENABLE_MR_STONE_POKENAV
# 144 "data/scripts/introduction.pory"
	setflag FLAG_DEFEATED_ELECTRODE_1_AQUA_HIDEOUT
# 145 "data/scripts/introduction.pory"
	setflag FLAG_DEFEATED_ELECTRODE_2_AQUA_HIDEOUT
# 146 "data/scripts/introduction.pory"
	setflag FLAG_MET_SCOTT_IN_EVERGRANDE
# 147 "data/scripts/introduction.pory"
	setflag FLAG_MET_SCOTT_ON_SS_TIDAL
# 148 "data/scripts/introduction.pory"
	setflag FLAG_MET_SCOTT_ON_SS_TIDAL
# 151 "data/scripts/introduction.pory"
	setflag FLAG_ENABLE_ROXANNE_MATCH_CALL
# 152 "data/scripts/introduction.pory"
	setflag FLAG_ENABLE_BRAWLY_MATCH_CALL
# 153 "data/scripts/introduction.pory"
	setflag FLAG_ENABLE_WATTSON_MATCH_CALL
# 154 "data/scripts/introduction.pory"
	setflag FLAG_ENABLE_FLANNERY_MATCH_CALL
# 155 "data/scripts/introduction.pory"
	setflag FLAG_ENABLE_WINONA_MATCH_CALL
# 156 "data/scripts/introduction.pory"
	setflag FLAG_ENABLE_TATE_AND_LIZA_MATCH_CALL
# 157 "data/scripts/introduction.pory"
	setflag FLAG_ENABLE_JUAN_MATCH_CALL
# 160 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 161 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_POKEMON_CENTER_2F_MYSTERY_GIFT_MAN
# 162 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_SAFARI_ZONE_SOUTH_CONSTRUCTION_WORKERS
# 163 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_ROUTE_104_RIVAL
# 164 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 165 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 166 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_ROUTE_103_RIVAL
# 167 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_PETALBURG_WOODS_DEVON_EMPLOYEE
# 168 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_PETALBURG_WOODS_AQUA_GRUNT
# 169 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLY
# 170 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_MOM
# 171 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_AQUA_GRUNT
# 172 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 173 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_KYOGRE_ASLEEP
# 174 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_PLAYERS_HOUSE_DAD
# 175 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_MAGMA_NOTE
# 176 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY
# 177 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 178 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
# 179 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY
# 180 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
# 181 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 182 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
# 183 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_LILYCOVE_HARBOR_EVENT_TICKET_TAKER
# 184 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_SCOTT
# 185 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_ROUTE_101_ZIGZAGOON
# 186 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 187 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_STEVEN
# 188 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_1
# 189 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_2
# 190 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_TEAM_MAGMA
# 191 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_BEDROOM_MOM
# 192 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_DEOXYS
# 193 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_BIRTH_ISLAND_DEOXYS_TRIANGLE
# 194 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_MAUVILLE_CITY_SCOTT
# 195 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_VERDANTURF_TOWN_SCOTT
# 196 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_FALLARBOR_TOWN_BATTLE_TENT_SCOTT
# 197 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_ROUTE_111_VICTOR_WINSTRATE
# 198 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_ROUTE_111_VICTORIA_WINSTRATE
# 199 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_ROUTE_111_VIVI_WINSTRATE
# 200 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_ROUTE_111_VICKY_WINSTRATE
# 201 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_SKY_PILLAR_TOP_RAYQUAZA
# 202 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_CONTEST_ATTENDANT_1
# 203 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_1
# 204 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_2
# 205 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_3
# 206 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_4
# 207 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_LILYCOVE_MUSEUM_TOURISTS
# 208 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_PETALBURG_GYM_GREETER
# 209 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_MOM
# 210 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_MOM
# 211 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_ROUTE_119_SCOTT
# 212 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_LILYCOVE_MOTEL_SCOTT
# 213 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SCOTT
# 214 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_EVER_GRANDE_POKEMON_CENTER_1F_SCOTT
# 215 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 216 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 217 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_1
# 218 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_ROUTE_118_GABBY_AND_TY_1
# 219 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_ROUTE_120_GABBY_AND_TY_1
# 220 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_3
# 221 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER
# 222 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER
# 223 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_MAUVILLE_CITY_WALLY
# 224 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_MAUVILLE_CITY_WALLYS_UNCLE
# 225 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY
# 226 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_RUSTURF_TUNNEL_WANDAS_BOYFRIEND
# 227 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_SS_TIDAL_CORRIDOR_SCOTT
# 228 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_POKEBALL_CYNDAQUIL
# 229 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_POKEBALL_TOTODILE
# 230 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
# 231 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_SWABLU_DOLL
# 232 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_WALLACE
# 233 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 234 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
# 235 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_ROUTE_112_TEAM_MAGMA
# 236 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_CAVE_OF_ORIGIN_B1F_WALLACE
# 237 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNT_1_BLOCKING_ENTRANCE
# 238 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNT_2_BLOCKING_ENTRANCE
# 239 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
# 240 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_PETALBURG_GYM_WALLYS_DAD
# 241 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
# 242 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
# 243 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_ARCHIE
# 244 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAXIE
# 245 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 246 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAGMA_GRUNTS
# 247 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER
# 248 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_GRANITE_CAVE_STEVEN
# 249 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_ROUTE_128_STEVEN
# 250 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_GABBY_AND_TY
# 251 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_BATTLE_FRONTIER_RECEPTION_GATE_SCOTT
# 252 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_ROUTE_110_BIRCH
# 253 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_POKEBALL_CHIKORITA
# 254 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_CAPTAIN_STERN
# 255 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_ROUTE_111_ROCK_SMASH_TIP_GUY
# 256 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_SCIENTIST
# 257 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT
# 258 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_ARCHIE
# 259 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_JAGGED_PASS_MAGMA_GUARD
# 260 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_SUBMARINE_SHADOW
# 261 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_MAGMA_HIDEOUT_4F_GROUDON_ASLEEP
# 262 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_ROUTE_119_RIVAL
# 263 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_LILYCOVE_CITY_AQUA_GRUNTS
# 264 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_MAGMA_HIDEOUT_4F_GROUDON
# 265 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS
# 266 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_SKY_PILLAR_WALLACE
# 267 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_MT_PYRE_SUMMIT_MAXIE
# 268 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_MAGMA_HIDEOUT_GRUNTS
# 269 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_VICTORY_ROAD_ENTRANCE_WALLY
# 270 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_KYOGRE
# 271 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA
# 272 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_STEVEN
# 273 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_PETALBURG_GYM_WALLY
# 274 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_STERNS_SHIPYARD_MR_BRINEY
# 275 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_LANETTES_HOUSE_LANETTE
# 276 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_TRICK_HOUSE_ENTRANCE_MAN
# 277 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_DESERT_UNDERPASS_FOSSIL
# 278 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_ROUTE_111_PLAYER_DESCENT
# 279 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_ROUTE_111_DESERT_FOSSIL
# 280 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT
# 281 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_RUSTURF_TUNNEL_BRINEY
# 282 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_RUSTURF_TUNNEL_PEEKO
# 283 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 284 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_TEAM_AQUA
# 285 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_AQUA_GRUNTS
# 286 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_AQUA_GRUNT_1
# 287 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_AQUA_GRUNT_2
# 288 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_ARCHIE
# 289 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_CAPTAIN_STERN
# 290 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_BATTLE_TOWER_OPPONENT
# 291 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 292 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_ROUTE_119_TEAM_AQUA
# 293 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 294 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_WEATHER_INSTITUTE_2F_WORKERS
# 295 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_ROUTE_116_WANDAS_BOYFRIEND
# 296 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_CONTEST_ATTENDANT_2
# 297 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH
# 298 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_ROUTE_103_BIRCH
# 299 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_ROUTE_110_TEAM_AQUA
# 300 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_ROUTE_118_GABBY_AND_TY_2
# 301 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_ROUTE_120_GABBY_AND_TY_2
# 302 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_2
# 303 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_ROUTE_118_GABBY_AND_TY_3
# 304 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
# 305 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_LILYCOVE_HARBOR_FERRY_SAILOR
# 306 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_SOUTHERN_ISLAND_EON_STONE
# 307 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_SOUTHERN_ISLAND_UNCHOSEN_EON_DUO_MON
# 308 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 309 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_ROUTE_121_TEAM_AQUA_GRUNTS
# 310 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_MT_PYRE_SUMMIT_TEAM_AQUA
# 311 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_BATTLE_TOWER_REPORTER
# 312 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_ROUTE_110_RIVAL
# 313 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_CHAMPIONS_ROOM_RIVAL
# 314 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_CHAMPIONS_ROOM_BIRCH
# 315 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_ROUTE_110_RIVAL_ON_BIKE
# 316 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_GRUNTS
# 317 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA
# 318 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
# 319 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_LAVARIDGE_TOWN_RIVAL
# 320 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_LAVARIDGE_TOWN_RIVAL_ON_BIKE
# 321 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_RUSTURF_TUNNEL_ROCK_2
# 322 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_HOUSE_2_WINGULL
# 323 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_METEOR_FALLS_TEAM_AQUA
# 324 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_METEOR_FALLS_TEAM_MAGMA
# 325 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ENTRANCE_AQUA_GRUNT
# 326 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_METEOR_FALLS_1F_1R_COZMO
# 327 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_B2F_SUBMARINE_SHADOW
# 328 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_ROUTE_128_ARCHIE
# 329 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_ROUTE_128_MAXIE
# 330 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_AQUA_GRUNTS
# 331 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_CORP_3F_EMPLOYEE
# 332 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_ROUTE_111_SECRET_POWER_MAN
# 333 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_LILYCOVE_DEPARTMENT_STORE_ROOFTOP_SALE_WOMAN
# 334 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_FAMILIAR_AQUA_GRUNT
# 335 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_ROUTE_118_STEVEN
# 336 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
# 337 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_FORTREE_CITY_KECLEON
# 338 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_ROUTE_120_KECLEON_BRIDGE
# 339 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_LILYCOVE_CITY_RIVAL
# 340 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_ROUTE_120_STEVEN
# 341 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_STEVEN
# 342 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_B1F_ELECTRODE_1
# 343 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_B1F_ELECTRODE_2
# 344 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 345 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_ROUTE_120_KECLEON_BRIDGE_SHADOW
# 346 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_ROUTE_120_KECLEON_1
# 347 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_RUSTURF_TUNNEL_WANDA
# 348 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_ROUTE_120_KECLEON_2
# 349 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_ROUTE_120_KECLEON_3
# 350 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_ROUTE_120_KECLEON_4
# 351 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_ROUTE_120_KECLEON_5
# 352 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_ROUTE_119_KECLEON_1
# 353 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_ROUTE_119_KECLEON_2
# 354 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_ROUTE_101_BOY
# 355 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_WEATHER_INSTITUTE_2F_AQUA_GRUNT_M
# 356 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_LILYCOVE_POKEMON_CENTER_CONTEST_LADY_MON
# 357 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_SCOTT
# 358 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_RAYQUAZA
# 359 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_KYOGRE
# 360 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_GROUDON
# 361 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_POKEMON_SCHOOL_SCOTT
# 364 "data/scripts/introduction.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 365 "data/scripts/introduction.pory"
	setflag FLAG_DEFEATED_DEWFORD_GYM
# 366 "data/scripts/introduction.pory"
	setflag FLAG_DEFEATED_MAUVILLE_GYM
# 367 "data/scripts/introduction.pory"
	setflag FLAG_DEFEATED_LAVARIDGE_GYM
# 368 "data/scripts/introduction.pory"
	setflag FLAG_DEFEATED_PETALBURG_GYM
# 369 "data/scripts/introduction.pory"
	setflag FLAG_DEFEATED_FORTREE_GYM
# 370 "data/scripts/introduction.pory"
	setflag FLAG_DEFEATED_MOSSDEEP_GYM
# 371 "data/scripts/introduction.pory"
	setflag FLAG_DEFEATED_SOOTOPOLIS_GYM
# 374 "data/scripts/introduction.pory"
	setflag FLAG_SYS_POKEMON_GET
# 375 "data/scripts/introduction.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 376 "data/scripts/introduction.pory"
	setflag FLAG_SYS_POKENAV_GET
# 377 "data/scripts/introduction.pory"
	setflag FLAG_SYS_GAME_CLEAR
# 378 "data/scripts/introduction.pory"
	setflag FLAG_BADGE01_GET
# 379 "data/scripts/introduction.pory"
	setflag FLAG_BADGE02_GET
# 380 "data/scripts/introduction.pory"
	setflag FLAG_BADGE03_GET
# 381 "data/scripts/introduction.pory"
	setflag FLAG_BADGE04_GET
# 382 "data/scripts/introduction.pory"
	setflag FLAG_BADGE05_GET
# 383 "data/scripts/introduction.pory"
	setflag FLAG_BADGE06_GET
# 384 "data/scripts/introduction.pory"
	setflag FLAG_BADGE07_GET
# 385 "data/scripts/introduction.pory"
	setflag FLAG_BADGE08_GET
# 386 "data/scripts/introduction.pory"
	setflag FLAG_BADGE08_GET
# 389 "data/scripts/introduction.pory"
	setflag FLAG_VISITED_LITTLEROOT_TOWN
# 390 "data/scripts/introduction.pory"
	setflag FLAG_VISITED_OLDALE_TOWN
# 391 "data/scripts/introduction.pory"
	setflag FLAG_VISITED_DEWFORD_TOWN
# 392 "data/scripts/introduction.pory"
	setflag FLAG_VISITED_LAVARIDGE_TOWN
# 393 "data/scripts/introduction.pory"
	setflag FLAG_VISITED_FALLARBOR_TOWN
# 394 "data/scripts/introduction.pory"
	setflag FLAG_VISITED_VERDANTURF_TOWN
# 395 "data/scripts/introduction.pory"
	setflag FLAG_VISITED_PACIFIDLOG_TOWN
# 396 "data/scripts/introduction.pory"
	setflag FLAG_VISITED_PETALBURG_CITY
# 397 "data/scripts/introduction.pory"
	setflag FLAG_VISITED_SLATEPORT_CITY
# 398 "data/scripts/introduction.pory"
	setflag FLAG_VISITED_MAUVILLE_CITY
# 399 "data/scripts/introduction.pory"
	setflag FLAG_VISITED_RUSTBORO_CITY
# 400 "data/scripts/introduction.pory"
	setflag FLAG_VISITED_FORTREE_CITY
# 401 "data/scripts/introduction.pory"
	setflag FLAG_VISITED_LILYCOVE_CITY
# 402 "data/scripts/introduction.pory"
	setflag FLAG_VISITED_MOSSDEEP_CITY
# 403 "data/scripts/introduction.pory"
	setflag FLAG_VISITED_SOOTOPOLIS_CITY
# 404 "data/scripts/introduction.pory"
	setflag FLAG_VISITED_EVER_GRANDE_CITY
# 407 "data/scripts/introduction.pory"
	setflag FLAG_IS_CHAMPION
# 408 "data/scripts/introduction.pory"
	setflag FLAG_SYS_TV_HOME
# 409 "data/scripts/introduction.pory"
	setflag FLAG_SYS_TV_WATCH
# 410 "data/scripts/introduction.pory"
	setflag FLAG_SYS_TV_START
# 411 "data/scripts/introduction.pory"
	setflag FLAG_SYS_CLOCK_SET
# 412 "data/scripts/introduction.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 413 "data/scripts/introduction.pory"
	setflag FLAG_SYS_RIBBON_GET
# 416 "data/scripts/introduction.pory"
	setflag FLAG_LANDMARK_MR_BRINEY_HOUSE
# 417 "data/scripts/introduction.pory"
	setflag FLAG_LANDMARK_WINSTRATE_FAMILY
# 418 "data/scripts/introduction.pory"
	setflag FLAG_LANDMARK_GLASS_WORKSHOP
# 419 "data/scripts/introduction.pory"
	setflag FLAG_LANDMARK_LANETTES_HOUSE
# 420 "data/scripts/introduction.pory"
	setflag FLAG_LANDMARK_SEAFLOOR_CAVERN
# 421 "data/scripts/introduction.pory"
	setflag FLAG_LANDMARK_BATTLE_FRONTIER
# 422 "data/scripts/introduction.pory"
	setflag FLAG_LANDMARK_FIERY_PATH
# 423 "data/scripts/introduction.pory"
	setflag FLAG_LANDMARK_POKEMON_LEAGUE
# 424 "data/scripts/introduction.pory"
	setflag FLAG_LANDMARK_TUNNELERS_REST_HOUSE
# 425 "data/scripts/introduction.pory"
	setflag FLAG_LANDMARK_BERRY_MASTERS_HOUSE
# 426 "data/scripts/introduction.pory"
	setflag FLAG_LANDMARK_SKY_PILLAR
# 429 "data/scripts/introduction.pory"
	setflag FLAG_SYS_FRONTIER_PASS
# 430 "data/scripts/introduction.pory"
	setflag FLAG_SYS_SHOAL_ITEM
# 431 "data/scripts/introduction.pory"
	setflag FLAG_SYS_B_DASH
# 434 "data/scripts/introduction.pory"
	setflag FLAG_ARRIVED_ON_FARAWAY_ISLAND
# 435 "data/scripts/introduction.pory"
	setflag FLAG_LANDMARK_TRAINER_HILL
# 436 "data/scripts/introduction.pory"
	setflag FLAG_BATTLE_FRONTIER_ALLOW_ZMOVE
# 439 "data/scripts/introduction.pory"
	setflag FLAG_BATTLE_FRONTIER_GENERATOR
# 440 "data/scripts/introduction.pory"
	setflag FLAG_BATTLE_FRONTIER_ALLOW_MEGA
# 441 "data/scripts/introduction.pory"
	setflag FLAG_BATTLE_FRONTIER_ALLOW_ZMOVE
# 442 "data/scripts/introduction.pory"
	setflag FLAG_BATTLE_FRONTIER_ALLOW_TERA
# 443 "data/scripts/introduction.pory"
	setflag FLAG_BATTLE_FRONTIER_ALLOW_GMAX
# 444 "data/scripts/introduction.pory"
	setflag FLAG_BATTLE_FRONTIER_GENERATOR
# 447 "data/scripts/introduction.pory"
	setvar VAR_BIRCH_STATE, 4
# 448 "data/scripts/introduction.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 4
# 449 "data/scripts/introduction.pory"
	setvar VAR_OLDALE_TOWN_STATE, 1
# 450 "data/scripts/introduction.pory"
	setvar VAR_LAVARIDGE_TOWN_STATE, 2
# 451 "data/scripts/introduction.pory"
	setvar VAR_PETALBURG_CITY_STATE, 5
# 452 "data/scripts/introduction.pory"
	setvar VAR_SLATEPORT_CITY_STATE, 2
# 453 "data/scripts/introduction.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 454 "data/scripts/introduction.pory"
	setvar VAR_MOSSDEEP_CITY_STATE, 3
# 455 "data/scripts/introduction.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 6
# 456 "data/scripts/introduction.pory"
	setvar VAR_ROUTE101_STATE, 3
# 457 "data/scripts/introduction.pory"
	setvar VAR_ROUTE104_STATE, 2
# 458 "data/scripts/introduction.pory"
	setvar VAR_ROUTE110_STATE, 1
# 459 "data/scripts/introduction.pory"
	setvar VAR_ROUTE116_STATE, 2
# 460 "data/scripts/introduction.pory"
	setvar VAR_ROUTE118_STATE, 1
# 461 "data/scripts/introduction.pory"
	setvar VAR_ROUTE119_STATE, 1
# 462 "data/scripts/introduction.pory"
	setvar VAR_ROUTE121_STATE, 1
# 463 "data/scripts/introduction.pory"
	setvar VAR_ROUTE128_STATE, 2
# 464 "data/scripts/introduction.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 5
# 465 "data/scripts/introduction.pory"
	setvar VAR_BIRCH_LAB_STATE, 5
# 466 "data/scripts/introduction.pory"
	setvar VAR_PETALBURG_GYM_STATE, 7
# 467 "data/scripts/introduction.pory"
	setvar VAR_SECRET_BASE_INITIALIZED, 1
# 468 "data/scripts/introduction.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 5
# 469 "data/scripts/introduction.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 4
# 470 "data/scripts/introduction.pory"
	setvar VAR_BOARD_BRINEY_BOAT_STATE, 2
# 471 "data/scripts/introduction.pory"
	setvar VAR_DEVON_CORP_3F_STATE, 1
# 472 "data/scripts/introduction.pory"
	setvar VAR_BRINEY_HOUSE_STATE, 1
# 473 "data/scripts/introduction.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 7
# 474 "data/scripts/introduction.pory"
	setvar VAR_LILYCOVE_FAN_CLUB_STATE, 1
# 475 "data/scripts/introduction.pory"
	setvar VAR_PETALBURG_WOODS_STATE, 1
# 476 "data/scripts/introduction.pory"
	setvar VAR_RUSTURF_TUNNEL_STATE, 6
# 477 "data/scripts/introduction.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STAIR_GUARD_STATE, 2
# 478 "data/scripts/introduction.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 3
# 479 "data/scripts/introduction.pory"
	setvar VAR_SLATEPORT_HARBOR_STATE, 2
# 480 "data/scripts/introduction.pory"
	setvar VAR_SEAFLOOR_CAVERN_STATE, 1
# 481 "data/scripts/introduction.pory"
	setvar VAR_WEATHER_INSTITUTE_STATE, 2
# 482 "data/scripts/introduction.pory"
	setvar VAR_SS_TIDAL_STATE, 8
# 483 "data/scripts/introduction.pory"
	setvar VAR_MT_PYRE_STATE, 2
# 484 "data/scripts/introduction.pory"
	setvar VAR_NEW_MAUVILLE_STATE, 2
# 485 "data/scripts/introduction.pory"
	setvar VAR_GLASS_WORKSHOP_STATE, 2
# 486 "data/scripts/introduction.pory"
	setvar VAR_METEOR_FALLS_STATE, 2
# 487 "data/scripts/introduction.pory"
	setvar VAR_VICTORY_ROAD_1F_STATE, 2
# 488 "data/scripts/introduction.pory"
	setvar VAR_STEVENS_HOUSE_STATE, 2
# 489 "data/scripts/introduction.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 490 "data/scripts/introduction.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 491 "data/scripts/introduction.pory"
	setvar VAR_JAGGED_PASS_STATE, 2
# 492 "data/scripts/introduction.pory"
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 1
# 493 "data/scripts/introduction.pory"
	setvar VAR_SKY_PILLAR_STATE, 3
# 494 "data/scripts/introduction.pory"
	setvar VAR_FOSSIL_MANIAC_STATE, 1
# 495 "data/scripts/introduction.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 2
# 496 "data/scripts/introduction.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, 1
# 497 "data/scripts/introduction.pory"
	setvar VAR_HAS_ENTERED_BATTLE_FRONTIER, 1
# 498 "data/scripts/introduction.pory"
	setvar VAR_SCOTT_STATE, 6
# 499 "data/scripts/introduction.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
# 500 "data/scripts/introduction.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3
# 501 "data/scripts/introduction.pory"
	setvar VAR_SS_TIDAL_SCOTT_STATE, 1
# 502 "data/scripts/introduction.pory"
	setvar VAR_ROAMER_POKEMON, 1
# 503 "data/scripts/introduction.pory"
	setvar VAR_SKY_PILLAR_RAYQUAZA_CRY_DONE, 1
# 504 "data/scripts/introduction.pory"
	setvar VAR_SOOTOPOLIS_WALLACE_STATE, 1
# 505 "data/scripts/introduction.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 2
# 508 "data/scripts/introduction.pory"
	setvar VAR_WALLY_CALL_STEP_COUNTER, 250
# 509 "data/scripts/introduction.pory"
	setvar VAR_SCOTT_FORTREE_CALL_STEP_COUNTER, 10
# 510 "data/scripts/introduction.pory"
	setvar VAR_ROXANNE_CALL_STEP_COUNTER, 250
# 511 "data/scripts/introduction.pory"
	setvar VAR_SCOTT_BF_CALL_STEP_COUNTER, 10
# 512 "data/scripts/introduction.pory"
	setvar VAR_RIVAL_RAYQUAZA_CALL_STEP_COUNTER, 250
# 515 "data/scripts/introduction.pory"
	special EnableNationalPokedex
# 518 "data/scripts/introduction.pory"
	setvar VAR_FRONTIER_METHOD, 4
# 521 "data/scripts/introduction.pory"
	giveitem ITEM_SS_TICKET
# 524 "data/scripts/introduction.pory"
	addmoney 500000
# 526 "data/scripts/introduction.pory"
	givemon SPECIES_TALONFLAME, 50
# 527 "data/scripts/introduction.pory"
	givemon SPECIES_SWAMPERT, 50
# 529 "data/scripts/introduction.pory"
	goto Introduction_EventScript_SetupSandboxModeComplete
	return

Introduction_EventScript_SetupSandboxMode_2:
# 43 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 44 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_SIBLING
# 45 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_BRENDAN
# 46 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 47 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_MOM
# 48 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_SWABLU_DOLL
# 49 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 52 "data/scripts/introduction.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MOM
	goto Introduction_EventScript_SetupSandboxMode_1


Introduction_EventScript_SetupSandboxModeComplete::
# 533 "data/scripts/introduction.pory"
	msgbox Introduction_EventScript_SetupSandboxModeComplete_Text_0
# 535 "data/scripts/introduction.pory"
	msgbox Introduction_EventScript_SetupSandboxModeComplete_Text_1
# 536 "data/scripts/introduction.pory"
	msgbox Introduction_EventScript_SetupSandboxModeComplete_Text_2
# 537 "data/scripts/introduction.pory"
	msgbox Introduction_EventScript_SetupSandboxModeComplete_Text_3
# 539 "data/scripts/introduction.pory"
	msgbox Introduction_EventScript_SetupSandboxModeComplete_Text_4
# 540 "data/scripts/introduction.pory"
	msgbox Introduction_EventScript_SetupSandboxModeComplete_Text_5
# 541 "data/scripts/introduction.pory"
	msgbox Introduction_EventScript_SetupSandboxModeComplete_Text_6
# 543 "data/scripts/introduction.pory"
	playse SE_M_FLY
# 546 "data/scripts/introduction.pory"
	warpwhitefade MAP_BATTLE_FRONTIER_OUTSIDE_WEST, 13
	return


Introduction_EventScript_Startup_Text_0:
# 9 "data/scripts/introduction.pory"
	.string "Welcome to Emerald Battle Revolution!$"

Introduction_EventScript_Startup_Text_1:
# 10 "data/scripts/introduction.pory"
	.string "Created by Damon Murdoch\n(Twitter: SirScrubbington)$"

Introduction_EventScript_Startup_Text_2:
# 11 "data/scripts/introduction.pory"
	.string "Based on RHHideout's\n"
	.string "PokeEmerald-Expanded Project$"

Introduction_EventScript_Startup_Text_3:
# 12 "data/scripts/introduction.pory"
	.string "Current Version: 1.6.2$"

Introduction_EventScript_Startup_Text_4:
# 13 "data/scripts/introduction.pory"
	.string "For more information, please visit our\n"
	.string "website:\l"
	.string "https://www.dragapult.xyz?ebr$"

Introduction_EventScript_AskSandboxMode_Text_0:
# 18 "data/scripts/introduction.pory"
	.string "Would you like to start the game in\n"
	.string "sandbox mode? The game will be started\l"
	.string "at the Battle Frontier, with the game\l"
	.string "completed up until after the Elite Four.$"

Introduction_EventScript_AskSandboxMode_Text_1:
# 19 "data/scripts/introduction.pory"
	.string "You will be given ¥500,000 to start, as\n"
	.string "well as a Swampert and Talonflame for\l"
	.string "using important HMs.$"

Introduction_EventScript_AskSandboxMode_Text_2:
# 20 "data/scripts/introduction.pory"
	.string "All key items except for the SS Ticket\n"
	.string "will be available for purchase in the\l"
	.string "Battle Frontier Underground.$"

Introduction_EventScript_AskSandboxMode_Text_3:
# 21 "data/scripts/introduction.pory"
	.string "Please note, the Sandbox Mode feature\n"
	.string "is still being developed - you may\l"
	.string "encounter some minor issues while\l"
	.string "playing.$"

Introduction_EventScript_AskSandboxMode_Text_4:
# 22 "data/scripts/introduction.pory"
	.string "Would you like to start the game in\n"
	.string "sandbox mode?$"

Introduction_EventScript_AskSandboxMode_Text_5:
# 25 "data/scripts/introduction.pory"
	.string "Sandbox mode selected. Configuring ...$"

Introduction_EventScript_AskSandboxMode_Text_6:
# 29 "data/scripts/introduction.pory"
	.string "The game will be played normally. Enjoy!$"

Introduction_EventScript_SetupSandboxModeComplete_Text_0:
# 533 "data/scripts/introduction.pory"
	.string "All done!$"

Introduction_EventScript_SetupSandboxModeComplete_Text_1:
# 535 "data/scripts/introduction.pory"
	.string "If you want to customise your Battle\n"
	.string "Frontier Experience, speak to the\l"
	.string "clerks near the counter at any of the\l"
	.string "Battle Facilities - They can help you\l"
	.string "change music, opponent team\l"
	.string "generation, allowed Pokemon formes, and\l"
	.string "more!$"

Introduction_EventScript_SetupSandboxModeComplete_Text_2:
# 536 "data/scripts/introduction.pory"
	.string "Mega Evolutions, Gigantamax Formes,\n"
	.string "and Z-Moves will all be allowed by\l"
	.string "default - But you may choose to turn\l"
	.string "them off manually.$"

Introduction_EventScript_SetupSandboxModeComplete_Text_3:
# 537 "data/scripts/introduction.pory"
	.string "You will also face new,\n"
	.string "randomly-generated Pokemon in the\l"
	.string "Battle Frontier by default - However,\l"
	.string "you may swap back to the original\l"
	.string "Battle Frontier sets at any time.$"

Introduction_EventScript_SetupSandboxModeComplete_Text_4:
# 539 "data/scripts/introduction.pory"
	.string "If you aren't sure where to start,\n"
	.string "consider heading right to the all-new\l"
	.string "BATTLE FRONTIER UNDERGROUND where\l"
	.string "you can put together your own team to\l"
	.string "battle with, or buy a pre-made team\l"
	.string "from the BATTLE SPOT LOBBY!$"

Introduction_EventScript_SetupSandboxModeComplete_Text_5:
# 540 "data/scripts/introduction.pory"
	.string "Otherwise, you can head left to the\n"
	.string "BATTLE FACTORY to get right into the\l"
	.string "action!$"

Introduction_EventScript_SetupSandboxModeComplete_Text_6:
# 541 "data/scripts/introduction.pory"
	.string "Good luck on your new adventure!$"
