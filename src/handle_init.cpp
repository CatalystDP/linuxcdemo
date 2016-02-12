//
// Created by dp on 16-2-9.
//

#include "uv.h"
#include "./handle_init.h"
#include "./handlers/tty_handler.h"
#include <iostream>
extern uv_loop_t mainLoop;
uv_tty_t tty;
void allocCallback(uv_handle_t* handle,size_t suggestedSize,uv_buf_t* buf){
    buf->len=100;
    buf->base=new char[buf->len];
    std::cout<<"suggested size "<<suggestedSize<<std::endl;
}
void handleInit(){
    uv_tty_init(&mainLoop,&tty,0,1);
    uv_read_start((uv_stream_t*)&tty, allocCallback,ttyHandler);
}
