#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value = -1;
    Node *next = NULL;

    Node() {}
    Node(int val)
    {
        value = val;
    }
};

class MyLinkedList
{
public:
    int size = 0;
    Node *head;

    /** Initialize your data structure here. */
    MyLinkedList()
    {
        head = new Node();
    }

    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index)
    {
        if (index >= size)
        {
            return -1;
        }
        Node *tempNode = head;
        while (index--)
        {
            tempNode = tempNode->next;
        }
        return tempNode->value;
    }

    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val)
    {
        Node *newHead = new Node(val);
        newHead->next = head;
        head = newHead;
        size++;
    }

    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val)
    {
        Node *tailNode = new Node(val);
        Node *tempNode = head;
        while (tempNode->next != NULL)
        {
            tempNode = tempNode->next;
        }

        tempNode->next = tailNode;

        size++;
    }

    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val)
    {
        if (index > size)
        {
            return;
        }

        Node *tempNode = head;
        for (int i = 1; i < index; i++)
        {
            tempNode = tempNode->next;
        }

        Node *newNode = new Node(val);

        newNode->next = tempNode->next;
        tempNode->next = newNode;
        size++;
    }

    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index)
    {
        if (index >= size)
        {
            return;
        }

        Node *tempNode = head;

        for (int i = 1; i < index; i++)
        {
            tempNode = tempNode->next;
        }

        Node *tempDeleteNode = tempNode->next;
        tempNode->next = tempDeleteNode->next;
        delete tempDeleteNode;
        size--;
    }

    void print()
    {
        cout << "Printing node\n";
        Node *tempNode = head;
        while (tempNode != NULL)
        {
            cout << tempNode->value << " -> ";
            tempNode = tempNode->next;
        }
        cout << "\n";
    }
};
int main()
{
    cout << __gcd(2, 3);
    return 0;
}

// cout << pow(10, 1.0/2);

// cout <<__builtin_popcount(29);
// cout << (2 ^ 1);

// vector <int> v(2);
// v[0] = 2;
// v[1] = 5;
// cout << v.front() << " " << v.back();