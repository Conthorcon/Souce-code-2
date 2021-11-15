//Destructor
#include<iostream>
using namespace std;

class Array{
  public:
  	int n;
	int *arr;
	~Array(){
		cout<<"Destructor Called"<<endl;
		delete[]arr;
		}
};
void Func1(){
	Array a;
	a.n=5;
	a.arr=new int[a.n];
}
void Func2(){
    Array b;
	b.n=3;
	b.arr=new int[b.n];
	}

int main(){
    Func1();
	Func2();
return 0;
}		
		
