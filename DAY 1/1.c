#include<stdio.h>
int main(){

    int n,sum=0;

    printf("enter a number:");
    scanf("%d",&n);

    if(n<1){
        printf("enter a positive number");
        return 1;
    }

    for(int i=1;i<=n;i++){
        sum+=i;
    }
    printf("sum of first %d natural numbers is %d",n,sum);
    return 0;
}