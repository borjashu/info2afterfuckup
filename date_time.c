
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
int k,i,dotc=0;
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
           // printf("%c\n", buff[j]);
            j++;
            }


             if(Input[i]=='.')
            {

             if(dotc==0)
                {
                    temp.Day=atoi(buff);
                    printf("%d\n",temp.Day);
                      //printf("buff:%s \n", buff);


                }

                if(dotc==1)
                {
                    temp.Month=atoi(buff);
                    printf("%d\n",temp.Month);
                 // printf("%d",dotc);
                   // printf("buff:%s \n", buff);


                }

                    *buff = '\0';
                    dotc++;
                    j=0;

            }
             if(Input[i]=='\0')
            { if(dotc==2)
            {
                    temp.Year=atoi(buff);
                   printf("%d\n",temp.Year);
                     printf("buff:%s \n", buff);
                    *buff = '\0';
                    dotc=0;
                                }
                 break;
            }


        }
        return 1;
}

/*Ueberprüt ob das angegebene Datum (Parameter Struktur TDate mit Tag, Monat und Jahr) ein gültiges Datum ist*/
//int isDateValid(char Input)


























































/*
   int day,moth,year,j,i=0;
    char buff[20];
     printf("hujlo");
    for (i=0;i<20;i++)
        {

    v
    buff[j]=Input1[i];
    printf("%s", buff[j]);
            }
        }
        }
   /* else
            {
    i++;
            }
    j++;
        }
    /*if (isDateValid(Input))
    {
    return 1;
    }
    else
    {
    return 0;
    }*/
