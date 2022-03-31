/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
 void mergesort(int a[],int l,int h) ;
 void merge(int a[],int l,int mid ,int h);
int temp[10] ;
int main()
{
    int n;
    int a[100] ;
    printf("Enter the number of elements\n") ;
    scanf("%d",&n) ;
    
    int i;
    printf("Enter the elements of the array\n") ;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]) ;
    }
    mergesort(a,0,n-1) ;
    printf("Sorted elements\n") ;
    for(int i=0;i<n;i++)
    {
        printf ("%d\n",a[i]) ;
    }
    
}
void mergesort(int a[],int l,int h)
{
    int mid ;
    if(l<h)
    {
        mid =(l+h)/2;
        mergesort(a,l,mid) ;
        mergesort(a,mid+1,h) ;
        merge(a,l,mid,h) ;
    }
}
void merge(int a[],int l,int mid ,int h)
{
    int i=l;
    int j =mid+1 ;
    int k ;
    int index = l ;
    while(i<=mid && j<=h)
    {
        if(a[i] < a[j])
        {
            temp[index++] = a[i++] ;
        }
        else
        {
            temp[index++] = a[j++] ;
        }
    }
    while(i<=mid)
    {
        temp[index++] = a[i++] ;
    }
    while(j<=h)
    {
        temp[index++] =a[j++] ;
    }
    for(i=l;i<=h;i++)
    {
        a[i]=temp[i] ;
    }
    
}





