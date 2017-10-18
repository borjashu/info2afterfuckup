#include <stdio.h>
#include "tools.h"
#define clear() printf("\033[H\033[J")
void clearBuffer()
{
    char dummy;

    do
    {
        scanf("%c",&dummy);
    } while (dummy != '\n');
}

int askYesOrNo()
{
    int Erg,
        Eingabe;
    char ans;

    do
    {
      do
      {
         printf("\nMoechten Sie noch einmal (j/n) ? ");
         Eingabe = scanf("%c",&ans);
         if (ans != '\n')
            clearBuffer();
      } while (!Eingabe);
         if ( (ans=='j') || (ans == 'J') )
         {
            Erg = 1;
         }else if ((ans== 'n') || (ans=='N'))
         {
            Erg = 0;
         }else
         {
            Erg = 2;
         }
    } while (Erg == 2);
    return Erg;
   }

   void clearScreen()
   {
    clear();
    }
