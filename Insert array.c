#include<stdio.h>
#define CAP 100
int main(){
    int a[CAP]={1,8,4,5,2};
    int n=5;
    int v=22;
    if(n<CAP)
    {
        a[n]=v;
        n++;
    }else{
        printf("Array is full");
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
