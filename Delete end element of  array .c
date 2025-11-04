#include <stdio.h>
#define CAP 10

int main() {
    int a[CAP] = {1, 2, 3, 4, 5};
    int n = 5 ;
    if(n>0){
        n--;
    }else{
        printf("array is empty");
    }
    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\npushpa s d\n");
    printf("1SV24CS109");
    return 0;
}
