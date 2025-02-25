//plane.h programmed by hunter manko
#ifndef PLANE_H
#define PLANE_H

#include "stdafx.h"

plane_t * alloc_plane();
std::size_t plane_size();
plane_t * get_plnsz(plane_t * plane);
plane_t * plane_texdef_set(plane_t * plane, qboolean fit, const char * pTextureName);
plane_t * plane_free(plane_t*p);
void free_plane(plane_t * plane);
plane_t * plane( vec3 * planar, int dots );
const char * PlaneList(plane_t * plane);

#endif