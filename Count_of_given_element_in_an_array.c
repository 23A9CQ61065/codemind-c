#include<stdio.h>
int main(){
    int n,i,c=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        }
    int a;
    scanf("%d",&a);
    for(i=0;i<n;i++){
     if(a==arr[i]) c++;
     }
    printf("%d",c);
}