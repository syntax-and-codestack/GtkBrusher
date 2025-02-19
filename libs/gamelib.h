//gamelib.h programmed by hunter manko
#ifndef GAMELIB_H
#define GAMELIB_H

class GameLibPak{
public:
 GameLibPak();
 
 int g_pGameId;

 enum{
    HalfLife,
    HalfLifeII,
    CounterStrikeSource,
    TitanFall,
    TitanFallII,
    Quake,
    QuakeII,
    QuakeIIIArena,
    Doom,
    CallOfDutyModernWarfare09,
    Portal,
    SolderofFortune,
    AliensVsPredatorII
 }GamePak;

};

#endif