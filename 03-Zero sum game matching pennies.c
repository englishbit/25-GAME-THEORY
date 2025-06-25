#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    //logic for special case
    if(n<0){
        printf("Invalid input\n");
        return -1;
    }


    char a,b;

    printf("Enter H or T:\n");
    for(int i=0;i<n;i++){

        //taking input
        scanf(" %c %c",&a,&b);


        //logic for special case
        if((a!='H' && a!='T')||(b!='H' && b!='T')){
            printf("Invalid input\n");
            i--;
            continue;

        }



        //logic for output
        if(a==b)printf("The first player wins at round %d\n",i+1);
        else printf("The second player wins at round %d\n",i+1);



    }


    return 0;
}