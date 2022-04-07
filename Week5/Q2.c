#include<stdio.h>
int main()
{
    int n,temp,key,flag=0 ;
    printf("Enter the size of array\n") ;
    scanf("%d",&n) ;
    int a[n] ;
    printf("Enter the key\n") ;
    scanf("%d",&key) ;
    printf("Enter the elements of the array\n") ;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]) ;
    }
    
//sorting 

for(int i=0;i<n-1;i++)
{
    for(int j=0;j<n-1-i;j++)
    {
        if(a[j] > a[j+1])
        {
            temp = a[j] ;
            a[j] = a[j+1] ;
            a[j+1]=temp;
        }
    }
} 

//check if sum==key

for(int i=0;i<n;i++)
{
 for(int j=i+1;j<n;j++)
 {
     if(a[i]+a[j]==key)
     {
         printf("Elements are:i=%d & j= %d",i,j);
         flag=1 ;
         break;
     }
 }
}
if(flag=0)
{
    printf("key not found\n") ;
}
return 0;
}