//Tamanna Tahsin
//Assignment 2
//This program will compute
//statistics for how a salesperson did.
//This includes total bought,quota,
//bonus,sales percentage, and so on.
#include <iostream>
using namespace std;
int main()
{int id,bought;
int left,quota;
int customers,goal,bonus;
double percentage;
int count=0;
cout.setf(ios::fixed,ios::floatfield);
cout.precision(3);
cout<<"Please enter id. Type 0 to end.";
cout<<endl;
cin>>id;
while(id>0)
{
    cout<<"Enter bought product,left,quota";
    cout<<endl;
    cin>>bought>>left>>quota;
    cout<<endl;
    cout<<"id "<<id<<endl;
    cout<<bought<<" bought"<<" ";
    cout<<"  "<<left<<" didn't"<<endl;
    cout<<"quota "<<quota<<endl;
    customers=bought+left;
        cout<<"total customers "<<customers<<endl;
    goal=quota-bought;
    if(quota>bought)
        cout<<goal<<" below quota try harder";
    if(quota<=bought)
        cout<<"made quota congratulations";
    cout<<endl;
    bonus=(bought*2)-left;
    if(bonus>0)
       {cout<<"bonus is "<<bonus;
       }
    else
        {cout<<"bonus is 0";
        }
    cout<<endl;
    if(bought>left)
        cout<<"more bought than didn't";
    if(bought<left)
        cout<<"more didn't buy";
    if(bought==left)
        cout<<"same number of each";
    cout<<endl;
    percentage=(1.0*bought)/customers;
        cout<<"sales prct is "<<percentage;
        cout<<endl<<endl;
    cout<<"Please enter id. Type 0 to end."<<endl;
    cin>>id;
    count++;


}
cout<<endl<<"Total Number of Salesperson is  "<<count;
cout<<endl;
return 0;
}
