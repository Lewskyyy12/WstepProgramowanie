// KolosWstepProgramowanie.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
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


void zliczanieSumy(int a, int b) {
    int suma = 0;
    cout << a << b << endl;
    do {
        if (a % 2 == 1) suma += a;
        a++;
        cout << suma << endl;
    } while (a <= b);
    cout << suma << endl;

}


void sumaLiczbNieparzystych() {
    double a, b;
    cin >> a >> b;
    int a2, b2;
    if (a >= b) {
        b2 = (int)ceil(b);
        a2 = (int)floor(a);
        zliczanieSumy(b2, a2);

    }
    else {
        b2 = (int)floor(b);
        a2 = (int)ceil(a);
        zliczanieSumy(a2, b2);

    }
}

void losowanieLiczb() {
    srand(time(0));
    int losowana = rand() % 101;
    int ileProb = 1,czyLos;
    do {
        cout << "Podaj wylosowana: ";
            cin >> czyLos;
        if (czyLos > losowana) {
            cout << " Losowana jest mniejsza" << endl;
            ileProb++;
        }
        else if (czyLos < losowana) {
            cout << " Losowana jest wieksza" << endl;
            ileProb++;
        }
    } while (czyLos != losowana);
    cout << "Trafiles za " << ileProb << "razem" << endl;
}

int zamien(int &a) {
    return a * -1;
}
void algorytm(int a, int b) {
    do {
        if (a > b)  a = a - b;
        else b = b - a;
    } while (a != b);
    cout << b << endl;

    }

void algorytmEuklidesa() {
    int a, b;
    cin >> a >> b;
    if (a < 0) a=zamien(a);
    if (b < 0) b=zamien(b);
    if (a >= b) algorytm(a, b);
    else algorytm(b, a);

}

void wypisywanieZer() {
    int Liczba,ile5,ile25;
    cin >> Liczba;
    ile5 = Liczba / 5;
    ile25 = Liczba / 25;
    cout << "Liczba 0 wynosi: " << ile5 - ile25 + ile25 * 2;
}

bool sprawdzPierwsza(int a) {
    if (a == 1) return 0;
    for (int i = 2; i <= a / 2; i++) {
        if (a % i == 0) return 0;
    }
    return 1;
}

void czyLiczbaPierwsza() {
    int a;
    cin >> a;
    if (sprawdzPierwsza(a)) cout << "jest liczba pierwsza" << endl;
    else cout << "nie jest liczba pierwsza" << endl;
}

void iloscCyfr() {
    long long liczba;
    int licznik=0;
    cin >> liczba;
    do {
        liczba =liczba/10;
        licznik++;
    } while (liczba > 0);
    
    cout << licznik;
}
long long silniaObliczenia(int a) {
    if (a < 1) return 1;
        return a * silniaObliczenia(a - 1);
}
void silnia() {
    int a;
    cin >> a;
    cout << silniaObliczenia(a) << endl;
}

int main()
{
    //typyZmiennoprzecinkowe();
    //wczytajWypisz();
    //trojkaPitagorejska();
    //sumaLiczbNieparzystych();
    //losowanieLiczb();
    //algorytmEuklidesa();
    //wypisywanieZer();
    //czyLiczbaPierwsza();
    //iloscCyfr();
    //silnia();
    
    


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
