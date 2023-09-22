#include <bits\stdc++.h>
using namespace std;

class Stack
{
private:
    int top;
    int arr[5];

public: // methods
    Stack()
    {
        top = -1;
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 0;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
            return true;
        else
            return false;
    }

    bool isFull()
    {
        if (top == 4)
            return true;
        else
            return false;
    }

    void push(int val)
    {
        if (isFull())
        {
            cout << "stack overflow ho gya hai bhaiii" << endl;
        }
        else
        {
            top++;
            arr[top] = val;
        }
    }
    int pop()
    {
        if (isEmpty())
        {
            cout << "No element is there in stack to pop stack underflow" << endl;
            return 0;
        }
        else
        {
            int popvalue = arr[top];
            arr[top] = 0;
            top--;
            return popvalue;
        }
    }
    int count()
    {
        return top + 1;
    }

    int peak(int pos)
    {
        if (isEmpty())
        {
            cout << "stack underflow" << endl;
        }
        else
        {
            return arr[pos];
        }
    }

    void change(int pos, int val)
    {
        arr[pos] = val;
        cout << "value changed at loaction" << pos << endl;
    }

    void display()
    {
        cout << "All values in the stack are" << endl;
        for (int i = 0; i >= 0; i++)
        {
            cout << arr[i] << endl;
        }
    }
};

int main()
{
    Stack s1;
    int option, postion, value;
    do
    {
        cout << "what operation do you want to perform ? select option number enter 0 to exit" << endl;

        cout << "1.push()" << endl;
        cout << "2.pop()" << endl;
        cout << "3.isEmpty()" << endl;
        cout << "4.isFull()" << endl;
        cout << "5.peek()" << endl;
        cout << "6.count()" << endl;
        cout << "7.change()" << endl;
        cout << "8.display()" << endl;
        cout << "9.clear screen" << endl;

        cin >> option;
        switch (option)
        {
        case 0:
            break;

        case 1:
            cout << "enter an item to push in the stack " << endl;
            cin >> value;
            s1.push(value);
            break;

        case 2:
            cout << "pop function called pop value " << s1.pop() << endl;
            break;

        case 3:
            if (s1.isEmpty())
                cout << "stack is empty" << endl;
            else
                cout << "stack is not empty" << endl;
            break;

        case 4:
            if (s1.isFull())
                cout << "stack is full" << endl;
            else
                cout << "stack is not full" << endl;
            break;

        case 5:

            cout << "Enter position of item you want to peak" << endl;
            cin >> postion;
            cout << "Peek function called value at position" << postion << "is" << s1.peak(postion) << endl;

            break;

        case 6:
            cout << "count function called no of items in the stack are :" << s1.count() << endl;
            break;

        case 7:
            cout << "change function callled " << endl;
            cout << "Enter positon of item you want to change ";
            cin >> postion;
            cout << endl;

            cout << "Enter value of item you want to change :";
            cin >> value;
            s1.change(postion, value);
            break;

        case 8:
            cout << "Display function called " << endl;
            s1.display();
            break;

        case 9:
            system("cls");
            break;

        default:
            cout << "Enter proper option number " << endl;
        }

    } while (option != 0);
    return 0;
}