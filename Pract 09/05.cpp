#include <iostream>
 
constexpr unsigned short MAX_SIZE = 128;
 
void getMatrix(int matrix[][MAX_SIZE], size_t rows, size_t columns)
{
    for (size_t i = 0; i < rows; i++)
     {
        for (size_t j = 0; j < columns; j++)
        {
            std::cin >> matrix[i][j];
        }
    }
}
 
void printMatrix(const int matrix[][MAX_SIZE], size_t rows, size_t columns)
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

void multiplyMatrixes(const int firstMatrix[][MAX_SIZE],const int secondMatrix[][MAX_SIZE],size_t rowsFirst,size_t rowsSecond,size_t columnsFirst,size_t columnsSecond,int multipliedMatrix[][MAX_SIZE])
{
     for(size_t i=0;i<rowsFirst;i++)
     {
         for(size_t j=0;j<columnsSecond;j++)
         {
            for(size_t l=0;l<rowsFirst;l++)
            {
                multipliedMatrix[i][j] = multipliedMatrix[i][j] + (firstMatrix[i][l]*secondMatrix[l][j]);
            }
         }
     }
     
}
 
 
int main()
{
     int firstMatrix[MAX_SIZE][MAX_SIZE];
     int secondMatrix[MAX_SIZE][MAX_SIZE];
     int multipliedMatrix[MAX_SIZE][MAX_SIZE]{0};
 
    size_t rowsFirst,rowsSecond, columnsFirst,columnsSecond;
 
    std::cin >> rowsFirst>>rowsSecond>> columnsFirst>>columnsSecond;
 
    getMatrix(firstMatrix, rowsFirst, columnsFirst);
    getMatrix(secondMatrix, rowsSecond, columnsSecond);
 
   if(columnsFirst!=rowsSecond)
   {
       std::cout<<"Multiplication is impossible";
   } else
   {
       multiplyMatrixes(firstMatrix,secondMatrix,rowsFirst,rowsSecond,columnsFirst,columnsSecond,multipliedMatrix);
       std::cout<<"\n";
       printMatrix(multipliedMatrix,rowsFirst,columnsSecond);
   }
   
  
 
}
 
 