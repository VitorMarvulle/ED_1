#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int vet[10], x, i=0;
	
	while (x>0 && i<10){
	
		cout<<"Digite um numero:  \n";
		cin>>x;
		vet[i]=x;
		i++;
	}
	cout<<"VETOR ORIGINAL \n";
	for(i=0;i<10;i++){
	cout<<"\n"<<vet[i]<<"\n";		
	}
	
	cout<<"VETOR INVERSO \n";
	for(i=0;i<10;i++){
	cout<<"\n"<<vet[i]*-1<<"\n";		
	}
	
		

	
	
	return 0;
}
