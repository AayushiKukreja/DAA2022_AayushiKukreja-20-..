/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<limits.h>
int main()
{
   char string[100];
   int freq[26] ;
   int max = INT_MIN ;
   int temp=0;
   printf("Enter the string\n") ;
   scanf("%s",string) ;
   
   for(int i=0;i<strlen(string);i++)
   {
       int count=1 ;
       for(int j=i+1;j<strlen(string);j++)
       {
           if(string[i]==string[j])
           {
               count++ ;
               string[j]=-1 ;
           }
       }
       
       if(string[i]!=-1)
       freq[i] = count ;
   }
   
   for(int i=0;i<strlen(string);i++)
   {
       if(freq[i]!=-1 && string[i]!=-1)
      {
          if(freq[i] > max)
          {
              max = freq[i] ;
              temp =i;
          }
      }
   }
   
   printf("Maximum occurrence of an element is: %c-%d" , string[temp] , freq[temp]) ;
return 0;
}