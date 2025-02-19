//brush_module.cpp programmed by hunter manko
//Quake Brush Types

#include "brush.h"
#include "ibrush.h"
#include "stdafx.h"
#include "gamelib.h"

#define BRUSH_MODULE ( brush_t * ) 0x0

/*Quake Brush*/
int g_pGameQuake( brush_t * b, GameLibPak * gamedesc, IBrush * ibrush ){
    if( gamedesc->Quake ){
        ibrush->eBrushType == ibrush->eQuakeBrush;
    }
 return b->g_nBrushId == ibrush->eQuakeBrush;
};

/*Quake II Brush*/
int g_pGameQuakeII( brush_t * b, GameLibPak * gamedesc, IBrush * ibrush ){
    if( gamedesc->QuakeII ){
        ibrush->eBrushType == ibrush->eQuakeIIBrush;
    }
 return b->g_nBrushId == ibrush->eQuakeIIBrush;
};

/*Quake III Arena Brush*/
int g_pGameQuakeIIIArena( brush_t * b, GameLibPak * gamedesc, IBrush * ibrush ){
    if ( gamedesc->QuakeIIIArena ){
        ibrush->eBrushType == ibrush->eQuakeIIIArenaBrush;
    }
 return b->g_nBrushId == ibrush->eQuakeIIIArenaBrush;
}
