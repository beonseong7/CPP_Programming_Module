#include<iostream>

void simple();//void���� return�� ���ʿ䰡 ����.

int main() {
	using namespace std;
	cout << "main()���� simple() �Լ��� ȣ���մϴ�:\n";
	simple();//simple()�Լ� ȣ��
	cout << "main()�� simple() �Լ��� ����˴ϴ�.\n";//simple()ȣ���� ��������
	return 0;
}
void simple() {
	using namespace std;
	cout << "����� simple() �Լ��Դϴ�.\n";
}