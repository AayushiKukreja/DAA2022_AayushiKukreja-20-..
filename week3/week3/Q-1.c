/* WAP to implement bubble sort and find the number of comparisons */
#include<stdio.h>
int main()
{
    int n,temp,count=0 ;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    //bubble sort 
    
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            count++ ;
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp ;
            }
        }
    }
    //after sorting 
    printf("Number of comparisons in this sort is: %d\n",count);
    for(int i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}