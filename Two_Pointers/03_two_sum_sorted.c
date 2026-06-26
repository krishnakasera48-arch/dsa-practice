#include<stdio.h>
int twosum(int arr[],int size,int target);
void main()
{
    int arr[] = {2, 7, 11, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 9;
    int result = twosum(arr, size, target);
    if(result)
    {
        printf("  Two numbers found that add up to %d\n", target);
    }
    else
    {
        printf("  No two numbers found that add up to %d\n", target);
    }
}
int twosum(int arr[], int size, int target)
{
    int left = 0;
    int right = size - 1;

    while(left < right)
    {
        int sum = arr[left] + arr[right];

        if(sum == target)
            return 1;

        if(sum < target)
            left++;
        else
            right--;
    }

    return 0;
}