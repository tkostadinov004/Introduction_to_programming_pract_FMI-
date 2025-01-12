#include<iostream>

//Task9
int digitCntInNum(int num, int digit)
{
    int cnt = 0;
    while (num)
    {
        if (num % 10 == digit)
            cnt++;
        num /= 10;
    }
    return cnt;
}

long int concatForZad9(long int sortedDesc, int cnt, int digit)
{
    for (int i = 0; i < cnt; i++)
    {
        sortedDesc = sortedDesc * 10 + digit;
    }
    return sortedDesc;
}

long int sortDesc(long int num)
{
    long int sortedDesc = 0;
    for (int i = 9; i >= 0; i--)
    {
        int cnt = digitCntInNum(num, i);
        if (cnt != 0)
            sortedDesc = concatForZad9(sortedDesc, cnt, i);
    }
    return sortedDesc;
}

int main()
{
    //Task9
    std::cout << sortDesc(463211) << std::endl;
    std::cout << sortDesc(758701732) << std::endl;
}