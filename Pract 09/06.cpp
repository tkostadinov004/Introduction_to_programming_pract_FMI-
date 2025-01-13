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
    for (size_t i = 0; i < dimmension; i++)
     {
        for (size_t j = 0; j < dimmension; j++)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }
 
}

int getSumRow(const int matrix[][MAX_SIZE],size_t dimmension,int row)
{
    int sum=0;
    for(int i=0;i<dimmension;i++)
    {
      sum+=matrix[row][i];
    }
    return sum;
}

int getSumColumn(const int matrix[][MAX_SIZE],size_t dimmension,int column)
{
    int sum=0;
    for(int i=0;i<dimmension;i++)
    {
       sum+=matrix[i][column];
    }

    return sum;
}

int getSumMainDiagonal(const int matrix[][MAX_SIZE],size_t dimmension)
{
    int sum=0;
    for(int i=0;i<dimmension;i++)
    {
       sum+=matrix[i][i];
    }
    return sum;
}

int getSumSecondDiagonal(const int matrix[][MAX_SIZE],size_t dimmension)
{
    int sum=0;
    int column = dimmension-1;

    for(int i=0;i<dimmension;i++)
    {
       sum+=matrix[i][column];
       column--;
    }

    return sum;
}

bool isSumDiagonalsEqual(const int matrix[][MAX_SIZE],size_t dimmension)
{
    return getSumMainDiagonal(matrix,dimmension) == getSumSecondDiagonal(matrix,dimmension);
}

bool isSumColsEqual(const int matrix[][MAX_SIZE],size_t dimmension)
{
   int firstSum = getSumColumn(matrix,dimmension,0);
    for(int i=1;i<dimmension;i++)
    {
      if(firstSum != getSumColumn(matrix,dimmension,i))
      {
        return false;
      }
    }

    return true;
}

bool isSumRowsEqual(const int matrix[][MAX_SIZE],size_t dimmension)
{
   int firstSum = getSumRow(matrix,dimmension,0);
    for(int i=1;i<dimmension;i++)
    {
      if(firstSum != getSumRow(matrix,dimmension,i))
      {
        return false;
      }
    }

    return true;
}

bool isSumRowsAndColsEqual(const int matrix[][MAX_SIZE],size_t dimmension)
{
    if(isSumColsEqual(matrix,dimmension) && isSumDiagonalsEqual(matrix,dimmension))
    {
        return getSumColumn(matrix,dimmension,0) == getSumRow(matrix,dimmension,0);
    }

     return false;
}


bool isMagicSquare(const int matrix[][MAX_SIZE],size_t dimmension)
{
    return (isSumDiagonalsEqual(matrix,dimmension) && isSumRowsAndColsEqual(matrix,dimmension)) && (getSumColumn(matrix,dimmension,0) == getSumMainDiagonal(matrix,dimmension));
}
 
int main()
{
    int firstMatrix[MAX_SIZE][MAX_SIZE];
 
    size_t dimmension;
 
    std::cin >> dimmension;
 
    getMatrix(firstMatrix, dimmension);
 
    std::cout<<std::boolalpha<<isMagicSquare(firstMatrix,dimmension);
}
 
 