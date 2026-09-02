#include <stdio.h>
int main()
{
    int rollnum;
    float per;
    char grade;

    printf("\n Enter Student Roll Number:");
    scanf("%d", &rollnum);
    printf("\n Enter Student Percentage:");
    scanf("%f", &per);
    printf("\n Enter Student Grade:");
    scanf(" %c", &grade);

    printf("\n-----Student Information-----");
    printf("\n Roll Number is: %d", rollnum);
    printf("\n Percentage is: %f", per);
    printf("\n Grade is: %c", grade);

    return 0;
}