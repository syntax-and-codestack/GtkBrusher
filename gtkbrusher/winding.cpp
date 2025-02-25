#include "winding.h"

int g_nWindingId = 0;

//begin winding
qboolean * BeginWinding(brush_t * b, winding_t * w, plane_t * p){
                int wind;
                 if( q_eBrushPrimitMode = true ){
                    for( wind = 0; w; w->numpoints && + wind, wind++){
                        windnumberid = g_nWindingId++;
                         w->numpoints[wind][0] + w->numpoints[wind][1], p->next, 
                         w->numpoints[wind][2] + w->numpoints[wind][3], p->current;
                    }
                   Sysprintf("------Winding Started Plane------\n");
                 }
     return BeginWinding(b, w, p);
};

//alloc winding
winding_t * alloc_winding(){
        winding_t * w = (winding_t*)malloc(sizeof(*w));
        return w;
};

//winding list 
winding_t * windinglst(winding_t * winding){
        static char lstbuff[2048];
         if(BeginWinding){
             windnumberid = g_nWindingId++;
             sprintf(lstbuff, "Winding %i", windnumberid);
         }
    return winding;
}