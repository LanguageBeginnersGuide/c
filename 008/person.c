#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "person.h"

void modify(Person *person)
{
    person->age += 1;
    person->name = "tom";
}

Person *New_Person()
{
    Person *person = malloc(sizeof(Person));
    // Clear to zero
    memset(person, 0, sizeof(Person));
    return person;
}