#include <iostream>

/**
 *  @note Binary search is a searching algorithm used for finding the location of a key element within a sorted array.
 *
 *  PROCEDURE
 *
 *  1. Compare the key to the middle element of the array, if they are not equal, eliminate the size that is not possible to find
 *
 *  2. Continue the search on the remaining half, once again comparing the key to the middle of the array
 *
 *  3. If the search ends with the remaining half being empty then the key is not in the array and -1 is returned
 * 
 *  @return If success index of element is returned, else -1 is returned 
 */
int binary_search(int array[], int size, int key)
{
    int low = 0;
    int high = size - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (key == array[mid])
        {
            return mid;
        }
        if (key < array[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[8] = {2, 4, 5, 6, 6, 10, 2};
    int size = 8;
    int key = 2;

    auto ans = binary_search(arr, size, 4);

    std::cout << ans;

    return 0;
}