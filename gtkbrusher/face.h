//face.h programmed by hunter manko
#include "stdafx.h"

#define FACE_DETAIL 000x800

qboolean planes_winded();

face_t * alloc_face(face_t * face);
face_t * Planes_MakeFace(plane_t * pln1, plane_t * pln2, face_t * face);
face_t * face_texture(face_t * face, qboolean split_tex_fit, const char * pTextureName);
face_t * Face_MakeVectors(vec3 fcevecs, plane_t * p1, plane_t * p2);

class FaceTool{
public:
 FaceTool();
  ~FaceTool();
FaceTool& FaceEdit_Tool();
void FaceTranslate();
void FaceRotate();
void FaceScale();
};

