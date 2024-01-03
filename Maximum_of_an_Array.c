#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int a=arr[0];
    for(i=0;i<n;i++){
        if(a<arr[i]) a=arr[i];
    }
    printf("%d",a);
}