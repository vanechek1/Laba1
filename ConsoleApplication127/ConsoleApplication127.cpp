
#include <iostream>
#include <ctime>
#include <time.h>
#include "Header.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(0));
	int size, m=0, c=0;
	cout << "Введите размер массива: " << endl;
	cin >> size;
	int* arr = new int[size];
	int summa = 0, proizved = 1;
	FillArray(arr, size);
	ShowArray(arr, size);
	cout << endl;
	int n, k;
	cout << "Введите начальный индекс массива: " << endl;
	cin >> n;
	cout << "Введите конечный индекс массива: " << endl;
	cin >> k;
	multy(arr, size, n, k, &summa, &proizved);
	cout << "Сумма элементов в выбранном диапазоне равна: " << summa << endl;
	cout << "Произведение элементов в выбранном диапазоне равна: " << proizved << endl << endl;
	cout << "Введите индекс элемента, который хотите удалить: " << endl;
	cin >> m;
	udalenie(arr, &size, m);
	cout << "Массив: " << endl;
	ShowArray(arr, size);
	cout << "Введите число, которое вы желаете вставить в массив: " << endl;
	cin >> c;
	vstavka(arr, &size, m, c);
	ShowArray(arr, size);
	//Сортировки
	cout << "Сортировка пузырьком: " << endl;
	bubble(arr, size);
	ShowArray(arr, size);
	cout << "Сортировка перемешиванием: " << endl;
	peremesh(arr, size);
	ShowArray(arr, size);
	cout << "Сортировка выбором (линейная): " << endl;
	LineSort(arr, size);
	ShowArray(arr, size);
	cout << endl;
	int max, min;
	poisk(arr, &max, &min, size);
	cout << "Максимальный элемент массива = " << max << endl;
	cout << "Минимальный элемент массива = " << min << endl << endl;
	int key, ch;
	cout << "Введите ключ: " << endl;
	cin >> key;
	ch = binarn(arr, key, size);
	if (ch == -1)
	{
		cout << "Не найдено" << endl;
	}
	else
	{
		cout << "Найден элемент с индексом " << ch << endl;
	}
	int men = 0, bol = 0, rav = 0, krt = 0, o = 0;
	cout << "Введите элемент, кратность на который вы хотите проверить: " << endl;
	cin >> o;
	podschet(arr, size, &bol, &men, &rav, &krt, o);
	cout << "Массив состоит из: " << endl;
	cout << "Чисел больше нуля в кол-ве: " << bol << endl;
	cout << "Чисел меньше нуля в кол-ве: " << men << endl;
	cout << "Чисел, равных нулю, в кол-ве: " << rav << endl;
	cout << "Чисел, кратных " << o << ", в кол-ве: " << krt << endl << endl;;
	vfile(arr, size);

	//Вариант 19
	cout << "Вариант 19. Доп.Задание: " << endl;
	int sz;
	cout << "Введите кол-во элементов массива: " << endl;
	cin >> sz;
	float* brr = new float[sz];
	int l = 0;
	float p = 0;
	FillArray(brr, sz);
	ShowArray(brr, sz);
	float pr=0, sm=0; 
	multy(brr, sz, &pr, &sm); // Произведение отрицательных чисел массива
	cout << "Произведение отрицательных чисел массива = " << pr << endl;
	if(sm != 1111)
	{
		cout << "Сумма положительных чисел массива, расположенных до максимального = " << sm << endl;
	}
	else
	{
		cout << "Максимальный элемент стоит на первом месте" << endl;
	}
	cout << "Обратный порядок: " << endl;
	sortt(brr, sz);
	ShowArray(brr, sz);
	cout << "Введите индекс элемента, который хотите удалить: " << endl;
	cin >> l;
	udalenie(brr, &sz, l);
	ShowArray(brr, sz);
	cout << "Введите элемент, который хотите вставить: " << endl;
	cin >> p;
	vstavka(brr, &sz, l, p);
	ShowArray(brr, sz);
	//Сортировки
	//cout << "Сортировка пузырьком: " << endl;
	//bubble(brr, sz);
	//ShowArray(brr, sz);
	//cout << "Сортировка перемешиванием: " << endl;
	//peremesh(brr, sz);
	//ShowArray(brr, sz);
	//cout << "Сортировка выбором (линейная): " << endl;
	//LineSort(brr, sz);
	//ShowArray(brr, sz);
	cout << endl;
	float maximum, minimum;
	poisk(brr, &maximum, &minimum, sz);
	cout << "Максимальный элемент массива = " << maximum << endl;
	cout << "Минимальный элемент массива = " << minimum << endl << endl;
	int aa=0, ab=0, ac=0;
	podschet(brr, sz, &aa, &ab, &ac);
	cout << "Массив состоит из: " << endl;
	cout << "Чисел больше нуля в кол-ве: " << aa << endl;
	cout << "Чисел меньше нуля в кол-ве: " << ab << endl;
	cout << "Чисел, равных нулю, в кол-ве: " << ac << endl;
	vfile(brr, sz);
}

