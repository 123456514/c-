#include <iostream>
using namespace std;
// ��һ�����ݽṹ���Ա�
// ���� + ���� ����������ɾ���

/**
 * &l ��ʾ������������ �Բ������޸ĽṹҪ������
 */
void test(int &x){
    x = 1024;
    printf("test �����ڲ��� x = %d\n" ,x);
}
int main() {
    int x = 1;
    test(x);
    printf("main ���� x = %d\n",x);
    printf("���");
    return 0;
}
