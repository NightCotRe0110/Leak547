#ifndef TERRACE_OF_ENDLESS_SPRING_HPP
# define TERRACE_OF_ENDLESS_SPRING_HPP

# include "ScriptPCH.h"
#include "ScriptMgr.h"
#include "AreaTrigger.h"
#include "AreaTriggerScript.h"

enum eData
{
	DATA_PROTECTORS,
	DATA_TSULONG,
	DATA_LEI_SHI,
	DATA_SHA_OF_FEAR,
	DATA_MAX_BOSS_DATA
};

enum AchievementSpells : int
{
    SPELL_PROTECTORS_OF_THE_ENDLESS = 123900,
    SPELL_TSU_LONG                  = 123901,
    SPELL_LEI_SHI                   = 123903,
};

enum eSpells
{
    SPELL_RITUAL_OF_PURIFICATION    = 126848,
    SPELL_NIGHT_PHASE_EFFECT        = 122841,
};

enum eActions
{
    ACTION_START_TSULONG_WAYPOINT   = 1,
    ACTION_INTRO_FINISHED           = 2,
    ACTION_SHOW_LEI_SHI             = 30,
    ACTION_ACTIVATE_SHA_OF_FEAR     = 31,
    ACTION_SHA_OF_FEAR_STOP_ATTACK  = 32
};

enum eCreatures
{
    // Protectors of the Endless
    NPC_ANCIENT_ASANI               = 60586,
    NPC_ANCIENT_REGAIL              = 60585,
    NPC_PROTECTOR_KAOLAN            = 60583,
    NPC_DEFILED_GROUND              = 60906,
    NPC_COALESCED_CORRUPTION        = 60886,
    NPC_MINION_OF_FEAR_CONTROLLER   = 60957,
    NPC_MINION_OF_FEAR              = 60885,

    // Tsulong
    NPC_TSULONG                     = 62442,

    // Lei Shi
    NPC_LEI_SHI                     = 62983,
    NPC_ANIMATED_PROTECTOR          = 62995,
    NPC_LEI_SHI_HIDDEN              = 63099,

    // Sha of Fear
    NPC_SHA_OF_FEAR                 = 60999,
    NPC_PURE_LIGHT_TERRACE          = 60788,
    NPC_TERROR_SPAWN                = 61034,
    NPC_YANG_GUOSHI                 = 61038,
    NPC_CHENG_KANG                  = 61042,
    NPC_JINLUN_KUN                  = 61046,
    NPC_RETURN_TO_THE_TERRACE       = 65736,
    NPC_SHA_GLOBE                   = 65691,
    NPC_WATERSPOUT                  = 63823,
    NPC_DREAD_SPAWN                 = 61003,
    NPC_TRAVEL_TO_DREAD_EXPANSE     = 61735,
    NPC_RETURN_FROM_DREAD_EXPANSE   = 61746,

    // Thrashs
    NPC_APPARITION_OF_FEAR          = 64368,
    NPC_APPARITION_OF_TERROR        = 66100,
    NPC_NIGHT_TERRORS               = 64390,
    NPC_NIGHT_TERROR_SUMMON         = 64393
};

enum eGameObjects
{
    GOB_WALL_OF_COUNCILS_VORTEX = 214854,
    GOB_COUNCILS_VORTEX         = 214853,

    CACHE_OF_TSULONG_10_NM      = 215355,
    CACHE_OF_TSULONG_25_NM      = 215356,
    CACHE_OF_TSULONG_10_HM      = 215357,
    CACHE_OF_TSULONG_25_HM      = 212922,

    GOB_WALL_OF_LEI_SHI         = 214852,
    GOB_LEI_SHIS_VORTEX         = 214851,
    GOB_LEI_SHI_CHEST_NORMAL_10 = 213073,
    GOB_LEI_SHI_CHEST_NORMAL_25 = 213074,
    GOB_LEI_SHI_CHEST_HEROIC_10 = 213075,
    GOB_LEI_SHI_CHEST_HEROIC_25 = 213076
};

enum ePhases
{
};

enum eWeapons
{
};

enum eEvents
{
};

enum eTypes
{
    INTRO_DONE
};

enum eTimers
{
	TIMER_TSULONG_SPAWN	= 10000,
};

enum eAchievements
{
    // Wing
    ACHIEVEMENT_TERRACE            = 6689,
    // Heroic
    ACHIEVEMENT_HEROIC_PROTECTORS  = 6731,
    ACHIEVEMENT_HEROIC_TSULONG     = 6732,
    ACHIEVEMENT_HEROIC_LEI_SHI     = 6733,
    ACHIEVEMENT_HEROIC_SHA_OF_FEAR = 6734,
   // Specific
    // @Todo
    ACHIEVEMENT_FACE_CLUTCHERS     = 6824, // Lei Shi: Kill boss with all players affected by Parasitic Clutch - Need NPC 64346...
    ACHIEVEMENT_POWER_OVERWHELMING = 6717, // Protectors: Kill boss with each protector as last member alive
    ACHIEVEMENT_THE_MIND_KILLER    = 6825  // Sha: Kill boss without having any member feared by Dread Spray or Breath of Fear
};

#endif