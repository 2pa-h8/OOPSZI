#include <iostream>
#include "Deque.h"
#include "Deque_int.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	Deque<int> d;
	d.PushFront(13);
	d.PushBack(2);
	d.PushFront(13);
	cout << d << "кол-во элементов : " << d.GetSize() << endl;
	d.clear();
	d.PushFront(1);
	d.PushFront(2);
	d.PushFront(3);
	d.PushBack(4);
	d.PushBack(5);
	cout << d << "кол-во элементов : " << d.GetSize() << endl;
	d.removeAT(3);
	cout << d << "кол-во элементов : " << d.GetSize() << endl;
	cout << "Первый элемент c начала : " << d.PeekFront() << "; первый элемент с конца : " << d.PeekBack() << endl;
	Deque<int> d1;
	d1.PushFront(13);
	d1.PushBack(2);
	d1.PushFront(13);
	d1 = d;
	cout << d << "кол-во элементов : " << d.GetSize() << endl;
	cout <<"----------------------------------------------" << endl;

	Deque_int d_i;
	d_i.PushFront(13);
	d_i.PushBack(2);
	d_i.PushFront(13);
	cout << d_i << "кол-во элементов : " << d_i.GetSize() << endl;
	d_i.clear();
	d_i.PushFront(1);
	d_i.PushFront(2);
	d_i.PushFront(3);
	d_i.PushBack(4);
	d_i.PushBack(4);
	cout << d_i << "кол-во элементов : " << d_i.GetSize() << endl;
	d_i.removeAT(3);
	cout << d_i << "кол-во элементов : " << d_i.GetSize() << endl;
	cout << "Первый элемент c начала : " << d_i.PeekFront() << "; первый элемент с конца : " << d_i.PeekBack() << endl;
	Deque_int d1_i;
	d1_i.PushFront(13);
	d1_i.PushBack(2);
	d1_i.PushFront(13);
	d_i = d1_i;
	cout << d_i << "кол-во элементов : " << d_i.GetSize() << endl;
	cout << "----------------------------------------------" << endl;

	return 0;
}