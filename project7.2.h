#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <cstring>
#include <iomanip>
#include <fstream>
#include <stack>
#include <queue>

using namespace std;
        bool found = false;
struct node{
      string subject;
      node* next;
};

bool Empty(node *head);
char menu();
void insertFirstElement(node *&head, node *&last, string subject);
void insert(node *&head, node *&last, string subject);
void remove(node *&head, node *&last);
void showList(node *current);
void showSubject1();
void showSubject2();
void showSubject3();
void exitSystem();
bool adminlogin();
bool studentlogin();
void selectionsort();
bool Empty(node *head)
{
  if(head==NULL)
    return true;
  else
    return false;
}

char menu()
{
   menu:
   char choice;
   cout<<"\n";
   cout<<"================================================================"<<endl;
   cout<<"Welcome to MMU Student Subject Registration System!"<<endl;
   cout<<"================================================================"<<endl;
   cout<<"Please choose the following options."<<endl;
   cout<<"1. Add a subject."<<endl;
   cout<<"2. Remove a subject."<<endl;
   cout<<"3. Show the subjects added."<<endl;
   cout<<"4. Show the subjects offered."<<endl;
   cout<<"5. Searching Subject Code added."<<endl;
   cout<<"6. Exit."<<endl;
   cout<<"================================================================"<<endl;
   cout<<"Please choose the options you want: ";

   return choice;
}
void insertFirstElement(node *&head, node *&last, string subject)
{
   node *temp = new node;
   temp->subject=subject;
   temp->next=NULL;
   head=temp;
   last=temp;
}
void insert(node *&head, node *&last, string subject)
{
    int ch = 0;
   if(Empty(head))
    insertFirstElement(head, last, subject);

   else
   {
       node *temp=new node;
       temp->subject=subject;
       temp->next=NULL;
       last->next=temp;
       last=temp;
   }
}
void remove(node *&head, node *&last) {
    node *temp = new node;
    if(Empty(head))
        cout<< "this list is already empty.\n";
    else if (head == last) {
        delete head;
        head = NULL;
        last = NULL;
    } else {
        node *temp=head;
        head=head->next;
        delete temp;
    }
}
string str;
void showList(node *current)
{
     string a[3];
     string b;
     int i = 0;
     stack <string> z;
    if(Empty(current)){
       cout<<"Subject list is empty." << endl;}
    else
    {
        cout<<"The list of subjects you added: "<< endl;

        while(current !=NULL)
        {
            cout<<current->subject<<endl;
            current=current->next;
        }

    }
}

void showSubject1()
{
    cout<<"The subjects offered for you in Trimester 1 2016/2017: "<<endl;
    cout<<"Subject Code               Subject Name                 Credit Hour" << endl;
    cout<<"**********************************************************************" << endl;
    cout<<"TMA1111                    Mathematical Techniques           6"<<endl;
    cout<<"TCP1121                    Computer Programming              6"<<endl;
    cout<<"TDB1131                    Database Systems                  6"<<endl;
    cout<<"TOS1141                    Operating System                  6"<<endl;
}

int option;

string arr[4][3] = {{"TMA1111","Mathematical Techniques","6"},
                    {"TCP1121","Computer Programming","6"},
                    {"TDB1131","Database Systems","6"},
                    {"TOS1141","Operating System","6"}
                   };


void disp()
        {
        for (int i =0 ; i<4 ; i++)
        {
        cout << "    " << setw(11) << left <<arr[i][0] << left << "     "
             <<  setw(46)  << arr[i][1]
             << "    " << arr[i][2] <<"\n";
        }

        }
void bubblesort()
        {
            for( int i=0;i<3 ;i++ )
            {
            for( int i=0;i<3 ;i++ )
            {
                if(arr[i][option-1] > arr[i+1][option-1]){
                        for(int j=0;j<3;j++){
					std::string temp;
                        temp = arr[i][j];
                        arr[i][j] = arr[i+1][j];
                        arr[i+1][j] = temp;
                        }

				}
		      }
		   }
        }


 string arr2[5]=    {{"TMA1211      DiscreteMathematics and Probability        6"},
                     {"TAO1221      Computer Architecture and Organization     6"},
                     {"TDC1231      Data Communications and Networking         6"},
                     {"TEP1241      Ethics and Professional Conducts           6"}
                   };

void showSubject2()
{
    cout<<"The subjects offered for you in Trimester 2 2016/2017: "<<endl;
    cout<<"Subject Code               Subject Name                          Credit Hour" << endl;
    cout<<"*****************************************************************************" <<endl;

    cout<<"TMA1211                    Discrete Mathematics and Probability        6"<<endl;
    cout<<"TAO1221                    Computer Architecture and Organization      6"<<endl;
    cout<<"TDC1231                    Data Communications and Networking          6"<<endl;
    cout<<"TEP1241                    Ethics and Professional Conducts            6"<<endl;

}

int option2;

void disp2()
        {
        for (int i =0 ; i<4 ; i++)
        {
        cout << "    " << setw(11) << left <<arr[i][0] << left << "     "
             <<  setw(46)  << arr[i][1]
             << "    " << arr[i][2] <<"\n";
        }

        }
void bubblesort2()
        {
            for( int i=0;i<3 ;i++ )
            {
            for( int i=0;i<3 ;i++ )
            {
                if(arr[i][option2-1] > arr[i+1][option2-1]){
                        for(int j=0;j<3;j++){
					std::string temp;
                        temp = arr[i][j];
                        arr[i][j] = arr[i+1][j];
                        arr[i+1][j] = temp;
                        }
				}
		      }
		   }
        }

