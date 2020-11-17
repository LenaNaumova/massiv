//задача1 (выводит массив)

/*
#include <iostream>
using namespace std;

void printArray(int* array, int lenght)
{
	for (int index = 0; index < lenght; ++index)
	cout << array[index] << ' ';
}

int main()
{
	int array[7] = { 9, 8, 6, 4, 3, 2, 1 };
	printArray(array, 7);
}
*/


//задача2 (выводит двухмерный массив)

/*
#include <iostream>
using namespace std;

void printM(const double* M, const int size_1, const int size_2)
{
	for (int i = 0; i < size_1; i++)
	{
		for (int j = 0; j < size_2; j++)
		{
		   cout << M[size_2 * i + j] << "\t";
		}
		cout << endl;
	}

}

int main()
{
	const int SIZE_1 = 3;
	const int SIZE_2 = 2;
	double m[SIZE_1][SIZE_2] = { {1,0}, {2,-1}, {1,3} };
	printM(*m, SIZE_1, SIZE_2);
	return 0;
}
*/


//задача3 (выдаёт массив из 3 строк и 4 столбцов)

/*
#include <iostream>
#include <iomanip>

void f(int a[], size_t m, size_t n)
{
	for (size_t i = 0; i < m; i++)
	{
		for (size_t j = 0; j < n; j++)
		a[i * n + j] = i * n + j;
	}
}

int main()
{
	const size_t M = 3;
	const size_t N = 4;
	int a[M][N];


	f(reinterpret_cast<int*> (a), M, N);

	for (size_t i = 0; i < M; i++)
	{
		for (size_t j = 0; j < N; j++)
		std::cout << std::setw(2) << a[i][j] << ' ';
		std::cout << std::endl;
	}

	return 0;
}
*/