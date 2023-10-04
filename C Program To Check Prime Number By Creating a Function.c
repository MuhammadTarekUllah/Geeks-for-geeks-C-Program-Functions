#include <stdio.h>
int primenumberchecker(int input2);
int main(){
    int input1;
    printf("Enter any number: ");
    scanf("%d",&input1);
    int result=primenumberchecker(input1);
    if(result==0)
        printf("%d isn't a prime number.",input1);
    else
        printf("%d is a prime number.",input1);

    }
int primenumberchecker(int input2){
    if(input2==0||input2==1)
              return 0;
    for(int i=2;i<input2;i++){


            if(input2%i==0)
            return 0;}
            }
