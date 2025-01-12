#include <iostream>
 
constexpr unsigned short MAX_SIZE = 128;
 
void getMatrix(int matrix[][MAX_SIZE], size_t dimmension) 
{ 
    for (size_t i = 0; i < dimmension; i++) 
    {
        for (size_t j = 0; j < dimmension; j++) 
        {
            std::cin >> matrix[i][j];
        }
    }
}
 
void printMatrix(const int matrix[][MAX_SIZE], size_t dimmension)
{
    for (size_t i = 0; i < dimmension; i++) {
        for (size_t j = 0; j < dimmension; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }
}

bool isTriangleMatrix(const int matrix[][MAX_SIZE], size_t dimmension)
{
    for(int i=1;i<dimmension;i++)
    {
        for(int j=0;j<i;j++)
        {
           if(matrix[i][j]!=0)
           {
            return false;
           }
        }
    }
    return true;
}

int main()
{
    int matrix[MAX_SIZE][MAX_SIZE];
 
    size_t dimmension;
 
    std::cin >> dimmension;
 
    getMatrix(matrix, dimmension);
 
    std::cout << std::boolalpha << isTriangleMatrix(matrix,dimmension);
}
 
 