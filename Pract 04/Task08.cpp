#include <iostream>

int main()
{
    //Task8
    int numb;
    std::cin >> numb;
    int second_max = 0, max = 0, chislo;
    for (int i = 0; i < numb; i++)
    {
        std::cin >> chislo;
        if (i == 0)
            max = chislo;
        else
        {

            if (max < chislo)
            {
                second_max = max;
                max = chislo;
            }
            else if (chislo < max && second_max < chislo)
                second_max = chislo;
        }
    }
    std::cout << "max = " << max << " second_max = " << second_max;
}