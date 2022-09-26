#include <iostream>

using namespace std;

template<typename Type>
class Queue
{
private:
	Type* Arr;
	int ArraySize;
	int MAXSize;
	int TOPIndex;

public:
	int size;

public:
	Queue<Type>(int value)
	{
		MAXSize = value;
		ArraySize = 0;
		TOPIndex = 0;
		size = 0;
		Arr = new Type[ArraySize];
	}

	Type Peek(int index)
	{
		if (index <= TOPIndex && index >= 0) 
		    return Arr[index];
		else
			return 0;
	}

	void Push(Type value)
	{
		if (TOPIndex <= MAXSize)
		{
			ArraySize += sizeof(Type);
			size = ArraySize / sizeof(Type);
			Arr[TOPIndex] = value;
			TOPIndex++;
		}
	}

	bool IsFull()
	{
		if (TOPIndex > MAXSize) 
		    return true;
		else 
		    return false;
	}

	Type Pop()
	{
		if (TOPIndex >= 0)
		{
			Type value = Arr[0];

			ArraySize -= sizeof(Type);

			for (int i = 0; i < ArraySize / sizeof(Type); i++)
			{
				Arr[i] = Arr[i + 1];
			}
			Arr[ArraySize / sizeof(Type)]=0;

			TOPIndex--;

			return value;
		}
		else
			return 0;
	}

	bool IsEmpty()
	{
		if (ArraySize == 0) return true;
		else return false;
	}

	void print ()
    {
        if (TOPIndex >= 0)
	        for (int i = 0; i <= MAXSize; i++)
	        {
	            cout << "Array[" << i + 1 << "] = " << Arr[i] << "; " << endl;
	        }
    }
};

int main()
{
	int ElementsQ;

	int ActiOn = 0;
	int PushNumber = 0;
	int PopedNumber = 0;
	int Peekindex = 0;

	bool IsFull = 0;
	bool IsEmpty = 0;
	
	char YN;

	cout << "Введите количество элементов в очереди: ";
	cin >> ElementsQ;
	Queue<int> a(--ElementsQ);

	while (1)
	{
		cout << "Действия: 1(Ввод(Push)), 2(Извлечение(Pop)), 3(Полон(IsFull)), 4(Пусто(IsEmpty)), 5(Вывести нужный элемент((Peek))" << endl;
		cin >> ActiOn;
		cout << endl;

		switch (ActiOn)
		{
		case 1:
			cout << "Введите значение: ";
			cin >> PushNumber;
			a.Push(PushNumber);
			cout << endl;
			IsFull = a.IsFull();
			if (IsFull == 1)
			    cout << "очередь заполнена" << endl << endl;
		    else 
			    cout << "место еще есть" << endl << endl;

			break;
		case 2:
			PopedNumber = a.Pop();
			cout << "Извлекаем: " << PopedNumber << endl << endl;
		case 3:
			IsFull = a.IsFull();
			if (IsFull == 1)
			    cout << "очередь переполнена" << endl << endl;
		    else 
			    cout << "место еще есть" << endl << endl;

			break;
		case 4:
			IsEmpty = a.IsEmpty();
			if (IsEmpty == 1)
			    cout << "очередь пуста" << endl << endl;
		    else 
			    cout << "там что-то есть" << endl << endl;

			break;
		case 5:
			cout << "Введите номер элемента: ";
			cin >> Peekindex;
			cout << endl << "в данном месте находится: " << a.Peek(Peekindex) << endl;
			break;
		default:
			break;
		}
		cout << "Хотите продолжить? (y/n): ";
                cin >> YN;
				cout << endl; 
		if (YN == 'n')
		    break;
	}
	cout << "Прочесть оставшуюся очередь? (y/n): ";
        cin >> YN;
		cout << endl;
    if (YN == 'y')
        a.print();

	return 0;
}
