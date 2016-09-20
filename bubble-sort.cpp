  #include<iostream>
  #include<iomanip>
  #include<cstdlib>
    using namespace std;
    class bubble
    {
    public :

        string arr[7][3] = {{"TDM2121","Accounting for Decision Making","2"},
                            {"TIM2121","Introductory Microeconomics","2"},
                            {"TBL3131","Business Law","4"},
                            {"TOB4454","Organisational Behaviour","2"},
                            {"TES2213","Economics of Business Strategy","4"},
                            {"TIA4486","Contemporary Issues in Advertising","4"},
                            {"TAS3313","Advertising Strategy","2"}};

	int option;

        //Function to accept array elements
        void disp()
        {
        for (int i =0 ; i<6 ; i++)
        {
        cout << "    " << setw(11) << left <<arr[i][0] << left << "     "
             <<  setw(46)  << arr[i][1]
             << "    " << arr[i][2] <<"\n";
        }

        }

        void bubblesort()
        {
            for( int i=0;i<6 ;i++ )
            {
            for( int i=0;i<6 ;i++ )
            {
                if(arr[i][option-1] > arr[i+1][option-1]){
					std::string temp;
                        temp = arr[i][option-1];
                        arr[i][option-1] = arr[i+1][option-1];
                        arr[i+1][option-1] = temp;


				}
		      }
		   }
        }

};
int main()
{

    bubble list;
    list.disp();
	cout << "\n Welcome , what do you want to sort ?\n"
		 << "Press 1 to sort the subject code\n"
		 << "Press 2 to sort the subject name\n"
		 << "Press 3 to sort the subject crediit hour\n";
	cin >> list.option;

    list.bubblesort();
	list.disp();


    return 0;
}