void selectionsort ()
{
         int i, j;
        string value;
        queue <string> z;

       for( i = 1 ; i < 4 ; i++)
    {
        value = arr2[i];
        for (j = i - 1; j >= 0 && arr2[j] > value; j--)
            arr2[j + 1] = arr2[j];
        arr2[j + 1] = value;
    }
    for (int i = 0 ; i <4 ; i++)
    {
        cout<<arr2[i]<<endl;
    }
    cout<<" "<<endl;
}
void showSubject3()
{
    cout<<"The subjects offered for you in Trimester 3 2017/2018: "<<endl;
    cout<<"Subject Code               Subject Name                    Credit Hour     "     << endl;
    cout<<"****************************************************************************"    << endl;
    cout<<"TDS2111                    Data Structures and Algorithms         6           "<<endl;
    cout<<"TOP2121                    Object-Oriented Programming            6           "<<endl;
    cout<<"TSA2131                    System Analysis and Design             6           "<<endl;
    cout<<"TCN2141                    Computer Networks                      6           "<<endl;
}

string arr3[4][3] = {{"TDS2111","Data Structures and Algorithms","6"},
                    {"TOP2121","Object-Oriented Programming","6"},
                    {"TSA2131","System Analysis and Design","6"},
                    {"TCN2141","Computer Networks","6"}
                   };


int option3;

void disp3()
        {
        for (int i =0 ; i<4 ; i++)
        {
        cout << "    " << setw(11) << left <<arr[i][0] << left << "     "
             <<  setw(46)  << arr[i][1]
             << "    " << arr[i][2] <<"\n";
        }

        }
void bubblesort3()
        {
            for( int i=0;i<3 ;i++ )
            {
            for( int i=0;i<3 ;i++ )
            {
                if(arr[i][option3-1] > arr[i+1][option3-1]){
                        for(int j=0;j<3;j++){
					std::string temp;
                        temp = arr[i][j];
                        arr[i][j] = arr[i+1][j];
                        arr[i+1][j] = temp;
                        }

				}
		      }
		   }
        }

void exitSystem()
{
    cout<<"Thank you for using our system."<<endl;
}
int Max;
int id= 1142700000;
    stack<int> idStack;
    stack<int> pwStack;
    string adminid , adminpw;
        int ide ;
        int passe;
        bool d = false;
        bool e = false;
        int passlength = 5;
        int pass;
        stack<int> idStack1;
    stack<int> pwStack1;

bool adminlogin()
{
    char menuchoice;
    cout<<"========================================"<<endl;
    cout<<"Enter 1 to login as Admin"<<endl;
    cout<<"Enter 2 to login as Student "<<endl;
    cout<<"Enter choice : ";
    cin>>menuchoice;
    cout<<endl;
    cout<<"========================================"<<endl;
    if (menuchoice == '1'){
    adminRetry:
    cout<<"Enter Admin Username : ";
    cin>> adminid;
    cout<<"Enter Admin Password : ";
    cin>>adminpw;
if ((adminid == "Admin") && (adminpw == "Admin"))
{
    cout<<endl<<"Logged in"<<endl;
    char choice;
    cout<<"Press 1 to generate new Id and Password "<<endl;
    cin>> choice;
    switch(choice){
   case '1' :
   static const char pool[] =
"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
"abcdefghijklmnopqrstuvwxyz"
"0123456789";
int poolSize = sizeof(pool) -1;

    cout<<"Enter number of student to be added : ";
    cin>>Max;
    for (int i = 0 ; i<Max ; i++)
    {
        cout<<"Your New Id is "<<id<<endl;
        idStack1.push(id);
        id++;
        for (int j = 0 ; j <= passlength ; j++)
        {
        pass += pool[rand() % poolSize];
        }
        cout<<"Your New Password is "<< pass <<endl;
        pwStack1.push(pass);
        cout<<" "<<endl;
    }
        system("pause");
        system("cls");
        break;
    }


    RetryLogin :
    for (int i = 0 ; i<Max ; i++)
    {
        cout<<"Your New Id is "<<idStack1.top()<<endl;
        idStack.push(idStack1.top());
        idStack1.pop();
        cout<<"Your New Password is "<< pwStack1.top() <<endl;
        pwStack.push(pwStack1.top());
        pwStack1.pop();
        cout<<" "<<endl;
    }
    cout<<"Please Enter Your Student Username :";
    cin>>ide;
    cout<<endl<<"Please Enter Your Student Password :";
    cin>>passe;

    for (int i = 0 ; i < Max ; i++){
    if (idStack.top() != ide)
        {
        idStack.pop();
        }
    else
        {
            d = true;
        }
        }
    for(int i = 0 ; i < Max ; i++){
    if(pwStack.top() != passe)
        {
            pwStack.pop();
        }
    else
        {
            e = true ;
        }
        }
   if ((d == true)&&(e == true))
    {
    cout<<endl<<"Sucessfully Logged In"<<endl;
    found = true ;
    }
   else
   {
    cout<<endl<<"Wrong Username Or Password . Please Try Again "<<endl;
    found = false;
    system("cls");
    goto adminRetry;
   }
}
else
{
    goto adminRetry;
}
}
else if (menuchoice == '2')
{
    goto RetryLogin;
}
/*else
goto adminRetry;
*/}


string searchCode(node *head,string SubCode){
node *temp=new node;
temp=head;
while(temp->next!=NULL)
{
    if (temp->subject==SubCode)
    {
        cout<<"Subject: "<<SubCode<<" is founded"<<endl;
        system("pause");
        system("cls");
        break;
        menu();

    }
    else
    {
        temp = temp->next;
    }

}
}
