#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	const int a1 = 10;
	const int a2 = 10;
	const int a3 = 10;
	const int a4 = 10;
	const int a5 = 10;
	const int a6 = 10;
	const int a7 = 10;
	const int a8 = 10;
	int arr1[a1];
	double arr2[a2];
	float arr3[a3];
	char arr4[a4];
	bool arr5[a5];
	long arr6[a6];
	short arr7[a7];
	string arr8[a8];

	cout << "Первый массив : \n";
	for (int i = 0; i < a1; i++) {
		arr1[i] = i + 10;
		cout << "[" << i << "] arr: " << arr1[i] << "\n";
	}
	cout << endl;
	cout << "Второй массив : \n";
	for (int i = 0; i < a2; i++) {
		arr2[i] = i + 0.55;
		cout << "[" << i << "] arr: " << arr2[i] << "\n";
	}
	cout << endl;
	cout << "Третий массив : \n";

	for (int i = 0; i < a3; i++) {
		arr3[i] = i + 0.5;
		cout << "[" << i << "] arr: " << arr3[i] << "\n";
	}
	cout << endl;
	cout << "Четвертый массив : \n";

	for (int i = 0; i < a4; i++) {
		arr4[i] = i + '!';
		cout << "[" << i << "] arr: " << arr4[i] << "\n";
	}
	cout << endl;
	cout << "Пятый массив : \n";
	for (int i = 0; i < a5; i++) {
		arr5[i] = false;
		cout << "[" << i << "] arr: " << arr5[i] << "\n";
	}
	cout << endl;
	cout << "Шестой массив : \n";
	for (int i = 0; i < a6; i++) {
		arr6[i] = i + 100;
		cout << "[" << i << "] arr: " << arr6[i] << "\n";
	}
	cout << endl;
	cout << "Седьмой массив : \n";
	for (int i = 0; i < a7; i++) {
		arr7[i] = i;
		cout << "[" << i << "] arr: " << arr7[i] << "\n";
	}
	cout << endl;
	cout << "Восьмой массив : \n";
	for (int i =0; i < a8; i++) {
		arr8[i] = "qwertyuiop" + i;
		cout << "[" << i << "] arr: " << arr8[i] << "\n";
	}
 
	int _; cin >> _;
	return 0;
}
