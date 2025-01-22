#include <iostream>

//Task05
bool isEqualZeroAndOne(int num)
{
    int zeroCnt = 0, oneCnt = 0, digit = 0;
    while (num)
    {
        digit = num & 1;
        if (digit == 1)
            oneCnt++;
        else
            zeroCnt++;
        num = num >> 1;
    }

    return zeroCnt == oneCnt;
}

void printAllNumbersWithEqualZeroAndOne(int n)
{
    for (int i = 1; i < n; i++)
    {
        if (isEqualZeroAndOne(i))
            std::cout << i << " ";
    }
}

int main()
{
    printAllNumbersWithEqualZeroAndOne(100);
}