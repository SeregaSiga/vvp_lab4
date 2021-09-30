#include <math.h>
#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
//задание номер 1
 int x1,y1,x2,y2,x,y;
 double z;
 cout<<'введите кординаты двух точек,чтобы узнать расстояние между ними'<<endl;
 cout<<'('<<'x'<<';'<<'y'<<')'<<'('<<'x'<<';'<<'y'<<')'<<endl;
 cin>>x1>>y1>>x2>>y2;
 x=abs(x1-x2);
 y=abs(y1-y2);
 z=sqrt((double)x*x+(double)y*y);
 cout<<'S'<<'='<<z<<endl;
//задание номер 2
 int A,B,C;
 cout<<'введите любые три точки (A,B,C) ,чтобы узнать расстояние отрезков AC и BC И сумму их '<<endl;
 cout<<'A'<<' '<<'B'<<' '<<'C'<<endl;
 cin>>A>>B>>C;
 cout<<'A'<<'C'<<'='<<(abs(A-C))<<' '<<'B'<<'C'<<'='<<(abs(B-C))<<' '<<'S'<<'='<<(abs(A-C))+(abs(B-C))<<endl;
 //задание номер 3
 int a,b,c;
 int b1;
 cout<<'введите любые три точки (A,B,C),чтобы узнать произведение AC и BC'<<endl;
 cout<<'A'<<' '<<'B'<<' '<<'C'<<endl;
 cin>>a>>b>>c;
 if (a<c<b&&b<c<a)
  cout<<'P'<<'='<<(abs(a-c))*(abs(b-c))<<endl;
  else
  {
    b1=b;
    b=c;
    c=b1;
    cout<<'P'<<'='<<(abs(a-c))*(abs(b-c))<<endl;
    }
//задание номер 4
int X,Y,X1,X2,Y1,Y2;
 cout<<'введите кординаты двух противоположных вершин прямоугольника ,чтобы узнать периметр и площадь данного прямоугольника'<<endl;
 cout<<'('<<'x'<<';'<<'y'<<')'<<'('<<'x'<<';'<<'y'<<')'<<endl;
 cin>>X1>>Y1>>X2>>Y2;
 X=abs(X1-X2);
 Y=abs(Y1-Y2);
 cout<<'P'<<'='<<(X+Y)*2<<' '<<'S'<<'='<<X*Y<<endl;
 //задание номер 5
int Xt1,Xt2,Xt3,Yt1,Yt2,Yt3;
int Xt,Xtt,Xttt,H,Ytt,Yttt;
double A1,B1,C1;
long long p1,s;
cout<<'введите координаты трех вершин треугольника: (x1, y1), (x2, y2), (x3, y3),чтобы узнать его периметр и площадь'<<endl;
cout<<'('<<'x'<<';'<<'y'<<')'<<'('<<'x'<<';'<<'y'<<')'<<'('<<'x'<<';'<<'y'<<')'<<endl;
cin>>Xt1>>Yt1>>Xt2>>Yt2>>Xt3>>Yt3;
Xt=abs(Xt1-Xt2);
H=abs(Yt1-Yt2);
A1=sqrt((double)Xt*Xt+(double)H*H);
Xtt=abs(Xt2-Xt3);
Ytt=abs(Yt2-Yt3);
B1=sqrt((double)Xtt*Xtt+(double)Ytt*Ytt);
Xttt=abs(Xt1-Xt3);
Yttt=abs(Yt1-Yt3);
C1=sqrt((double)Xttt*Xttt+(double)Yttt*Yttt);
p1=(A1+B1+C1)/2;
s=sqrt(p1*(p1-A1)*(p1-B1)*(p1-C1));
cout<<'P'<<'='<<A1+B1+C1<<' '<<'S'<<'='<<s<<endl;

}