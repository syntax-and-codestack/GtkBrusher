
#include "brush.h"
#include "Filter.h"
#include "stdafx.h"

filter * filter_ptr;
int f_pFilterId = 0;

#define FILTER_PAGEFLIPS 2

#define FILTER_BRUSH 000
#define FILTER_ENTITY 001

#define FILTER_CLIP 002
#define FILTER_CLIP_MONSTER 003
#define FILTER_CLIP_PLAYER 004
#define FILTER_CAULK 005
#define FILTER_NODRAW 006
#define FILTER_PORTAL 007
#define FILTER_TRIGGER 008
#define FILTER_VOLUME 009
#define FILTER_LIGHTGRID 010
#define FILTER_SKYBOX 011
#define FILTER_LADDER 012
#define FILTER_SKIP 013
#define FILTER_HINT 014
#define CLIP_TERRIAN 015

#define FILTER_MODEL 016

#define FILTER_CHCKBOX 017

filter ** filter_prev(){ filter * f = filter_ptr--; };
filter ** filter_next(){ filter * f = filter_ptr++; };
filter ** filter_current(){ filter * f = filter_ptr; };

//filter brush_t
qboolean FilterBrushClient(brush_t * b){
 brush_t * brush( brush_t*clientsnapf );
 reinterpret_cast<brush_t*>( b = brush( b ));
  if( FilterBrushClient( b ) ){
    b == NULL && FilterBrushClient( b );
  }
};


