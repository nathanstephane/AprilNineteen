//
// Created by Nathan on 4/19/2022.
//

#include "Apply.h"
#include <stdio.h>

void* apply(void* in, int nElts, int eltSize, void (*f) (void*, void*), void* out){
void *end = in+ eltSize*nElts;
    while (in != end){
        f(in,out);
        in+=eltSize;
        out+=eltSize;
    }
}

