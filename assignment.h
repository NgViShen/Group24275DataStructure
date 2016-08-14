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
         void remove(int data);
         void remove(int data, string &subtitle);
         void remove(string subtitle);
         string retrieve(int data);
     private:
         struct Node
         {

             Node *item;
             Node *next;

         };
         int size;
         Node *head;
         List *find(int index) const;
  };

  bool List::isEmpty() const
  {
      return size==0;
  }

  int List::getlength() const
  {
      return size;
  }

  List::Node *List::find(int index) const
  {
     if ( (index < 1) || (index > getLength()) )
        return NULL;

     else
     {
        ListNode *cur = head;
        for (int skip = 1; skip < index; ++skip)
           cur = cur->next  ;
        return cur;
     }
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
              Node *prev=find(data-1);
              newPtr->next= prev->next;
              prev->next=newPtr;
          }
      }
  }

  void List::remove(int data)
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
          Node *prev=find(data-1);
          cur= prev->next;
          prev->next=cur->next;
      }
      cur->next=NULL;
      delete cur;
      cur=NULL;
     }
  }

  string List::Retrieve(int data)
  {
      Node *temp;
      if ((data<1) || (data>getlength()))
        return "Invalid Record Number !";
      else
        temp = find(data-1);
      return temp->item;


  }

 void List::remove(int data, string & subtitle){
    if (data==0){
       cout<<"There's nothing here!";
    }
    else{
       Node *prev=find(data-1);
       cur=prev->next;
       prev->next=cur->next;
    }
    cur->next=NULL;
    delete cur;
    cur=NULL;
 }
    }
 }
void List::remove(string subtitle)
 {
      ListNode *cur;
      --size;
      if (isEmpty())
      {
          cout<<""Empty code"<<endl;
          return;
      }
      else if (index == 1)
      {
         cur = head;
         head = head->next;
         head-> prev = NULL;
         delete cur;
         cur = NULL;
      }
     else if (index-1==getLength())
      {
          ListNode * cur = find(index);
          tail = cur->prev;
          cur-> prev->next=NULL;
      }
     else
     {
          ListNode * cur = find(index);
          (cur->prev)-> next = cur-> next;
          delete cur;
          cur = NULL;
     }
 }
