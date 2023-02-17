//Arrays
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	double sum = 0;// сумма 
	int arr[n];
	int max = arr[0];//максимальное значение
	unsigned int min = arr[0];//минимальное значение
	for (int i = 0; i < n; i++)
	{
		cout << "Введите " << i + 1 << "-е значение массива : ";
		cin >> arr[i];
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
		sum += arr[i];
		if (max < arr[i])
			max = arr[i];
		if (min > arr[i])
			min = arr[i];
	}
	cout << "\n\n Сумма = " << sum << endl;
	cout << "\n Среднее арифмитическое = " << sum / n << endl;
	cout << "\n Максимальное значение = " << max << endl;
	cout << "\n Минимальное значение = " << min << endl;
}