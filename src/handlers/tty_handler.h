//
// Created by dp on 16-2-9.
//

#ifndef LINUXC_TTY_HANDLER_H
#define LINUXC_TTY_HANDLER_H

#include "uv.h"
#include <iostream>
void ttyHandler(uv_stream_t*,ssize_t, const uv_buf_t*);
void printSelection();
#endif //LINUXC_TTY_HANDLER_H
