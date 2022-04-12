#include<iostream>
using namespace std;
int count(int num){
	int c=0;
	int temp;
	temp=num;
	while(temp!=0){
		temp=temp/10;
		c=c+1;
	}
	return c;
}
int main(){
	int num,digits=0;
	cout<<"Enter a number: ";
	cin>>num;
	digits=count(num);
	cout<<"No. of digits are : "<<digits;
	return 0;
}
