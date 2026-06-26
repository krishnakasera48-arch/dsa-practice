#include<stdio.h>
void merge_sorted_array(int arr1[],int arr2[],int new_array[],int size1,int size2);
int main()
{
    int arr1[]={1, 3, 5, 7};
    int arr2[]={2, 4, 6, 8};
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    int size2=sizeof(arr2)/sizeof(arr2[0]);
    int new_array[size1+size2];
    merge_sorted_array(arr1,arr2,new_array,size1,size2);
    for(int i=0;i<size1+size2;i++)
    {
        printf("%d ",new_array[i]); 
    }
    return 0;
}
void merge_sorted_array(int arr1[],int arr2[],int new_array[],int size1,int size2)
{
    int i=0,j=0,k=0;
    while(i<size1 && j<size2)
    {
        if(arr1[i]<=arr2[j])
        {
            new_array[k]=arr1[i];
            i++;
        }
        else
        {
            new_array[k]=arr2[j];
            j++;
        }
        k++;
    }
    while(i<size1)
    {
        new_array[k]=arr1[i];
        i++;
        k++;
    }
    while(j<size2)
    {
        new_array[k]=arr2[j];
        j++;
        k++;
    }
}