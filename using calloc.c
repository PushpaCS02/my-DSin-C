
#include <stdio.h>
#include <stdlib.h>

int main() {

   
    int *arr = (int *)calloc(4,sizeof(int)); 
    for(int i=0;i<4;i++) {
    printf("%d", arr[i]);
    }
                             
    return 0;
}
