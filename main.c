#include <stdio.h>
#include "Apply.h"

void triple(void* param, void* res){
    *(int*)res = *(int*)param*3;
}

int main() {
    int a[]={1,4,2,8,5,7,};
    int b[6];
    apply(a,6,sizeof (int),triple,b);
    for(int i=0; i<6; i++){
        printf("%d \n",b[i]);

    }
    return 0;
    //printf("size of int is: %d ", sizeof(*a));


}

