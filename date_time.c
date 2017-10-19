
#include <stdio.h>
#include "header.h"

/**************************************************
 *  Checkin if the year is a leap year or not
**************************************************/
int isLeapYear(int year)
{
    if(year%4==0)
    {
        if(year%400==0) return 1;
        if(year%100==0) return 0;
    }

    else return 0;
}

/**************************************************
 *  liest aus einer Zeichenkette die Tag, Monat
 *  und Jahr und speichert diese – sofern sie eine
 *  gültige Datum bilden – in der Datestruktur.
**************************************************/

int getDateFromString(char Input[], TDate *Date)
{
    int i,dotc=0;
    int j =0;
    char buff[20];
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
            {
                if(dotc==2)
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

/**************************************************
 *  Ueberprüt ob das angegebene Datum
 *  (Parameter Struktur TDate mit Tag,
 *  Monat und Jahr) ein gültiges Datum ist
**************************************************/
int isDateValid(TDate temp )
{
    int month[]={0,31,29,31,30,31,30,31,31,30,31,30,31};

    if(temp.Month<=12&&temp.Day<=month[temp.Month]&&temp.Month!=2)
    {
        return 1;
    }

     if(temp.Month==2&&temp.Day<29)
    {
       return 1;
    }

    if(temp.Month==2&&temp.Day==29)
    {
        return isLeapYear(temp.Year);
    }

    else return 0;
}

/***************************************************
 *  liest aus einer Zeichenkette die Stunden, Minuten
 *  und Sekunden und speichert diese – sofern sie eine
 *  gültige Uhrzeit bilden – in der Zeitstruktur.
***************************************************/

int getTimeFromString(char Input[], TTime *Time)
{
int i,dotc=0;
int j =0;
char buff[20];
*buff = '\0';
TTime temp;

for (i=0;i<19;i++)
        {
            if(Input[i]!=':'&&Input[i]!='\0')

            {
                buff[j]=Input[i];
                j++;
            }


             if(Input[i]==':')
            {

                if(dotc==0)
                {
                    temp.Hour=atoi(buff);
                }

                if(dotc==1)
                {
                    temp.Minute=atoi(buff);
                }

                *buff = '\0';
                dotc++;
                j=0;
            }

                if(Input[i]=='\0')
                {
                    if(dotc==2)
                    {
                        temp.Second=atoi(buff);
                        *buff = '\0';
                        dotc=0;
                    }

                 break;
            }
        }

        if(isTimeValid(temp))
            {
                *Time=temp;
                return 1;
            }

    return 0;
}

/**************************************************
 *   Ueberprüt ob das angegebene Zeit
 * (Parameter Struktur TTime mit Stunden,
 *   Minuten und Sekunden) ein gültiges Zeit ist
 **************************************************/
int isTimeValid(TTime temp )
{
    if(temp.Hour<=24&&temp.Minute<=60&&temp.Second<=60) return 1;
    else return 0;
}















































