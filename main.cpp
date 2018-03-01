//author: Travis Bybee
#include<iostream>
#include<string>
using namespace std;

int main()
{
        int LIST_SIZE = 5;
        string list[LIST_SIZE]; //array of 5 strings
        int numItems = 0;
        char input;
        string Item;
        do
        {
                cout<<"\n==GROCERY LIST MANAGER==";
                cout<<"\nEnter your choice: ";
                cout<<"\n (A)dd an item";
                cout<<"\n (Q)uit";
                cout<<"\nYour choice (A/Q): ";
                cin>>input;

                if(input=='A'||input=='a')
                {
                        cout<<"What is the item?\n";
                        cin>>input; 
                        if(numItems==5)
                        {
                                cout<<"You'll need a bigger list!\n";
                        } 
                        else
                        {
                                list[numItems]=Item;
                                numItems++;
                        }
                }
        }while(input != 'q' && input != 'Q');
        if(input == 'q' || input == 'Q')
        {
                cout<<"==ITEMS TO BUY==\n";
                for(int x=0; x<LIST_SIZE; x++)
                {
                        cout<<x+1;
                        cout<<" "<<list[x]<<"\n";
                }

        }
        return 0;
}
