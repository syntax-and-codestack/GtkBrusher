//brush.h programmed by hunter manko
#include "stdafx.h"

extern int bnumberid;

brush_t * AddBrushToList(brush_t * blst);
brush_t * FilterBrush(brush_t * b);
brush_t * AllocBrush(brush_t * b);
brush_t * CreateBrush(brush_t * b, vec3 mins, vec3 maxs);

qboolean SelectBrush(brush_t * b);

const char * BrushSet_Epair(brush_t * b, const char * key, const char * value);