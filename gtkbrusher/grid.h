//grid.h programmed by hunter manko
#define MAX_GRID_SIZE

#include "stdafx.h"

//grid dimesion stipples
const char * ss_grid_stipple[32]{
 "0", "64", "128",
 "256", "432", "880",
 "1024", "2056", "3028",
 "0", "-64", "-128",
 "-256", "-432", "-880",
 "-1024", "-2056", "-3028"
};

const char * ss_grid_stipple_print[3]{
 "x::%f", "y::%f", "z::%f"
};

static unsigned ss_stipple[32]{
 //regular grid stipple       dotted grid stipple          lined grid stipple
 ss_stipple[0] = 'XXX000AAA', ss_stipple[1] = 'AAA000XXX', ss_stipple[2] = '000A85H'
};

//grid menu stipples *items*
const char * grid_menu_stipple[6]{
 "Grid 8/n", "Grid 64/n",
 "Grid 16/n", "Grid 128/n",
 "Grid 32/n", "Grid 164/n"
};

//snap to grid label for menu
const char * grid_snap_label = "snap to grid/n";

//grid view labels
const char * grid_view_label[3]{
 "XY", 
 "YZ",
 "XZ"
};

//grid sizes
enum{
  GRID_8 = 0x8,
  GRID_16 = 0x16,
  GRID_32 = 0x32,
  GRID_64 = 0x64,
  GRID_128 = 0x128,
  GRID_164 = 0x164
}grid_power_size;

int g_nGridPower;

void DrawBrush();
void DrawEntity();
void DrawPoint( int point );

int GridBackground_Color();

void Grid_Set();

qboolean Enable_Snap();

enum{
    XY = 0x0,
    YZ = 0x1,
    XZ = 0x2
}GridView;

int g_nSetGridView;

void Zoom();

qboolean ZoomIn();
qboolean ZoomOut();

qboolean g_nDrawBrush();
qboolean g_nDrawEntity();
qboolean g_nDragBrush();

int g_nGridPen;
int g_nGlGridLineColor;
int g_nGlGridBlockColor;
int g_nGlGridTextColor;

GtkWidget * g_pMainView_SetViews(GtkWidget * xy, GtkWidget * yz, GtkWidget * xz);
