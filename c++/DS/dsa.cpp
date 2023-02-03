
// #include<iostream>
// using namespace std;


// class Node
// {
// public:
// 	int data;
// 	Node* next;
// 	Node(int data){
// 		this -> data = data;;
// 		this -> next = NULL;
// 	}
// };


// void insert(Node* &head, int data){
	
// 	Node *temp = new Node(data);
	
// 	temp->next = head;
// 	temp = head;
// }

// int main()
// {
// 	Node *node1 = new Node(22);
// 	cout << node1 -> data << endl;
// 	cout << node1 -> next << endl;

// }



#include<iostream>
using namespace std;

class Myclass
{
	public: 
		int age;
private:
	friend int age;
}obj;

class New : public Myclass
{
public:
	int a;
	a = Myclass::age;  
}obj1;

int main()
{
	cout << obj1.a << endl;
}