#include <stdio.h>
#include <malloc.h>
#include "person.h"

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