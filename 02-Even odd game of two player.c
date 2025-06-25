#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    if(n%2==1){
        printf("The first player wins\n");
    }else{
        printf("The second player wins\n");
    }


    return 0;
}