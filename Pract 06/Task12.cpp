#include <iostream>

//Task12
void writeArray(int arr[], unsigned int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
}

void printCompositionOfRelations(int R[], int Q[], unsigned int size)
{
    std::cout << "{";
    for (int i = 0, j = i + 1; j < size; i += 2, j += 2)
    {
        for (int k = 0, l = k + 1; l < size; k += 2, l += 2)
        {
            if (R[j] == Q[k])
                std::cout << "(" << R[i] << "," << Q[l] << ")" << " ";
        }
    }
    std::cout << "}";
}

int main()
{
    //Task12
    unsigned int size;
    do
    {
        std::cin >> size;
    } while (size > 100 && size % 2 != 0);

    int R[100] = { 0 };
    writeArray(R, size);
    int Q[100] = { 0 };
    writeArray(Q, size);
    printCompositionOfRelations(R, Q, size);
}