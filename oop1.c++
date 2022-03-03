#include <iostream>
#include <cctype>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
int main()
{
    cout<<"задание №1"<<endl;
    cout<<endl;
    float gal;
    cout<<"Введите число галлонов:";
    cin>>gal;
    cout<<"эквивалентный объем в кубических футах:"<<(gal / 7.481)<<endl;
    cout<<endl;
    cout<<"задание №2"<<endl;
    cout<<endl;
    cout<<1990<<' '<<135<<endl<<1991<<' '<<7290<<endl<<1992<<' '<<11300<<endl<<1993<<' '<<16200<<endl;
    cout<<endl;
    cout<<"задание №3"<<endl;
    cout<<endl;
    int a=10;
    cout<<a<<endl;
    a*=2;
    cout<<a<<endl;
    a--;
    cout<<a<<endl;
    cout<<endl;
    cout<<"задание №4"<<endl;
    cout<<endl;
    cout<<"Мне голос был. Он звал утешно,"<<endl<<"Он говорил: «Иди сюда,"<<endl<<"Оставь свой край глухой и грешный,"<<endl<<"Оставь Россию навсегда."<<endl;
    cout<<endl;
    cout<<"задание №5"<<endl;
    cout<<endl;
    char x;
    cout<<"Введите заглавную или строчную букву: ";
    cin>>x;
    cout<<islower(x)<<endl;
    cout<<endl;
    cout<<"задание №6"<<endl;
    cout<<endl;
    float d;
    cout<<"Введите сумму в долларах: ";
    cin>>d;
    cout<<d<<" $"<<" в других валютах: "<<endl;
    cout<<d/1.487<<" £"<<endl<<d/0.172<<" ₣"<<endl<<d/0.584<<" DM"<<endl<<d/0.00955<<" ¥"<<endl;
    cout<<endl;
    cout<<"задание №7"<<endl;
    cout<<endl;
    float t;
    cout<<"Введите температуру в °C: ";
    cin>>t;
    cout<<t<<" °C = "<<t*9/5+32<<" °F"<<endl;
    cout<<endl;
    cout<<"задание №8"<<endl;
    cout<<endl;
    long p1=8425785;
    cout<<setfill('.')<<setw(12)<<"Москва"<<setw(15)<<p1<<endl;
    cout<<endl;
    cout<<"задание №9"<<endl;
    cout<<endl;
    int A,B,C,D;
    char S;
    cout<<"Введите первую дробь: ";
    cin>>A>>S>>B;
    cout<<"Введите вторую дробь: ";
    cin>>C>>S>>D;
    cout<<"Сумма равна "<<A*D+B*C<<'/'<<B*D<<endl;
    cout<<endl;
    cout<<"задание №10"<<endl;
    cout<<endl;
    float f,s,p;
    cout<<"введите количество фунтов: ";
    cin>>f;
    cout<<"введите количество шиллингов: ";
    cin>>s;
    cout<<"введите количество пенсов: ";
    cin>>p;
    cout<<"Десятичных фунтов: "<<round((f+(s*12+p)/240)*100)/100<<endl;
    cout<<endl;
    cout<<"задание №11"<<endl;
    cout<<endl;
    cout<<setfill(' ')<<setiosflags(ios::left)<<setw(20)<<"Фамилия"<<setw(16)<<"Имя"<<setw(22)<<"Адрес"<<setw(20)<<"Город"<<endl;
    cout<<setiosflags(ios::left)<<setw(19)<<"Петров"<<setw(20)<<"Василий"<<setw(25)<<"Кленовая 16"<<setw(20)<<"Санкт-Петербург"<<endl;
    cout<<setiosflags(ios::left)<<setw(19)<<"Иванов"<<setw(19)<<"Сергей"<<setw(25)<<"Осиновая 3"<<setw(20)<<"Находка"<<endl;
    cout<<setiosflags(ios::left)<<setw(20)<<"Сидоров"<<setw(17)<<"Иван"<<setw(26)<<"Березовая 21"<<setw(20)<<"Калининград"<<endl;
    cout<<endl;
    cout<<"задание №12"<<endl;
    cout<<endl;
    float decp; // сумма в десятичных фунтах
    cout<<"Введите число десятичных фунтов: ";
    cin>>decp;
    int poun; // сумма в старых фунтах 
    float decf; // десятичная дробная часть
    poun=static_cast<int>(decp); //отбрасывание дробной части
    decf=(decp - poun)*20;
    decp=static_cast<int>(decp);
    decp=static_cast<int>((decf-static_cast<int>(decf))*12);
    cout<<"Эквивалентная сумма в старой форме записи: £"<<poun<<'.'<<static_cast<int>(decf)<<'.'<<decp<<endl;

}