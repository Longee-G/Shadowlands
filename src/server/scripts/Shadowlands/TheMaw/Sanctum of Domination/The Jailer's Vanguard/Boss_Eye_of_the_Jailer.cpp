/*
* Copyright 2021 FuzionCore Project
*
* This program is free software; you can redistribute it and/or modify it
* under the terms of the GNU General Public License as published by the
* Free Software Foundation; either version 2 of the License, or (at your
* option) any later version.
*
* This program is distributed in the hope that it will be useful, but WITHOUT
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
* FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
* more details.
*
* You should have received a copy of the GNU General Public License along
* with this program. If not, see <http://www.gnu.org/licenses/>.
*/

/* Script Data Start
SDName: 
SDAuthor: Frozen
SD%Complete: %
SDComment: still working on structure.
Script Data End */

#include "ScriptMgr.h"
#include "Player.h"
#include "Creature.h"
#include "CreatureAI.h"
#include "GameObject.h"
#include "GameObjectAI.h"
#include "AreaTrigger.h"
#include "AreaTriggerAI.h"
#include "InstanceScript.h"
#include "SpellAuras.h"
//#include "zone_the_maw.cpp"
//#include "zone_Sanctum_of_Domination.cpp"

enum NPC_Phases
{
    NPC_Phase_1,
    NPC_Phase_2,
    NPC_Phase_3,
};    

enum NPC_list
{
    NPC_Boss_Eye_of_the_Jailer = 180018,
    NPC_Deathseeker_Eye = 179942, // N mode
    NPC_Stygian_Abductor = 176521, // hc mode
    
};

enum NPC_spells
{
    Fractured_Soul = 350034,
    Annihilating_Glare = 350763,
    Desolation_Beam = 350847.
    Spreading_Misery = 350816,
    Jailers_Misery = 350808,
    Deathlink = 350828,
    Suffering = 351826,
    Slothful_Corruption = 350713,
    Titanic_Death_Gaze = 349028,
    Immediate_Extermination = 348969,
    Piercing_Lens = 350803,
    Dragging_Chains = 349979. //hc
    Assailing_Lance = 348074, //hc
};

enum NPC_loot
{
    Artifice_of_the_Archmage = 181738,
};

enum sounds
{
    MON_Crucible_Soulseeker_Attack_01_174592 = 176548.
};        
        
    
