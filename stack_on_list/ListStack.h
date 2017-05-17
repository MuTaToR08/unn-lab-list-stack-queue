#pragma once
#include "LinkedList.h"


template<class E>
class ListStack
{
private:
	LinkedList<E> *list;

public:
	ListStack()
	{
		list = new LinkedList<E>();
	}
	~ListStack()
	{
		delete list;
	}

	void add(E elem)
	{
		list->add(elem);
	}

	E get()
	{
		E tmp = list->get(list->size() - 1);
		list->remove(list->size() - 1);
		return tmp;
	}

	size_t size()
	{
		return list->size();
	}

	E operator[](size_t index)
	{
		return list->get(index);
	}
};