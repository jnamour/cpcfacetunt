#include <iostream>
using namespace std;

int main() {
	int valorAnterior, valorActual;
	char paloAnterior, paloActual, mezcla;
	int cartas,i, t, testCases;
	scanf("%d", &testCases);
	//cin>>testCases;
	for(t=1;t<=testCases;t++){
		scanf("%d", &cartas);
		//cin>>cartas;
		valorAnterior=0; paloAnterior='@';
		mezcla='B';
		for(i=1; i<=cartas;i++){
			scanf("%d %c", &valorActual, &paloActual);
			//cin>>valorActual>>paloActual;
			if(valorActual==valorAnterior || paloActual==paloAnterior)
				mezcla='M';
			valorAnterior=valorActual;
			paloAnterior = paloActual;
		}
		printf("%c\n", mezcla);
		//cout<<mezcla<<endl;
	}
	return 0;
}

