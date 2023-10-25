#include <stdio.h>
#include <malloc.h>
#include <string.h>

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
    // Clear to zero
    memset(tom, 0, sizeof(Person));
    tom->age = 17;
    modify(tom);
    printf("\nage:%d\n", tom->age);
}