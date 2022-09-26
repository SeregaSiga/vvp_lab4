#include <iostream>

using namespace std;

template<typename Type>
class Stack
{
private:
	Type* Arr;
	int ArraySize;
	int MAXSize;
	int TOPIndex;
	int TopIndex;

public:
	int size;

public:
	Stack<Type>(int value)
	{
		MAXSize = value;
		ArraySize = 0;
		TOPIndex = -1;
		TopIndex = 0;
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
			TOPIndex++;
		    Arr[TOPIndex] = value;
		}
	}

	bool IsFull()
	{
		if (TOPIndex == MAXSize) 
		    return true;
		else 
		    return false;
	}

	Type Pop()
	{
		if (TOPIndex >= 0)
		{
			ArraySize -= sizeof(Type);
			size = ArraySize / sizeof(Type);
			TopIndex = TOPIndex;
			TOPIndex--;
			return Arr[TopIndex];
		}
		else
			return 0;
	}

	bool IsEmpty()
	{
		if (ArraySize == 0) 
		    return true;
		else 
		    return false;
	}

	void print ()
    {
        if (TOPIndex >= 0)
	        for (int i = 0; i <= MAXSize; i++)
	        {
	            cout << "array[" << i + 1 << "] = " << Arr[i] << "; " << endl;
	        }
    }
};

int main()
{
	int ElementsST;

	int ActiOn = 0;
	int PushNumber = 0;
	int PopedNumber = 0;
	int Peekindex = 0;

	bool IsFull = 0;
	bool IsEmpty = 0;

	char YN;

	cout << "Введите количество элементов в стэке: ";
	cin >> ElementsST;
	Stack<int> a(--ElementsST);

	while (1)
	{
		cout << "Действия: 1(Ввод(Push)), 2(Извлечение(Pop)), 3(Полон(IsFull)), 4(Пусто(IsEmpty)), 5(Вывести нужный элемент(Peek))" << endl;
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
			    cout << "стэк заполнен" << endl << endl;
		    else 
			    cout << "место еще есть" << endl << endl;
			
			break;
		case 2:
			PopedNumber = a.Pop();
			cout << "Извлекаем: " << PopedNumber << endl << endl;
		case 3:
			IsFull = a.IsFull();
			if (IsFull == 1)
			    cout << "стэк переполнен" << endl << endl;
		    else 
			    cout << "место еще есть" << endl << endl;

			break;
		case 4:
			IsEmpty = a.IsEmpty();
			if (IsEmpty == 1)
			    cout << "стэк пуст" << endl << endl;
		    else 
			    cout << "там что-то есть" << endl << endl;

			break;
		case 5:
			cout << "Введите номер элемента: ";
			cin >> Peekindex;
			cout << endl << "в данном месте находится: " << a.Peek(Peekindex) << endl << endl;

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
	cout << "Прочесть оставшийся стек? (y/n): ";
        cin >> YN;
		cout << endl;
    if (YN == 'y')
        a.print();

	return 0;
}