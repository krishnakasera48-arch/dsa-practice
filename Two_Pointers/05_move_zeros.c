#include<stdio.h>
int move_zeros(int arr[], int size);
int main()
{
    int arr[]={0, 1, 0, 3, 12};
    int size=sizeof(arr)/sizeof(arr[0]);        
    move_zeros(arr,size);
    printf("\nArray after moving zeros to the end: ");
    for(int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
int move_zeros(int arr[], int size)
{
    int i=0;
    for(int j=0;j<size;j++)
    {
        if(arr[j]!=0)
        {
            arr[i]=arr[j];
            i++;
        }
    }
    while(i<size)
    {
        arr[i]=0;
        i++;
    }
    return 0;
}
