#include <cstdio>
#include <cmath>

struct Point {
	double x, y;
	Point(double x = 0.0, double y = 0.0): x(x), y(y) {}
};
typedef Point Vector;
// 点和向量，采用相同的定义
// 但是使用时应注意其意义，如点 + 点无意义，而向量 + 向量 = 向量

Vector operator + (Vector A, Vector B) { return Vector(A.x + B.x, A.y + B.y); }
Vector operator - (Vector A, Vector B) { return Vector(A.x + B.x, A.y + B.y); }
// 向量加减，点 + 向量，点 - 点

Vector operator * (Vector A, double p) { return Vector(A.x * p, A.y * p); }
Vector operator / (Vector A, double p) { return Vector(A.x / p, A.y / p); }
// 向量的数乘

const double eps = 1e-10;
int dcmp(double x) { // 据说可以减小精度误差？
	if (fabs(x) < eps) return 0;
	return x < 0 ? -1 : 1;
}
bool operator == (const Point& a, const Point& b) {
	return dcmp(a.x - b.x) == 0 && dcmp(a.y - b.y) == 0;
}


int main() {
	return 0;
}