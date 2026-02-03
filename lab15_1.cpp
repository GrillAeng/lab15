#include <iostream>
#include <string>
using namespace std;

int main(){
    int a=5;
    char b='A';
    char &c=b;
    int *x = &a,**z = &x;
	char *y = &b;
    cout << a << " " << b << " " << c << " " << x << " " << (void *)y << " " << z << "\n";
	cout << &a << " " << (void *) &b << " " << (void *) &c << " " << x << " " << &y << " " << &z << "\n";
	c = 'F';
	cout << a << " " << b << " " << c << " " << x << " " << (void *)y << " " << z << "\n";
	*y = 'W';
	cout << a << " " << b << " " << c << " " << x << " " << (void *)y << " " << z << "\n";
	*x = 6;
	x = &a;
	cout << a << " " << b << " " << c << " " << x << " " << (void *)y << " " << z << "\n";
	**z = 7;
	z = &x;
	cout << a << " " << b << " " << c << " " << x << " " << (void *)y << " " << z << "\n";
	return 0;
}
