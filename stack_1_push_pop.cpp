#include <iostream>
#include <stack>

using namespace std;

int main()
{
	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	
	cout << s.top() << endl; // 3 
	s.pop();
	cout << s.top() << endl; // 2
	cout << s.size();     // 2
	
	cout << "\n";
	
	while(!s.empty()) // 2 1
	{
		cout << s.top() << " ";
		s.pop();
	}
}
