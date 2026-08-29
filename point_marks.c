#include <stdio.h>
int main()
{
    int math,science=0;
    printf("Enter your maths score: ");
    scanf("%d",&math);
    printf("Enter your science score: ");
    scanf("%d",&science);
    if ((math >35) && (science > 35)) {
        printf("You got Rs35");    
    }
    else if (math >35) {
        printf("You got Rs15");    
    }
    else if (science > 35) {
        printf("You got Rs15");    
    }
    return 0;
}