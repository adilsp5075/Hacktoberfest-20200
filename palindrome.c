#include <stdio.h>
#include <string.h>
void pal(char[],char[]);
int main()
 {
     char a[50],b[50];
     printf("\nEnter the word: ");
     scanf("%s",&a);
     pal(a,b);
  return 0;
   }

void pal(char a[],char b[])
 {
  int i,d,rev,c=1;
  while(a[c] != '\0')
     {c++;}
    d=c-1;
  for(rev=0;rev<c;rev++)
   {b[rev]=a[d];
    d--;}
   printf("\nThe reversed word is: %s",b);

    i=strcmp(a,b);
    if(i==0)
      {printf("\nThe word is a palindrome\n\n");}
    else
      {printf("\nThe word is not a palindrome\n\n");}
   }

