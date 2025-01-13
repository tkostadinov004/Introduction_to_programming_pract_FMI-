#include <iostream>
 
constexpr unsigned short MAX_ROWS_AND_COLUMNS = 128;
 
void getMatrix(unsigned int matrix[][MAX_ROWS_AND_COLUMNS], size_t rows, size_t columns)
{
    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < columns; j++)
        {
            std::cin >> matrix[i][j];
        }
    }
}
 
void printMatrix(const unsigned int matrix[][MAX_ROWS_AND_COLUMNS], size_t rows, size_t columns)
{ 
    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < columns; j++)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }
 
}
 
void transposeMatrix(unsigned int matrix[][MAX_ROWS_AND_COLUMNS], size_t rows, size_t columns)
{
    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = i+1; j < columns; j++)
        {
            if (i != j)
            {
                unsigned temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
    }
}
 
int main()
{
    unsigned int matrix[MAX_ROWS_AND_COLUMNS][MAX_ROWS_AND_COLUMNS];
 
    unsigned rows, columns;
 
    std::cin >> rows >> columns;
 
    getMatrix(matrix, rows, columns);
 
    transposeMatrix(matrix, rows, columns);
 
    printMatrix(matrix, columns, rows);
 
}
 
 