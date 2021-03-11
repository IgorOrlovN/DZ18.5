

#include <iostream>
#include <stack>


class Stack
{
    public:
    int last_index;
    int size;
    int* array;
    
    Stack (int new_size)
    {
        size = new_size;
        array = new int[size];
        last_index = 0;
    }
    void push(int new_elem)
    {
        if (last_index < size)
        {
            array[last_index] = new_elem;
            last_index = last_index + 1;
        }
    }
    int pop()
    {
        if (last_index > 0)
        {
            last_index = last_index - 1;
            return array[last_index];
        }
    }

};

int main()
{
    Stack s(4);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.pop();

}

