//author: Travis Bybee
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
        vector <string> List; 
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
                        cin>>Item;
                        List.push_back(Item);
                }
        }while(input != 'q' && input != 'Q');
        if(input == 'q' || input == 'Q')
        {
                if(List.size()>=1)
                {
                        cout<<"==ITEMS TO BUY==\n";
                        for(int x=0; x<List.size(); x++)
                        {
                                cout<<x+1;
                                cout<<" "<<List[x]<<"\n";
                        }
                }
                else
                {
                        cout<<"No items to buy!\n";
                }

        }
        return 0;
}
