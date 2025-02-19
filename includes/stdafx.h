//stdafx.programmed by syntax-and-codestacks

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