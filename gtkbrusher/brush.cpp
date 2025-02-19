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