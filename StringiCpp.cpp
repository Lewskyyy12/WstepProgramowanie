// StringiCpp.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <string>

using namespace std;

void wypisz(string a, string b) {
    cout << a << " " << b << endl;
}

void doZadania2(string napis, int ile_razy) {
    for (int i = 0; i < napis.length(); i++) {
        if (napis[i] == 'a' || napis[i]=='b') {
            napis[i]=napis[i] - 32;
            ile_razy++;
        }

        
    }
    
    if (napis.length() % 2 == 1) {
        int srodek = napis.length()/2;
        if (napis[srodek] != 'B' && napis[srodek] != 'A') {
            napis[srodek] = napis[srodek] - 32;
            ile_razy++;
        }
    }
    cout << napis << " " << ile_razy;
}

void zadanie2() {
    string napis;
    int ile_razy = 0;
    cin >> napis;
    doZadania2(napis,ile_razy);
    
}

void ppa() {
    string wczytaj;
    cin >> wczytaj;
    for (int i = 0; i < wczytaj.length(); i++) {
        if (wczytaj[i] >= 65 && wczytaj[i] <= 90) wczytaj[i] = wczytaj[i] + 32;
    }
    cout << wczytaj;
}

void anagram() {
    string wyraz;
    cin >> wyraz;
    string wyraz2=wyraz;
    for(int i = 0; i < wyraz.length(); i++) {
        wyraz[i] = wyraz2[wyraz2.length()-i-1];
    }
    cout << wyraz;
}

void czyPalindrom() {
    string wyraz;
    cin >> wyraz;
    bool czyPalindrom = true;
    for (int i = 0; i < wyraz.length(); i++) {
        if (wyraz[i] != wyraz[wyraz.length() - 1 - i]) {
            czyPalindrom = false;
            cout << "Nie jest";
            break;
        }
    }
    if(czyPalindrom == true) cout << "jest" << endl;
}

void zadanie3() {
   // ppa();
   // anagram();
   // czyPalindrom();
}
void zadanie4() {
    string zdanie="W Roku Panskim 1345, wladca Henryk 12, na rzecz swoich 143209 poddanych uchwalil dekret o 20 procentowej zni»ce podatków";
    int suma = 0, wyluskiwana = 0;
    for (int i = 0; i < zdanie.length(); i++) {
        if (i > 0 && i < zdanie.length() - 2) {
            if ((zdanie[i - 1] > 47 && zdanie[i - 1] < 58) && (zdanie[i] > 47 && zdanie[i] < 58) && (zdanie[i + 1] >= 58 || zdanie[i + 1] <= 47)) {
                wyluskiwana = wyluskiwana * 10;
                wyluskiwana = wyluskiwana + zdanie[i] - 48;
                suma = suma + wyluskiwana;
                wyluskiwana = 0;
                
            }
            if ((zdanie[i] >47 &&  zdanie[i] < 58) && (zdanie[i + 1] > 47  && zdanie[i + 1] < 58)) {
                wyluskiwana = wyluskiwana * 10;
                wyluskiwana = wyluskiwana + zdanie[i] - 48;
            }
            if ((zdanie[i - 1] >= 58 || zdanie[i - 1] <= 47) && (zdanie[i] > 47 && zdanie[i] < 58) && (zdanie[i + 1] >= 58 || zdanie[i + 1] <= 47)) {
                wyluskiwana = zdanie[i] - 48;
                cout << wyluskiwana;
                suma += wyluskiwana;
                wyluskiwana = 0;
            }
        }
    }
    cout << suma;
}



int main()
{
    string IN = "DawidLewandowski";
    string Imie, Nazwisko;
    Imie=IN.substr(0, 5);
    Nazwisko=IN.substr(5, 12);
    wypisz(Imie, Nazwisko);
    swap(Imie, Nazwisko);
    wypisz(Imie, Nazwisko);
    cout << Imie[0] << Nazwisko[0] << endl;
    char pomocnicza = Imie[0];
    Imie[0] = Nazwisko[0];
    Nazwisko[0] = pomocnicza;
    wypisz(Imie, Nazwisko);

    //zadanie2();
    //zadanie3();
    zadanie4();
    


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
