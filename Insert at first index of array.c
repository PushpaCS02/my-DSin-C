
#include <stdio.h>
#define CAP 5

int main() {
   int a[CAP]={2,4,6};
   int n=3;
   int x=11;
   if(n<CAP){
   for(int i=n;i>0;i--){
       a[i]=a[i-1];
   }
   a[0]=x;
   n++;
   }else{
       printf("Array is full");
   }for(int i=0;i<n;i++){
       printf("%d ",a[i]);
   }
   

    return 0;
}
