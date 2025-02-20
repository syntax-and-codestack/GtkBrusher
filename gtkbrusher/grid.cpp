//grid.cpp programmed by hunter manko
#define MAX_GRID_SIZE

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

int id;