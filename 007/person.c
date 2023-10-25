#include <stddef.h>
#include "person.h"

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
