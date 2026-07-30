#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class List
{
    Node *head;
    Node *tail;

public:
    List()
    {
        head = tail = NULL;
    }
    void push_front(int val)
    {
        Node *newNode = new Node(val); // dynamic
        // Node newNode(val);//static
        if (head == NULL)
        {
            head = tail = newNode;
            cout << head->data << "->";
            return;
        }
        else
        {
            cout << newNode->data << "->";
            newNode->next = head;
            head = newNode;
        }
    }
    void push_back(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            cout << endl;
            cout << "push back in last position " << " " << newNode->data;
            tail->next = newNode;
            tail = newNode;
        }
    }

    void Pop_front()
    {
        if (head == NULL)
        {
            cout << "can not pop value from empty list";
            return;
        }
        else
        {
            Node *temp = head;
            head = head->next;
            cout<<endl;
            cout<<"Pop front the head data "<<temp->data;
            temp->next = NULL;
            delete temp;
        }
    }

    void Pop_back()
    {
        if (head == NULL)
        {
            cout << "can not pop value from empty list";
            return;
        }

            Node *temp = head;
            while (temp->next != tail)
            {
                temp = temp->next;
            }

        temp -> next =NULL;
        cout<<endl;
        cout<<"pop back the tail data "<<tail->data;
        delete tail;
        tail=temp;//reassaign new tail
    }

void insert(int val , int pos){

    if(pos<0){
        cout<<"invalid position \n";
        return;
    }
    if(pos==0){
        push_front(val);
        return;
    }
    Node* temp =head;
    for(int i=0;i<pos-1;i++){
        temp =temp->next;
    }
    Node* newNode = new Node(val);
    newNode->next = temp->next; // new node ke position er node er sathe connect kora
    cout<<"new node insert position at "<<pos << " index " <<"and value is :  "<<val<<endl;
    temp->next =newNode; //current temp ke newnode e assign kora
}


int Search(int key){
    Node* temp =head;
   int idx=0;
  while(temp != NULL){
    if(temp->data==key){
        return idx;
    }
    temp = temp->next;
    idx++;

  }
  return -1;
}
    void PrintList()
    {
        cout << endl;
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;

        }
        cout << "NULL" << endl;
    }
};

int main()
{
    List l1;
    l1.push_front(2);
    l1.push_front(3);
    l1.push_front(5);
    l1.push_front(9);
    l1.push_front(10);

    l1.push_back(4);
    l1.PrintList();

    l1.Pop_front();
    l1.PrintList();

    l1.Pop_back();
    l1.PrintList();

    l1.insert(7,3);
    l1.PrintList();

   cout<<"the searching value index is "<<l1.Search(7)<<endl;
   cout<<"the searching value index is "<<l1.Search(10)<<endl;
}

/*
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;

        cout << "\n====================================\n";
        cout << "Node Created\n";
        cout << "Value : " << data << endl;
        cout << "Address : " << this << endl;
        cout << "Next : " << next << endl;
        cout << "====================================\n";
    }
};

class List
{
    Node *head;
    Node *tail;

public:
    List()
    {
        head = NULL;
        tail = NULL;

        cout << "\nList Created\n";
        cout << "Head = " << head << endl;
        cout << "Tail = " << tail << endl;
    }

    void push_front(int val)
    {
        cout << "\n\n#########################################\n";
        cout << "push_front(" << val << ") Called\n";
        cout << "#########################################\n";

        cout << "\nStep 1 : Create New Node\n";

        Node *newNode = new Node(val);

        cout << "newNode Pointer : " << newNode << endl;

        if (head == NULL)
        {
            cout << "\nList is Empty\n";

            head = tail = newNode;

            cout << "head = " << head << endl;
            cout << "tail = " << tail << endl;

            cout << "\nCurrent List : ";
            print();

            return;
        }

        cout << "\nList is NOT Empty\n";

        cout << "Current Head Address : " << head << endl;
        cout << "Current Head Value : " << head->data << endl;

        cout << "\nStep 2 : newNode->next = head\n";

        newNode->next = head;

        cout << "newNode->next = " << newNode->next << endl;

        cout << "\nStep 3 : head = newNode\n";

        head = newNode;

        cout << "New Head Address : " << head << endl;
        cout << "Tail Address : " << tail << endl;

        cout << "\nCurrent List : ";
        print();
    }

    void print()
    {
        Node *temp = head;

        while (temp != NULL)
        {
            cout << temp->data << "(" << temp << ")";

            if (temp->next != NULL)
                cout << " ---> ";

            temp = temp->next;
        }

        cout << " ---> NULL\n";
    }

    void printDetailed()
    {
        cout << "\n========== Detailed List ==========\n";

        Node *temp = head;

        while (temp != NULL)
        {
            cout << "Node Address : " << temp << endl;
            cout << "Data         : " << temp->data << endl;
            cout << "Next Address : " << temp->next << endl;
            cout << "---------------------------\n";

            temp = temp->next;
        }

        cout << "===================================\n";
    }
};

int main()
{
    List l1;

    cout << "\n\n======= Insert 2 =======\n";
    l1.push_front(2);

    cout << "\n======= Insert 3 =======\n";
    l1.push_front(3);

    cout << "\n======= Insert 5 =======\n";
    l1.push_front(5);

    cout << "\n======= Insert 9 =======\n";
    l1.push_front(9);

    cout << "\n\nFinal Linked List\n";
    l1.print();

    l1.printDetailed();

    return 0;
}

*/