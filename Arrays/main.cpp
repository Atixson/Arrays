//Arrays
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	double sum = 0;// ����� 
	int arr[n];
	int max = arr[0];//������������ ��������
	unsigned int min = arr[0];//����������� ��������
	for (int i = 0; i < n; i++)
	{
		cout << "������� " << i + 1 << "-� �������� ������� : ";
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
	cout << "\n\n ����� = " << sum << endl;
	cout << "\n ������� �������������� = " << sum / n << endl;
	cout << "\n ������������ �������� = " << max << endl;
	cout << "\n ����������� �������� = " << min << endl;
}