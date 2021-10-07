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
 cout<<"введите кординаты двух точек,чтобы узнать расстояние между ними"<<endl;
 cout<<'('<<'x'<<';'<<'y'<<')'<<'('<<'x'<<';'<<'y'<<')'<<endl;
 cin>>x1>>y1>>x2>>y2;
 x=abs(x1-x2);
 y=abs(y1-y2);
 z=sqrt((double)x*x+(double)y*y);
 cout<<'S'<<'='<<z<<endl;
//задание номер 2
 int A,B,C;
 cout<<"введите любые три точки (A,B,C) ,чтобы узнать расстояние отрезков AC и BC И сумму их "<<endl;
 cout<<'A'<<' '<<'B'<<' '<<'C'<<endl;
 cin>>A>>B>>C;
 cout<<'A'<<'C'<<'='<<(abs(A-C))<<' '<<'B'<<'C'<<'='<<(abs(B-C))<<' '<<'S'<<'='<<(abs(A-C))+(abs(B-C))<<endl;
 //задание номер 3
 int a,b,c;
 cout<<"введите любые три точки (A,B,C)Точка C расположена между точками A и B,чтобы узнать произведение AC и BC"<<endl;
 cout<<'A'<<' '<<'B'<<' '<<'C'<<endl;
 cin>>a>>b>>c;
 if (a<c<b&&b<c<a)
  cout<<'P'<<'='<<(abs(a-c))*(abs(b-c))<<endl;
  else
    cout<<"Точка C не расположена между точками A и B"<<endl;
//задание номер 4
int X,Y,X1,X2,Y1,Y2;
 cout<<"введите кординаты двух противоположных вершин прямоугольника ,чтобы узнать периметр и площадь данного прямоугольника"<<endl;
 cout<<'('<<'x'<<';'<<'y'<<')'<<'('<<'x'<<';'<<'y'<<')'<<endl;
 cin>>X1>>Y1>>X2>>Y2;
 X=abs(X1-X2);
 Y=abs(Y1-Y2);
 cout<<'P'<<'='<<(X+Y)*2<<' '<<'S'<<'='<<X*Y<<endl;
 //задание номер 5
  int Xt1,Xt2,Xt3,Yt1,Yt2,Yt3;
  int Xt,Xtt,Xttt,H,Ytt,Yttt;
  double A1,B1,C1;
  double p2,s,P;
  cout<<"введите координаты трех вершин треугольника: (x1, y1), (x2, y2), (x3, y3),чтобы узнать его периметр и площадь"<<endl;
  cout<<'('<<'x'<<';'<<'y'<<')'<<'('<<'x'<<';'<<'y'<<')'<<'('<<'x'<<';'<<'y'<<')'<<endl;
  cin>>Xt1>>Yt1>>Xt2>>Yt2>>Xt3>>Yt3;
  A1=sqrt(pow((Xt2-Xt1),2)+pow((Yt2-Yt1),2));
  B1=sqrt(pow((Xt3-Xt2),2)+pow((Yt3-Yt2),2));
  C1=sqrt(pow((Xt3-Xt1),2)+pow((Yt3-Yt1),2));
  P=A1+B1+C1;
  p2=P/2;
  s=sqrt(p2*(p2-A1)*(p2-B1)*(p2-C1));;
cout<<'P'<<'='<<P<<' '<<'S'<<'='<<s<<endl;

}
