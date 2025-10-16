#include<iostream>
int value = 100;
namespace MyNamespace {
	int value = 200;
	void show() {
		std::cout<<"Namespace value:"<<value<<std::endl;    
	}
}
int main() {
	int value = 300;
	std::cout<<"Local value:"<<value<<std::endl;
	std::cout<<"Global value:"<<MyNamespace::value<<std::endl;
	MyNamespace::show();
	return 0;
}
