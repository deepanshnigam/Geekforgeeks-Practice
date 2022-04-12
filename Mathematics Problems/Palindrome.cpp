#include<iostream>
using namespace std;
bool Palindrome(int num){
	int temp=0,rev=0,n;
	n=num;
	
	while(n!=0){
		temp=n%10;
		rev=rev*10+temp;
		n=n/10;
	}
	return (rev==num);
}
int main(){
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	cout<<Palindrome(num);
	return 0;
}
