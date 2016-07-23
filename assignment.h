#include <iostream>    // Only for displaying copy constructor
#include <fstream>     // for file I/O
#include <cstddef>     // for NULL
#include <new>         // for bad_alloc
#include <string>
//#include "ListP.h"     // header file

using namespace std;

class List
{
   public:
       bool isEmpty() const;
       int getlength() const;
       void Insert(int data,char item);
       void Delete(int data);

   private:
       struct Node
       {

           Node *item;
           Node *next;

       };
       int size;
       Node *head;
}
;

bool List::isEmpty() const
{
    return size==0;
}

int List::getlength() const
{
    return size;
}

void List::Insert (int data , char item)
{
    int newlength= getlength()+1;

    if(((data<1)||(data>newlength))){
        return;
    }
    else{
        Node *newPtr= new Node;
        Node *newItem=new Node;
        newPtr->item=newItem;
        size= newlength;

        if(data==1){
            newPtr->next=head;
            head=newPtr;
        }
        else
        {
            Node *prev=(data-1);
            newPtr->next= prev->next;
            prev->next=newPtr;
        }
    }
}

void List::Delete(int data)
{
    Node *cur;
    Node *prev;
   if (((data<1)||(data>getlength()))){
    return;
   }
   else{

    if (data==1){
        cur=head;
        head=head->next;
    }
    else{
        Node *prev=(data-1);
        cur= prev->next;
        prev->next=cur->next;
    }
    cur->next=NULL;
    delete cur;
    cur=NULL;
   }
}

