#include <iostream>
using namespace std;

// STATIC METHOD TO CREATE A LINKED LIST :- USING CLASS AND OBJECT

// class Node{
//     public:
//     int data;
//     Node *next = NULL;
// };

// int main(){
//     Node N1;
//     N1.data = 1;
//     N1.next = NULL;
// }

// DYNAMIC METHOD TO CREATE A LINKED LIST :- USING CLASS AND NEW KEYWORD

// We Create Linked List Dynamically because we don't know how many nodes we need
/*
class Node
{
public:
    int data;
    Node *next = NULL;

    Node(int value)
    {
        this->data = value;
        this->next = NULL;
    }
};

int main()
{
    int x;
    cout << "Enter Value of X: " << endl;
    cin >> x;
    Node *head = new Node(x);
}
*/

// Insert a Node at first
class Node
{
public:
    int data;
    Node *next = NULL;

    Node(int value)
    {
        this->data = value;
        this->next = NULL;
    }
};

// Insert the Node at Beginning

// int main()
// {
//     Node *Head;
//     Head = NULL;
//     cout << Head->data << endl;
//     cout << Head->next;

//     int arr[] = {2, 4, 6, 8, 10};

//     // Linked List doesn't Exist

//     for (int i = 0; i < 5; i++)
//     {

//         if (Head == NULL)
//         {
//             Head = new Node(arr[i]);
//         }
//         // Linked List Exist

//         else
//         {
//             Node *temp;
//             temp = new Node(arr[i]);
//             temp->next = Head;
//             Head = temp;
//         }
//     }

//     // Print the Value

//     Node *temp = Head;
//     while (temp)
//     {
//         cout << temp->data << endl;
//         temp = temp->next;
//     }
// }

// INSERT NODE AT LAST OF LIST

int main()
{
    Node *Head, *Tail;
    Tail = Head = NULL;

    int arr[] = {2, 4, 6, 8};
    for (int i = 0; i < 4; i++)
    {
        // If list does not exist
        if (Head == NULL)
        {
            Head = new Node(arr[i]);
            Tail = Head;
        }
        // If Node Exist
        else
        {
            Tail->next = new Node(arr[i]);
            Tail = Tail->next;
        }
    }

    Node *temp;
    temp = Head;
    while (temp)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}