#include <iostream>

int getRowSum(int matrix[4][4], int row)
{
	int sum = 0;
	for (int col = 0; col < 4; col++) {
		sum += matrix[row][col];
	}
	return sum;
}

int getColSum(int matrix[4][4], int col)
{
	int sum = 0;
	for (int row = 0; row < 4; row++) {
		sum += matrix[row][col];
	}
	return sum;
}

int getMainDiagSum(int matrix[4][4])
{
	int sum = 0;
	for (int row = 0; row < 4; row++)
	{
		sum += matrix[row][row];
	}
	return sum;
}

int getSecondaryDiagonalSum(int matrix[4][4])
{
	int sum = 0;
	for (int row = 0; row < 4; row++) {
		sum += matrix[row][3 - row];
	}
	return sum;
}

int getSumUnderMainDiagonal(int matrix[4][4])
{
	int sum = 0;
	for (int row = 1; row < 4; row++) {
		for (int col = 0; col < row; col++) {
			sum += matrix[row][col];
		}
	}
	return sum;
}

int getSumAboveMainDiagonal(int matrix[4][4])
{
	int sum = 0;
	for (int row = 0; row < 4; row++) {
		for (int col = row + 1; col < 4; col++) {
			sum += matrix[row][col];
		}
	}
	return sum;
}

int getSumUnderSecondDiagonal(int matrix[4][4])
{
	int sum = 0;
	for (int row = 1; row < 4; row++) {
		for (int col = 3; col >= 4 - row; col--) {
			sum += matrix[row][col];
		}
	}
	return sum;
}

int getSumAboveSecondDiagonal(int matrix[4][4])
{
	int sum = 0;
	for (int row = 0; row < 4; row++) {
		for (int col = 0; col < 3 - row; col++) {
			sum += matrix[row][col];
		}
	}
	return sum;
}

int main()
{
	int matrix[4][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 };

	for (int i = 0; i < 4; i++) {
		std::cout << "Row " << i << " sum: " << getRowSum(matrix, i);
		std::cout << std::endl;
	}

	std::cout << std::endl;

	for (int i = 0; i < 4; i++) {
		std::cout << "Col " << i << " sum: " << getColSum(matrix, i);
		std::cout << std::endl;
	}

	std::cout << std::endl;

	std::cout << "Main diagonal sum: " << getMainDiagSum(matrix);

	std::cout << std::endl;

	std::cout << "Secondary diagonal sum: " << getSecondaryDiagonalSum(matrix);

	std::cout << std::endl;

	std::cout << "Sum under main diagonal: " << getSumUnderMainDiagonal(matrix);

	std::cout << std::endl;

	std::cout << "Sum above main diagonal: " << getSumAboveMainDiagonal(matrix);

	std::cout << std::endl;

	std::cout << "Sum under second diagonal: " << getSumUnderSecondDiagonal(matrix);

	std::cout << std::endl;

	std::cout << "Sum above masecondin diagonal: " << getSumAboveSecondDiagonal(matrix);
}