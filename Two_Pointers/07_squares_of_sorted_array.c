#include<stdio.h>
int sorted_squares(int arr[],int new_array[],int size);
int main()
{
int arr[]={-4, -1, 0, 3, 10};
int size=sizeof(arr)/sizeof(arr[0]);
int new_array[size];
sorted_squares(arr,new_array,size);
for(int i=0;i<size;i++)
{
  printf("%d ",new_array[i]); 
}
return 0;
}
int sorted_squares(int arr[],int new_array[],int size)
{
    int left=0;
    int right=size-1;
    while(left<=right)
    {
        int left_square=arr[left]*arr[left];
        int right_square=arr[right]*arr[right];
        if(left_square>right_square)
        {
            new_array[size-1]=left_square;
            left++;
        }
        else
        {
            new_array[size-1]=right_square;
            right--;
        }
        size--;
    }
}