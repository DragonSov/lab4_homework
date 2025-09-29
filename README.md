# �������� ������� � ������ 4

## ������� ������
��� ������������, ���� (A) � ����� (B), ������� �����. ����� ���� �� ��� ������, ��� ������, ��� ����� ���� ���� ������ ���� ���-�� ���� �� ��� ������ (�� ������ ������ �������� �����). �������� ������� ��� ����-������.

## 1. �������� � ����-�����

### ��������
1. **������**
2. ������ ��� ����� �����: `workplaceNumberA` � `workplaceNumberB` � ������ ������� ���� ���� � ������.
3. ��������� �������� ������� �����:
   - `workplaceNumberA % 2 == 0` � ����� ���� ������.
   - `workplaceNumberB % 2 == 0` � ����� ������ ������.
4. ��������� ������� ��� ��������� ����-������:
   - `(workplaceNumberA % 2 == 0 && workplaceNumberB % 2 != 0) || (workplaceNumberA % 2 != 0 && workplaceNumberB % 2 == 0)`
5. ���� ������� �����������, ������� `1` (��), ����� `0` (���).
6. **�����**

### ����-�����
![����-����� ���������](schema.png)

https://github.com/DragonSov/lab4_homework/blob/master/schema.png

## 2. ���������� ���������

```c
#include <stdio.h>
#include <locale.h>

int main()
{
    int workplaceNumberA, workplaceNumberB;

    int condition;

    setlocale(LC_CTYPE, "RUS");

    // �������� ������������, ��� ������ ���������

    printf("=== ������� ���� ������ ===\n");

    printf("������� ��� ����� ����� (����� �������� ����� ���� � ������): ");

    // ��������� ��� ����, ��������� �������������

    scanf("%d %d", &workplaceNumberA, &workplaceNumberB);


    // ��������� ������� ���������� �������
    // 1. ���������, ��� ������ ���� ��� ������: 
    //    (workplaceNumberA ������ � workplaceNumberB ��������) ��� (workplaceNumberA �������� � workplaceNumberB ������)
    // 2. ���������� ��� ������� � ������� ����������� ���

    condition = ((workplaceNumberA % 2 == 0 && workplaceNumberB % 2 != 0) ||
        (workplaceNumberA % 2 != 0 && workplaceNumberB % 2 == 0));

    // ������� ���������

    printf("������ �������� (1 - ��, 0 - ���): %d\n", condition);

    return 0;
}
```

## 3. ���������� ������ ���������
![���������� ������ ���������](result.png)

## 4. ���������� � ������������
����� ���������, ����-252
