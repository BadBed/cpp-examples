#include <bits/stdc++.h>
using namespace std;

int main() {
	int n = 10, k = 10;

	// Создаем двумерный массив размера n на k
	vector<vector<int> > a(n, vector<int>(k));

	// Обращаемся к элементам этого массива
	a[1][2];

	// Добавляем одномерный массив массив в конец
	a.push_back({2, 1, 2});
	
	cout << a.size() << " " << a[10][1];
}
