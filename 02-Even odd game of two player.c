#include<stdio.h>
int main(){

    int n;
    //logic for taking input
    scanf("%d",&n);

    //logic for output
    if(n%2==1){
        printf("The first player wins\n");
    }else{
        printf("The second player wins\n");
    }


    return 0;

}
