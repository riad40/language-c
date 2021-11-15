#include <stdio.h>
#include <math.h>
int main(){
    
   int note;
    
   printf("Tapez la note : ");
   scanf("%d", &note);
   
   if ( note >= 10 && note < 12){
        printf("Passable");   
   }
   else if ( note >= 12 && note < 14){
        printf("Assez bien"); 
   }
   else if (note >= 14 && note < 16){
        printf("Bien");
   }
   else{
        printf("Très bien");
  }
   return 0;
}   
