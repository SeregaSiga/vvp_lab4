#include <iostream>
 
using namespace std;
 
int main()
{
    //задание №1
    cout<<"задание №1"<<endl;
    cout<<endl;
    cout<<"Дан целочисленный массив размера N. Удалить из массива все соседние одинаковые элементы, оставив их первые вхождения."<<endl;
    cout<<endl;
    int a[10];
    int r[20]; 
    int n;
    int j=0; 
    cout<<"введите размер массива: ";
    cin>>n;
    for (int i=0;i<n;i++)
    {
     cout<<"введите a[" << i+1 << "] элемент массива: ";
     cin>>a[i];
    }
    for(int i=0;i<n;i++) 
    { 
     if(a[i]!=a[i+1]) 
     r[j++]=a[i]; 
    }
    cout<<"содержимое A: "<<endl;
    for (int i=0;i<j;i++)
     cout<<"a["<<i+1<<"]="<<r[i]<<endl;
    cout<<endl;
    //задание №2
    cout<<"задание №2"<<endl;
    cout<<endl;
    cout<<"Дан целочисленный массив размера N. Удалить из массива все элементы,"<<endl;
    cout<<"встречающиеся ровно два раза, и вывести размер полученного массива и его содержимое."<<endl;
    cout<<endl;
    int A[10];
    int N;
    cout<<"введите размер массива: ";
    cin>>N;
    for (int i=0;i<N;i++)
    {
     cout<<"введите a[" << i+1 << "] элемент массива: ";
     cin>>A[i];
    }
    int ai,i2, k, num;
    for (int i=0; i<N;i++){
      num=0;
      for (i2=0; i2<N; ++i2) 
      if (A[i]==A[i2])
       ++num;
      if (num==2)
      {
        k=i-1;
        ai=A[i];
        for (i2=i;i2<N;++i2)
            if (A[i2]!=ai)
            {
             ++k;
             A[k]=A[i2];
            }
        N=k+1;
        --i;
      }
   }
   cout<<"размер массива: "<<N<<endl;
   cout<<"содержимое A: "<<endl;
   for (int i=0;i<N;i++)
    cout<<"a["<<i+1<<"]="<<A[i]<<endl;
   cout<<endl;
   //задание №3
   cout<<"задание №3"<<endl;
   cout<<endl;
   cout<<"Дан массив размера N. Вставить элемент с нулевым значением перед минимальным и после максимального элемента массива."<<endl;
   cout<<endl;
   int b[10];
   int m;
   cout<<"введите размер массива: ";
   cin>>m;
   for (int i=0;i<m;i++)
    {
     cout<<"введите a[" << i+1 << "] элемент массива: ";
     cin>>b[i];
    }
    int min=0,max=0;
   for (int i=0;i<m;i++)
    {
     if (b[min]>b[i]) 
      min=i;
     if  (b[max]<b[i])
      max=i;
    }
   if (max>min) 
   max++;
   m++;
   for (int i=m-1;i>=min;i--) b[i]=b[i-1];
   b[min]=0;
   m++;
   for (int i=m-1;i>max+1;i--) b[i]=b[i-1];
   b[max+1]=0;
   cout<<"содержимое A: "<<endl;
   for (int i=0;i<m;i++)
   cout<<"a["<<i+1<<"]="<<b[i]<<endl;
   cout<<endl;
   //задание №4
   cout<<"задание №4"<<endl;
   cout<<endl;
   cout<<"Дан массив размера N. После каждого отрицательного элемента массива вставить элемент с нулевым значением."<<endl;
   cout<<endl;
   int c[10];
   int M;
   cout<<"введите размер массива: ";
   cin>>M;
   for (int i=0;i<M;i++)
    {
     cout<<"введите a[" << i+1 << "] элемент массива: ";
     cin>>c[i];
    }
   for (int i=M-1; i>=0;i--)
   {
    if (c[i]<0)
    {
     M++;
     for(int j=M; j>i;j--) 
      c[j]=c[j-1];
     c[i+1]=0;
    }
   }
   cout<<"содержимое A: "<<endl;
   for (int i=0;i<M;i++)
   cout<<"a["<<i+1<<"]="<<c[i]<<endl;
   cout<<endl;
   //задание №5
   cout<<"задание №5"<<endl;
   cout<<endl;
   cout<<"Дан массив размера N. Перед каждым положительным элементом массива вставить элемент с нулевым значением."<<endl;
   int d[10];
   int q;
   cout<<"введите размер массива: ";
   cin>>q;
   for (int i=0;i<q;i++)
   {
    cout<<"введите a[" << i+1 << "] элемент массива: ";
    cin>>d[i];
   }
   for (int i=q-1;i>=0;i--)
   {
    if (d[i]>0)
    {
     q++;
     for(int j=q-1;j>i;j--)
      d[j]=d[j-1];
     d[i]=0;
    }
   }
   cout<<"содержимое A: "<<endl;
   for (int i=0;i<q;i++)
   cout<<"a["<<i+1<<"]="<<d[i]<<endl;
   cout<<endl;
}