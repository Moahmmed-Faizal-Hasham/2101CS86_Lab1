#include <stdio.h>

void bubble_sort(int arr[], int len);
void selection_sort(int arr[], int n);
void insertion_sort(int arr[], int n);

int main(){
    int a[]={5,6,7,3,1,9,2,8,4};
    int len=9;
    
    insertion_sort(a, len);
    
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
    