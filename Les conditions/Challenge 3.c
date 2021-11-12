#include <stdio.h>
#include <math.h>
 
int main()

{
   int nbr;
   
   printf("Tpez un entier:\n");
   scanf("%d", &nbr);
   
   if (nbr % 2 == 0)
      printf("paire\n");
   else
      printf("impaire\n");
     
   return 0;
}

