#include <iostream>
#include <vector>
using namespace std;

template <class T , int capacity =30>

class stack{
	private:
		vector<T> s;
		
	public:
		stack() {s.reserve(capacity);}
		void push(const T& a) {s.push_back(a);}
		T pop() {T a = s.back(); s.pop_back() ; return a;}
		void clear() {s.clear();}
};

int main(){
	
	stack  <int,80>s1;
	s1.push(12);
	s1.push(13);
	
	cout << s1.pop();// 13
};
