#include <iostream>
#include <vector>
using namespace std;

void leftNegative(int arr[], int size)
{
    int l = 0;
    int h = size - 1;

    while (l <= h)
    {
        if (arr[l] < 0)
        {

            l++;
        }

        if (arr[h] > 0)
        {
            h--;
        }

        else
        {
            swap(arr[l], arr[h]);
        }
    }
}

void printArray(int arr[])
{

    // printing the array

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {1, 2, -3, 4, -5};
    int size = sizeof(arr) / sizeof(int);

    leftNegative(arr, size);

    printArray(arr);

    return 0;
}