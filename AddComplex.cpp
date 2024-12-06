#include<iostream>
using namespace std;

struct Complex{
	float real,img;
	void setData(float r,float i){
		real=r; img=i;
	}
	int display(){
		
		cout<<real;
		if(img<0)
			cout<<" - "<<img*(-1)<<"i"<<endl;
		else
			cout<<" + "<<img<<"i"<<endl;
		return 0;
	}
	Complex add(Complex c1,Complex c2){
		Complex c;
		c.real=c1.real+c2.real;
		c.img=c1.img+c2.img;
		return c;
	}
};

int main()
{
	float real1,img1,real2,img2;
	cin>>real1>>img1>>real2>>img2;
	Complex C1,C2,C;
	C1.setData(real1,img1);
	C2.setData(real2,img2);
	C=C.add(C1,C2);
	C.display();
	return 0;
}
