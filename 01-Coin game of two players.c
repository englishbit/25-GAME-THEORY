#include<stdio.h>
int main(){
    //logic for taking input
    int n;
    scanf("%d",&n);

    //logic for output
    if(n%3==0){
        printf("The second player wins\n");
    }else{
        printf("The first player wins\n");
    }



    return 0;
}