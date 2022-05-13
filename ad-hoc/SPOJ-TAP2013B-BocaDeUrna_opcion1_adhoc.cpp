#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
	int N,vi, i, prim=0, seg=0;
	int total=0;
	cin>>N;
	for(i=0;i<N;i++){
		cin>>vi;
		if(vi>prim){
			seg=  prim;
			prim = vi;
		}
		else
			if(vi>seg)
				seg= vi;
		total+=vi;
	}
	if(prim >= total*0.45)
		cout<<1;
	else
		if(prim >= total*0.40 && (prim-seg)*100/total>=10)
			cout<<1;
		else
			cout<<2;
	return 0;
}

