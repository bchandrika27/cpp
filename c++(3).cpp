#include<iostream>
using namespace std;
inline int square(int x) {
	return x*x;
}
inline int cube(int x) {
	return x*x*x;
}
int main() {
	int num;
	cout<<"Enter a number:";
	cin>>num;
	cout<<"Square of"<<num<<"is:"<<square(num)<<endl;
	cout<<"cube of"<<num<<"is:"<<cube(num)<<endl;
	return 0;
}
