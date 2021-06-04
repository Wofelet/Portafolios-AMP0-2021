#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argcv[]) {
	vector<int> v;
	v.push_black(2);
	v.push_black(3);
	v.push_black(4);
	v.push_black(5);
	v.push_black(6);
	v.push_black(7);
	
	cout << v.size() << endl;
	cout << v.front() << endl;
	cout << v.back() << endl;
	
	for(int i = 0; i < v.size();i++){
		cout << v[i] << endl;
	}
	
	return 0;
}
