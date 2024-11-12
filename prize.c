#include <stdio.h>
int main(){
    int S;
    printf("Enter the number of subkects you have passed");
    scanf("%d",&S);
    if(S==2){
        printf("you will get 45 rs");
        
    }
    else if (S==1){

        printf("you will get 15 rs");
    }
    else{
        printf("you will get 0 rs");
    }
 return 0;
}