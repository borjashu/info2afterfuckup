#include <stdio.h>
#include "datastructure.h"
   /***************************************************************************
    *  isLeapYear
    *  Ueberprüt ob ein es ein Schaltjahr ist
    *  Parameter: year
    *
    *  Ergebnis : Erg: Gibt ein int wert aus.(Nein = 0 | Ja = 1)
    ***************************************************************************/

//int isLeapYear(int year);

   /***************************************************************************
    *  getDateFromString
    *  Ueberprüt ob das angegebene Datum (Parameter Struktur TDate
    *  mit Tag, Monat und Jahr) ein gültiges Datum ist,zerlegt das Datumund speichert es.
    *  Parameter: Input,Date
    *
    *  Ergebnis : Erg: Gibt ein int wert aus.(Nein = 0 | Ja = 1)
    ***************************************************************************/

int getDateFromString(char Input[], TDate *Date);
