/*
 * Author: Aliyorjon
 * Date: 08.11.2023
 * Name: Task 1
 */

class Node {
public:
    int data;
    Node* next;

    // Constructor
    Node(int val) : data(val), next(nullptr) {}
};

class Stack {
    Node* top;
public:
    // Constructor
    Stack() : top(nullptr) {}

    // Push a value onto the stack
    void push(int val) {
        Node* newNode = new Node(val);
        newNode->next = top;
        top = newNode;
    }
};
