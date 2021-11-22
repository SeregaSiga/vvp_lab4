#include <iostream>
using namespace std;
//задание №1
void PowerA3(double a, double *b)
{
	*b=a*a*a;
} 
//задание №2
int sign(float x)
{
   if (x<0)
   { 
       return -1;
   }    
   if (x==0)
   {
       return 0;
       
   }    
   if (x>0)
   {
       return 1;
       
   }
}
//задание №3
float rings(float r1, float r2)
{
   return 3.14*(r1*r1-r2*r2);
}
//задание №4
int quarter(float x,float y)
{
    if ((x>0)&&(y>0))
    {
        return 1;
    }
    if ((x<0)&&(y>0))
    {
        return 2;
    }
    if ((x<0)&&(y<0))
    {
        return 3;
    }
    if ((x>0)&&(y<0))
    {
        return 4;
    }
}
//задание №5
float fact2(int n)
{
    int temp=1;
    for (;n>0;n-=2)
    temp*=n;
    return temp;
}
int main(void)
{
    //задание №1
    cout<<"функция PowerA3(A, B), вычисляющая третью степень числа A и возвращающая ее в переменной B"<<endl;
	double c,d;
	for (int i=0;i<5;i++)
	{
	    cout<<"введите значение: ";
		cin>>c;
		PowerA3(c,&d);
		cout<<"третья степень числа: "<<d<<endl;
	}
	cout<<endl;
	//задание №2
	cout<<"функция Sign(X) целого типа, возвращающая для вещественного числа X следующие значения:−1, если X < 0; 0, если X = 0; 1, если X > 0."<<endl;
    float a,b;
    cout<<"A: ";
    cin>>a;
    cout<<"B: ";
    cin>>b;
    cout<<"Sign(A)+Sign(B): "<<sign(a)+sign(b)<<endl;
    cout<<endl;
    //задание №3
    cout<<"функция RingS(R1, R2) вещественного типа, находящая площадь кольца, заключенного между двумя окружностями с общим центром и радиусами R1 и R2 (R1 и R2 — вещественные, R1 > R2). "<<endl;
    for(int i=1;i<=3;i++)
    {
        float r1,r2;
        cout<<"радиус первой окружности: ";
        cin>>r1;
        cout<<"радиус второй окружности: ";
        cin>>r2;
        cout<<"площадь кольца, заключенного между двумя окружностям: "<<rings(r1,r2)<<endl;
    }
    //задание №4
    cout<<"функция Quarter(x, y) целого типа, определяющая номер координатной четверти, в которой находится точка с ненулевыми вещественными координатами (x, y). "<<endl;
    for (int i=1;i<=3;i++)
    {
        float x,y;
        cout<<"X: ";
        cin>>x;
        cout<<"Y: ";
        cin>>y;
        cout<<"номер координатной четверти: "<<quarter(x,y)<<endl;
     }
     //задание №5
     cout<<"функциz Fact2(N) вещественного типа, вычисляющую двойной факториал: N!! = 1·3·5·. . .·N, если N — нечетное; N!! = 2·4·6·. . .·N, если N — четное (N > 0 — параметр целого типа; вещественное возвращаемое значение используется для того, чтобы избежать целочисленного переполнения при больших значениях N)."<<endl;
     int n;
    for (int i=1;i<=5;i++)
    {
        cout<<"N: ";
        cin>>n;
        cout<<"двойной факториал: "<<fact2(n)<<endl;
    }
}
