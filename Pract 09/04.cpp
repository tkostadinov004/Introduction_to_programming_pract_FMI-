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
 
void transposeMatrix(unsigned int matrix[][MAX_ROWS_AND_COLUMNS],unsigned int transposedMatrix[][MAX_ROWS_AND_COLUMNS], size_t rows, size_t columns)
 {
    for (size_t i = 0; i < rows; i++)
     {
        for (size_t j = i; j < columns; j++)
         {
            if (i != j) 
            {
                unsigned temp = matrix[i][j];
                transposedMatrix[i][j] = matrix[j][i];
                transposedMatrix[j][i] = temp;
            } 
            else
            {
                 transposedMatrix[i][j] = matrix[i][j];
            }
        }
    }
}

bool isMatrixEqualToTranspose(unsigned int matrix[][MAX_ROWS_AND_COLUMNS],unsigned int transposedMatrix[][MAX_ROWS_AND_COLUMNS], size_t rows, size_t columns)
{          
     for (size_t i = 0; i < rows; i++)
      {
        for (size_t j = i; j < columns; j++)
         {
            if(matrix[i][j] != transposedMatrix[i][j])
            {
                return false;
            }
        }
     }
    
    return true;
}
 
int main()
{
    unsigned int matrix[MAX_ROWS_AND_COLUMNS][MAX_ROWS_AND_COLUMNS];
    unsigned int transposedMatrix[MAX_ROWS_AND_COLUMNS][MAX_ROWS_AND_COLUMNS];
 
    unsigned rows, columns;
 
    std::cin >> rows >> columns;
 
    getMatrix(matrix, rows, columns);
 
    transposeMatrix(matrix,transposedMatrix, rows, columns);
 
    std::cout<<std::boolalpha<<isMatrixEqualToTranspose(matrix,transposedMatrix,rows,columns); 
 
}
 
 