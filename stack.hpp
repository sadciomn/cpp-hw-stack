#pragma once

#include <string.h>

struct Stack
{
    struct Node
    {
        char* str;
        Node* next;
    };

    Node* top = nullptr;
    int size = 0;
};

inline void Push(Stack* stack, const char* str)
{
    Stack::Node* new_node = new Stack::Node;

    // Set a new value to our new_node
    new_node->str = new char[strlen(str) + 1];
    strcpy(new_node->str, str);

    // Set value of next element in stack
    new_node->next = stack->top;

    // Assign our new value to this object
    stack->top = new_node;

    ++stack->size;
}

inline void Pop(Stack* stack)
{
    if (stack->top != nullptr)
    {
        // Delete dynamic char[]
        delete[] stack->top->str;

        // Create
        Stack::Node* address = stack->top->next;

        delete stack->top;
        stack->top = address;
        --stack->size;
    }
}

inline const char* Top(const Stack* stack)
{
    if (stack->top == nullptr)
    {
        return nullptr;
    }
    return stack->top->str;
}
inline int Size(const Stack* stack) { return stack->size; }

inline void Clear(Stack* stack)
{
    while (Size(stack) != 0)
    {
        Pop(stack);
    }
}