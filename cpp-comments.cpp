#include<iostream>

using namespace std;

int main(){

//ʹ�� #if 0 ... #endif ��ʵ��ע��
#if 0
   cout << "Hello World! if_0" << endl;
#endif

//#if 0 �ĳ� #if 1 ��ִ�� code �Ĵ���
#if 1
   cout << "Hello World! if_1 " << endl;
#endif


//#if condition, ���condition����Ϊtrue��ִ��code1, ����ִ��code2
#if 2 < 5
  cout << "code1" << endl;
#else
  cout << "code2" << endl;
#endif

#if 2 > 5
  cout << "code1" << endl;
#else
  cout << "code2" << endl;
#endif

    return 0;
}

