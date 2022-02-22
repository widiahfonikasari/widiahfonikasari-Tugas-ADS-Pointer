#include<iostream>
using namespace std;

int main(){
	int a = 10;
	int b = 15;
	int c = 27;
	
	//pointer 
	int *p1=&a; 
	int *p2=&b; 
	int *p3=&c;
	
	//int a mempunyai nilai dan address
	cout<<"nilai dari a: "<<a<<endl<<endl;

	cout<<"alamat dari a: "<<&p1<<endl<<endl;
	
	cout<<"nilai dari b: "<<b<<endl<<endl;
	
	cout<<"alamat dari b: "<<&p2<<endl<<endl;
	
	cout<<"nilai dari c: "<<c<<endl<<endl;
	
	cout<<"alamat dari c: "<<&p3<<endl<<endl;
	
	p1=&a;
	cout<<"nilai p1 :"<<&p1<<endl<<endl;
	
	p2=&b;
	cout<<"nilai p2 :"<<&p2<<endl<<endl;
	
	*p1=c;
	cout<<"nilai p1 :"<<a<<endl<<endl;
	
	a=*p2;
	cout<<"nilai a :"<<a<<endl<<endl;
	
	b=6;
	cout<<"nilai b :"<<b<<endl<<endl;
	
	p3=&b;
	cout<<"nilai p3 :"<<*p2<<endl<<endl;
	
	p3=&c;
	cout<<"nilai p3 :"<<&p3<<endl<<endl;
	
	*p1=*p3;
	cout<<"nilai p1 :"<<*p1<<endl<<endl;
	
	return 0;
}
