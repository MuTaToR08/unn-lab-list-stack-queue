#pragma once

template<class E>
class ListQueue
{
private:
	LinkedList<E> *list;

public:
	ListQueue()
	{
		list = new LinkedList<E>();
	}
	~ListQueue()
	{
		delete list;
	}

	void add(E elem)
	{
		list->add(elem);
	}

	E get()
	{
		E tmp = list->get(0);
		list->remove(0);
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