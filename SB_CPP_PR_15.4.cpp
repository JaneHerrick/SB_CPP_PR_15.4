#include <iostream>
using namespace std;

enum numbers  // ������������ ���� �����. even - ������, odd - ��������
{
    odd,
    even
};

void FindOddAndEven(numbers type, int limit)  // limit - ���������� ������������� ������ �����
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
    FindOddAndEven(even, 20);   // ����� ����� odd � even, � ������ �����

    return 0;
}

