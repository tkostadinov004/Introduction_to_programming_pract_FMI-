#include <iostream>

int main()
{
    //Task5
    int numb;
    std::cin >> numb;
    int min = 0, max = 0, chislo;
    double sum;
    for (int i = 0; i < numb; i++)
    {
        std::cin >> chislo;
        if (i == 0)
        {
            min = chislo;
            max = chislo;
            sum = chislo;
        }
        else
        {
            if (min > chislo)
                min = chislo;

            if (max < chislo)
                max = chislo;

            sum += chislo;
        }
    }
    std::cout << "min = " << min << " max = " << max << " avg = " << sum / numb;
}