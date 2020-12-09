#include <stdio.h>
#include <stdlib.h>


int main()
{
  int arr[6]={10,20,30,40,50,60};
  binary_search (&arr,6,20);
}

binary_search (int*arr,int size,int target)
{
    int first,last,mid;
    first=0;
    last=size-1;//l=n-1
    while(first<=last)
{
    mid=(first+last)/2;
    if(arr[mid]==target)
    {
    printf("target is found");
    return;
    }
    if(arr[mid]<target)
    {
     first=mid+1;
    }
    if(arr[mid]>target)
    {
    last=mid-1;
    }

}
    printf("target is not found");
}

    // worst case scenario = 0 is the last(or first) element in array or no 0 in array
    // big o notation = O(log(n)) where n is number of array elements

