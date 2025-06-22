#include "global.h"
#include "pokemon.h"
#include "event_data.h"

#include "constants/battle_frontier.h"

#include "test/test.h"
#include "test/battle.h"

#include "config/battle_frontier_generator.h"
#include "battle_frontier_generator.h"

// Battle Frontier Generator is configured
#if BFG_FLAG_FRONTIER_GENERATOR != 0

#if BFG_TEST_SET_GENERATION == TRUE

bool8 TestRandomPokemonGenerator(struct Pokemon * mon, u16 speciesId, u8 level, u8 lvlMode, u8 fixedIV, bool8 allowForme, u8 battleMode)
{
    // Store original battle mode
    u8 oldBattleMode = VarGet(VAR_FRONTIER_BATTLE_MODE);

    // Use provided battle mode
    VarSet(VAR_FRONTIER_BATTLE_MODE, battleMode);

    DebugPrintf("Battle Mode: %d", battleMode);

    struct GeneratorProperties properties;
    InitGeneratorProperties(&properties, level, fixedIV);
    InitGeneratorForLvlMode(&properties, lvlMode);

    properties.allowForme = allowForme;

    // Generate thee trainer Pokemon with the test species, properties
    bool8 success = GenerateTrainerPokemonHandleForme(mon, speciesId, &properties);
    EXPECT_EQ(success,TRUE);

    if (success)
    {
        // Get the held item
        u16 items[] = {GetMonData(mon, MON_DATA_HELD_ITEM)};

        // No held item
        if (items[0] == ITEM_NONE) {
            // Get new held item
            items[0]  = GetSpeciesItem(mon, items, 1);

            // Update the held item
            SetMonData(mon, MON_DATA_HELD_ITEM, &(items[0]));
        }

        #if BFG_TEST_PRINT_RESULTS
        DebugPrintMonData(mon);
        #endif

        // Level should match provided
        EXPECT_EQ(GetMonData(mon, MON_DATA_LEVEL), level);

        // HP, Def, SpDtk, SpDef EVs should match 'fixedIV'
        EXPECT_EQ(GetMonData(mon, MON_DATA_HP_IV), fixedIV);
        EXPECT_EQ(GetMonData(mon, MON_DATA_DEF_IV), fixedIV);
        EXPECT_EQ(GetMonData(mon, MON_DATA_SPATK_IV), fixedIV);
        EXPECT_EQ(GetMonData(mon, MON_DATA_SPDEF_IV), fixedIV);

        #if BFG_OPTIMIZE_IVS
        // Optimised IVs
        u8 nature = GetNature(mon);
        // Attack stat should be 0, if reducing
        if ((gNatureInfo[nature].negStat == STAT_ATK) || (!HasPhysicalMove(mon)))
            EXPECT_EQ(GetMonData(mon, MON_DATA_ATK_IV), 0);
        else 
            EXPECT_EQ(GetMonData(mon, MON_DATA_ATK_IV), fixedIV);
        
        // Speed stat should be 0, if reducing
        if (gNatureInfo[nature].negStat == STAT_SPEED)
            EXPECT_EQ(GetMonData(mon, MON_DATA_SPEED_IV), 0);
        else
            EXPECT_EQ(GetMonData(mon, MON_DATA_SPEED_IV), fixedIV);
        #else 
        // Standard IVs
        EXPECT_EQ(GetMonData(mon, MON_DATA_ATK_IV), fixedIV);
        EXPECT_EQ(GetMonData(mon, MON_DATA_SPEED_IV), fixedIV);
        #endif
    }

    // Reset to original battle mode
    VarSet(VAR_FRONTIER_BATTLE_MODE, oldBattleMode);

    return success;
}

// Worker Macro
#define BFG_TEST(text,s,l,m,i,f,t) TEST(text){struct Pokemon mon; for(u8 n=0; n<1; n++){TestRandomPokemonGenerator(&mon,s,l,m,i,f,t);}}

// Standard

BFG_TEST("Generate Random Incineroar (D,LVL50,31IV)",SPECIES_INCINEROAR, 50, FRONTIER_LVL_50, 31, FALSE, FRONTIER_MODE_DOUBLES);
BFG_TEST("Generate Random Amoonguss (D,LVL50,31IV)",SPECIES_AMOONGUSS, 50, FRONTIER_LVL_50, 31, FALSE, FRONTIER_MODE_DOUBLES);
BFG_TEST("Generate Random Clefairy (D,LVL50,31IV)",SPECIES_CLEFAIRY, 50, FRONTIER_LVL_50, 31, FALSE, FRONTIER_MODE_DOUBLES);

// Legendaries

BFG_TEST("Generate Random Cresselia (D,LVL50,31IV)",SPECIES_CRESSELIA, 50, FRONTIER_LVL_50, 31, FALSE, FRONTIER_MODE_DOUBLES);
BFG_TEST("Generate Random Chien-Pao (D,LVL50,31IV)",SPECIES_CHIEN_PAO, 50, FRONTIER_LVL_50, 31, FALSE, FRONTIER_MODE_DOUBLES);
BFG_TEST("Generate Random Ogerpon (D,LVL50,31IV)",SPECIES_OGERPON, 50, FRONTIER_LVL_50, 31, FALSE, FRONTIER_MODE_DOUBLES);

// Forme Changes

BFG_TEST("Generate Random Zamazenta (D,LVL50,31IV)",SPECIES_ZAMAZENTA, 50, FRONTIER_LVL_50, 31, TRUE, FRONTIER_MODE_DOUBLES);
BFG_TEST("Generate Random Zacian (D,LVL50,31IV)",SPECIES_ZACIAN, 50, FRONTIER_LVL_50, 31, TRUE, FRONTIER_MODE_DOUBLES);

BFG_TEST("Generate Random Ogerpon (Any) (D,LVL50,31IV)",SPECIES_OGERPON, 50, FRONTIER_LVL_50, 31, TRUE, FRONTIER_MODE_DOUBLES);
BFG_TEST("Generate Random Ludicolo (Any) (D,LVL50,31IV)",SPECIES_LUDICOLO, 50, FRONTIER_LVL_50, 31, FALSE, FRONTIER_MODE_DOUBLES);
BFG_TEST("Generate Random Flutter Mane (Any) (D,LVL50,31IV)",SPECIES_FLUTTER_MANE, 50, FRONTIER_LVL_50, 31, FALSE, FRONTIER_MODE_DOUBLES);
BFG_TEST("Generate Random Iron Hands (Any) (D,LVL50,31IV)",SPECIES_IRON_HANDS, 50, FRONTIER_LVL_50, 31, FALSE, FRONTIER_MODE_DOUBLES);
BFG_TEST("Generate Random Chi-Yu (Any) (D,LVL50,31IV)",SPECIES_CHI_YU, 50, FRONTIER_LVL_50, 31, FALSE, FRONTIER_MODE_DOUBLES);
BFG_TEST("Generate Random Landorus-Therian (Any) (D,LVL50,31IV)",SPECIES_LANDORUS_THERIAN, 50, FRONTIER_LVL_50, 31, FALSE, FRONTIER_MODE_DOUBLES);

#endif // BFG_TEST_SET_GENERATION == TRUE

#endif // BFG_FLAG_FRONTIER_GENERATOR != 0