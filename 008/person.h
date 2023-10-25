typedef struct Person
{
    int age;
} Person;

Person *New_Person();

void modify(Person *persons);
void make_a(Person person);
void make_b(Person *person);