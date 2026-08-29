#include <stdio.h>
int main()
{
    int age=0;
    printf("Enter your age:");
    scanf("%d",&age);
    printf(" You have entered %d as your age\n",age);
    if(age>=18){
        printf("you can vote");
    }
    else if (age>12) {
        printf("You're teenager you can't vote");
    
    }
    else{
        printf("You cannot vote");
    }
    return 0;
}
