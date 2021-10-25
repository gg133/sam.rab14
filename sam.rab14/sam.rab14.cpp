#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	const int A1 = 10;
	const int A2 = 10;
	const int A3 = 10;
	const int A4 = 10;
	const int A5 = 10;
	const int A6 = 10;
	const int A7 = 10;
	const int A8 = 10;
	int arr1[A1];
	double arr2[A2];
	float arr3[A3];
	char arr4[A4];
	bool arr5[A5];
	long arr6[A6];
	short arr7[A7];
	string arr8[A8];

	cout << "Int массив : \n";
	for (int i = 0; i < A1; i++) {
		arr1[i] = i + 10;
		cout << "[" << i << "] arr: " << arr1[i] << "\n";
	}
	cout << endl;
	cout << "Double массив : \n";
	for (int i = 0; i < A2; i++) {
		arr2[i] = i + 0.55;
		cout << "[" << i << "] arr: " << arr2[i] << "\n";
	}
	cout << endl;
	cout << "Float массив : \n";

	for (int i = 0; i < A3; i++) {
		arr3[i] = i + 0.5;
		cout << "[" << i << "] arr: " << arr3[i] << "\n";
	}
	cout << endl;
	cout << "Char массив : \n";

	for (int i = 0; i < A4; i++) {
		arr4[i] = i + '!';
		cout << "[" << i << "] arr: " << arr4[i] << "\n";
	}
	cout << endl;
	cout << " Bool массив : \n";
	for (int i = 0; i < A5; i++) {
		arr5[i] = false;
		cout << "[" << i << "] arr: " << arr5[i] << "\n";
	}
	cout << endl;
	cout << "Long массив : \n";
	for (int i = 0; i < A6; i++) {
		arr6[i] = i + 100;
		cout << "[" << i << "] arr: " << arr6[i] << "\n";
	}
	cout << endl;
	cout << "Short массив : \n";
	for (int i = 0; i < A7; i++) {
		arr7[i] = i;
		cout << "[" << i << "] arr: " << arr7[i] << "\n";
	}
	cout << endl;
	cout << "String массив : \n";
	for (int i =0; i < A8; i++) {
		arr8[i] = "qwertyuiop" + i;
		cout << "[" << i << "] arr: " << arr8[i] << "\n";
	}
 
	int _; cin >> _;
	return 0;
}
