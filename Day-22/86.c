#include <stdio.h>

struct Student
{
    int roll;
    float marks;
    char grade;
};

union Result
{
    int roll;
    float marks;
    char grade;
};

int main()
{
    printf("Size of Structure = %lu bytes\n",
           sizeof(struct Student));

    printf("Size of Union = %lu bytes\n",
           sizeof(union Result));

    return 0;
}