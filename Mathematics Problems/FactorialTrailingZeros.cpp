#include<iostream>
using namespace std;
int fact(int num){
	int f=num;
	int fact=1;
	while(f!=0){
		fact = fact * f;
		f--;
	}
	int t1=fact,t2=0;
	while(t1%10==0){
		t2++;
		t1=t1/10;
	}
	return t2;
}
int efficient(int num){
	int res=0;
	for(int i=5;i<=num;i=i*5){
		res=res+num/i;
	}
	return res;
}
int main(){
	int num,z1,z2;
	cout<<"Enter a number: ";
	cin>>num;
	z1=fact(num);
	z2=efficient(num);
	cout<<"Trailing Zeros of factorial is "<<z1<<" Efficient soln : "<<z2;
	return 0;
}
