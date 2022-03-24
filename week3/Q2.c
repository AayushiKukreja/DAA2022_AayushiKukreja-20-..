/*
wap t0 implement selection sort and find out total number of comparisons

*/
#include <stdio.h>


void selectionSort(int arr[], int n)
{
    
    int minindex , count =0;
    
    for(int i = 0; i<n-1 ; i++)
  
    {
        minindex = i ;
        
        for(int j=i+1 ; j<n; j++)
        {
            if(arr[j] < arr[minindex])
            {
                minindex = j;
               
            }
            
             
        }
        
        count++;
        
        //swaping
                int temp;
                temp = arr[i];
                arr[i] = arr[minindex];
                arr[minindex] = temp;
    }
    
    //printing the array
    
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    printf("total count is %d", count);
}

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof arr/ sizeof arr[0] ;
    
    selectionSort(arr, n) ;

    return 0;
}