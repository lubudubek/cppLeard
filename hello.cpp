#include <iostream>
#include <thread>

using namespace std;

void function_1(string msg){
	cout<<" thread function1 " << msg<<endl;
}

int main()
{
	cout<<thread::hardware_concurrency();
	thread t1(function_1, "1");
	thread t2(function_1, "2");
	for(auto i=0; i<10; i++)	
		cout<<i<<endl;
	cout<<"hello world"<<std::endl;
	t1.detach();
	cout<<"fuck off!"<<endl;
	cout<<std::endl<<"NO! You fuck off!"<<endl;
	t2.join();
	
	return 3;
}
