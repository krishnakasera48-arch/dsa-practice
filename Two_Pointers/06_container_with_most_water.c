#include<stdio.h>
int max_area(int height[], int size);
int main() {
    
    int height[]={1, 8, 6, 2, 5, 4, 8, 3, 7};
    int size=sizeof(height)/sizeof(height[0]);
    int area=max_area(height,size);
    printf("Maximum area of water that can be contained: %d\n", area);
    return 0;
}
int max_area(int height[],int size)
{
    int left=0;
    int right=size-1;
    int max_area=0;
    while(left<right)
    {
        int width=right-left;
        int height1=height[left]<height[right]?height[left]:height[right];
        int area=width*height1;
        if(area>max_area)
        {
            max_area=area;
        }
        if(height[left]<height[right])
        {
            left++;

        }
        else
        {
            right--;
        }}
    return max_area;}