#include <iostream>
using namespace std;

enum numbers  // Перечисление типа чисел. even - четные, odd - нечетные
{
    odd,
    even
};

void FindOddAndEven(numbers type, int limit)  // limit - переменная устанавливает предел цикла
{
    switch (type)
    {
    case odd:

        for (int odd = 1; odd < limit; odd += 2)
        {
            cout << odd << endl;
        }
        break;
    case even:
        for (int even = 0; even < limit; even += 2)
        {
            cout << even << endl;
        }
        break;
    default:
        break;
    }
}


int main()
{
    FindOddAndEven(even, 20);   // выбор между odd и even, и предел цикла

    return 0;
}

