#include <iostream>
#include "DequeBase.h"
#include "Deque1.h"
#include "Deque2.h"

using namespace std;

template<typename T>
void MyFuncWithPointer(DequeBase<T>* s)
{
	cout << s->PeekFront() << endl;
	cout << s->PeekBack() << endl;
}

template<typename T>
void MyFuncWithReference(DequeBase<T>& s)
{
	cout << s.PeekFront() << endl;
	cout << s.PeekBack() << endl;
}

int main()
{
	setlocale(LC_ALL, "rus");

	Deque1<int> d1;
	d1.PushFront(13);
	d1.PushBack(2);
	d1.PushFront(13);
	cout << d1 << "���-�� ��������� : " << d1.GetSize() << endl;
	d1.clear();
	d1.PushFront(1);
	d1.PushFront(2);
	d1.PushFront(3);
	d1.PushBack(4);
	d1.PushBack(5);
	cout << d1 << "���-�� ��������� : " << d1.GetSize() << endl;
	d1.removeAT(3);
	cout << d1 << "���-�� ��������� : " << d1.GetSize() << endl;
	cout << "������ ������� c ������ : " << d1.PeekFront() << "; ������ ������� � ����� : " << d1.PeekBack() << endl;
	Deque2<int> d2;
	d2.PushFront(13);
	d2.PushBack(2);
	d2.PushFront(13);
	cout << d2 << "���-�� ��������� : " << d2.GetSize() << endl;
	cout <<"----------------------------------------------" << endl;


	cout << "����� ������� � ���������� ���������" << endl;
	cout << "�������� �� ������ �������" << endl;
	MyFuncWithPointer(&d1);
	cout << "�������� �� ������ �������" << endl;
	MyFuncWithPointer(&d2);
	cout << "����� ������� � ���������� ������" << endl;
	cout << "�������� �� ������ �������" << endl;
	MyFuncWithReference(d1);
	cout << "�������� �� ������ �������" << endl;
	MyFuncWithReference(d2);

	return 0;
}