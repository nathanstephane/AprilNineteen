//
// Created by Nathan on 4/19/2022.
//

#ifndef APRILNINETEEN_APPLY_H
#define APRILNINETEEN_APPLY_H
void* apply(void* in, int nElts, int eltSize, void (*f) (void*, void*), void* out);

#endif //APRILNINETEEN_APPLY_H
