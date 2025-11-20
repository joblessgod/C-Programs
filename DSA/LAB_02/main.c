#include <stdio.h>

int binarySearch(int arr[], int n, int low, int high, int item)
{
    while (low <= high) // checks until low is less than high
    {
        int mid = (low + high) / 2; // mid is used to devide the array

        if (arr[mid] == item) // checks if the searching item is searchable at once
            return mid;
        else if (item < arr[mid]) // 
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    int searchItem;

    printf("Which item you want to search: ");
    scanf("%d", &searchItem);
    int result = binarySearch(arr, size, 0, size - 1, searchItem);

    if (result == -1)
    {
        return ("Search item %d is not found.", searchItem);
    }
    else
    {
        return printf("Your search item %d is in %d index.", searchItem, result);
    }
    return 0;
}