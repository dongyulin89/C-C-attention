#include<iostream>

using namespace std;

int main(){

//使用 #if 0 ... #endif 来实现注释
#if 0
   cout << "Hello World! if_0" << endl;
#endif

//#if 0 改成 #if 1 来执行 code 的代码
#if 1
   cout << "Hello World! if_1 " << endl;
#endif


//#if condition, 如果condition条件为true则执行code1, 否则执行code2
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

