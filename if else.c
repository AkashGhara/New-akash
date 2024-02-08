#include<stdio.h>
int main(){
    int math, science;

    printf("Enter the marks of math\n(1 for pass and 0 for fail):\n");
    scanf("%d",&math);

    printf("Enter the marks of science\n(1 for pass and 0 for fail):\n");
    scanf("%d",&science);

    if(math&&science){
        printf("You won 45 rupees");
    }
    else{
        printf("You won 15 rupees");
    }
    return 0;
}