#include <math.h>
#include <iostream>
#include <locale.h>
using namespace std;


  int main()
{
    setlocale(LC_ALL, "Rus");
//задание №1
    int A,B,A1;
    cout<<"введите любые два числа. программа поменяет их местами"<<endl;
    cout<<'A'<<' '<<'B'<<endl;
    cin>>A>>B;
    A1=A;
    A=B;
    B=A1;
    cout<<"A="<<A<<' '<<"B="<<B<<endl;
//задание №2
    int a,b,c;
    cout<<"введите любые три числа(A,B,C).программа переместит значения A в B, B — в C, C — в A"<<endl;
    cout<<'A'<<' '<<'B'<<' '<<'C'<<endl;
    cin>>a>>b>>c;
    int c1,b1;
    c1=c;
    b1=b;
    b=a;
    c=b1;
    a=c1;
    cout<<"A="<<a<<' '<<"B="<<b<<' '<<"C="<<c<<endl;
//задание №3
    int a2,b2,c2,c3,b3;
    cout<<"введите любые три числа(A,B,C).программа переместит значения A в C, C — в B, B — в A"<<endl;
    cout<<'A'<<' '<<'B'<<' '<<'C'<<endl;
    cin>>a2>>b2>>c2;
    c3=c2;
    b3=b2;
    c2=a2;
    b2=c3;
    a2=b3;
    cout<<'A'<<'='<<a2<<' '<<'B'<<'='<<b2<<' '<<'C'<<'='<<c2<<endl;
//задание №4
int x,y;
    cout<<"введите X,чтобы узнать значение функции y = 3x^6 − 6x^2 − 7'"<<endl;
    cout<<'X'<<'=';
    cin>>x;
    y = (pow(x,6))*3-x*x*6-7;
    cout<<"Y="<<y<<endl;
//задание №5
    int x1,y1;
    cout<<"введите X,чтобы узнать значение функции y = 4(x−3)^6 − 7(x−3)^3 + 2 "<<endl;
    cout<<'X'<<'=';
    cin>>x1;
    y1 = 4 * pow((x1-3),6)-7* pow((x1-3),3)+2;
    cout<<'Y'<<'='<<y1<<endl;
//задание №6
    int A11,A2;
    cout<<"введите число A,чтобы узнать A^8 "<<endl;
    cout<<"A=";
    cin>>A11;
    A2=A11*A11;//2 степень
    A2=A2*A2;//4 степень
    A2=A2*A2;//8 степень
    cout<<"A^8="<<A2<<endl;
// задание №7
    int A3,A4,A5;
    cout<<"введите число A,чтобы узнать A^15 "<<endl;
    cout<<'A'<<'=';
    cin>>A3;
    A4=A3*A3;//2 степень
    A5=A4*A3;//3 степень
    A4=A4*A5;//5 степень
    A5=A4*A4;//10 степень
    A4=A4*A5;//15 степень
     cout<<"A^15="<<A4<<endl;

}