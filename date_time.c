
#include <stdio.h>
#include "header.h"

/*Checkin if the year is a leap year or not */
int isLeapYear(int year)
{
    if(year%4==0)
    {
    if(year%400==0)
    return 1;
    if(year%100==0)
    return 0;
    }
    else
    return 0;
}


int getDateFromString(char Input[], TDate *Date)
{
int i,dotc=0;
int j =0;
char buff[20];
char t;
*buff = '\0';
TDate temp;

for (i=0;i<19;i++)
        {
            if(Input[i]!='.'&&Input[i]!='\0')

            {
            buff[j]=Input[i];

            j++;
            }


             if(Input[i]=='.')
            {

             if(dotc==0)
                {
                    temp.Day=atoi(buff);



                }

                if(dotc==1)
                {
                    temp.Month=atoi(buff);




                }

                    *buff = '\0';
                    dotc++;
                    j=0;

            }
             if(Input[i]=='\0')
            { if(dotc==2)
            {
                    temp.Year=atoi(buff);
                   *buff = '\0';
                    dotc=0;
                                }
                 break;
            }


        }
        if(isDateValid(temp))
            {
                *Date=temp;
         return 1;
            }
        return 0;
}

/*Ueberprüt ob das angegebene Datum (Parameter Struktur TDate mit Tag, Monat und Jahr) ein gültiges Datum ist*/
int isDateValid(TDate temp )
{
    int month[]={0,31,29,31,30,31,30,31,31,30,31,30,31};

    if(temp.Month<=12&&temp.Day<=month[temp.Month]&&temp.Month!=2)

    {
            printf("%d\n",month[temp.Month]);
        return 1;
    }
     if(temp.Month==2&&temp.Day<29)
    {printf("nooot interestinleeeep\n");
       return 1;
    }
    if(temp.Month==2&&temp.Day==29)
    { printf("leeeep\n");
        return isLeapYear(temp.Year);
    }
        else return 0;
}

























































