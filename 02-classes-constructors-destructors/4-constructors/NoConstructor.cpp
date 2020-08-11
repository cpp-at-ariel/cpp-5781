class A {
	public:
	A(int) {}
	A() = default;
	//A(const A&) = default;
	//A& operator=(const A&) = default;
	//A(int,int) = default;
};


int main() {
	A a;
}
