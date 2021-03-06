#ifndef TOOLS_H_INCLUDED
#define TOOLS_H_INCLUDED

    /***************************************************************************
    *  clearBuffer
    *  L�scht den Tastaturpuffer!
    *  Parameter: keine
    *
    *  Ergebnis : nichts
    ***************************************************************************/
    void clearBuffer();

     /***************************************************************************
    *  askAgain
    *  Fragt den Anwender ob das Programm wiederholt werden soll.
    *  Parameter: keine
    *
    *  Ergebnis : Erg: Gibt ein int wert aus.(Nein = 0 | Ja = 1)
    ***************************************************************************/
    int askYesOrNo();

    /***************************************************************************
    *  clearScreen
    *  L�scht die ausgabe
    *  Parameter: keine
    *
    *
    ***************************************************************************/
    void clearScreen();

#endif // TOOLS_H_INCLUDED
