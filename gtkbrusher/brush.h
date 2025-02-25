//brush.h programmed by hunter manko
#include "stdafx.h"

extern int bnumberid;

brush_t * BrushHighlight(brush_t * b);
brush_t * AddBrushToList(brush_t * blst);
brush_t * FilterBrush(brush_t * b);
brush_t * AllocBrush(brush_t * b);
brush_t * CreateBrush(brush_t * b, vec3 mins, vec3 maxs);
brush_t * Brush_Name(brush_t * b);
brush_t * BufferBrush(brush_t * brush);

void brush_free(brush_t * brush);

const char * BrushName(brush_t * b);

brush_t * BrushEpairLst(brush_t * b);

qboolean SelectBrush(brush_t * b);
qboolean HighlightBrush(brush_t *b);

std::size_t BrushSet(brush_t * b);
std::size_t BrushSize();

void PrintBrush();
void PrintPlane();
void PrintFace();
void PrintVecs();

brush_t * BrushMake_Face( brush_t * b );

const char * BrushSet_Epair(brush_t * b, const char * key, const char * value);