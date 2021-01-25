/*
 * @lc app=leetcode id=707 lang=cpp
 *
 * [707] Design Linked List
 */
// TODO
#include <bits/stdc++.h>
// @lc code=start
using std::cout;
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
        for (int i = 0; i <= index; i++)
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
        for (int i = 0; i < index; i++)
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

        for (int i = 0; i < index; i++)
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

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
// @lc code=end

int main()
{

    MyLinkedList myLinkedList = MyLinkedList();
    myLinkedList.addAtHead(1);
    myLinkedList.addAtTail(3);
    myLinkedList.print();
    myLinkedList.addAtIndex(1, 2); // linked list becomes 1->2->3
    myLinkedList.print();
    cout << myLinkedList.get(1) << "\n"; // return 2
    myLinkedList.deleteAtIndex(1);       // now the linked list is 1->3
    cout << myLinkedList.get(1) << "\n"; // return 3
    myLinkedList.print();
    return 0;
}
// Node *head = new Node(3);
// Node *last = new Node(5);
// head->next = last;
// cout << head->value << " " << head->next->value;