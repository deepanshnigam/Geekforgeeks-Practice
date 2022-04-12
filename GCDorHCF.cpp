#include<iostream>
using namespace std;
int hcf(int n1, int n2){
	int res=0;
	if(n1>n2)
		res=n2;
	else 
		res=n1;
	while(res>0){
		if(n1%res==0&&n2%res==0){
			break;
		}
		res--;
	}
	return res;
}
int efficient(int n1, int n2){
	while(n1!=n2){
		if(n1>n2)
			n1=n1-n2;
		else
			n2=n2-n1;
		
	}
	return n1;
}

int main(){
	int num1,num2,z1,z2;
	cout<<"Enter 1 number: ";
	cin>>z1;
	cout<<"Enter 2 number: ";
	cin>>z2;
	num1=hcf(z1,z2);
	num2=efficient(z1,z2);
	cout<<"GCD or HCF by naive and efficient method are :"<<num1<<"   "<<num2;
	return 0;
}
