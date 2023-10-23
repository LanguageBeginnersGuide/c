#include <stdio.h>
#include <malloc.h>

typedef struct Person
{
    int age;
} Person;

void modify(Person *person)
{
    person->age += 1;
}

int main(void)
{
    Person *tom = malloc(sizeof(Person));
    tom->age = 17;
    modify(tom);
    printf("\nage:%d\n", tom->age);
}