#include <stdio.h>
#include <locale.h>

void ImieNazwisko(){
    printf("Dawid Lewanodwski");
    printf("Dawid\nLewanodwski");
    printf("Dawid\n");
    printf("Lewandowski\n");

}
void SumaPierwszych3(){
    printf("Suma pierwszych 3: %d \n",31+29+31);
}
void SumaPierwszych10(){
    int suma=0;
    for(int i=1;i<=10;i++){
        suma+=i;
    }
    printf("Suma pierwszych 10: %d \n", suma);
}

void IlorazPierwszych10(){
    int Iloraz =1;
    for(int i=1;i<=10;i++){
        Iloraz=Iloraz*i;
    }
    printf("Iloraz pierwszych 10: %d \n", Iloraz);
}

void StanKonta(){
    double Stan=1000;
    for(int i=1;i<=3;i++)
    {
        Stan=Stan*1.06;
        printf("Stan konta po %d roku: %f \n", i, Stan);
    }
}

void ZnakProgramowanie(){
    char i = 191;
    printf("+---------------+ \n");
    printf("| Programowanie | \n");
    printf("+---------------+ \n");
}

void Twarz(){
    printf("   ///// \n");
    printf("  +\"\"\"\"\"+ \n");
    printf(" (| o o |) \n");
    printf("   | ^ | \n");
    printf("  | '-' | \n");
    printf("  +-----+ \n");
}

void ImieNazwisko2(){
    printf("****                                    *     *                \n");
    printf("*    *                          *       *     *                \n");
    printf("*    *                                  *     *               \n");
    printf("*    *    ***   *            *  *   *****     *       *****    *            *     ***  \n");
    printf("*    *      *   *            *  *  *    *     *      *     *   *            *       * \n");
    printf("*    *   ****   *      *     *  *  *    *     *      *******   *      *     *    **** \n");
    printf("*    *  *   *    *    * *   *   *  *    *     *      *          *    * *   *    *   * \n");
    printf("*    *  *  **     *  *   * *    *  *    *     *      *     *     *  *   * *     *  ** \n");
    printf("****    *** *      *      *     *   *****     *****   *****       *      *      *** *\n");

}

void ImitacjaObrazu(){

    printf("@@@@@@||*************************\n");
    printf("@@@@@@||*************************\n");
    printf("@@@@@@||*************************\n");
    printf("@@@@@@||*************************\n");
    printf("||||||||*************************\n");
    printf("||||||||*************************\n");
    printf("@@@@@@||*************************\n");
    printf("@@@@@@||*************************\n");
    printf("@@@@@@||*************************\n");
    printf("@@@@@@||*************************\n");
    printf("|||||||||||||||||||||||||||||||||\n");
    printf("&&&&&&||@@@@@@@@@@@@@@@@||@@@@@@@\n");
    printf("&&&&&&||@@@@@@@@@@@@@@@@|||||||||\n");
    printf("&&&&&&||@@@@@@@@@@@@@@@@||#######\n");

}

void RysowanieDomu(){
    printf("      + \n");
    printf("     + +\n");
    printf("    +   +\n");
    printf("   +-----+\n");
    printf("   | .-. |\n");
    printf("   | | | |\n");
    printf("   +-+-+-+\n");
}

void ZwierzeWcaleNiePodobne(){
    printf(" /\\_/\\ -----\n");
    printf("( ' ' ) / Hello \\ \n");
    printf("(  -  ) < Junior |\n");
    printf(" | | |  \\ Coder!/\n");
    printf("(__|__) -----\n");
}

void Nazwiska(){
    printf("Nowak \nSzostakowski \nBiedron \n");
}

void limeryk(){
    setlocale(LC_CTYPE, "Polish");
    printf("Pewien dzialacz imieniem Mao \nnarozrabial w Chinach niemao. \nDobrze o nim pisao\nusluzne ,,Zenmin Zypan'',\nbo sie bardzo tego Mao bao.\n");
}

void ZmiennaPrzecinkowa(){
    float liczba;
    scanf("%f", &liczba);
    if(liczba >=0) printf("%f\n",liczba);
    else printf("%f\n",liczba*-1);

}
int main() {
    // Sekwencyjne Wczytywanie
   // ImieNazwisko();
   // SumaPierwszych3();
   // SumaPierwszych10();
   // IlorazPierwszych10();
   // StanKonta();
   // ZnakProgramowanie();
   // Twarz();
   // ImieNazwisko2();
   //ImitacjaObrazu();
   //RysowanieDomu();
   //ZwierzeWcaleNiePodobne();
   //Nazwiska();
   //limeryk();
   //Proste Obliczenia
   ZmiennaPrzecinkowa();
    return 0;
}
