#include <iostream>
#include <fstream>
#include "assignment.h"
using namespace std;


int main(){

char choice;
  bool done = false;
  List alist;
  do
  {

    cout << endl << endl << endl;
    cout << "          1. Add Record To Back" << endl;
    cout << "          2. Insert a Record" << endl;
    cout << "          3. Erase a Record by Record Number" << endl;
    cout << "          5. Clear ALL Records" << endl;
    cout << "          6. Display ALL Records" << endl;
    cout << "          Q. Quit" << endl;
    cout << endl;
    cout << "        => ";
    cin >> choice;
    choice = toupper(choice);

    node ch, content;
    char yesorno;
    string filename;
    int recno;

    switch( choice )
    {
      case '1' :
         cout << "Character to add to back => ";
         cin >> ch;
         List.Insert( List.getLength() + 1, ch );
         break;

      case '2' :
         cout << "Record number to insert => ";
         cin >> recno;
         cout << "Character to insert => ";
         cin >> ch;
         List.Insert( recno, ch );
         break;

      case '3' :
         cout << "Record number to erase => ";
         cin >> recno;
         alist.Delete( recno );
         break;

      case 'Q' :
         done = true;
         break;

      default :
         cout << "Invalid choice" << endl;
    }
  } while ( !done );
  cout << "Good Bye !!" << endl;






}
