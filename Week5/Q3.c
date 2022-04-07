#include<stdio.h>
int main()
{
    int m , n , o;
    printf("Enter the size of m & n\n");
    scanf("%d %d",&m,&n) ;
    
    int a[m] , b[n] ;
    
    o=(m>n)?m:n ;
    
    int res[o] ;
    //Taking input elements
    printf("Enter the elements of list 1\n") ;
    for(int i=0;i<m;i++)
    {
        scanf("%d",&a[i]) ;
    }
    
    printf("Enter the elements of list 2\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&b[i]) ;
    }
    
    //List of common elements 
    printf("Common elements are:\n") ;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i] == b[j])
            {
               printf("%d\n",a[i]) ;
            }
        }
    }
    
    return  0;
}