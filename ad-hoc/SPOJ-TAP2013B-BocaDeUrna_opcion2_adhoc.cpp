#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N, valor, totalVotos = 0;
	vector<float> votos;
	int respuesta;

	cin >> N;

	for(int i=0;i<N;i++)
	{
		cin >> valor;
		votos.push_back(valor);
		totalVotos += valor;
	}

	sort(votos.begin(), votos.end());
	reverse(votos.begin(), votos.end());

	if( (votos[0]*100/totalVotos >= 45) || (votos[0]*100/totalVotos >= 40 && (votos[0]*100/totalVotos - votos[1]*100/totalVotos)>=10) )
	{
		respuesta = 1;
	}
	else
		respuesta = 2;

	cout << respuesta << endl;
	return 0;
}
