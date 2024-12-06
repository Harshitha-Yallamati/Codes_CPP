#include<iostream>
using namespace std;

struct Rectangle{
	int length,breadth;
  void setData(int l,int b){
		length=l; breadth=b;
	}
	void display(){
		cout<<"Length = "<<length<<endl;
		cout<<"Breadth = "<<breadth<<endl;
	}
	int Area() {
		return length*breadth;
	}
	int Perimeter() {
		return 2*(length+breadth);
	}
};

int main()
{
	int n;
	cin>>n;
	Rectangle r[n];
	for(int i=0;i<n;i++) {
		int length,breadth;
		cin>>length>>breadth;
		r[i].setData(length,breadth);
		r[i].display();
		cout<<"Area = "<<r[i].Area()<<endl;
		cout<<"Perimeter = "<<r[i].Perimeter()<<endl;
	}
	return 0;
}
