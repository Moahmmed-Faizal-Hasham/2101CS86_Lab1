#include <stdio.h>

void bubble_sort(int arr[], int len);

int main(){
    int a[]={5,6,7,3,1,9,2,8,4};
    int len=9;
    
    bubble_sort(a,len);
    
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
    