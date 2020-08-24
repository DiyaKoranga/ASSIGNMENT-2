#include<iostream>
using namespace std;
class Date{
public:
Date(int a,int b,int c){
day=a;
month=b;
year=c;
if (b >= 1 && b <= 12)
		{
			month = b;
		} else {
			cout << "Error: please enter valid month ranging from 1-12";
			month = 1;
		}}
public:void displayDate(){
cout<<day<<"/"<<month<<"/"<<year<<endl;}

private: int day;
int month;
int year;
};
int main(){int x,y,z;
    cout<<"enter the day,month and year respectively: "<<endl;
cin>>x>>y>>z;
Date o1(x,y,z);
cout<<"the date is: "<<endl;
o1.displayDate();
}
