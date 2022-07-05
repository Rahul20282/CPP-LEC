#include<stdio.h>
void main(){
    int *p,c;
    c=100;
    p=&c;
    printf("value of c=%p\t\n",p);
    printf("value of c=%d\n",c);
};