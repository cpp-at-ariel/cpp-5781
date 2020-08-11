/**
 * Demonstrates maps.
 * 
 * @author Erel Segal-Halevi
 * @since 2018-05
 */

#include <iostream>
#include <map>
using namespace std;

int main() {
	map<string,int> m1;

	m1["abc"] = 300;
	cout << "m1[abc]=" << m1["abc"] << endl;
	cout << "m1[def]=" << m1["def"] << endl;

	cout << boolalpha << (m1.find("abc")!=m1.end()) << endl;
	cout << boolalpha << (m1.find("def")!=m1.end()) << endl;
	cout << boolalpha << (m1.find("xyz")!=m1.end()) << endl;

	auto find_abc = m1.find("abc");
	//find_abc->first = string("abd"); // const
	auto at_find_abc = *find_abc;
	find_abc->second = 500;
	cout << "m1[abc]=" << m1["abc"] << endl;

	// cout << m1.at("xyz") << endl;  // throws exception

	for(auto pair1: m1) {
		cout << pair1.first << ':' << pair1.second << endl;
	}

	for(auto [key,val] : m1) {
		cout << key << ':' << val << endl;
	}

}
