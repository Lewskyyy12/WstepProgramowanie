#include "stdio.h"
#include "math.h"

int sgn(double x){
    if(x>0) return 1;
    if(x<0) return (-1);
    if(x==0) return 0;

}

double mini(double x, double y){
    if(x<=y) return x;
    else return y;
}

double najmniejsza(double x, double y, double z){
  return mini(z,mini(x,y));

}
double srednia(double x, double y, double z){
    return ((x+y+z)/3);
}
double potega(double x, int n){
    double potegowana=x;
    for(int i=1;i<n;i++){
        potegowana=potegowana*x;
    }
    return potegowana;
}

int pierwsza_cyfra(int n){
    while(n>10){
        n=n/10;
    }
    return n;
}

int ostatnia_cyfra(int n){
    int x = n%10;
    return x;
}

int ile_cyfr(int n){
    int licz=0;
    while(n>10){
        n=n/10;
        licz++;
    }
    return licz+1;
}

double StanKonta(double x, double y, int z){
    return (x*pow((1+(y/100)),z));
}

void liczby_doskonale_mniejsze(){
    int n, suma=0;
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        for(int y=1;y<i;y++) {
            if (i % y == 0) suma += y;

        }
        if(suma==i) printf("%d \n",suma);
        suma=0;
    }

}

int main() {
//    double x;
//    scanf("%lf", &x);
//    printf("%d", sgn(x));
//double x,y,z;
   //scanf("%lf",&x);
   // scanf("%lf",&y);
   // scanf("%lf",&z);
//    printf("%lf", najmniejsza(x,y,z));
//    printf("%lf", srednia(x,y,z));
//   printf("%lf", potega(x,3));
//int n;
    //scanf("%d",&n);
    //printf("Pierwsza cyfra: %d \n", pierwsza_cyfra(n));
    //printf("Ostatnia cyfra: %d \n", ostatnia_cyfra(n));
    //printf("Ilosc cyfr: %d \n", ile_cyfr(n));

   // double stan_konta;
   // double stopa_procentowa;
   // int liczba_lat;
   // scanf("%lf", &stan_konta);
   // scanf("%lf", &stopa_procentowa);
   // scanf("%d", &liczba_lat);
   // printf("Stan konta wynosi: %lf", StanKonta(stan_konta,stopa_procentowa,liczba_lat));
    liczby_doskonale_mniejsze();

}
