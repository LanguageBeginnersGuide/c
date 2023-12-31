#include <stdio.h>
#include <malloc.h>

typedef struct Person
{
    int age;
} Person;

void modify(Person *persons)
{
    for (size_t i = 0; i < 5; i++)
    {
        persons[i].age += 1;
    }
}

// ×
void make_a(Person person)
{
    person.age = 17;
}

// √
void make_b(Person *person)
{
    person->age = 17;
}

int main(void)
{
    Person persons[5];

    // ×
    for (size_t i = 0; i < 5; i++)
    {
        make_a(persons[i]);
    }

    modify(persons);

    for (size_t i = 0; i < 5; i++)
    {
        printf("\nage:%d\n", persons[i].age);
    }

    // √

    for (size_t i = 0; i < 5; i++)
    {
        make_b(&persons[i]);
    }

    modify(persons);

    for (size_t i = 0; i < 5; i++)
    {
        printf("\nage:%d\n", persons[i].age);
    }
}