#pragma once
#include "AbstractStack.h"
#include "Wrap.h"

template <typename T>
class Stack : AbstractStack<T>
{
private:
	int size, pos;
	Wrap<T> *arr;
public:
	Stack(int _size);
	Stack(const Stack &other);
	Stack(Stack &&other);
	~Stack();

	void Push(T item) override;
	Wrap<T>* Pop(int _pos) override;
	Wrap<T>* Get(int _pos) override;
	int getSize() override;
	void printStack();
};

template <typename T>
Stack<T>::Stack(int _size)
{
	size = _size;
	pos = 0;
	arr = new Wrap<T>[size];
}

template <typename T>
Stack<T>::Stack(const Stack &other)
{
	size = other.size;
	pos = 0;
	arr = new Wrap<T>[size];

	for (int i = 0; i < size; i++)
	{
		arr[i] = other.arr[i];
	}
}

template <typename T>
Stack<T>::Stack(Stack &&other)
{
	arr = other.arr;
	size = other.size;
	other.arr = nullptr;
}

template <typename T>
Stack<T>::~Stack()
{
	delete[] arr;
}

template <typename T>
void Stack<T>::Push(T item)
{
	if (pos == 0)
	{
		arr[pos] = Wrap<T>(item);
		arr[pos].setPrev(&arr[pos]); arr[pos].setNext(&arr[pos]);
		pos++;
	}
	else
	{
		arr[pos] = Wrap<T>(item, &arr[pos - 1], NULL);
		arr[pos].setNext(&arr[0]);
		arr[pos - 1].setNext(&arr[pos]); arr[0].setPrev(&arr[pos]);
		pos++;
	}
}

template <typename T>
Wrap<T>* Stack<T>::Pop(int _pos)
{
	for (int i = _pos; i < size - 1; i++)
	{
		Wrap<T> tmp(arr[i + 1].getData());
		tmp.setPrev(arr[i].getPrev());
		tmp.setNext(arr[i].getNext());
		arr[i] = tmp;
	}

	Wrap<T> *tmp = &arr[pos];
	pos--;

	return tmp;
}

template <typename T>
Wrap<T>* Stack<T>::Get(int _pos)
{
	return &arr[_pos];
}

template <typename T>
int Stack<T>::getSize() { return size; }

template <typename T>
void Stack<T>::printStack()
{
	std::cout << "Stack size: " << size << std::endl;
	std::cout << "Used: " << pos << std::endl;
	std::cout << std::endl;

	for (int i = 0; i < pos; i++)
	{
		std::cout << "Data: " << arr[i].getData() << std::endl;
		std::cout << "Current: " << &arr[i] << std::endl;
		std::cout << "Previous: " << arr[i].getPrev() << std::endl;
		std::cout << "Next: " << arr[i].getNext() << std::endl;
	}

}