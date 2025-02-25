//brushclipper.h programmed by hunter manko
#ifndef BRUSHCLIPPER_H
#define BRUSHCLIPPER_H

#include "stdafx.h"
#include <string>

class BrushClipper{
    public:
     BrushClipper();
      ~BrushClipper();

      BrushClipper& Clip();

      int clip_points[4];

      void ClipPoint(brush_t * brush, int point);
      void SplitBrush(brush_t * b, int points);
      void SplitFace(face_t * f, int points);
      void Clip_AddVertices(int points);
      void FreeClipper(BrushClipper * clipper);
      void CutBrush(brush_t * bnode, int points);
      void Brush_MakeClip(brush_t * brushnode);

      qboolean Brush_ClipperActive();

      BrushClipper * Brush_AllocClip();

};

void Setup_BrushClipPoint(BrushClipper * cliptool, brush_t* brush, int point){
            if(cliptool){
                cliptool->Clip().ClipPoint(brush, point);
            }
};

#endif