#include<stdio.h>
int main(){

    //logic for taking input
    int n;
    scanf("%d",&n);

    //logic for special case
    if(n<=0){
        printf("Invalid input\n");
        return 1;
    }

    int arr[n];

    //logic for taking input
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

        //logic for special case
        if(arr[i]<0){
            printf("Invalid input\n");
            return 1;
        }
    }


    //logic for output
    int nimsum=0;
    for(int i=0;i<n;i++){
        nimsum=nimsum^arr[i];
    }

    if(nimsum!=0){
        printf("The first player wins\n");
    }else{
        printf("The second player wins\n");
    }
     


    return 0;
}
