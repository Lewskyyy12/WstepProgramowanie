// sortowanka.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;
void quickSort(int arr[], int start, int end)
{
	// base case
	if (start >= end)
		return;
	//find proper pivot index
	int pivotIndex = start;
	int count = 0;
	cout << arr[pivotIndex] << "        ";
	for (int i = start; i <= end; i++)
		if (arr[i] > arr[pivotIndex]) {
			count++;
			cout << arr[i] << " ";
		}
	pivotIndex = end - count;
	cout << arr[pivotIndex] << endl;
	//put pivot on its place
	int temp = arr[start];
	arr[start] = arr[pivotIndex];
	arr[pivotIndex] = temp;

	//organize elements around pivot
	int i = start, j = end;
	while (i < pivotIndex && j > pivotIndex) {
		while (arr[i] <= arr[pivotIndex]) i++;
		while (arr[j] >= arr[pivotIndex]) j--;
		if (i < pivotIndex && j > pivotIndex) {
			cout << arr[i] << " " << arr[j] << endl;
			temp = arr[j];
			arr[j] = arr[i];
			arr[i] = temp;
			cout << arr[i] << " " << arr[j] << endl;
			i++;
			j--;

		}
	}

	cout << "next" << endl;
	// Sorting the left part
	quickSort(arr, start, pivotIndex - 1);
	// Sorting the right part
	quickSort(arr, pivotIndex + 1, end);
}
	void selectionsort(int arr[], int ile) {
		int ile_operacji=0;
		for (int i = 0; i < ile; i++) {
			for (int j = i+1; j < ile; j++) {
				if (arr[i] > arr[j]) {
					int temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
					ile_operacji++;
				}
			}
		}
		cout << ile_operacji << endl;
	}

	void insertionsort(int arr[], int ile) {
		for (int i = 0; i < ile; i++) {
			int j = i;
			while(arr[j] < arr[j-1] && j!=0) {
				int temp = arr[j];
				arr[j] = arr[j-1];
				arr[j - 1] = temp;
				j--;
			}
		}
	}

	void bubblesort(int arr[], int ile) {
		for (int i = 0; i < ile; i++) {
			for (int j = 0; j < ile-1; j++) {
				if (arr[i] < arr[j]) {
					int temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
	}

int main()
{
	int arr[10] = { 9, 3, 4, 2, 1, 8 , -3, 5, 7, 8 };
	int n = 10;
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	bubblesort(arr, n);
	//quickSort(arr, 0, n - 1);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}