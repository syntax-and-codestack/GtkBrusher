//stdafx.programmed by syntax-and-codestacks

#include "qtypes.h"
#include <gtk/gtk.h>

void Sysprintf(const char * text, ...);

struct _QE_BrusherGUI_Table_{
    GtkWidget * g_pMainFrame; //main window
    GtkWidget * g_pCamWnd; //camwnd
    GtkWidget * g_pToolbar; //toolbar
    GtkMenuBar * g_pMenubar; //menubar
    GtkMenu * g_pMenu; //menu
    GtkWidget * g_pXYWnd; //xywnd
    GtkWidget * g_pYZWnd; //yzwnd
    GtkWidget * g_pXZWnd; //xzwnd
};

typedef float vec;
typedef vec vec3[3];

class plane_t{
public:
 plane_t();

 plane_t ** next;
 plane_t * prev;
 plane_t & current;

 double dist;
 int maxar[8][5];
 int points[3];
 vec3 pvec;
 vec3 normal;
};

class face_t{
public:
 face_t();

 face_t ** next;
 face_t * prev;
 face_t & current;

  vec3 fvec;
  int points[4];
};

#define MAX_BRUSH_SIZE 64 * 1024
#define MIN_BRUSH_SIZE -64 * 1024

class brush_t{
public:
 brush_t();

  vec3 maxs;
  vec3 mins;

  int g_nBrushId;

  int sides[6];

};

class winding_t{
public:
 winding_t();
  int numpoints[8][5];
};