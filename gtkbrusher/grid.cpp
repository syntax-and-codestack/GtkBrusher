//grid.cpp programmed by hunter manko
#define MAX_GRID_SIZE

//stipple
const char * ss_grid_stipple[32]{
 "0", "64", "128",
 "-128", "-64", "0",
 "1024", "-1024", "560",
 "-560", "2048", "-2048"
};

const char * ss_grid_stipple_print[3]{
 "x::%f", "y::%f", "z::%f"
};