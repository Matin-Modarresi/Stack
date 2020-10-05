#include <iostream>
#include <stack>
#include <vector>
#include <list>
using namespace std;

template<typename T>

void push_(T& r)
{
	r.push(1);
	r.push(2);
	r.push(3);
	
}

template<typename T>
void pop_(T &r)
{
	while(!r.empty())
	{
		cout << r.top() << " ";
		r.pop();
		
	}
	
	cout << "\n";
}

int main()
{
	stack<int> ds;       //imlementation stack with deque(default)
	
	stack<int, vector<int>> vs; // implementation stack with vector
	
	stack<int, list<int>> ls;  // implementation stack with list
	
	push_(ds);  // ds : 1 -> 2 -> 3
	push_(vs); //  vs : 1 -> 2 -> 3
	push_(ls); //  ls : 1 -> 2 -> 3
	
	pop_(ds); // 3 2 1
	pop_(vs); // 3 2 1
	pop_(ls); // 3 2 1
		
}
