#include <math.h>
#include <iostream>
#include <locale.h>
using namespace std;


  int main()
{
    setlocale(LC_ALL, "Rus");
//задание №1
    int A,B;
    cout<<"команда выводит все целые числа от A до B включительно;"<<endl;
    cout<<"при этом каждое число должно выводиться столько раз, каково его значение "<<endl;
    cout<<"Введите A: ";
    cin>>A;
    cout<<"Введите B: ";
    cin>>B;
    for(int i=A;i<=B;i++)
     for(int j=1;j<=i;j++)
     cout<<i<<endl;
//задание №2
    int a,b;
    cout<<"На отрезке длины A размещено максимально возможное количество отрезков длины B"<<endl;
    cout<<"Введите A: ";
    cin>>a;
    cout<<"Введите B: ";
    cin>>b;
    int x=a;
    while (x-b>=0)
        x-=b;
    cout<<"длина незанятой части отрезка A: "<<x<<endl;
//задание №3 
    int N,K=0;
    cout<<"Введите целое число N (>1): ";
    cin>>N;
    int s=0;
    while(s<N)
    {
       K++;
       s+=K;   
    }
    cout<<"Наименьшее из целых чисел K, для которых сумма 1+2+...+K будет больше или равна N: "<<"K="<<K<<endl;
    cout<<"сумма: "<<s<<endl;
//задание №4
    double p,s1=1000;
    int k=0;
    cout<<"Начальный вклад в банке равен 1000 руб."<<endl;
    cout<<"Через каждый месяц размер вклада увеличивается на P процентов от имеющейся суммы"<<endl;
    cout<<"введите значение P: ";
    cin>>p;
    while(s1<1100)
    {
        k++;
        s1+=s1*p/100;
    }
    cout<<"через "<<k<<" месяцев размер вклада превысит 1100 руб."<<endl;
    cout<<"итоговый размер вклада:"<<s1<<endl;
//задание №5
    int a1,b1;
    cout<<"Введите A: ";
    cin>>a1;
    cout<<"Введите B: ";
    cin>>b1;
    while ((a1!=0)&&(b1!=0)) 
    {
       if (a1>b1)
       a1=a1%b1;
       else
       b1=b1%a1;
    }
    cout<<"наибольший общий делитель: "<<a1+b1<<endl;
//задание №6
    int n,f1=1,f2=1,f=0,k1=2;
    cout<<"Введите целое число N (>1),являющееся числом Фибоначчи: N = FK : ";
    cin>>n;
    while (f < n) {
        k1++;
        f=f2+f1;
        f2=f1;
        f1=f;
    }
    cout << "k:" << k1;
  
 }