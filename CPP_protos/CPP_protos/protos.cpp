#include<iostream>
void cheers(int);
double cube(double x);
int main(void) {
	using namespace std;
	cheers(5);
	cout << "�ϳ��� ���� �Է��Ͻʽÿ�: ";
	double side;
	cin >> side;
	double volume = cube(side);
	cout << "�Ѻ��� ���̰�" << side << "��Ƽ������ ������ü�� ���Ǵ�";
	cout << volume << " ���������͹����Դϴ�.\n";
	cheers(cube(2)); //cube �Լ��� 2�� ���� ���� ���ϰ��� cheers�Լ��� ���ڷ� ����Ѵ�.
	return 0;
}
void cheers(int n) {
	using namespace std;
	for (int i = 0; i < n; i++)
		cout << "Cheers! ";
	cout << endl;
}
double cube(double x)
{
	return x * x * x;
}