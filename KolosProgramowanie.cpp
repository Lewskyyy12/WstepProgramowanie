// KolosProgramowanie.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//


#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;


void typyZmiennoprzecinkowe() {
    double pi_double = 3.14159265358979323846264338;
    float pi_float = 3.14159265358979323846264338;
    //printf(" 3.14159265358979323846264338\ n");
    printf(" double :%1.26lf\n", pi_double);
    printf(" float :%1.26f\n", pi_float);

}

void ktoraWieksza(int a, int b, int c) {
    switch (c)
    {
    case 0:
        if (a >= b) cout << a;
        else cout << b;
        break;
    case 1:
        if (a <= b) cout << a;
        else cout << b;
        break;
    default:
        cout << "nie ma takiej opcji!" << endl;
        break;
    }
    }

void wczytajWypisz() {
    int a, b, c;
    cout << "Podaj dwie liczby: ";
    cin >> a >> b;
    cout << "0-wieksza" << endl << "1-mniejsza:";
    cin >> c;
       ktoraWieksza(a, b, c);
}


void trojkaPitagorejska() {
    cout << "Podaj 3 do trojki: ";
        int a, b, c;
    cin >> a >> b >> c;
    if ((pow(a, 2) == pow(b, 2) + pow(c, 2) || pow(b, 2) == pow(a, 2) + pow(c, 2)) || pow(c, 2) == pow(a, 2) + pow(b, 2)) cout << "stanowi trojke" << endl;
    else cout << "nie stanowi" << endl;
}

int main()
{
    //typyZmiennoprzecinkowe();
    //wczytajWypisz();
    trojkaPitagorejska();
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
