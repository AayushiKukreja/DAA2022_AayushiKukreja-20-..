/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void QuickSort(int a[], int lb , int ub);
int partition(int a[],int lb,int ub);
void swap(int *a , int *b);
int main()
{
int n,ub,lb ;
printf("Enter the number of elements in the array\n") ;
scanf("%d",&n) ;
int a[n] ;
printf("Enter the elements of the array\n") ;
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i] );
}

QuickSort(a,0,n-1) ;
printf("Elements after sorting\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }

return 0;
}


void QuickSort(int a[] , int lb , int ub)
{
    int loc ;
    if(lb<ub)
    {
        loc = partition(a,lb,ub) ;
        QuickSort(a,lb,loc-1) ;
        QuickSort(a,loc+1,ub) ;
    }
}

void swap(int *a, int *b) {
    
  int t = *a;
  *a = *b;
  *b = t;

}

int partition(int a[],int lb,int ub)
{
    
    int start = lb ;
    int end = ub ;
    int pivot=a[lb] ;
    
    while(start < end)
    {
        while(a[start] <= pivot)
        {
            start++ ;
        }
        while(a[end]> pivot)
        {
            end -- ;
        }
        
        if(start < end)
        {
            swap(&a[start],&a[end]) ;
        }
    }
    
    
    
    swap(&a[lb],&a[end]) ;
    
    return end ;
}
