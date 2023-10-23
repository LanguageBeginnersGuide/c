#include <stdio.h>
#include <math.h>

void modify(int *age)
{
    *age += 1;
}

int main(void)
{
    int age = 17;
    modify(&age);
    printf("\nage:%d\n", age);
}