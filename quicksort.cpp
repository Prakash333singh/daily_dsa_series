#include <bits/stdc++.h>
using namespace std;
int partition(int *arr, int start, int end)
{
    int pivot = arr[end];
    int partitionIndex = start; // set partition index as start intitailly
    for (int i = start; i < end; i++)
    {
        if (arr[i] <= pivot)
        {
            swap(arr[i], arr[partitionIndex]);
            partitionIndex++;
        }
    }
    swap(arr[partitionIndex], arr[end]);
    return partitionIndex;
}
void quicksort(int *arr, int start, int end)
{
    if (start < end) // base condition
    {
        int partitionIndex = partition(arr, start, end); // calling partition
        quicksort(arr, start, partitionIndex - 1);       // pivot index se phla wla part sort karta hai
        quicksort(arr, partitionIndex + 1, end);         // pivot index ke baad wala part sort karta hai
    }
}
int main()
{
    int arr[] = {7, 6, 5, 4, 3, 2, 1, 0};
    quicksort(arr, 0, 7);
    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}