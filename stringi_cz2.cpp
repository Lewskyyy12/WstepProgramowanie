// stringi_cz2.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>

using namespace std;

void cwiczenie1() {
    char tablica[10] = { 'n','i','p','a','r','z','y','s','t','y' };
    for (int i = 1; i < 10; i = i + 2) cout << tablica[i]; 
    printf(" \n");


    int tab[10]= { 0,1,2,3,4,5,6,7,8,9};
    for (int i = 1; i < 10; i = i + 2) cout << tab[i];
    printf(" \n");


    double tabdouble[10] = { -0.21,0.43,-32.354,21.43,21.345,-74.122,76.34,-44.31,-32.6,43.231 };
    for (int i = 0; i < 10; i++) cout << fabs(tabdouble[i]) << " ";
    printf("\n");


    string tabstring[5] = { "ala","koala","zdanie","wymysly","tescik" };
    for (int i = 0; i < 5; i++) cout << tabstring[i] << " : " << tabstring[i].length() << endl;
    printf("\n");
    
}

void cwiczenie2() {
    const int N = 4;
    int tab[N] = { 1,2,3,5 };
    int tab2[N] = { 3,5,8,2 };
    int tab3[N];
    for (int i = 0; i < N; i++) {
        tab3[i] = tab[i] + tab2[i];
        cout << tab[i] << " + " << tab2[i] << " = " << tab3[i] << endl;
    }
}

void cwiczenie3() {
    int macierzR[4][4];
    int macierzC[4][4];
    int macierzW[4][4];
    cout << "Podaj macierz R 4x4" << endl;
    for (int i = 0; i < 4; i++) {
        for (int x = 0; x < 4; x++) {
            cin >> macierzR[i][x];
        }
    }
    cout << "Podaj macierz C 4x4" << endl;
    for (int i = 0; i < 4; i++) {
        for (int x = 0; x < 4; x++) {
            cin >> macierzC[i][x];
        }
    }
    cout << "Wynik dodawania macierzy" << endl;
    for (int i = 0; i < 4; i++) {
        for (int x = 0; x < 4; x++) {
            macierzW[i][x] = macierzR[i][x] + macierzC[i][x];
            cout << macierzW[i][x] << " ";
        }
        printf("\n");
    }
    cout << "Wynik mnozenia macierzy" << endl;
    for (int i = 0; i < 4; i++) {
        for (int x = 0; x < 4; x++) {
           // macierzW[i][x] = macierzR[i][x] * macierzC[i][x] + macierzR[i + 1][x] * macierzC[i + 1][x] + macierzR[i + 2][x] * macierzC[i + 2][x] + macierzR[i + 3][x] * macierzC[i + 3][x];
        }
        printf("\n");
    }
}


    void cwiczenie4() {

        double tabdouble[10] = { -0.21,0.43,-32.354,21.43,21.345,-74.122,76.34,-44.31,-32.6,43.231 };
        double wynik=0;
        for (int i = 0; i < 10; i++) wynik = wynik+tabdouble[i];
        cout << wynik << endl;
    }

    void cwiczenie5() {
        int tab[15] = { 1,57,3,47,6,54,23,4,57,32,11,47,45,1,23 };
        int mmax = tab[0];
        int mmax_index = 0;
        for (int i = 0; i < 15; i++) {
            if (tab[i] > mmax) {
                mmax = tab[i];
                mmax_index = i;
            }
        }
            cout << "Najwieksza: " << mmax << endl << "index: " <<  mmax_index << endl;
    }


int main()
{
    //cwiczenie1();
    //cwiczenie2();
   // cwiczenie3();
   // cwiczenie4();
    cwiczenie5();


}
