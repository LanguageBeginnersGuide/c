#include <stdio.h>
#include <malloc.h>

typedef struct Person
{
    int age;
} Person;

void modify(Person *persons)
{
    for (size_t i = 0; i < sizeof(*persons) / sizeof(persons[0]); i++)
    {
        persons[i].age += 1;
    }
}

int main(void)
{
    Person *persons[5];

    for (size_t i = 0; i < sizeof(persons) / sizeof(persons[0]); i++)
    {
        persons[i] = malloc(sizeof(Person));
        persons[i]->age = 17;
    }

    modify(*persons);
    printf("\nage:%d\n", persons[0]->age);
}