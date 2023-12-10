// Sortowanka.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

using namespace std;

void bubblesort() {
    int i, j,temp,k=9;
    int ileKrok = 0;
    int a[10] = { 10,2,0,43,12, -3, 8,9,13, 1 };
    cout << "Input list ...\n";
    for (i = 0; i < 10; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
    for (i = 0; i < 10; i++) {
        for (j = 0; j < k; j++)
        {
            cout << "krok "<<ileKrok <<": " << a[j] << " " << a[j + 1] << endl;
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
            ileKrok++;
            
        }
        k--;
    }
    cout << "Sorted Element List ...\n";
    for (i = 0; i < 10; i++) {
        cout << a[i] << "\t";
    }
    
}

void selectionsort() {
    int i, j, temp,kroki=0;
    int a[10] = { 10,2,0,43,12, -3, 8,9,13, 1 };
    for (i = 9; i >= 0; i--) {
        for (j = i - 1; j >= 0; j--) {
            cout << "krok nr "<< kroki<< ": "<<a[j] << " " << a[i] << endl;
            if (a[j] > a[i]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            kroki++;
        }
    }
    cout << "Sorted Element List . . . \n";
    for (i = 0; i < 10; i++) {
        cout << a[i] << " \t ";
    }

}


void insertionSort() {
    int i, j, temp, kroki = 0;
    int a[10] = { 10,2,0,43,12, -3, 8,9,13, 1 };
   
    for (i = 1; i < 10; i++) {
        if (a[i] < a[i - 1]) {
            j = i-1;
            while (a[j] > a[i]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
                j--;
            }
        }
    }
    cout << "Sorted Element List . . . \n";
    for (i = 0; i < 10; i++) {
        cout << a[i] << " \t ";
    }
}

int main()
{
    //bubblesort();
    //selectionsort();
    insertionSort();
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
