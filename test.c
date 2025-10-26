#include<stdio.h>
int main(){
    int a=3;
    int sum=0;
    while(a<100){
            sum=sum+a;
            a=a+3;
    }
    printf("sum is  %d\n",sum);
}