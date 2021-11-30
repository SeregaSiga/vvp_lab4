#include <iostream>
 
using namespace std;
 
int main()
{
    //задание №1
    cout<<"задание №1"<<endl;
    cout<<endl;
    cout<<"Даны массивы A и B одинакового размера N. Поменять местами их содержимое и вывести вначале элементы преобразованного массива A,"<<endl;
    cout<<"а затем — элементы преобразованного массива B."<<endl;
    cout<<endl;
    int a[10],b[10];
    int n;
    cout<<"введите размер массива: ";
    cin>>n;
    for (int i=0;i<n;i++)
    {
     cout << "введите a[" << i+1 << "] элемент массива: ";
     cin >> a[i];
    }
    cout<<endl;
    for (int i=0; i<n;i++)
    {
     cout << "введите b[" << i+1 << "] элемент массива: ";
     cin >> b[i];
    }
    for (int i=0; i<n;i++)
    {
     a[i]+=b[i];
     b[i]=a[i]-b[i];
     a[i]=a[i]-b[i];
    }
    cout<<"содержимое A: "<<endl;
    for (int i=0;i<n;i++)
     cout<<"a["<<i+1<<"]="<<a[i]<<endl;
    cout<<"содержимое B: "<<endl;
    for (int i=0;i<n;i++)
     cout<<"b["<<i+1<<"]="<<b[i]<<endl;
    cout<<endl;
    //задание №2
    cout<<"задание №2"<<endl;
    cout<<endl;
    cout<<"Дан массив A размера N. Сформировать новый массив B того же размера по следующему правилу:"<<endl;
    cout<<"элемент BK равен среднему арифметическому элементов массива A с номерами от 1 до K."<<endl;
    cout<<endl;
    float A[10],B[10];
    int N;
    cout<<"введите размер массива: ";
    cin>>N;
    for (int k=0;k<N;k++)
    {
     cout << "введите a[" << k+1 << "] элемент массива: ";
     cin >> A[k];
    }
    for (int k=0; k<N;k++)
    {
      b[k]=0;
      for (int i=0;i<=k;i++)
      {
        B[k]+=A[i];
      }
      B[k]/=k+1;
    }
     cout<<"содержимое B: "<<endl;
    for (int k=0;k<N;k++) 
     cout<<"b["<<k+1<<"]="<<B[k]<<endl;
    cout<<endl;
    //задание №3
    cout<<"задание №3"<<endl;
    cout<<endl;
    cout<<"Дан целочисленный массив размера N. Увеличить все нечетные числа, содержащиеся в массиве,"<<endl;
    cout<<"на исходное значение последнего нечетного числа. Если нечетные числа в массиве отсутствуют, то оставить массив без изменений"<<endl;
    cout<<endl;
    int c[10];
    int m;
    cout<<"введите размер массива: ";
    cin>>m;
    int i;
    for (i=0;i<m;i++)
    {
     cout << "введите a[" << i+1 << "] элемент массива: ";
     cin >> c[i];
    }
    int o=0;
    for (i=m-1;i>=0;i--)
    {
      if (c[i]%2!=0) 
      {
        o=c[i];
        break;
      }
    }
    for (; i>=0; --i)
    {
      if (c[i]%2!=0)
      {
       c[i]+=o;
      }
    }
    cout<<"содержимое A: "<<endl;
    for (i=0;i<m;i++)
    cout<<"a["<<i+1<<"]="<<c[i]<<endl;
    cout<<endl;
    //задание №4
    cout<<"задание №4"<<endl;
    cout<<endl;
    cout<<"Дан массив размера N. Обнулить элементы массива, расположенные между его минимальным и максимальным элементами"<<endl;
    cout<<"(не включая минимальный и максимальный элементы)."<<endl;
    cout<<endl;
    int C[10];
    int M;
    cout<<"введите размер массива: ";
    cin>>M;
    for (int i=0;i<M;i++)
    {
     cout<<"введите a[" << i+1 << "] элемент массива: ";
     cin>>C[i];
    }
    int min=0,max=0;
    for (int i=M-1;i>=0;i--)
    {
     if (C[i]>C[max]) max=i;
     if (C[i]<C[min]) min=i;
    }
    if (max<min) 
    {
     max+=min;
     min=max-min;
     max=max-min;
    }
    for (int i=min+1;i<min+(max-min);i++)
     C[i]=0;
    cout<<"содержимое A: "<<endl;
    for (int i=0;i<M;i++) 
    cout<<"a["<<i+1<<"]="<<C[i]<<endl;
    cout<<endl;
    //задание №5
    cout<<"задание №5"<<endl;
    cout<<endl;
    cout<<"Дан массив размера N, все элементы которого, кроме первого, упорядочены по возрастанию."<<endl;
    cout<<"Сделать массив упорядоченным, переместив первый элемент на новую позицию."<<endl;
    cout<<endl;
    int x[10];
    int q;
    int temp=0;
    cout<<"введите размер массива: ";
    cin>>q;
    for (int i=0;i<q;i++)
    {
     cout<<"введите a[" << i+1 << "] элемент массива: ";
     cin>>x[i];
    }
    for(int i=0;i<q;i++)
    {
        for(int j=0;j<q;j++)
        {
         if(x[i]<x[j])
         {
          temp=x[i];
          x[i]=x[j];
          x[j]=temp;
         }
        }
    }
    cout<<"содержимое A: "<<endl;
    for (int i=0;i<q;i++) 
    cout<<"a["<<i+1<<"]="<<x[i]<<endl;
    cout<<endl;
}