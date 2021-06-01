#include <iostream>
#include <fstream>
using namespace std;
bool pierwsza(int n){
	if(n<2)return false;
		
	for(int i=2;i*i<=n;i++) if(n%i==0) return false;
	return true;
}
int fib(int n){
	if(n<3)return 1;
	return fib(n-2)+fib(n-1);
}

int main(int argc, char** argv) {
	ofstream wejscie;
	wejscie.open("wynik.txt");
	for(int i=1;i<=40;i++){
		int x = fib(i);
		if(pierwsza(x)==true) wejscie<<x<<endl;
		else continue;
	}
	wejscie.close();
	return 0;
}
