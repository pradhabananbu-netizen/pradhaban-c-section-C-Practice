#include<stdio.h>
int subtract(int x,int y){
    printf("%d\n",x-y);
    printf("%d",x==y);
 }
 int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    subtract(a,b);
 }
