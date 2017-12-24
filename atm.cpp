#include<iostream>
using namespace std;
int main()
{
float init_balance=5000;
int debit;
char ch='y';
while(1)
{
cout<<"enter the withdrawl amount\n";
cin>>debit;
if((debit%5)==0)
{
init_balance=init_balance-debit;
cout<<"successfull transaction\n";
}
else if(debit>init_balance)
{
cout<<"insufficient account balance\n";
}
else
{
cout<<"incorrect withdrawl\n";
}
init_balance=init_balance-0.50;
cout<<"remaining balance is "<<init_balance;
cout<<"\ndo you want to do more transaction\n";
cin>>ch;
if(ch=='n')
{
break;
}
}
return 0;
}
