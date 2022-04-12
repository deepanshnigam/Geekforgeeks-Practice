#include<iostream>
using namespace std;
void primefactor(int n){

	
	for(int i=2;i*i<=n;i++){  		//check for prime and then divide them with number
		while(n%i==0){
			cout<<i<<" ";
			n=n/i;
		}	
	}
	if(n>1)
		cout<<n;
	
}


int main(){
	int num1,num2,z1,z2;
	cout<<"Enter 1 number: ";
	cin>>z1;
	primefactor(z1);
	return 0;
}
