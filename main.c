#include <stdio.h>
#include <locale.h>

int main()
{
    int workplaceNumberA, workplaceNumberB;

    int condition;

    setlocale(LC_CTYPE, "RUS");

    // Сообщаем пользователю, что делает программа

    printf("=== СИСТЕМА КОФЕ МАШИНЫ ===\n");

    printf("Введите два целых числа (номер рабочего места Анны и Бориса): ");

    // Считываем два кода, введенные пользователем

    scanf("%d %d", &workplaceNumberA, &workplaceNumberB);


    // Вычисляем сложное логическое условие
    // 1. Проверяем, что только один код чётный: 
    //    (workplaceNumberA четный И workplaceNumberB нечетный) ИЛИ (workplaceNumberA нечетный И workplaceNumberB четный)
    // 2. Объединяем два условия с помощью логического ИЛИ

    condition = ((workplaceNumberA % 2 == 0 && workplaceNumberB % 2 != 0) ||
        (workplaceNumberA % 2 != 0 && workplaceNumberB % 2 == 0));

    // Выводим результат

    printf("Доступ разрешен (1 - да, 0 - нет): %d\n", condition);

    return 0;
}