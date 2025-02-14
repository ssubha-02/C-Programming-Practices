// C Program to Print Prime Numbers From 1 to N
#include<stdio.h>
int main(){
    int n,i,prime=1,num;
    printf("Prime numbers are:");
    printf("The number is:");
    scanf("%d",&num);
    for(i=2;i<=num;i++){
        prime=1;
        for(n=2;n<=i/2;n++){
            if(i%n==0){
                prime=0;
                break;
            }
        }
        if(prime){
            printf("%d\t",i);
        }
    }
    return 0;
}