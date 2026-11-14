#include <iostream>
#include<process.h>
using namespace std;
int n;
class stack
{
private:
    int s[10], top, ele, i; // char s[10] for character
public:
    stack()
    {
        top = -1;
    }
    void push();
    void dis();
    void pop();
    void peep();
    void change();
};
void stack::push()
{
    if (top >= n - 1)
        cout << "\nStack is overflow:";
    else
    {
        cout << "\nEnter element:";
        cin >> ele;
        top++;
        s[top] = ele;
    }
}
void stack::dis()
{
    if (top == -1)
    {
        cout << "\n Stack is Empty";
    }
    else
    {
        cout << "\nElements in stack are:\n";
        for (i = top; i >= 0; i--)
            cout << s[i] << "\t";
    }
}
void stack::pop()
{
    if (top == -1)
    {
        cout << "\nUnderflow";
    }
    else
    {
        cout << "\nPop ele is " << s[top];
        top--;
    }
}
void stack::peep()
{
    cout << "\nEnter position:";
    cin >> i;
    if ((top - i + 1) < 0)
    {
        cout << "\nUnderflow";
    }
    else
    {
        cout << "\nPeep ele is " << s[top - i + 1];
    }
}
void stack::change()
{
    cout << "\nEnter position ";
    cin >> i;
    if ((top - i + 1) < 0)
    {
        cout << "\nUnderflow";
    }
    else
    {
        int n; // char n; for character
        cout << "\nEnter element:";
        cin >> n;
        s[top - i + 1] = n;
    }
}
int main()
{
   
    stack s;
    cout << "Enter size of stack : ";
    cin>> n;
    int ch;
    cout << "\n1. Push 2.Display 3.Pop 4.Peep 5.Change 6.Exit\n";
    while (ch != 6)
    {
        cout << "\nEnter ch :";
        cin >> ch;
        switch (ch)
        {
                case 1:
                    s.push();
                    break;
                case 2:
                    s.dis();
                    break;
                case 3:
                    s.pop();
                    break;
                case 4:
                    s.peep();
                    break;
                case 5:
                    s.change();
                    break;
                case 6:
                    return 0;
        }
    }
    
}
//output:
/*
Enter size of stack : 3

1. Push 2.Display 3.Pop 4.Peep 5.Change 6.Exit

Enter ch :1

Enter element:23

Enter ch :1 

Enter element:45

Enter ch :1

Enter element:26

Enter ch :1

Stack is overflow:
Enter ch :2

Elements in stack are:
26      45      23
Enter ch :3

Pop ele is 26
Enter ch :2

Elements in stack are:
45      23
Enter ch :4

Enter position:2

Peep ele is 23
Enter ch :5

Enter position 1

Enter element:34

Enter ch :2

Elements in stack are:
34      23
Enter ch :6
*/