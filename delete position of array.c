#include <stdio.h>
#define CAP 10

int main() {
    int a[CAP] = {1, 2, 3, 4, 5};
    int n = 5;
    int pos=2;
    for(int i = pos - 1; i < n - 1; i++) {
        a[i] = a[i + 1];  
    }
    n--;
    if(pos < 1 || pos > n) {
        printf("Invalid position\n");
    }
    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
