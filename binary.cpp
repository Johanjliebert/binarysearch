#include <iostream>
#include <fstream>
using namespace std;

int main() {
	cout<<"podaj ilosc liczb"<<endl;
	int n, liczba;
	cin>>n;
	int A[n]
	cout<<"podaj liczbe, ponizej której ma program wyswietlic najwieksza liczbe z pliku"<<endl;
	ifstream plik;
	plik.open("numbers.txt");
		for(int i=0;i<n;i++){
			plik>>A[i];
		}
		int p=n, k=0, s;
		while(p>k){
			s=(p+k)/2-1;
			if(A[s]<liczba){
				k=s;
			}
			else{
				p=p/2;
			}
		}
		cout<<A[s];
		
    return 0;
}
