//// Program to implement Double Linked List
//
//#include "Doubly_Linked_List.h"
//#include <iostream>
//#include <string>
//#include <exception>
//using namespace std;
//
//// Constructor to initialize first and last node
//template <class T>
//Doubly_Linked_List<T>::Doubly_Linked_List()
//{
//	first = nullptr;
//	last = nullptr;
//}
//
//// Destructor
//template<class T>
//Doubly_Linked_List<T>::~Doubly_Linked_List()
//{
//
//}
//
//// funciton to create node and insert at beginning
//template <class T>
//void Doubly_Linked_List<T>::insert(const T& value)
//{
//	if(first == nullptr)
//	{
//
//		node<T> *temp = new node<T>;
//		
//		temp->next = nullptr;
//		temp->data = value;
//		temp->previous = nullptr;
//		first = temp;
//		last = first;
//		
//	}
//	else
//	{
//		node<T> *temp = new node<T>;
//		temp->data = value;
//		temp->next = first;
//		temp->previous = nullptr;
//		first->previous = temp;
//		first = temp;
//			
//	}
//	
//}
//
//// funciton to insert node at end of list
//template<class T>
//void Doubly_Linked_List<T>::insert_end(const T& value) {
//	if (first == nullptr) {
//		cout << "List is empty\n";
//	}
//	else {
//		node<T> *temp = new node<T>;
//		temp->data = value;
//		temp->next = nullptr;
//		temp->previous = last;
//		last->next = temp;
//		last = temp;
//				
//	}
//}
//
//// funciton to insert node at specific position
//template<class T>
//void Doubly_Linked_List<T>::insert_position(const T & value, int pos)
//{
//	node<T> *temp, *temp1;
//	if (first == nullptr) {
//		cout << "list is empty!\n";
//	}
//
//	temp = first;
//	temp1 = new node<T>;
//	temp1->data = value;
//	for (auto i = 1; i < pos; ++i) {
//		temp = temp->next;
//	}
//	auto size = size_list();
//	
//	if (pos < size-1 && pos>0)
//	{
//
//		temp->next->previous = temp1;
//		temp1->next = temp->next;
//		temp->next = temp1;
//		temp1->previous = temp;
//
//	
//	}
//	else if(pos == (size-1))
//	{
//
//		temp1->next = last;
//		temp->next = temp1;
//		temp1->previous = temp;
//		last->previous = temp1;
//	}
//	else if (pos == size)
//	{
//		temp1->next = temp->next;
//		temp->next = temp1;
//		temp1->previous = temp;
//		last = temp1;
//
//	}
//	else {
//		cout << "out of bound insertion\n";
//	}
//	
//
//}
//
//// function to delete the first node
//template <class T>
//void Doubly_Linked_List<T>::delete_beginning()
//{
//	if(first == nullptr)
//	{
//		cout << "List empty, nothing to delete!\n";
//	}
//
//	node<T>*temp = first;
//	first = first->next;
//	first->previous = nullptr;
//
//	delete temp;
//	
//}
//
//// function to delete the last node
//template <class T>
//void Doubly_Linked_List<T>::delete_end()
//{
//	if (first == nullptr)
//	{
//		cout << "List empty, nothing to delete!\n";
//	}
//	node<T>*temp = last;
//	last = last->previous;
//	last->next = nullptr;
//	delete temp;
//}
//
//// funciton to delete node at specific position
//template <class T>
//void Doubly_Linked_List<T>::delete_position(int pos)
//{
//	if(first == nullptr)
//	{
//		cout << "List empty, nothing to delete!\n";
//	}
//	auto size = size_list();
//	cout << "size: " << size << " position: " << pos << endl;
//
//	
//	node<T> *temp = first;
//	for (auto i = 1; i < pos;++i)
//	{
//		temp = temp->next;
//	}
//	
//	cout << "Deleted: " << temp->data << endl;
//	if (pos < size-1 && pos ==2)
//	{
//		first->next = temp->next;
//		temp->next->previous = first;
//
//	}
//	else if(pos < size - 1 && pos > 2)
//	{
//		temp->previous->next = temp->next;
//		temp->next->previous = temp->previous;
//
//	}
//	else if(pos==(size-1))
//	{
//		temp->previous->next = last;
//		last->previous = temp->previous;
//	}
//	else
//	{
//		cout << "Index out of bound \n";
//	}
//
//
//	delete temp;
//
//}
//
//// function to search using index
//template <class T>
//void Doubly_Linked_List<T>::search(int index)
//{
//	if(first == nullptr)
//	{
//		cout << "List is empty, nothing to search!\n";
//	}
//	try {
//		node<T> *temp = first;
//		for (auto i = 1; i < index; ++i)
//		{
//			temp = temp->next;
//		}
//		cout << "Element at position " << index << " = " << temp->data << endl;
//	}catch(out_of_range & e)
//	{
//		cout << e.what() << endl;
//	}
//}
//
//// function to search a value inide the list
//template <class T>
//void Doubly_Linked_List<T>::search_value(const T& value)
//{
//	if (first == nullptr)
//	{
//		cout << "List is empty, nothing to search!\n";
//	}
//	
//	for (node<T> *temp = first; temp != nullptr;temp = temp->next)
//	{
//		if(temp->data == value)
//		{
//			cout << "Found element " << value << endl;
//			return;
//		}
//	}
//	
//		cout << "Element " << value << " not present in list!\n";
//	
//}
//
//// funciton to reverse the list
//template <class T>
//void Doubly_Linked_List<T>::reverse_list()
//{
//	if (first == nullptr)
//	{
//		cout << "Size: 0";
//	}
//
//	node<T> *temp = last;
//	
//	while (temp != nullptr)
//	{
//		cout << temp->data << endl;
//		temp = temp->previous;
//				
//	}
//	
//	
//}
//
//// function to calculate the size of the list
//template <class T>
//int Doubly_Linked_List<T>::size_list()
//{
//	if (first == nullptr)
//	{
//		cout << "Size: 0";
//	}
//	node<T>*temp = first;
//
//	auto count = 0;
//	while (temp != nullptr)
//	{
//		temp = temp->next;
//		count++;
//	}
//	return count;
//}
//
//// funciton to display the list
//template <class T>
//void Doubly_Linked_List<T>::display()
//{
//	cout << "***************************\n";
//	if(first == nullptr)
//	{
//		cout << "list is empty!\n";
//	}
//	else
//	{
//		node<T>*temp = first;
//		
//		while(temp!=nullptr)
//		{
//			cout << temp->data<< endl;
//			
//			temp = temp->next;
//		}
//	}
//
//	cout << "***************************\n";
//
//}
//
//int main()
//{
//	
//	auto list1 = new Doubly_Linked_List<int>;
//	
//	list1->insert(10);
//	list1->insert(20);
//	list1->insert(30);
//	
//
//	list1->insert_end(100);
//	list1->insert_end(200);
//
//	list1->insert_position(500, 2);
//	
//	cout << "Original List: \n" << endl;
//	list1->display();
//
//	list1->delete_beginning();
//	list1->delete_end();
//	list1->delete_position(2);
//
//	cout << "After delete: \n";
//	list1->display();
//
////	list1->search(3);
////	list1->search_value(500);
//
//	cout <<"Size: "<< list1->size_list() << endl;
//
//	cout << "After Reverse: \n";
//	list1->reverse_list();
//
//	
//	delete list1;
//	
//	
//
//
//	return 0;
//}