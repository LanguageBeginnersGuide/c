#include <stdio.h>
#include <malloc.h>

typedef struct Person
{
    int age;
} Person;

void modify(int *age)
{
    *age += 1;
}

int main(void)
{
    Person *tom = malloc(sizeof(Person));
    tom->age = 17;
    modify(&tom->age);
    printf("\nage:%d\n", tom->age);
}