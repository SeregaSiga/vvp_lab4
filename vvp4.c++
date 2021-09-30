#include <math.h>
#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
         //задача номер 1.
    int a;
    int b;
    int s;
    int p;
    
    cout <<'введите два числа,чтобы узнать площадь и периметр' << endl;
    cout<<'a' <<' '<<'b'<<endl;
    cin >> a >> b;
    s = a * b;
    p=(a*b)*2;
    cout << 's'<<'='<< s <<' '<<'p'<<'='<< p <<  endl;
        //задача номер 2.
    double L;
    double d;
    cout<<'чтобы узнать значение диаметра окружности,введите ее длину'<<endl;
    cout << 'd' << endl;
    cin >> d;
    L =d * 3.14;
    cout << 'L' << '=' << L << endl;
        //задача номер 3.
    int A;
    int B;
    double c;
    cout<<'чтобы узнать среднее арифметическое двух чисел, введите любые два числа'<< endl;
    cout<<'A'<<' '<<'B'<<endl;
    cin>>A>>B;
    c = (double)(A + B) / 2;
    cout<<'c'<<'='<<c<<endl;
        //задача номер 4.
    int x, y;
    cout<<'введите два ненулевых числа,чтобы узнать сумму, разность, произведение и частное их квадратов'<<endl;
    cout << 'x' <<' '<< 'y' << endl;
    cin >> x >> y;
    cout << 'sum'<< '=' << (x*x) + (y*y ) << ' ' << 'razn'<<'=' << (x*x) - (y*y) <<' ' << 'pr' << '=' << x*x * y*y << ' ' << 'ch'<< '=' << (double)(x*x) / (double)(y*y)<< endl;
        //задача номер 5.
    int m;
    int l;
    cout<<'введите два ненулевых числа ,чтобы узнать сумму, разность, произведение и частное их модуле'<<endl;
    cout << 'm' <<' '<< 'l' << endl;
    cin >> m >> l;
    cout << 'sum' <<'='<<abs( m )+ abs(l) << ' ' << 'razn'<< '=' <<abs(m) - abs(l) << ' ' << 'pr' << '=' << abs(m) * abs(l)<< ' ' << 'mod' <<'=' <<(double)abs(m) /(double)abs(l)<<endl;

}
