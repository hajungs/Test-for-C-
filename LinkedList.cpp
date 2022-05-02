#include <iostream>

using namespace std;

//3) 링크드 리스트에 대하여 설명하고 삽입, 삭제, 출력을 구현하라

struct node
{
	int data;
	node* nextNode;
};

class LinnkedList
{
private:
	node* head;
	node* tail;

public:
	LinnkedList()
	{
		head = NULL;
		tail = NULL;
	}
	void addFrontNode(int n)
	{
		node* temp = new node;
		temp->data = n;
		if (head == NULL)
		{
			head = temp;
			tail = temp;
		}
		else 
		{
			temp->nextNode = head;
			head = temp;
		}
	}
	void addNode(int n)
	{
		node* temp = new node;
		temp->data = n;
		temp->nextNode = NULL;
		if (head == NULL)
		{
			head = temp;
			tail = temp;
		}
		else
		{
			tail->nextNode = temp;
			tail = temp;
		}
	}
	node* getHead()
	{
		return head;
	}
	void insertNode(node* prevNode, int n)
	{
		node* temp = new node;
		temp->data = n;
		temp->nextNode = prevNode->nextNode;
		prevNode->nextNode = temp;
	}
	void deleteNode(node* prevNode)
	{
		node* temp = prevNode->nextNode;
		prevNode->nextNode = temp->nextNode;
		delete temp;
	}
	void displyNode(node* head)
	{
		if (head == NULL)
		{
			cout << "\n";
		}
		else
		{
			cout << head->data << " ";
			displyNode(head->nextNode);
		}
		cout << endl;
	}
};

int main()
{
	LinnkedList a;
	a.addNode(1);
	a.addNode(2);
	a.addNode(3);

	cout << "1,2,3 추가\n";
	
	a.insertNode(a.getHead()->nextNode->nextNode, 1);
	cout << "insert 1 \n";

	a.displyNode(a.getHead());

	a.deleteNode(a.getHead()->nextNode);
	cout << "delete\n";
	a.deleteNode(a.getHead());

}