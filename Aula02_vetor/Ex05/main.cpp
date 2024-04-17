#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int maior, menor, soma=0, par=0, impar=0, i, n;
	double pctim, pctpar, media;
	
		cout<<"Digite o tamanho do VETOR: \n";
		cin>>n;
	int v[n];
	
	for (int i=0; i<n; i++){
		cout<<"Digite um numero: \n";
		cin>>v[i];
	}
	
	cout<<"** VETOR DIGITADO ** \n";
		for (int i : v){	
		cout<<i<<"\n";
		soma=soma+i;
		if(i%2==0){
			par=par+1;
		}else{
			impar=impar+1;
		}	
	}
	
	media=soma/n;
	pctim = (impar*100)/n;
	pctpar = (par*100)/n;
	
	maior=v[0];
		for(i=0; i<n; i++){
			if(maior < v[i]){
			maior = v[i];
			}	
		}
	
	menor=v[0];
		for(i=0; i<n; i++){
			if(menor > v[i]){
			menor = v[i];
			}	
		}		
		
	cout<<"MAIOR NuMERO \n\n";
		cout<<maior;
	cout<<"\n MENOR NuMERO \n\n";
		cout<<menor;		
	cout<<"\n MEDIA \n\n";
		cout<<media;
	cout<<"\n IMPARES \n\n";
		cout<<impar<<" -> "<<pctim<<"%";		
	cout<<"\n PARES \n\n";
		cout<<par<<" -> "<<pctpar<<"%";	
		
	return 0;
}
