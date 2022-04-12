#include<iostream>
using namespace std;
int lcm(int n1, int n2){
	int res=0;
	if(n1<n2)
		res=n2;
	else 
		res=n1;
	while(true){
		if(res%n1==0&&res%n2==0){
			return res;
		}
		res++;
	}
	return res;
}
int efficient(int n1,int n2){
	int l = n1*n2;
	while(n1!=n2){			//finding gcd
		if(n1>n2)
			n1=n1-n2;
		else
			n2=n2-n1;	
	}
	
	l= l/n1;				//lcm=a*b/(gcd)
	return l;
}

int main(){
	int num1,num2,z1,z2;
	cout<<"Enter 1 number: ";
	cin>>z1;
	cout<<"Enter 2 number: ";
	cin>>z2;
	num1=lcm(z1,z2);
	num2=efficient(z1,z2);
	cout<<"LCM by naive and efficient method are :"<<num1<<"   "<<num2;
	return 0;
}
