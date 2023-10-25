#include <stdio.h>
#include <malloc.h>
#include "person.h"

int main(void)
{
    Person persons[5];

    Person *p;

    p = persons;

    for (p = persons; p < persons + 4; p++)
    {
        p->age = 17;
    }

    for (p = persons; p < persons + 4; p++)
    {
        printf("\nage:%d\n", p->age);
    }
}