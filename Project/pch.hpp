#ifndef PCH_H
#define PCH_H

#include <vector>
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <fmod.hpp>
#include <windowsx.h>
#include "AEEngine.h"
#include "Systems.hpp"
#include "Input.hpp"
#include "GameStateList.hpp"
#include "GameStateManager.hpp"
#include "Menu.hpp"
#include "Characters.hpp"
#include "Tutorial.hpp"
#include "Combat.hpp"
#include "Maze.hpp"
#include "Credits.hpp"
#include "gameover.hpp"
#include "LevelUp.hpp"
#include "victoryscreen.hpp"
#include "AudioManager.h"


#define GRID_NUM 5;

#define DT (f32)AEFrameRateControllerGetFrameTime();

extern s8 fontId;
extern s8 fontLarge;

extern Maze_Struct* Maze;

extern int maze_init_flag;
extern int curr_X_GRIDposition;
extern int curr_Y_GRIDposition;
extern s32 cursorx, cursory;

extern player_statsheet* playerstats;
extern enemy_statsheet* enemystats;
extern inv* playerinventory;
extern sys systemsettings;
extern bool is_focused;
extern GameObjInst* ParticleInstList;

extern float bgm_volume;					//JN: new code
extern float sfx_volume;					//JN: new code
extern float sfx_volume_max;
extern float bgm_volume_max;

void initialise_pausemenu();
void LogicExit_Confirmation();
void RenderExit_Confirmation();
void logicpausemenu();
void renderpausemenu();
void unloadpausemenu();
void initialise_optionmenu();
void logicoptionmenu();
void renderoptionmenu();
void unloadoptionmenu();
void player_initialise();
void enemy_initialise();
GameObjInst* particleInstCreate(float scale, float posX, float posY, int type);
void particleInstDestroy(GameObjInst* pInst);

enum consumables { HEALTH, STAMINA, DEFENCE };
enum EnemyPos { IDLE, ATTACKING };
enum ENEMY_TYPE { NORMAL, ICE, FIRE, ENEMYBOSS };
enum PlayerPos { ORIGIN, TOP, BACK, DOWN, ATTACK };
enum PlayerStatus { NEUTRAL, FROSTED, FROZEN, BURNING };
enum ParticleTypes {particlePLAYER, particleENEMY, particleENEMYFROST, particleENEMYFIRE};


#endif	//PCH.H

