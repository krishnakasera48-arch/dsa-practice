#include<stdio.h>
int remove_duplicates(int arr[], int size);
int main()
{
    int arr[]={1, 1, 2, 2, 3, 4, 4, 5};
    int size=sizeof(arr)/sizeof(arr[0]);        
    int new_size=remove_duplicates(arr,size);
    printf("\nArray after removing duplicates: ");
    for(int i=0; i<new_size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("New size of the array: %d\n", new_size);
    return 0;
}
int remove_duplicates(int arr[], int size)
{   int i=0;
   for(int j=1;j<size;j++)
   {
    if(arr[i]!=arr[j])
    {
        i++;
        arr[i]=arr[j];
    }}
    return i+1;
}