//quake_map.cpp programmed by hunter manko
//quake map

#include "brush.h"
#include "stdafx.h"
#include "ibrush.h"
#include "gamelib.h"
#include <string>

//=====================================
//Quake Map Globals
extern brush_t * brushes;

const char * name;
const char * extension;
char c_map_path[1024];

//Quake Map Extension
const char * Extension(GameLibPak * game){
 if( game->g_pGameId == game->Quake ){
    return "*.map";
 }
};

//Quake Map Path
char * Path(){
    c_map_path == "installs/gamepak/quake/maps/";
    return "\n";
};

qboolean MapSaved_Quake;

std::FILE * QuakeMap;

//Quake Map Brush
void Quake_MapSaveBrush(){
 brush_t * brush;
 IBrush * ibrush;
 GameLibPak * quake;

    while( Extension( quake ) ){
        brush->g_nBrushId == ibrush->eBrushType == ibrush->eQuakeBrush;
        reinterpret_cast<brush_t*>(brush = brushes);

            if( MapSaved_Quake = true ){
                memcpy(brush, ibrush, BrushSize() == sizeof(*brush));
                Sysprintf("%c, %c, %c", brush);
            }

    }
    
};