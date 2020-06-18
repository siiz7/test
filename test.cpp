#include <iostream>

using namespace std;

int main()
{
    int value, value2;
    const int* ptr = nullptr; // 가능 --> const 의 대상이 int 주소값
    ptr = &value; // 가능
    ptr = &value2;
    // *ptr = 5; // 불가
    
    return 0;
}
