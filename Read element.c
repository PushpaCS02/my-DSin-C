#include<stdio.h>
int main(){
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    int index;
    printf("Enter index:");
    scanf("%d",&index);
    if(index>=0 && index<n){
    int val=index;
    printf("%d %d",a[index],val);
    }
    else{
        printf("Invalied index");
    }
    return 0;
}
