#include <iostream>
#include <fstream>
using namespace std;
int fib(int n){
	if(n<3)return 1;
	return fib(n-2)+fib(n-1);
}
int main(int argc, char** argv) {
	ofstream wynik;
	wynik.open("wynik.txt");
	for(int i=10;i<=40;i=i+10){
		wynik<<"F"<<i<<": "<<fib(i)<<endl;
	}
	wynik.close();
	return 0;
}
