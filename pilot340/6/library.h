#include <iostream>
#include <stdexcept>

using namespace std;

class MyStack;

class Node
{
  friend class MyStack;

  public:
    Node() : item(0), next(NULL)
    { }

    Node(int _item, Node* _next) : item(_item), next(_next)
    { }

  private:
    int item;
    Node* next;
};

class MyStack
{
  public:
    MyStack() : top(NULL)
    { }

    ~MyStack() { clear(); }

    void push(int _item)
	{
		//allocate new node
		Node* new_node = new Node;
		
		new_node->next = top;
		top = new_node; 	
		new_node->item = _item;
	}
	
    int pop()
	{
		//return value
		int topNode = 0;
		
		if(!NULL)
		{
			//put top value into topNode
			topNode = top->item;
			
			//delete top node
			clear();	
		}
		else
		{
			throw std::invalid_argument("Empty Stack");
		}
		
		return topNode;
	}

    void clear()
    {
      if (top == NULL) return; // Already empty

        Node* terminator = top;
        Node* move = terminator->next;

      while (move != NULL)
      {
        delete terminator;
        terminator = move;
        move = move->next;
      }

      delete terminator; top = NULL;
    }

  private:
    Node* top;
};
