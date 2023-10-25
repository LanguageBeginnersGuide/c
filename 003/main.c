#include <stdio.h>
#include <math.h>

// 传值
void modify_a(int age)
{
    // 作用域在本函数内，外部不变化。
    age = 78;
}

// 传指针
void modify_b(int *age)
{
    // 外部变化
    *age = 18;
}

// 传值
int age_add_one(int a)
{
    // 返回给外部一个函数内部的值
    return a + 1;
}

void print_age(int age)
{
    printf("\nage:%d\n", age);
}

int main(void)
{
    int age = 100;
    print_age(age);

    age = age_add_one(age);
    print_age(age);

    modify_a(age);
    print_age(age);

    modify_b(&age);
    print_age(age);
}