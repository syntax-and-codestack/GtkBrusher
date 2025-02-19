//brush.cpp programmed by hunter manko
#include "brush.h"

int g_nBrushId = 0;

//brush name
const char * BrushName(brush_t * b){
static char cBuff[1024];
bnumberid = b->g_nBrushId++;
 if(q_eBrushPrimitMode != false){
    Sysprintf("%c", BrushName, b);
    sprintf(cBuff, "Brush %i", b->g_nBrushId);
 }
return cBuff;
};

//alloc brush
brush_t * Alloc_Brush(brush_t * b){
 brush_t * brush = (brush_t*)malloc(sizeof(*b));
 return b = AllocBrush( b );
};

#include <set>

//set size
std::size_t BrushSet( brush_t * b ){
 std::set<brush_t> brush;
  if(b){
   brush.begin(), brush.end();
  }
  BrushSet( b );
};