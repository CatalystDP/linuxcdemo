//
// Created by dp on 16-2-9.
//

#include "tty_handler.h"
#include <stdexcept>
#include <map>
#include <string>
void ttyHandler(uv_stream_t* stream,ssize_t nread, const uv_buf_t* buf){
    std::cout<<"number to read "<<nread<<std::endl;
    std::cout<<"content "<<buf->base<<std::endl;
    printSelection();
}
void printSelection(){
    std::cout<<"what do you want?"<<std::endl;
    std::map<int,std::string>& selection=*(new std::map<int,std::string>());
    selection[0]="Open account";
    selection[1]=""
}