#include<stdio.h>
int main(){
    int n,i,sum=0,c=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int flag=0;
    for(i=0;i<n;i++){
        if(arr[i]%2!=0&&i%2!=1){ 
            flag=1; break;}
    }
        if(flag==0)printf("True");
        else printf("False");
}