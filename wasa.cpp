#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	int l;
	float *x;
	cout<<"ingrese limite:";cin>>l;
	x=(float*)malloc(l*sizeof(float));
	for(int i=0;i<l;i++){
		cout<<"ingrese un numero:"; cin>>*(x+i);
	}
	for(int i=0;i<l;i++){
		cout<<*(x+i);
	}
	return 0;
}
