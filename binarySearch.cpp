# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
int binarySearch(int arr[],int size,int key)
{
    int lb=0;
    int ub=size-1;
    
    while(lb<=ub)
    {
        int mid=(lb+ub)/2;
        if(arr[mid]==key)
             return mid;
        else if(arr[mid]<key)
             lb=mid+1;
        else
             ub=mid-1;
    }
    return -1;
}
void bubbleSort(int arr[], int size)
{
     for(int i=size-1;i>0;i--)
     {
          for(int j=0;j<=i;j++)
          {
                  if(arr[j]>arr[j+1])
                  {
                        int temp=arr[j+1];
                        arr[j+1]=arr[j];
                        arr[j]=temp;
                  }
          }
     }
}
void printArray(int arr[], int size)
{
     for(int i=0;i<size;i++)
     {
          printf("%d  ",arr[i]);
     }
     printf("\n");
}
int main()
{
    int arr[]={1,8,6,4,5,7,2,3,9};
    int size=9;
    printf("The original array is:\n");
    printArray(arr, size);
    int key;
    printf("Enter element to be searched:");
    scanf("%d",&key);
    printf("Array after sorting is:\n");
    bubbleSort(arr,size);
    printArray(arr,size);
    int index=binarySearch(arr,size,key);
    if(index<0)
         printf("Not found!!!");
    else
         printf("Key found at index %d....",index);
    getch();
    return 0;
}
    
