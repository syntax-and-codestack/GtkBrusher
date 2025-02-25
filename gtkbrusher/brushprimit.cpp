//brushprimit.cpp programmed by hunter manko
#include "stdafx.h"
#include <string>

class BrushClipper{
    public:
     BrushClipper();
      ~BrushClipper();

      BrushClipper& Clip();

      void ClipPoint( brush_t * brush, int point );


};

void Setup_BrushClipPoint(BrushClipper * cliptool, brush_t* brush, int point){
            if(cliptool){
                cliptool->Clip().ClipPoint(brush, point);
            }
};