# include <iostream>
using namespace std;

inline float square(float x) {
	return x * x;
}

int main() {
	int a = 5;
	float b = square(a);
	cout << "한 변의 길이가 " << a << "인 정사각형의 넓이는? : " << b << '\n';
}