@ Changes the caught ball of a selected Pokémon
.macro setmonball ballId:req
special ChoosePartyMon
waitstate
setvar VAR_TEMP_1, \ballId
special SetMonBall
.endm
