#ifndef PIC_H
#define PIC_H



#include "type.h"



#define PIC1_COMMAND 0x20
#define PIC1_DATA    0x21
#define PIC2_COMMAND 0xA0
#define PIC2_DATA    0xA1

#define PIC_EOI 0x20 // End-of-interrupt command code


void pic_remap(int offset1, int offset2);


#endif
