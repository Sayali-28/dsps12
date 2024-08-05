#include<iostream>
using namespace std;

class linearsearch
{
public:
int a[10];
int i,target,n;
void accept();
void search();
void count();
void index();
void diaplay();
};

void linearsearch::accept(){
cout<<"Enter size of array:";
cin>>n;
cout<<"Enter element array:";
for(i=0;i<n;i++)
{
cin>>a[i];
}
}

void linearsearch::search(){
cout<<"Enter target :";
cin>>target;

int flag=0;
for(i=0;i<n;i++)
{
if(a[i]==target)
{
flag=1;
}
}
if(flag=1)
{
    cout<<"Target found ";
}
else
{
    cout<<"Target not found";
}
}

void linearsearch::count(){
int count=0;
for(i=0;i<n;i++)
{
if(a[i]==target)
{
count++;
}
}
cout<<"Target elements are"<<count;

}

void linearsearch::index()
{
int firstindex=-1;
int lastindex=-1;
for(i=0;i<n;i++)
{
if(a[i]==target)
{
if(firstindex==-1)
{
firstindex=i;
}
lastindex=i;
}
}
cout<<"\nfirst index of count: "<<firstindex;
cout<<"\nlast index of count: "<<lastindex;



}




int main()
{
linearsearch b;
int choice,ch;
do{
cout<<"1.accept 2.search 3.count 4.index ";
cout<<"\nEnter operation to be performed:";
cin>>choice;

switch(choice)
{
case 1:b.accept();
       break;
case 2:b.search();
       break;
case 3:b.count();
       break;
case 4:b.index();
       break;
}
cout<<"\nDo you want to continue(0/1)";
cin>>ch;
}
while(ch==1);
}









