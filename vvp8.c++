#include <math.h>
#include <iostream>
#include <locale.h>
using namespace std;


  int main()
{
    setlocale(LC_ALL, "Rus");
    //задание №1
    int a;
    cout<<"введите размер файла в байтах:";
    cin>>a;
    cout<<"количество полных килобайтов:"<<a/1024<<endl;
    //задание №2
    int A,B,K=0;
    cout<<"введите значение большего отрезка:";
    cin>>A;
    cout<<"введите значение меньшего отрезка:";
    cin>>B;
    while(A-B>=0)
    {
        K++;
        A-=B;
    }
    cout<<"количество отрезков B, размещенных на отрезке A:"<<K<<endl;
    //задание №3
    int A1,B1,S=0,A2;
    cout<<"введите значение большего отрезка:";
    cin>>A1;
    cout<<"введите значение меньшего отрезка:";
    cin>>B1;
    A2=A1;
    while(A1-B1>=0)
    {
        S+=B1;
        A1-=B1;
    }
    cout<<"длина незанятой части отрезка A:"<<A2-S<<endl;
    //задание №4
    int x,x1,x2;
    cout<<"введите двухзначное число:";
    cin>>x;
    x1=x/10;
    x2=x%10;
    cout<<"число, полученное при перестановке цифр исходного числа:"<<x2*10+x1<<endl;
    //задание №5
    int X,X1;
    cout<<"введите трехзначное число:";
    cin>>X;
    X1=X/100;
    cout<<"В нем зачеркнули первую слева цифру и приписали ее справа.Полученное число:"<<X%100*10+X1<<endl;
    
}