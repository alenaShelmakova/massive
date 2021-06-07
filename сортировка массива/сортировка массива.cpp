//Сортировка массива методом выбора от наименьшего к наибольшему

#include <iostream>
using namespace std;

int main()
{
	int arr[]{ 30, 50, 20, 10, 40 };

	for (int i = 0; i < (sizeof(arr)/sizeof(int)) - 1; i++)
	{

		for (int j = i + 1; j < sizeof(arr) / sizeof(int); j++)
		{
			int minValue = arr[i];

			if (arr[j] < minValue)
			{
				int buf = arr[i];
				arr[i] = arr[j];
				arr[j] = buf;
			}
		}
	}

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		cout << arr[i] << endl;
	}
}

//Сортировка массива методом выбора от наибольшего к наименьшему

#include <iostream>
using namespace std;

int main()
{
	int arr[]{ 30, 50, 20, 10, 40 };
	
		for (int i = 0; i < (sizeof(arr)/sizeof(int)) - 1; i++)
		{
	
			for (int j = i + 1; j < sizeof(arr) / sizeof(int); j++)
			{
				int maxValue = arr[i];
	
				if (arr[j] > maxValue)
				{
					int buf = arr[i];
					arr[i] = arr[j];
					arr[j] = buf;
				}
			}
		}
	
		for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
		{
			cout << arr[i] << endl;
		}

}


//Сортировка массива методом пузырьков

#include <iostream>
#include <utility>

using namespace std;

int main()
{
	const int length(9);
	int array[length]{ 7, 5, 6, 4, 9, 8, 2, 1, 3 };


		for (int i = 0; i < length - 1; i++)
		{
			bool makeSwap = false;

			for (int j = 0; j < length - (i + 1); j++)
			{
				if (array[j] > array[j + 1])
				{
					swap(array[j], array[j + 1]);
					makeSwap = true;
				}
				
			}

			if (makeSwap == false)
			{
				cout << "Early termination on iteration - " << i + 1 << endl<<endl;
				break;
			}
		}
	

	for (int i = 0; i < length; i++)
	{
		cout << array[i] << endl;
	}
}