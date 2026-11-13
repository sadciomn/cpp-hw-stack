#pragma once

struct Stack
{
  private:
    struct Node
    {
        char* str;
        Node* next;
    };

    Node* top = nullptr;
    int size = 0;

  public:
    Stack();
    ~Stack();

    void Push(const char* str);
    void Pop();
    const char* Top();
    int& Size();
    void Clear();
};

// YOUR CODE HERE