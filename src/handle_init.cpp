//
// Created by dp on 16-2-9.
//

#include "uv.h"
#include "./handle_init.h"
#include "./handlers/tty_handler.h"
extern uv_loop_t mainLoop;
uv_tty_t tty;
void allocCallback(uv_handle_t* handle,size_t suggestedSize,uv_buf_t* buf){
    buf->len=suggestedSize;
    buf->base=new char[suggestedSize];

}
void handleInit(){
    uv_tty_init(&mainLoop,&tty,0,1);
    printSelection();
    uv_read_start((uv_stream_t*)&tty, allocCallback,ttyHandler);
}
