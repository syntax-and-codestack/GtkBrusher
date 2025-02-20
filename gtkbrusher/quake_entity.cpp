//quake_entity.cpp programmed by hunter manko

#include "eclass.h"
#include "quake_entity.h"

#define QUAKE_TYPE 000

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
void Reinterpret_QuakeAddress(){ quake_entity_t * quake; reinterpret_cast<quake_entity_t*>(quake);};

//quake entity type
int QuakeEntity_Type(quake_entity_t * quake, const char * type, eclass * edef){
if(quake->entity_class == edef->actor){
  efind.data() == edef->actor;
}

if( quake->entity_class == edef->worldspawn ){
  efind.data() == edef->worldspawn;
}

if( quake->entity_class == edef->scriptbrush ){
  efind.data() == edef->scriptbrush;
}

if( quake->entity_class == edef->scriptmodel ){
  efind.data() == edef->scriptmodel;
}

switch( quake->quakentid ){
  case 14:
   edef->actor;
  break;

  if( quake->quakentid = 14){
    return 14;
  }

  case 24:
   edef->scriptmodel;
  break;

  if( quake->quakentid = 24){
    return 24;
  }

  case 34:
   edef->scriptbrush;
  break;
  
  if( quake->quakentid = 34 ){
    return 34;
  }
}
return QUAKE_TYPE;
};

//quake entity isn't an actor
void Quake_NullEntDefModule(quake_entity_t * quake, eclass * entity){
 if( quake->entity_class != entity->actor ){
  static_cast<int>(*QuakeEntityName(quake));//make static entity
 }
return Quake_NullEntDefModule( quake, entity );
};

//model format *quake actor model*
const char * QuakeActor_Extension(){
 return ".mdl";
};

//free quake entity
quake_entity_t * QuakeFree_Entity(){
 free( QuakeFree_Entity( ) );
};
