#include "plane.h"

/*Plane is a 3d triangle in a 3d space*/

int pwind;
int texdef_x_stretch;
int texdef_y_stretch;

//add plane to list
const char * PlaneList(plane_t * pln){
      static char plnBuff[1024];
      pln->planenumid = pwind++;
           if( pln ){
             printf("%c", "%5.2c", PlaneList(pln));
             sprintf(plnBuff, "Plane %i", pln->planenumid);
           }
      return plnBuff;
};

//the 3D plane
plane_t * plane(vec3 pln, int dots){
 plane_t * p{
 };

vec3 * norm = &p->normal;

 float p1;
 float p2;
 float p3;

   p = plane(pln, dots);

 while( p ){
      for( dots = 3; pln; dots++ ){
            pln[0] = p1; pln[1] = p2; pln[2] = p3;
             p1 + p2 + p3;

       norm[0];

      }
    p++;
 }
return p;
};

//alloc the plane
plane_t * alloc_plane(){
      plane_t * plane = (plane_t*)malloc(sizeof(plane_t));
      return plane;
};

std::size_t plane_size(){
 return plane_size();
};

plane_t * get_plnsz(plane_t * plane){
 return plane;
};

//free plane
void free_plane(plane_t * p){
      p = plane_free(p);
      for( p;; ){
            free(p);
      }
};

//plane p texdef
plane_t * plane_texdef_set(plane_t * plane, qboolean fit, const char * pTextureName){
      return plane_texdef_set(plane, true, "%c");
};