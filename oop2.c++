#include <iostream>
#include <cctype>
#include <iomanip>
#include <math.h>
 
using namespace std;
 
int main()
{
    cout<<"задание №1"<<endl;
    cout<<endl;
    unsigned long n;
    cout<<"введите значение: ";
    cin>>n;
    for(int j=1;j<=200;j++)
    {
     cout<<setw(5)<<j*n<<" "; 
     if(j%10==0) 
     cout<<endl;
    }
    cout<<endl;
    cout<<"задание №2"<<endl;
    cout<<endl;
    int r;
    double t;
    cout<<"Напишите 1 для перевода шкалы Цельсия в шкалу Фаренгейта."<<endl<<"2 для перевода шкалы Фаренгейта в шкалу Цельсия: "; cin >> r;
    if(r==2) 
    {
     cout<<"Введите температуру по Фаренгейту: ";
     cin>>t;
     cout<<"Значение по Цельсию: "<<5.0/9.0*(t-32.0);
    } 
    else
    {
     cout<<"Введите температуру по Цельсию: ";
     cin>>t;
     cout<<"Значение по Фаренгейту: "<<9.0/5.0*t + 32.0;
    } 
    cout<<endl;
    cout<<endl;
    cout<<"задание №3"<<endl;
    cout<<endl;
    char ch=getchar();
    unsigned long total = 0;
    cout<<"Введите число: ";
    while((ch=getchar())!='\n') 
    {
        total=total*10 + ch-'0';
    }
    cout<<"Новое число: "<<total<<endl;
    cout<<endl;
    cout<<"задание №4"<<endl;
    cout<<endl;
    double a,b,res = 0;
    char oper, contin_var;
    do
    {
      cout<<"Введите первое число, затем оператор, затем второе число: ";
      cin>>a>>oper>>b;
      switch (oper)
      {
        case '+':
        res=a+b;
        break;
        case '-':
        res=a-b;
        break;
        case '*':
        res=a*b;
        break;
        case '/':
        res=a/b;
        break;
        default:
        cout<<"Вы ввели неверный оператор!";
        break;
      }
    cout<<"Результат: "<<res<<endl;
    cout<<"Хотите продолжить? (y/n): ";
    cin>>contin_var;
    } 
    while (contin_var!='n');
    cout<<endl;
    cout<<"задание №5"<<endl;
    cout<<endl;
    for(int i=1;i<40;i+=2)
    {
      cout<<setw(50-2-i); 
      for (int j=0;j<i;j++)
      {
        cout<<"X";
        cout<<" ";
      }
      cout<<endl;
    }
    cout<<endl;
    cout<<"задание №6"<<endl;
    cout<<endl;
    unsigned int numb=1;
    unsigned long fact=1; 
    while (numb!=0) 
    {
      cout<<"Введите число: "; 
      cin>>numb;
      for(int j=numb;j>0;j--)
        fact *= j;
      cout<<"Факториал числа равен: "<<fact<<endl;
      fact=1;
    }
    cout<<"Вы завершили программу."<<endl;
    cout<<endl;
    cout<<"задание №7"<<endl;
    cout<<endl;
    int years;
    double deposit, percent, sum;
    cout<<"Введите начальный вклад: "; 
    cin>>deposit;
    cout<<"Введите количество лет: "; 
    cin>>years;
    cout<<"Введите процентную ставку: "; 
    cin>>percent;
    sum=deposit;
    for(int i=0;i<years;i++) 
    {
        sum+=sum*percent/100;
    }
    cout<<"Через "<<years<<" лет вы получите: "<<sum<<"$"<<endl;
    cout<<endl;
    cout<<"задание №8"<<endl;
    cout<<endl;
    char answ, dot;
    int fPound, fShil, fPens, sPound, sShil, sPens;
    int sumPound, sumShil, sumPens;
    do
    {
      cout<<"Введите первую сумму в фунтах.шилингах.пенсах:";
      cin>>fPound>>dot>>fShil>>dot>>fPens;
      cout<<"Введите вторую сумму в фунтах.шилингах.пенсах:";
      cin>>sPound>>dot>>sShil>>dot>>sPens;
      sumPound=fPound+sPound;
      sumShil=fShil+sShil;
      sumPens=fPens+sPens;
      int finalPens=sumPens%12;
      int finalShil=(sumShil+sumPens/12)%20;
      int prefinalShil=(sumShil+sumPens/12);
      int finalPound=sumPound+(prefinalShil/20);
      cout<<"Сумма равна: "<<finalPound<<dot<<finalShil<<dot<<finalPens<<endl;
      cout<<"Хотите продолжить?(y/n): ";
      cin>>answ;
    }
    while(answ != 'n');
    cout<<endl;
    cout<<"задание №9"<<endl;
    cout<<endl;
    int guests, chairs, ways = 1;
    cout<<"Введите количество гостей: ";
    cin>>guests;
    cout<<"Введите количество стульев(< чем гостей): ";
    cin>>chairs;
    if(guests>chairs)
    {
      for (int i=0;i<chairs;i++)
      { 
        ways *=guests;
        guests--; 
      }
      cout<<"Количество разных комбинаций размещения гостей по стульям равно: "<<ways<<endl;
    }
    else
      cout<<"меньше чем гостей"<<endl;
    cout<<endl;
    cout<<"задание №10"<<endl;
    cout<<endl; 
    int Years = 0;
    double Deposit, Percent, Sum;
    cout<<"Введите начальный вклад: ";
    cin>>Deposit;
    cout<<"Введите процентную ставку: ";
    cin>>Percent;
    cout<<"Введите желаемый \"Выхлоп\"(то есть сумму, которую хотите получить к концу срока): ";
    cin>>Sum;
    while (Deposit<Sum) 
    {
        Deposit+=Deposit*Percent/100;
        Years++;
    }
    cout<<"Для достижения отметки в "<<Sum<<" Вам потребуется "<<Years<<" лет"<<endl;
    cout<<endl;
    cout<<"задание №11"<<endl;
    cout<<endl; 
    int fpound = 0, fshil = 0, fpens = 0;
    int spound = 0, sshil = 0, spens = 0;
    int prefinalShil;
    int finalPound = 0, finalShil = 0, finalPens = 0; double real_num = 1;
    int sumpens;
    char Oper, Contin_var, Dot;
    do
    {
      cout<<"Введите первое число, затем оператор, затем второе число: ";
      cin>>fpound>>Dot>>fshil>>Dot>>fpens>>Oper;
      if (Oper == '*' || Oper == '/')
      {
         cin>>real_num;
      }
      else
         cin>>spound>>Dot>>sshil>>Dot>>spens; 
         switch (Oper)
         {
            case '+':
             finalPens = (fpens + spens) % 12;
             prefinalShil = ((fshil + sshil) + (fpens + spens) / 12); 
             finalShil = ((fshil + sshil) + (fpens + spens) / 12) % 20;
             finalPound = (fpound + spound) + prefinalShil / 20;
             break;
            case '-':
             finalPens = fpens - spens < 0? 12 - abs(fpens - spens): fpens- spens;
             finalShil = fshil - sshil < 0? 20 - abs(fshil - sshil): fshil- sshil;
             finalShil = fpens - spens < 0? finalShil -=1 : finalShil;
             finalPound = fshil - sshil < 0? fpound - spound - 1:fpound -spound;
             break;
            case '*':
             sumpens = fpound * 240 + fshil * 12 + fpens;
             sumpens *= real_num;
             finalPound = sumpens / 240;
             finalShil = (sumpens - (finalPound * 240)) / 12; 
             finalPens = sumpens - finalPound * 240 - finalShil * 12; 
             break;
            case '/':
             sumpens /= real_num;
             finalPound = sumpens / 240;
             finalShil = (sumpens - (finalPound * 240)) / 12; 
             finalPens = sumpens - finalPound * 240 - finalShil * 12; 
             break;
            default:
            cout << "Вы ввели неверный оператор!"; break;
          }
      cout<<"Результат: "<<finalPound<<dot<<finalShil<<Dot<<finalPens<<"£"<<endl;
      cout<<"Хотите продолжить? (y/n): ";
      cin>>contin_var;
    } 
    while (contin_var != 'n');
    cout<<endl;
    cout<<"задание №12"<<endl;
    cout<<endl;      
    int A,B,C,D,resUp=0,resDown=0;
    char devide, op;
    cout<<"Введите первую дробь, затем оператор, затем вторую дробь: ";
    cin>>A>>devide>>B>>op>>C>>devide>>D;
    if(devide == '/') 
    {
    switch (op) 
    { 
        case '+':
        resUp=A*D+B*C;
        resDown=B*D;
        break;
        case '-':
        resUp=A*D-B*C;
        resDown=B*D; 
        break;
        case '*':
        resUp=A*C;
        resDown=B*D;
        break;
        case '/':
        resUp=A*D;
        resDown=B*C;
        break;
        default:
        cout<<"Вы ввели неправилный оператор!";
        break;
    }
    if(resDown==0)
    cout<<"Результат: "<<0;
    else 
    if(resDown==resUp) 
    cout<<"Результат: "<<1;
    else
    if(resDown==1) 
    cout<<"Результат: "<<resUp;
    else 
    if(resUp/resDown==(double)resUp/resDown&&resUp>resDown)
    cout<<"Результат: "<<resUp/resDown;
    else 
    if(resUp<resDown&&resDown/resUp==(double)resDown/resUp) 
    cout<<"Результат: "<<1<<'/'<<resDown/resUp<<endl;
    else 
    cout<<"Результат: "<<resUp<<'/'<<resDown<<endl; 
    }
    else 
    cout << "Это не дробь";  
         

}


