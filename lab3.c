#include <stdio.h>
#include <locale.h>

#define AN 2.54
#define IS 2.32166
#define ST 2.7076

void task1() {
    int num, num2;

    puts("введите число");
    scanf("%d", &num);

    printf("Введено число %d\n", num);

    puts("введите второе число");
    scanf("%d", &num2);

    printf("Сумма: %d\n", num + num2);
    printf("Разность: %d\n", num2 - num);
    printf("Произведение: %d\n", num * num2);
    printf("Частное: %d\n", num2 / num);
    printf("Остаток от деления: %d\n\n", num2 % num);
}

void task2() {
    int dym;
    float result;

    puts("Введите значение для расчета:");
    scanf("%d", &dym);

    result = AN * dym;
    printf("%d дюймов – это %.2f см\n", dym, result);

    result = IS * dym;
    printf("%d исп. дюймов – это %.2f см\n", dym, result);

    result = ST * dym;
    printf("%d старолитов. дюймов – это %.2f см\n\n", dym, result);
}

void task3() {
    float a, b;

    puts("Введите число a:");
    scanf("%f", &a);
    puts("Введите число b:");
    scanf("%f", &b);

    printf("___________________| a * b | a + b | a - b |\n");
    printf("-------------------|-------|-------|-------|\n");
    printf("-------------------| %5.1f | %5.1f | %5.1f |\n", a, b, a);
    printf("-------------------|-------|-------|-------|\n");
    printf("-------------------| %5.1f | %5.1f | %5.1f |\n\n", a * b, a + b, a - b);
}

int main() {
    setlocale(LC_ALL, ".UTF8");

    task1();
    task2();
    task3();

    return 0;
}
