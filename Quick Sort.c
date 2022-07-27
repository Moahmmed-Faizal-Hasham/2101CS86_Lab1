#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubble_sort(int arr[], int len);
void selection_sort(int arr[], int n);
void insertion_sort(int arr[], int n);

void swap(int *x, int *y);
void quicksort(int array[], int length);
void quicksort_recursion(int array[], int low, int high);
int partition(int array[], int low, int high);



int main(){
    int a[]={5,6,7,3,1,9,2,8,4};
    int len=9;
    
    quicksort(a, len);
    
    for(int i=0;i<len-1;i++)
    printf("%d,",a[i]);
    printf("%d",a[8]);
    
    return 0;
}


void bubble_sort(int arr[], int n)
{
    int k;
    for (int i=0; i<n; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (arr[j]<arr[i])
            {
                k=arr[i];
                arr[i]=arr[j];
                arr[j]=k;
            }
        }
    }
}  

void selection_sort(int arr[], int n)
{  
    int k=0;
    while(k<n)
    {
        int small=k;
        for (int i=k+1; i<n; i++)
        {
            if(arr[small]>arr[i])
            {
                small=i;
            }
        }
        int temp=arr[small];
        arr[small]=arr[k];
        arr[k]=temp;

        k++;
    }    
}

void insertion_sort(int arr[], int n)
{  
    for (int i=1; i<n; i++)
    {
        int current= arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }


}



void swap(int *x, int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;
}

void quicksort(int array[], int length)
{

  srand(time(NULL));
  

  quicksort_recursion(array, 0, length - 1);
}

void quicksort_recursion(int array[], int low, int high)
{

  if (low < high)
  {

    int pivot_index = partition(array, low, high);


    quicksort_recursion(array, low, pivot_index - 1);


    quicksort_recursion(array, pivot_index + 1, high);
  }
}

int partition(int array[], int low, int high)
{

  int pivot_index = low + (rand() % (high - low));
  

  if (pivot_index != high)
    swap(&array[pivot_index], &array[high]);
  

  int pivot_value = array[high];
  

  int i = low; 

  for (int j = low; j < high; j++)
  {

    if (array[j] <= pivot_value)
    {
      swap(&array[i], &array[j]);
      i++;
    }
  }
  

  swap(&array[i], &array[high]);
  

  return i;
}
    