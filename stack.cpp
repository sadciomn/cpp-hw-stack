#include "stack.hpp"

#include <string.h>

Stack::Stack() {}

Stack::~Stack() {}

void Stack::Push(const char* str)
{
    Node* new_node = new Node;

    // Set a new value to our new_node
    new_node->str = new char[strlen(str) + 1];
    strcpy(new_node->str, str);

    // Set value of next element in stack
    new_node->next = this->top;

    // Assign our new value to this object
    this->top = new_node;

    ++this->size;
}
void Stack::Pop()
{
    if (this->top != nullptr)
    {
        // Delete dynamic char[]
        delete[] this->top->str;

        // Create
        Node* address = this->top->next;

        delete this->top;
        this->top = address;
        --this->size;
    }
}
const char* Stack::Top()
{
    if (this->top == nullptr)
    {
        return "nullptr";
    }
    return this->top->str;
}
int& Stack::Size() { return this->size; }
void Stack::Clear()
{
    while (size != 0)
    {
        Pop();
    }
}