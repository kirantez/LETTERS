#include <stdio.h>
#include <stdlib.h>
int main()
{
  char array[5000];
  int array_2[5000];
  int i=0;
  printf("Enter the word\n");
  fgets(array,5000,stdin);
  while (array[i]!= '\0')
  {
     array_2[i]=(int)array[i];
     if(array_2[i]>=65 && array_2[i] <=90)
	  printf("%c",array_2[i]);
      i++;
  }
	  printf("\n");
} 
