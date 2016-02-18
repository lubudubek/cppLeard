#include <iostream>
#include <thread>

using namespace std;

void function_1(){
	cout<<" thread function1 ";
}

int main()
{
	thread t1(function_1);
	//cout<<"hello world"<<std::endl;
	//cout<<"fuck off!";
	//cout<<std::endl<<"NO! You fuck off!";
	t1.join();
	return 3;
}
