//quake_entity.h programmed by hunter manko
#ifndef QUAKE_ENTITY_H
#define QUAKE_ENTITY_H

#include "stdafx.h"

class quake_entity_t{
public:
 quake_entity_t();
  ~quake_entity_t();

 int quakentid;

 vec3 transform;
 vec3 position;

 virtual void SpawnEntity(quake_entity_t * entity, int quakeType, int spawnflags) = 0;

 quake_entity_t * EntityPosition(float x, float y, float z){
  x = position[0];
  y = position[1];
  z = position[2];
 };

 quake_entity_t * AllocQuakeEntity();
 quake_entity_t * CreateEntity();

};

#endif