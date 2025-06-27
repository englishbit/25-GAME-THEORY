#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);

    if(n<=0){
        printf("Invalid input\n");
        return 1;
    }

    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

        if(arr[i]<0){
            printf("Invalid input\n");
            return 1;
        }
    }


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