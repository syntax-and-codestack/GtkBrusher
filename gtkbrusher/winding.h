//winding.h
#include "stdafx.h"

int windnumberid;
winding_t * windinglst( winding_t * winding );
qboolean winding_concave(winding_t * winding);
winding_t * windingpoint(int point);
winding_t * alloc_winding();

void windplanes( winding_t * winding, plane_t * plane );
void WindingMake_Face(winding_t * w);

qboolean * BeginWinding(brush_t * b, winding_t * w, plane_t * p);

winding_t *size(winding_t* winding, std::size_t windingsize);

