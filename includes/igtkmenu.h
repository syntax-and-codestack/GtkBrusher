//igtkmenu.h programmed by hunter manko
#ifndef IGTKMENU_H
#define IGTKMENU_H

#include "stdafx.h"

#define ID_GTK_MENU_NEW_FILE 0
#define ID_GTK_MENU_OPEN_FILE 1
#define ID_GTK_MENU_SAVE_FILE 2
#define ID_GTK_MENU_EXIT_FILE 3

const char * GlobalInsert_Item(const char * item, const char * itempath);
void GlobalGtkAssert_Command(int * id, GtkMenu * menu, GtkMenuItem * item);

#endif