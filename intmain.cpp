#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <cstring>
#include <iomanip>
#include <fstream>
#include <stack>
#include <queue>
#include "project7.2.h"
using namespace std;

int main(){
     adminlogin();
     system("pause");
     system("cls");
     while (found = true){
     node *head=NULL;
     node *last=NULL;
     int choice;
     string subject;
     string SubCode;
     int ch = 0;
do{
     menu();
        cin>>choice;
        switch(choice)
        {


            case 1: system("cls");
                    int enroll;
                    cout << "Which year u want to enroll?(1/2/3)" << endl;
                    cin >> enroll;
                    if (enroll == 1)
                        {
                           system("cls");
                           disp();
                           cout << "\n Welcome , what do you want to sort ?\n"
                                << "Press 1 to sort the subject code\n"
                                << "Press 2 to sort the subject name\n"
                                << "Press 3 to sort the subject credit hour\n";
                            cout<<"\n====>";
                           cin >> option;
                           bubblesort();
                           disp();
                        }
                    else if (enroll == 2)
                        {
                           system("cls");
                           disp2();
                           cout << "\n Welcome,this is selection sort.\n"
                                << "Press 1 to sort the subject code\n";
                           cout<<"\n====>";
                           cin >> option2;
                           selectionsort();
                           //disp2();
                        }
                    else if (enroll == 3)
                        {
                           system("cls");
                           disp3();
                           cout << "\n Welcome , what do you want to sort ?\n"
                                << "Press 1 to sort the subject code\n"
                                << "Press 2 to sort the subject name\n"
                                << "Press 3 to sort the subject credit hour\n";
                           cout<<"\n===>";
                           cin >> option3;
                           bubblesort3();
                           disp3();
                        }
                    else cout << "Invalid input" << endl;
                      choose:
                      cout<<"Please enter the subject: ";
                      cin>>subject;
                      if ((subject=="TMA1111")||(subject=="TCP1121")||(subject=="TDB1131")||(subject=="TOS1141")||(subject=="TMA1211")||
                          (subject=="TAO1221")||(subject=="TDC1231")||(subject=="TEP1241")||(subject=="TDS2111")||(subject=="TOP2121")||
                          (subject=="TSA2131")||(subject=="TCN2141"))
                      {
                          insert(head,last,subject);
                          ch += 6;
                          if (ch <= 20 ){
                          cout << "Subject Successfully added!";
                          cout<<"\ncurrent credit hour = "<<ch<<endl;
                          cout<<"\nDo you want to add another subject?(Y/N)";
                          char decide;
                          cin>>decide;
                          if(decide == 'Y'||decide=='y')
                          {
                                    goto choose;
                          }
                          else if(decide == 'N'||decide == 'n')
                          {
                               if(ch<10){cout<<"Less Credit Hour,Please Add More!!"<<endl;
                                          goto choose;  }
                            else{
                              system("cls");
                            }
                          }
                          else
                          {
                              goto choose;
                          }
                          }
                          else cout<<"Credit Hour exceed,Please Delete some Subjects!!! "<<endl;
                          system("pause");
                          system("cls");
                      }
                      else
                      {
                          cout << "Invalid Input,Please try again."<<endl;
                          goto choose;
                      }

                      break;

            case 2: system("cls");
                      remove(head,last);
                      break;

            case 3: system("cls");
                    showList(head);
                    break;

            case 4: system("cls");
                    char c;
                    cout<<"=============================="<<endl;
                    cout << "1:First Year" << endl;
                    cout << "2:Second Year" << endl;
                    cout << "3:Third Year" << endl;
                    cout<<"===>";
                    cin >> c;
                    cout<<"=============================="<<endl;
                        if (c=='1')
                        {
                            showSubject1();
                            system("pause");
                            system("cls");

                        }

                        else if (c=='2')
                        {
                            showSubject2();
                            system("pause");
                            system("cls");
                        }

                        else if (c=='3')

                        {
                            showSubject3();
                            system("pause");
                            system("cls");
                        }

                        else cout << "Invalid Input" << endl;
                        //return 0;
                      break;
            case 5:system("cls");

                    cout<<"Enter Subject Code to search Subject that has added:";
                    cin>>SubCode;
                    searchCode(head,SubCode);
                    break;

            case 6: system("cls");
                      exitSystem();
                      return 0 ;
                      break;


            default: cout<<"System Exit!Please enter a valid option number./n"<<endl;
        }
     }while(choice != '5');
}
}
