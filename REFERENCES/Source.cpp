// Персональный шаблон проекта c++
#include <iostream>
using namespace std;
int a[10][2];

int& func(int index) {
	return a[index][1];
}
int& maxEl(int a[], int len) {
	int imax = 0;
	for (int i = 1; i < len; i++)
		if (a[i] > a[imax])
			imax = i;
	return a[imax];
}
template <typename T> void showAr(T a[], int len) {
	cout << "[";
	for (int i = 0; i < len; i++)
		cout << a[i] << ", ";
	cout << "\b\b]\n";
}

int main() {
	setlocale(LC_ALL, "Russian");
	
	//Задача 2 - 3
	int z2_1[5] = { 1,2,3,4,5 };
	int z2_2[5];
	for (int i = 0; i < 5; i++)
		*(z2_2 + i) = *(z2_1 + 4 - i); // 2) *(z2_1 + i); 3) *(z2_1 + 4 - i)
	cout << "Задача 2.\n1-й массив:\n";
	showAr(z2_1, 5);
	cout << "2-й массив:\n";
	showAr(z2_2, 5);
	cout << endl;
	return 0;
}
/*int a[5] = {1,2,3,4,5};
	cout << "Изначальный массив:\n[";
	for (int i = 0; i < 5; i++)
		cout << a[i] << ", ";
	cout << "\b\b]\n";
	cout << "Макс. = " << maxEl(a, 5) << endl;
	maxEl(a, 5) = 0;
	cout << "Итоговый массив:\n[";
	for (int i = 0; i < 5; i++)
		cout << a[i] << ", ";
	cout << "\b\b]\n";*/
/*cout << "Ввод значений в массиве : \n";
	for (int i = 0; i < 10; i++){
		cout << i << " элемент -> ";
		cin >> a[i][0];
		func(i) = a[i][0];
	}
	cout << "Итоговый массив:\n";
	for (int i = 0; i < 10; i++)
		cout << a[i][0] << "\t" << func(i) << endl;*/