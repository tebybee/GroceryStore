//author: Travis Bybee
#include<iostream>
#include<string>
using namespace std;

int main()
{
  string list[5]; //array of 5 strings
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
    if(numItems==5)
    {
     cout<<"You'll need a bigger list!\n";
    } 
    else
    {
     cin>>Item;
     list[numItems]=Item;
     numItems++;
    }
  }
 }while(input != 'q' && input != 'Q');
 if(input == 'q' || input == 'Q')
 {
   cout<<"==ITEMS TO BUY==\n";
  for(int x=0; x<numItems; x++)
  {
     cout<<x+1<<" "<<list[x]<<"\n";
  }

 }
 return 0;
}
