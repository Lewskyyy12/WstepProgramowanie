#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;

void zadanie1(){

    int age;
std::cin >> age;
if( age >= 18 && age <=100 ){
std::cout << "Authorization accepted." << std::endl;
std::cout << "And what do you want?" << std::endl;
}
else
std::cout << "End" << std::endl;
}
void zadanie2(){
int age;
cin >> age;
if( age < 18 )
std::cout << "Authorization declined" << std::endl;
else
std::cout << "Authorization accepted" << std::endl;
std::cout << "End" << std::endl;
}

void NWD(int a, int b){
   while (a != b) {
        if(a > b)
            a = a - b;
        else
            b = b - a;
    }
    cout <<a<<endl;
    }
void NWW(int a, int b){
    while (b != 0) {
        int pom = b;
        b = a % b;
        a = pom;
    }
    cout << a << endl;
    }
void zadanie3(){
    int a,b,program;
    cin >> a >>b >>program;
    switch(program){
case 0:
    NWD(a,b);
    break;
case 1:
    NWW(a,b);
    break;
default:
    cout << "Error"<< endl;
    break;
    }
}

void zadanie4(){
    int a,b,c;
    cin >>a>>b>>c;
    if(a==b || a==c || b==c || c==b ) printf("Liczby nie stanowia trojke pitagorejska");
    else if(a>b && a >c) pow(a,2)==pow(b,2)+pow(c,2) ? printf("Liczby stanowia trojke pitagorejska") : printf("Liczby nie stanowia trojke pitagorejska");
    else if(b>a && b>c) pow(b,2)==pow(a,2)+pow(c,2) ? printf("Liczby stanowia trojke pitagorejska") : printf("Liczby nie stanowia trojke pitagorejska");
    else if(c>a && c>b) pow(c,2)==pow(b,2)+pow(a,2) ? printf("Liczby stanowia trojke pitagorejska") : printf("Liczby nie stanowia trojke pitagorejska");

}

double convert(int t, char u){
    if(u=='c') return ((t*9/5.0)+32.0);
    if(u=='f') return ((t-32.0)*5/9.0);
}

void zadanie5(){
    int liczba;
    cin >> liczba;
    char znak;
    cin >> znak;
   double wynik= convert(liczba,znak);
   znak=='c' ? cout << wynik <<"F"<< endl : cout << wynik<<"C" << endl;
}

int main()
{
   // zadanie1();
   // zadanie2();
  //  zadanie3();
   zadanie4();
   //   zadanie5();

    return 0;
}
