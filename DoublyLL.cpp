#include <iostream>
#include <conio.h>
#include <process.h>
using namespace std;
class node
{
    int info, c, j;
    node *left, *right;

public:
    void insert();
    void display();
    void del();
};
node *start = NULL, *temp = NULL, *mve = NULL, *temp1 = NULL;
void node::insert()
{
    int item;
    node *p = new node;
    cout << "\nEnter element : ";
    cin >> item;
    p->info = item;
    p->left = NULL;
    p->right = NULL;
    if (start == NULL)
    {
        start = p;
        return;
    }
    else
    {
        temp = start;
        while (temp->right != NULL)
            temp = temp->right;
        temp->right = p;
        p->left = start;
    }
}
void node::display()
{
    mve = start;
    if (mve == NULL)
    {
        cout << "\n LL Empty:";
        return;
    }
    else
    {
        cout << "\n node in DLL are :";
        while (mve != NULL)
        {
            cout << mve->info << "\t";
            mve = mve->right;
        }
    }
}
void node::del()
{
    if (start == NULL)
    {
        cout << "\n LL Empty : ";
        return;
    }
    temp = start;
    start = temp->right;
    start->left = NULL;
    temp->right = NULL;
    cout << "\n deleted element is " << temp->info;
}
int main()
{
   
    node n;
    int ch;
    cout << "\n1. Insert 2. Display 3.Delete 4. Exit";
    while (ch != 4)
    {
        cout << "\nEnter choice : ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            n.insert();
            break;
        case 2:
            n.display();
            break;
        case 3:
            n.del();
            break;
        case 4:
            exit(0);
        }
    }
   return 0;
}
//OUYPUT :
/*
1. Insert 2. Display 3.Delete 4. Exit
Enter choice : 1

Enter element : 45

Enter choice : 1

Enter element : 67

Enter choice : 1

Enter element : 98

Enter choice : 2

 node in DLL are :45    67      98
Enter choice : 3

 deleted element is 45
Enter choice : 4
*/