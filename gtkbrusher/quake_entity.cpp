//quake_entity.cpp programmed by hunter manko

#include "eclass.h"
#include "quake_entity.h"

int m_mMaxQuakeId = 0;
eclass * epair;

const char * QuakeEntityName( quake_entity_t * quake ){
static char quakeBuff[1024];
m_mMaxQuakeId = quake->quakentid++;
    if( quake->Spawned( quake ) ){
        Sysprintf("%c, %5.2f, %5.2f", quake, quake->entity_class == epair->classname++);
        sprintf(quakeBuff, "Quake Entity %i", quake->quakentid);
    }
  return quakeBuff;
};

//alloc quake entity
quake_entity_t * AllocQuakeEntity(){
 quake_entity_t * entity = (quake_entity_t*)malloc(sizeof(*entity));
 return entity = AllocQuakeEntity();
};

//reinterpret quake adress
void Reinterpret_QuakeAddress(){
 quake_entity_t * quake;
 reinterpret_cast<quake_entity_t*>(quake);
};