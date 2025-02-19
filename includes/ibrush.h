//ibrush.h programmed by hunter manko
#ifndef IBRUSH_H
#define IBRUSH_H

typedef struct IBrush{

enum{
 eQuakeBrush = 0x0,
 eQuakeIIBrush = 0x1,
 eQuakeIIIArenaBrush = 0x2,
 eHalfLifeBrush = 0x3,
 eHalfLifeIIBrush = 0x4,
 eCounterStrikeSourceBrush = 0x5,
 eTitanFallBrush = 0x6,
 eTitanFallIIBrush = 0x7,
 eDoomBrush = 0x8,
 eCoDMWIIBrush = 0x9,
 ePortalBrush = 0x10,
 eSolderOfFortuneBrush = 0x11,
 eAliensVsPredatorII = 0x12
}eBrushType;

};

typedef void ( *PFN_BRUSH )( int I_BRUSH_ID );

#endif