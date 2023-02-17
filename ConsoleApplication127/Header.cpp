#include "Header.h"
#include <iostream>
#include <ctime>
#include <time.h>
#include <fstream>
#define t "\t"

using namespace std;
void FillArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 50 - 20;
    }
}
float FillArray(float arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = (float)(rand() % 50 - 20) / 10;
    }
    return 0;
}
void ShowArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << t;
    }
    cout << endl;
}
void ShowArray(float arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << t;
    }
    cout << endl;
}
int multy(int arr[], int size, int n, int k, int *s, int *p)
{
    for (int i = 0; i < size; i++)
    {
        if (sum(i, n, k))
        {
            *s += arr[i];
        }
        if (proiz(i, n, k))
        {
            *p *= arr[i];
        }
    }
    return 0;
}
float multy(float arr[], int size, float *a, float *f)
{
    *a = 1;
    for (int i = 0; i < size; i++)
    {
        if (proizved(arr[i]))
        {
            *a = *a * arr[i];
        }
    }
    float b = arr[0];
    int e = 0;
    for (int i = 0; i < size; i++)
    {
        if (b < arr[i])
        {
            b = arr[i];
            e = i;
        }
    }
    if (e == 0)
    {
        *f = 1111;
    }
    else
    {
        for (int i = 0; i < size; i++)
        {
            if (arr[i] > 0)
            {
                if (sum(i, 0, e-1))
                {
                    *f = *f + arr[i];
                }
            }
        }
    }
    return 0;
}
bool sum(int a, int n, int k)
{
    return  a >= n && a <= k;
}
bool proiz(int a, int n, int k)
{
    return a >= n && a <= k;
}

bool proizved(float a)
{
    return a < 0;
}
void udalenie(int arr[], int *size, int m)
{
    arr[m] = 0;
    for (int i = m; i < *size; i++)
    {
        arr[i] = arr[i + 1];
    }
    *size = *size - 1;
}
void udalenie(float arr[], int* size, int m)
{
    arr[m] = 0;
    for (int i = m; i < *size; i++)
    {
        arr[i] = arr[i + 1];
    }
    *size = *size - 1;
}
void vstavka(int arr[], int* size, int m, int c)
{
    *size = *size + 1;
    for (int i = *size - 1; i >= m; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[m] = c;
}
void vstavka(float arr[], int* size, int m, float c)
{
    *size = *size + 1;
    for (int i = *size - 1; i >= m; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[m] = c;
}
void bubble(int arr[], int size)
{
    bool p = true;
    while (p)
    {
        p = false;
        for (int i = 0; i < size-1; i++)
        {
            if (arr[i] < arr[i + 1])
            {
                int a = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = a;
                p = true;
            }
        }
    }
}
void bubble(float arr[], int size)
{
    bool p = true;
    while (p)
    {
        p = false;
        for (int i = 0; i < size - 1; i++)
        {
            if (arr[i] < arr[i + 1])
            {
                arr[i] = arr[i + 1];
                float a = arr[i];
                arr[i + 1] = a;
                p = true;
            }
        }
    }
}
void peremesh(int arr[], int size)
{
    int b = 0, a = 0;
    while (b < size)
    {
        int e = 0;
        a = arr[b];
        for (int i = b; i < size; i++)
        {
            if (a < arr[i])
            {
                a = arr[i];
                e = i;
            }
        }
        int c = arr[b];
        if (e != 0)
        {
            if (e != b)
            {
                arr[b] = arr[e];
                arr[e] = c;
            }
        }
        b++;
    }
}
void peremesh(float arr[], int size)
{
    int b = 0;
    float a = 0;
    while (b < size)
    {
        int e = 0;
        a = arr[b];
        for (int i = b; i < size; i++)
        {
            if (a < arr[i])
            {
                a = arr[i];
                e = i;
            }
        }
        float c = arr[b];
        if (e != 0)
        {
            if (e != b)
            {
                arr[b] = arr[e];
                arr[e] = c;
            }
        }
        b++;
    }
}
void sortt(float arr[], int size)
{
    int b = size - 1;
    for (int i = 0; i < size; i++)
    {
        if (i < b)
        {
            float a = arr[i];
            arr[i] = arr[b];
            arr[b] = a;
            b--;
        }
    }
}
void LineSort(int arr[], int size)
{
    for (int i = 0; i < size-1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[i])
            {
                int a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }
}
void LineSort(float arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[i])
            {
                float a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }
}
void poisk(int arr[], int* max, int* min, int size)
{
    int a = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (a < arr[i])
        {
            a = arr[i];
        }
    }
    *max = a;
    a = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (a > arr[i])
        {
            a = arr[i];
        }
    }
    *min = a;
}
void poisk(float arr[], float* max, float* min, int size)
{
    float a = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (a < arr[i])
        {
            a = arr[i];
        }
    }
    *max = a;
    a = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (a > arr[i])
        {
            a = arr[i];
        }
    }
    *min = a;
}
int binarn(int arr[], int key, int size)
{
    int low = 0, high = size - 1, mid = 0;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (key < arr[mid])
        {
            high = mid - 1;
        }
        else if (key > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}
void podschet(int arr[], int size, int* a, int* b, int* c, int *k, int o)
{
    for (int i = 0; i < size; i++)
    {
        if (bolshe(arr[i]))
        {
            *a = *a + 1;
        }
        else if (menshe(arr[i]))
        {
            *b = *b + 1;
        }
        else
        {
            *c = *c + 1;
        }
        if (kratn(arr[i], o))
        {
            *k = *k + 1;
        }
    }
}
bool bolshe(int a)
{
    return a > 0;
}
bool menshe(int a)
{
    return a < 0;
}
bool kratn(int a, int b)
{
    return a % b == 0;
}
void podschet(float arr[], int size, int* a, int* b, int* c)
{
    for (int i = 0; i < size; i++)
    {
        if (bolshe(arr[i]))
        {
            *a = *a + 1;
        }
        else if (menshe(arr[i]))
        {
            *b = *b + 1;
        }
        else
        {
            *c = *c + 1;
        }
    }
}
bool bolshe(float a)
{
    return a > 0;
}
bool menshe(float a)
{
    return a < 0;
}

void vfile(int arr[], int size)
{
    ofstream fout("C:\\Users\\Иван\\source\\repos\\vivod laba.txt");
    if (fout)
    {
        for (int i = 0; i < size; i++)
        {
            fout << arr[i] << endl;
        }
    }
    else cout << "Нет файла";
}
void vfile(float arr[], int size)
{
    ofstream fout("C:\\Users\\Иван\\source\\repos\\vivod laba.txt");
    if (fout)
    {
        for (int i = 0; i < size; i++)
        {
            fout << arr[i] << endl;
        }
    }
    else cout << "Нет файла";
}
