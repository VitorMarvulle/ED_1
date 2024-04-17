#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	
	int v[10], w[10], n=0, fat=1, y, b=1;
	
	for(int i=0; i<10; i++){
		
		cout<<"Digite um numero: \n";
		cin>>v[i];
		}
		
		cout<<"\n";
		cout<<"VETOR DIGITADO \n\n";
		for(int i : v){
		
		cout<<i<<"\t";
		}
		
		
		cout<<"\n";
		cout<<"VETOR FATORIAL \n\n";	
	
	
		for (int i=0; i<10; i++){
			for(y=v[i]-1;y>0; y--){	
			fat = fat+fat*y;								
		}		
		w[i]=fat;
		fat=1;
		cout<<w[i]<<"\t";		
	}

	
	
	
	return 0;
}
