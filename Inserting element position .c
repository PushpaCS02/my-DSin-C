
#include <stdio.h>
#define CAP 10

int main() {
    int a[CAP]={3,4,6,7,9};
    int n=5;
    int pos;
    int val=11;
    printf("Enter the position:");
    scanf("%d",&pos);
    for(int i= n;i>= pos;i--){
        a[i]=a[i-1];
    }
    a[pos-1]=val;
    n++;
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    
    return 0;
}
