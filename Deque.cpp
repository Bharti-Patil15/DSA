
#include<iostream>
#include<conio.h>
using namespace std;

class deque
{
    int a[5], f, r;

public:
    deque()
    {
        f = r = -1;
    }

    void insert_front();
    void insert_rear();
    void delete_front();
    void delete_rear();
    void show();
};

void deque::insert_front()
{
    int item;

    if ((f == 0 && r == 4) || (f == r + 1))
    {
        cout << "\nOverflow";
    }
    else
    {
        cout << "\nEnter item: ";
        cin >> item;

        if (f == -1)
        {
            f = r = 0;
        }
        else if (f == 0)
        {
            f = 4;
        }
        else
        {
            f--;
        }

        a[f] = item;
    }
}

void deque::insert_rear()
{
    int item;

    if ((f == 0 && r == 4) || (f == r + 1))
    {
        cout << "\nOverflow";
    }
    else
    {
        cout << "\nEnter item: ";
        cin >> item;

        if (f == -1)
        {
            f = r = 0;
        }
        else if (r == 4)
        {
            r = 0;
        }
        else
        {
            r++;
        }

        a[r] = item;
    }
}

void deque::delete_front()
{
    if (f == -1)
    {
        cout << "\nUnderflow";
    }
    else
    {
        cout << "\nDeleted element: " << a[f];

        if (f == r)
        {
            f = r = -1;
        }
        else if (f == 4)
        {
            f = 0;
        }
        else
        {
            f++;
        }
    }
}

void deque::delete_rear()
{
    if (f == -1)
    {
        cout << "\nUnderflow";
    }
    else
    {
        cout << "\nDeleted element: " << a[r];

        if (f == r)
        {
            f = r = -1;
        }
        else if (r == 0)
        {
            r = 4;
        }
        else
        {
            r--;
        }
    }
}

void deque::show()
{
    if (f == -1)
    {
        cout << "\nDeque is Empty";
    }
    else
    {
        int i = f;

        cout << "\nDeque elements: ";

        while (true)
        {
            cout << a[i] << " ";

            if (i == r)
                break;

            i = (i + 1) % 5;
        }
    }
}


int main()
{
    deque d;
    int ch;

    cout << "\n1. Insert Front";
    cout << "\n2. Insert Rear";
    cout << "\n3. Delete Front";
    cout << "\n4. Delete Rear";
    cout << "\n5. Display";
    cout << "\n6. Exit";

    do
    {
        cout << "\n\nEnter your choice: ";
        cin >> ch;

        switch(ch)
        {
            case 1:
                d.insert_front();
                break;

            case 2:
                d.insert_rear();
                break;

            case 3:
                d.delete_front();
                break;

            case 4:
                d.delete_rear();
                break;

            case 5:
                d.show();
                break;

            case 6:
                cout << "\nExit";
                break;

            default:
                cout << "\nInvalid choice";
        }

    } while(ch != 6);

    getch();
    return 0;
}

//Output:
/*
1. Insert Front
2. Insert Rear
3. Delete Front
4. Delete Rear
5. Display
6. Exit

Enter your choice: 1

Enter item: 23


Enter your choice: 34

Invalid choice

Enter your choice: 1

Enter item: 45


Enter your choice: 2

Enter item: 45


Enter your choice: 1

Enter item: 56


Enter your choice: 5

Deque elements: 56 45 23 45 

Enter your choice: 3

Deleted element: 56

Enter your choice: 4

Deleted element: 45

Enter your choice: 6

Exit
*/