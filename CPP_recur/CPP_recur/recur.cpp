#include<iostream>
void countdown(int n);
int main() {
	countdown(4);
	return 0;
}
void countdown(int n)//����Լ�
{
	using namespace std;
	cout << "ī��Ʈ �ٿ� >>" << n << endl;
	if (n > 0)
		countdown(n - 1);//�ڱ� �ڽ��� ȣ���Ѵ�
	cout << n << ": Kaboom!\n";//������ ȣ��� ī��Ʈ�ٿ�43210�� �Ϸ�ǰ� countdown(0)���� ���������� ����ȴ�. 
}