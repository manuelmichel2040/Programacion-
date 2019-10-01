#include<iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;

void llenar(int vec[],int );
void mostrar(int vec[], int n);
void coladera(int vec[], int);

int main(){
	int vec[1000];
	
	 llenar(vec, 1000);
	 coladera(vec, 1000);
	 mostrar(vec,1000);
	 
	
	cout<<endl;
	
	
}

void llenar(int vec[],int n)
{
	for(int i=0;i<1000;i++){
		vec[i]=1;
	}
	
	
}

void coladera(int vec[], int)
{
		for(int i=2;i<1000;i++){
		   if(vec[i])
		      for(int j=2;i*j<1000;j++){
			        vec[i*j]=0;
		      }
	  }
	
}

void mostrar(int vec[], int n)
{
	 for(int i=2;i<1000;i++){
	   if(vec[i])
	      cout<<i<<" ";
   }
}

