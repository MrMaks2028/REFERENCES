// ������������ ������ ������� c++
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
	
	//������ 2 - 3
	int z2_1[5] = { 1,2,3,4,5 };
	int z2_2[5];
	for (int i = 0; i < 5; i++)
		*(z2_2 + i) = *(z2_1 + 4 - i); // 2) *(z2_1 + i); 3) *(z2_1 + 4 - i)
	cout << "������ 2.\n1-� ������:\n";
	showAr(z2_1, 5);
	cout << "2-� ������:\n";
	showAr(z2_2, 5);
	cout << endl;
	return 0;
}
/*int a[5] = {1,2,3,4,5};
	cout << "����������� ������:\n[";
	for (int i = 0; i < 5; i++)
		cout << a[i] << ", ";
	cout << "\b\b]\n";
	cout << "����. = " << maxEl(a, 5) << endl;
	maxEl(a, 5) = 0;
	cout << "�������� ������:\n[";
	for (int i = 0; i < 5; i++)
		cout << a[i] << ", ";
	cout << "\b\b]\n";*/
/*cout << "���� �������� � ������� : \n";
	for (int i = 0; i < 10; i++){
		cout << i << " ������� -> ";
		cin >> a[i][0];
		func(i) = a[i][0];
	}
	cout << "�������� ������:\n";
	for (int i = 0; i < 10; i++)
		cout << a[i][0] << "\t" << func(i) << endl;*/