#include<iostream>
using namespace std;
int fact(int num){
	int f=num;
	int fact=1;
	while(f!=0){
		fact = fact * f;
		f--;
	}
	return fact;
}
int main(){
	int num,factorial;
	cout<<"Enter a number: ";
	cin>>num;
	factorial=fact(num);
	cout<<"factorial is "<<factorial;
	return 0;
}
