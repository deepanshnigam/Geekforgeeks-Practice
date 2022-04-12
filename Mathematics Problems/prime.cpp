#include<iostream>
using namespace std;
bool prime(int n1){
	int flag=0;
	for(int i=2;i*i<=n1;i++){
		if(n1%i==0)
			flag++;	
	}
	if(flag==0)
		return true;
	else
		return false;
}


int main(){
	int num1,num2,z1,z2;
	cout<<"Enter 1 number: ";
	cin>>z1;
	

	cout<<"Prime number is :"<<prime(z1);
	return 0;
}
