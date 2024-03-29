#include <bits/stdc++.h>
using namespace std;
/*void bubble_sort_recursive(int arr[], int n)
{
    if (n == 1)
    {
        return;
    }
    for (int j = 0; j < n - 1; j++)
    {
        if (arr[j] > arr[j + 1])
        {
            swap(arr[j], arr[j + 1]);
        }
    }
    bubble_sort_recursive(arr, n - 1);
}*/
void bubble_sort_recursive_2(int arr[], int n, int j)
{
    if (n == 1)
    {
        return;
    }
    if (j == n - 1)
    {
        // reduce the problem size and rest j to 0
        bubble_sort_recursive_2(arr, n - 1, 0);
        return;
    }
    if (arr[j] > arr[j + 1])
    {
        swap(arr[j], arr[j + 1]);
    }
    bubble_sort_recursive_2(arr, n, j + 1);
}
int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);
    bubble_sort_recursive_2(arr, n,0);
    for (auto x : arr)
    {
        cout << x << " ";
    }
    return 0;
}