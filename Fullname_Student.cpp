#include<iostream>
using namespace std;

struct Fullname {
	string fst, mid,lst;
	void setData(string f,string m,string l){
		fst=f; mid=m; lst=l;
	}
	string setName(){
		return (fst+" "+mid+" "+lst);
	}
};

struct Student{
	int roll,marks;
	Fullname Name;
	string f,m,l;
	void readData(){
		cin>>roll;
		cin>>f>>m>>l;
		cin>>marks;
	}
	void display(){
		cout<<"Roll.no.: "<<roll<<endl;
		Name.setData(f,m,l);
		cout<<"Name : "<<Name.setName()<<endl;
		cout<<"Marks : "<<marks<<endl;
	}
};

int main()
{
	Student S;
	S.readData();
	S.display();
}
