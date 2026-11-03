
#include <stdio.h>

int main()
{
    char name[30];
    int age;
    float height;
    
    printf("Enter Your Name: ");
    scanf(" %29s", name);
    printf("Enter Your Age: ");
    scanf("%d", &age);
    printf(" Enter Your height: ");
    scanf("%f",&height);

    printf("____Student Information____");

    printf(" \nName: %s", name);
    printf(" \nAge: %d", age);
    printf(" \nHeight : %f", height);

    

    return 0;
    
}
