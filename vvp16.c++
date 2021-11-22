#include <iostream>
 
using namespace std;
 
int main()
{
    //задание №1
    cout<<"задание №1"<<endl;
    cout<<endl;
    int a[100];
    int n;
    cout<<"введите размер массива: ";
    cin>>n;
    cout<<endl;
    cout<<"программа выведит "<<n<<" первых положительных нечетных чисел"<<endl;
    for (int i=0;i<n;i++)
        a[i]=1+i*2;
    for (int i=0;i<n;i++)
        cout<<"a["<<i<<"]="<<a[i]<<endl;
    cout<<endl;
    //задание №2
    cout<<"задание №2"<<endl;
    cout<<endl;   
    int b[100];
    int d,k,j=1;
    cout<<"введите размер массива: ";
    cin>>k;
    cout<<"введите первый член массива: ";
    cin>>b[0];
    cout<<"введите знаменатель D: ";
    cin>>d;
    cout<<endl;
    cout<<"программа выведит  первых "<<k<<" членов данной прогрессии: A, A·D, A·D2 , A·D3 , . . ."<<endl;
    for (int i=1; i<k;i++)
    {
        j*=d;
        b[i]=b[0]*j;
    }
    for (int i=0; i<k;i++) 
    cout<<"a["<<i<<"]="<<b[i]<<endl;
    cout<<endl;
    //задание №3
    cout<<"задание №3"<<endl;
    cout<<endl;
    int c[100];
    int l;
    cout<<"введите размер массива(>2): ";
    cin>>l;
    cout<<"введите первый элемент A: ";
    cin>>c[0];
    cout<<"введите второй элемент B: ";
    cin>>c[1];
    cout<<endl;
    cout<<"программа выведит  первых "<<l<<" членов данной прогрессии:, первый элемент которого равен A, второй равен B, а каждый последующий элемент равен сумме всех предыдущих"<<endl;
    for (int i=2;i<l;i++)
    {
        c[i]=0;
        for (int j=0;j<i;j++)
        c[i]+=c[j];
    }
    for (int i=0;i<l;i++) 
    cout<<"a["<<i<<"]="<<c[i]<<endl;
    cout<<endl;
    //задание №4
    cout<<"задание №4"<<endl;
    cout<<endl;
    int g[100];
    int h;
    int L=0;
    int R;
    cout<<"введите размер массива: ";
    cin>>h;
    for (int i=0;i<h;i++)
    {
        cout<<"введите "<<i+1<<" значение массива: ";
        cin>>g[i];
    }
    R=h-1;
    cout<<endl;
    cout<<"программа выведит  первых "<<h<<" членов данной прогрессии: A1, AN , A2, AN−1, A3, AN−2,"<<endl;
    cout<<"вывод: ";
    while(L<=R)
    {
        cout<<g[L]<<" ";
        if(L==R)
            break;
        cout<<g[R]<<" ";
        L++;
        R--;
    }
    cout<<endl;
    cout<<endl;
    //задание №5
    cout<<"задание №5"<<endl;
    cout<<endl;
    int q[100];
    int z;
 
    cout<<"введите размер массива: ";
    cin>>z;
 
    for (int i=0;i<z;i++)
    {
        cout<<"введите "<<i+1<<" значение массива: ";
        cin>>q[i];
    }
    cout<<endl;
    cout<<"программа выведит  первых "<<z<<" членов данной прогрессии:вначале выводится его элементы с нечетными номерами в порядке возрастания номеров, а затем — элементы с четными номерами в порядке убывания номеров"<<endl;
    cout<<"вывод: ";
    for (int i=0;i<z;i+=2)
    cout<<q[i];
    for (int i=z-(z%2)-1;i>=1;i-=2)
    cout<<q[i];
 
}