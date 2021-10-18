#include <math.h>
#include <iostream>
#include <locale.h>
using namespace std;


  int main()
{
    setlocale(LC_ALL, "Rus");
    //задание №1
    int k,m;
    cout << "Введите целое число в диапазоне 1-31:  "; 
    cin >> k;
    cout << "Введите целое число в диапазоне 1-12:  "; 
    cin >> m;
    if (k>19&&k%10!=0)
    {
        if(k/10==2)
        cout<<"двадцать ";
        else
        if(k/10==3)
        cout<<"тридцать ";
        
    }
    else
    {
       if(k/10==2)
        cout<<"двадцатое ";
        else
        if(k/10==3)
        cout<<"тридцатое "; 
    }
    if(k<10||k>19)
    {
    if (k%10==1)
    cout<<"первое ";
    else
    if (k%10==2)
    cout<<"второе ";
    else
    if (k%10==3)
    cout<<"третье ";
    else
    if (k%10==4)
    cout<<"четвертое ";
    else
    if (k%10==5)
    cout<<"пятое ";
    else
    if (k%10==6)
    cout<<"шестое ";
    else
    if (k%10==7)
    cout<<"седьмое ";
    else
    if (k%10==8)
    cout<<"восьмое ";
    else
    if (k%10==9)
    cout<<"девятое ";
    }
    else
    {
    if (k==11)
    cout<<"одинадцатое ";
    else
    if (k==12)
    cout<<"двенадцатое ";
    else
    if (k==13)
    cout<<"тринадцатое ";
    else
    if (k==14)
    cout<<"четырнадцатое ";
    else
    if (k==15)
    cout<<"пятнадцатое ";
    else
    if (k==16)
    cout<<"шестнадцатое ";
    else
    if (k==17)
    cout<<"семнадцатое ";
    else
    if (k==18)
    cout<<"восемнадцатое ";
    else
    if (k==19)
    cout<<"девятнадцатое ";
    }
    if(m==1)
    cout<<"января"<<endl;
    else
    if(m==2)
    cout<<"февраля"<<endl;
    else
    if(m==3)
    cout<<"марта"<<endl;
    else
    if(m==4)
    cout<<"апреля"<<endl;
    else
    if(m==5)
    cout<<"мая"<<endl;
    else
    if(m==6)
    cout<<"июня"<<endl;
    else
    if(m==7)
    cout<<"июля"<<endl;
    else
    if(m==8)
    cout<<"августа"<<endl;
    else
    if(m==9)
    cout<<"сентебря"<<endl;
    else
    if(m==10)
    cout<<"октября"<<endl;
    else
    if(m==11)
    cout<<"ноября"<<endl;
    else
    if(m==12)
    cout<<"декабря"<<endl;
    //задание №2
    int n;
    char c;
    cout<<"Робот может перемещаться в четырех направлениях («N» — север, «W» — запад, «S» — юг, «E» — восток) и принимать три цифровые команды: 0 — продолжать движение, 1 — поворот налево, −1 — поворот направо."<<endl;
    cout<<"введите исходное направление робота:";
    cin>>c;
    cout<<"введите команду:";
    cin>>n;
    if(c=='N')
    {
        if(n==0)
        cout<<"Север"<<endl;
        else
        if(n==1)
        cout<<"Запад"<<endl;
        else
        if(n==-1)
        cout<<"Восток"<<endl;
    }
    else
    if(c=='S')
    {
        if(n==0)
        cout<<"Юг"<<endl;
        else
        if(n==1)
        cout<<"Восток"<<endl;
        else
        if(n==-1)
        cout<<"Запад"<<endl;
    }
    else
    if(c=='E')
    {
        if(n==0)
        cout<<"Восток"<<endl;
        else
        if(n==1)
        cout<<"Север"<<endl;
        else
        if(n==-1)
        cout<<"Юг"<<endl;
    }
    else
    if(c=='W')
    {
        if(n==0)
        cout<<"Запад"<<endl;
        else
        if(n==1)
        cout<<"Юг"<<endl;
        else
        if(n==-1)
        cout<<"Север"<<endl;
    }
	//задание №3
	int x;
    cout << "Введите целое число в диапазоне 1-40:  "; 
    cin >> x;
    if (x>19)
    {
        if(x/10==2)
        cout<<"двадцать ";
        else
        if(x/10==3)
        cout<<"тридцать ";
        else
        if(x/10==4)
        cout<<"сорок ";
        
    }
    if(x<10||x>19)
    {
    if (x%10==1)
    cout<<"одно ";
    else
    if (x%10==2)
    cout<<"два ";
    else
    if (x%10==3)
    cout<<"три ";
    else
    if (x%10==4)
    cout<<"четыре ";
    else
    if (x%10==5)
    cout<<"пять ";
    else
    if (x%10==6)
    cout<<"шесть ";
    else
    if (x%10==7)
    cout<<"семь ";
    else
    if (x%10==8)
    cout<<"восемь ";
    else
    if (x%10==9)
    cout<<"девять ";
    }
    else
    {
    if (x==11)
    cout<<"одинадцать ";
    else
    if (x==12)
    cout<<"двенадцать ";
    else
    if (x==13)
    cout<<"тринадцать ";
    else
    if (x==14)
    cout<<"четырнадцать ";
    else
    if (x==15)
    cout<<"пятнадцать ";
    else
    if (x==16)
    cout<<"шестнадцать ";
    else
    if (x==17)
    cout<<"семнадцать ";
    else
    if (x==18)
    cout<<"восемнадцать ";
    else
    if (x==19)
    cout<<"девятнадцать ";
    }
    if(x%10==1)
    cout<<"учебное задание."<<endl;
    else
    if(x%10==2||x%10==3||x%10==4)
    cout<<"учебных задания."<<endl;
    else
    cout<<"учебных заданий."<<endl;
    //задание №4
	int y;
    cout << "Введите целое число в диапазоне 100-999:  "; 
    cin >>y;
    if(y/100==1)
    cout<<"сто ";
    else
    if(y/100==2)
    cout<<"двести ";
    else
    if(y/100==3)
    cout<<"триста ";
    else
    if(y/100==4)
    cout<<"четыреста ";
    else
    if(y/100==5)
    cout<<"пятьсот ";
    else
    if(y/100==6)
    cout<<"шестьсот ";
    else
    if(y/100==7)
    cout<<"семьсот ";
    else
    if(y/100==8)
    cout<<"восемьсот ";
    else
    if(y/100==9)
    cout<<"девятьсот ";
    if(y%100>10||y%100<20)
    {
       if (y%100==11)
    cout<<"одинадцать ";
    else
    if (y%100==12)
    cout<<"двенадцать ";
    else
    if (y%100==13)
    cout<<"тринадцать ";
    else
    if (y%100==14)
    cout<<"четырнадцать ";
    else
    if (y%100==15)
    cout<<"пятнадцать ";
    else
    if (y%100==16)
    cout<<"шестнадцать ";
    else
    if (y%100==17)
    cout<<"семнадцать ";
    else
    if (y%100==18)
    cout<<"восемнадцать ";
    else
    if (y%100==19)
    cout<<"девятнадцать "; 
    }
    if(y%100>19)
    {
       if(y/10%10==2)
        cout<<"двадцать ";
        else
        if(y/10%10==3)
        cout<<"тридцать ";
        else
        if(y/10%10==4)
        cout<<"сорок ";  
        else
        if(y/10%10==1)
        cout<<"десять ";
        if(y/10%10==5)
        cout<<"пятьдесят ";
        else
        if(y/10%10==6)
        cout<<"шестьдесят ";
        else
        if(y/10%10==7)
        cout<<"семьдесят ";
        else
        if(y/10%10==8)
        cout<<"восемьдесят ";
        else
        if(y/10%10==9)
        cout<<"девяносто "; 
        
    }
    if(y%100<10||y%100>19)
    {
    if (y%10==1)
    cout<<"один "<<endl;
    else
    if (y%10==2)
    cout<<"два "<<endl;
    else
    if (y%10==3)
    cout<<"три "<<endl;
    else
    if (y%10==4)
    cout<<"четыре "<<endl;
    else
    if (y%10==5)
    cout<<"пять "<<endl;
    else
    if (y%10==6)
    cout<<"шесть "<<endl;
    else
    if (y%10==7)
    cout<<"семь "<<endl;
    else
    if (y%10==8)
    cout<<"восемь "<<endl;
    else
    if (y%10==9)
    cout<<"девять "<<endl;
    }
    //задание №5
        cout << "Год:";
    cin>>n;
 
    cout << "год ";
    if(n%10==0||n%10==1)
    cout << "бел";
    else
    if(n%10==2||n%10==3)
    cout << "черн";
    else
    if(n%10==4||n%10==5)
    cout << "зелён";
    else
    if(n%10==6||n%10==7)
    cout << "красн";
    else
    if(n%10==8||n%10==9)
    cout << "жёлт";
    if((n + 8) % 12==0)
    cout << "ой крысы";
    else
    if((n + 8) % 12==1)
    cout << "ой коровы";
    else
    if((n + 8) % 12==2)
    cout << "ого тигра";
    else
    if((n + 8) % 12==3)
    cout << "ого зайца";
    else
    if((n + 8) % 12==4)
    cout << "ого дракона";
    else
    if((n + 8) % 12==5)
    cout << "ой змеи";
    else
    if((n + 8) % 12==6)
    cout << "ой лошади";
    else
    if((n + 8) % 12==7)
    cout << "ой овцы";
    else
    if((n + 8) % 12==8)
    cout << "ой обезьяны";
    else
    if((n + 8) % 12==9)
    cout << "ой курицы";
    else
    if((n + 8) % 12==10)
    cout << "ой собаки";
    else
    if((n + 8) % 12==11)
    cout << "ой свиньи";
    
}
