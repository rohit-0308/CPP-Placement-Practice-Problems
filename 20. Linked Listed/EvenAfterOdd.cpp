#include <iostream>

using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtTail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void evenAfterOdd(node *&head)
{
    node *odd = head;
    node *even = head->next;
    node *evenStart = even;
    while (1)
    {
        //  If reach to the end then connect first node of the even list to the last node of the odd list
        if (!odd || !even || !(even->next))
        {
            odd->next = evenStart;
            break;
        }

        // Connecting Odd nodes
        odd->next = even->next;
        odd = even->next;

        // If there are NO more even nodes after current odd node.
        if (odd->next == NULL)
        {
            even->next = NULL;
            odd->next = evenStart;
            break;
        }

        // Connecting Even nodes.
        even->next = odd->next;
        even = odd->next;
    }
}

int main()
{
    node *head = NULL;
    int arr[] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        insertAtTail(head, arr[i]);
    }
    display(head);
    evenAfterOdd(head);
    display(head);
    return 0;
}