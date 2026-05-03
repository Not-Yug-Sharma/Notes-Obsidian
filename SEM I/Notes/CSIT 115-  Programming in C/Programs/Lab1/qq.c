#include<stdio.h>
int main(){
    float m,t=0; for(int i=0;i<5;i++){scanf("%f",&m); t+=m;}
    float p=t/5;
    printf("%.2f%%\n",p);
    if(p>=80) puts("Distinction");
    else if(p>=70) puts("First");
    else if(p>=60) puts("Second");
    else if(p>=50) puts("Third");
    else puts("Fail");
}