#include <math.h>
#include <iostream>
#include <locale.h>
using namespace std;


  int main()
{
    setlocale(LC_ALL, "Rus");
    //задание №1
    double a;
    cout<<"введите значение угла в градусах:";
    cin>>a;
    cout<<"значение угла в радианах:"<<a*3.14/180<<endl;
    //задание №2
    double b;
    cout<<"введите значение угла в радианах:";
    cin>>b;
    cout<<"значение угла в градусах:"<<b*180/3.14<<endl;
    //задание №3
    double A,X,Y;
    cout<<"введите количество конфет в КГ:";
    cin>>X;
    cout<<"введите стоимость этого количества конфет в рублях:";
    cin>>A;
    cout<<"введите любое другое количество конфет в КГ:";
    cin>>Y;
    cout<<"1кг этих конфет стоит:"<<A/X<<endl;
    cout<<Y<<"кг конфет стоит:"<<A/X*Y<<endl;
    //задание №4
    double V1,V2,S,T;
    cout<<"введите скорость первого автомобиля:";
    cin>>V1;
    cout<<"введите скорость второго автомобиля:";
    cin>>V2;
    cout<<"введите расстояние между автомобилями:";
    cin>>S;
    cout<<"введите сколько прошло времени:";
    cin>>T;
    cout<<"расстояние между автомобилями:"<<S+V1*T+V2*T<<endl;
   //задание №5
   double A1,B1;
   cout<<"введите значение А(A не равен 0):";
   cin>>A1;
   cout<<"введите значение B:";
   cin>>B1;
   cout<<"в уравнение A·x+B=0 x="<<-B1/A1<<endl;
   //задание №6
   double a1,b1,c1,a2,b2,c2;
   cout<<"введите значение A1:";
   cin>>a1;
   cout<<"введите значение B1:";
   cin>>b1;
   cout<<"введите значение C1:";
   cin>>c1;
   cout<<"введите значение A2:";
   cin>>a2;
   cout<<"введите значение B2:";
   cin>>b2;
   cout<<"введите значение C2:";
   cin>>c2;
   cout<<"в уравнениях A1·x + B1·y = C1,A2·x + B2·y = C2,x="<<(c1*b2 - c2*b1)/(a1*b2 - a2*b1) <<"y="<< (a1*c2 - a2*c1)/(a1*b2 - a2*b1) <<endl;
    
}