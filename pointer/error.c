#include<stdio.h>
int main(){
    int c,*pc;
    pc=c;//pointr pc can only carry address but not variable
    *pc=&c;//*pc hold value but we are giving address(&c)
    pc=&c;
    *pc=c;
}