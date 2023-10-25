#include <stdio.h>
#include <malloc.h>

typedef struct Person
{
    int age;
} Person;

// 值传递
void modify_a(int age)
{
    age += 1; // 函数内对age的修改并不能让外部age发生变化
}

// 传指针
void modify_b(int *age)
{
    // 修改的是内部值
    age += 1;
}

// 传指针
void modify_c(int *age)
{
    // 修改指针指向的值
    *age += 1;
}

int main(void)
{
    Person tom;
    tom.age = 17;

    // × 17
    modify_a(tom.age);
    printf("\nage:%d\n", tom.age);

    // × 17
    modify_b(&tom.age);
    printf("\nage:%d\n", tom.age);

    // √ 18
    modify_c(&tom.age);
    printf("\nage:%d\n", tom.age);
}