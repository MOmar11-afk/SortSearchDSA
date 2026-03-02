#include<iostream>
using namespace std;
void number(int arr[],int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << endl;
	}

}
void String(string arr[], int s) {
	for (int i = 0; i < s; i++) {
		cout << arr[i] << endl;
	}
}

void Sorting(int arr[],int size) {
	for (int i = 0; i < size - 1; i++) {
		int minIndex = i;

		for (int j = i + 1; j < size; j++) {
			if (arr[j] < arr[minIndex]) {
				minIndex = j;
			}
		}
		if (minIndex != i) {
			int temp = arr[i];
			arr[i] = arr[minIndex];
			arr[minIndex] = temp;
		}
	}
}

int main() {
	
	int intArray[5] = { 64, 25, 12, 22, 11 };
	cout << "Original integer array: ";
	number(intArray,5);
	cout << "Sorted integer array: ";
	Sorting(intArray,5);
	return 0;
}