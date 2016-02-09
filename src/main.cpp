#include <iostream>
#include "uv.h"
#include "./handle_init.h"
using namespace std;
uv_loop_t mainLoop;
int main() {
    //init main loop;
    uv_loop_init(&mainLoop);
    handleInit();
    uv_run(&mainLoop,UV_RUN_DEFAULT);
    return 0;
}