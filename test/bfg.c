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

// Set fixed random number generators

#if BFG_TEST_FIXED_RNG == TRUE
#ifndef BFG_RANDOM_RANGE_FIXED
#define BFG_RANDOM_RANGE_FIXED FALSE
#define UNDEF_BFG_RANDOM_RANGE_FIXED
#endif 

#ifndef BFG_RANDOM_CHANCE_FIXED
#define BFG_RANDOM_CHANCE_FIXED FALSE
#define UNDEF_BFG_RANDOM_CHANCE_FIXED
#endif 

#ifndef BFG_RANDOM_BOOL_FIXED
#define BFG_RANDOM_BOOL_FIXED FALSE
#define UNDEF_BFG_RANDOM_BOOL_FIXED
#endif 
#endif // BFG_TEST_FIXED_RNG == TRUE

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
/*
// Allocate remaining items
for(i=0; i < monCount; i++)
{
    if (((items[i]) == ITEM_NONE) && (!(RANDOM_CHANCE(BFG_NO_ITEM_SELECTION_CHANCE))))
    {
        items[i] = GetSpeciesItem(&gEnemyParty[i + firstMonId], items, PARTY_SIZE);
        SetMonData(&gEnemyParty[i + firstMonId], MON_DATA_HELD_ITEM, &(items[i]));
    }
}
*/
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

        // Get the forme id for the generated mon
        u16 formeId = GetMonData(mon, MON_DATA_SPECIES);

        // Get the base species for the forme
        u16 baseSpeciesId = GET_BASE_SPECIES_ID(formeId);

        // Base species should match species
        EXPECT_EQ(baseSpeciesId, speciesId);

        // No forme change allowed
        if (allowForme == FALSE) 
            // Forme should match species
            EXPECT_EQ(formeId, speciesId);

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
        if (gNatureInfo[nature].negStat == STAT_ATK)
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

TEST("Generate Random Ogerpon (Lvl. 50, 31 IVs)")
{
    struct Pokemon mon;
    TestRandomPokemonGenerator(&mon, SPECIES_OGERPON, 50, FRONTIER_LVL_50, 31, FALSE, FRONTIER_MODE_DOUBLES);
    // TODO: Test has spiky shield, ivy cudgel
}

TEST("Generate Random Chien-Pao (Lvl. 50, 31 IVs)")
{
    struct Pokemon mon;
    TestRandomPokemonGenerator(&mon, SPECIES_CHIEN_PAO, 50, FRONTIER_LVL_50, 31, FALSE, FRONTIER_MODE_DOUBLES);
}

TEST("Generate Random Cresselia (Lvl. 50, 31 IVs)")
{
    struct Pokemon mon;
    TestRandomPokemonGenerator(&mon, SPECIES_CRESSELIA, 50, FRONTIER_LVL_50, 31, FALSE, FRONTIER_MODE_DOUBLES);
}

// Cleanup modified defines

#if BFG_TEST_FIXED_RNG == TRUE
#ifdef UNDEF_BFG_RANDOM_RANGE_FIXED
#undef BFG_RANDOM_RANGE_FIXED
#undef UNDEF_BFG_RANDOM_RANGE_FIXED
#endif 

#ifdef UNDEF_BFG_RANDOM_CHANCE_FIXED
#undef BFG_RANDOM_CHANCE_FIXED
#undef UNDEF_BFG_RANDOM_CHANCE_FIXED
#endif 

#ifdef UNDEF_BFG_RANDOM_BOOL_FIXED
#undef BFG_RANDOM_BOOL_FIXED
#undef UNDEF_BFG_RANDOM_BOOL_FIXED
#endif 
#endif // BFG_TEST_FIXED_RNG == TRUE

#endif // BFG_TEST_SET_GENERATION == TRUE

#endif // BFG_FLAG_FRONTIER_GENERATOR != 0