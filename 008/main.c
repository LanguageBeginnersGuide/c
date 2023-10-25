#include <stdio.h>
#include <malloc.h>
#include "person.h"

int main(void)
{
    Person *persons[5];

    // ×
    for (size_t i = 0; i < 5; i++)
    {
        persons[i] = New_Person();
    }

    for (size_t i = 0; i < 5; i++)
    {
        modify(persons[i]);
    }

    for (size_t i = 0; i < 5; i++)
    {
        printf("\nage:%d\n", persons[i]->age);
    }
}