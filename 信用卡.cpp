#include <iostream>
using namespace std;

int main (){
    cout << " 請輸入信用卡號";
 
    long long i;
    cin >> i;
    long long num = i / 10 % 10;
    long long num2 = i / 10 / 10 / 10 % 10;
    long long num3 = i / 10 / 10 / 10 / 10 / 10 % 10;
    long long num4 = i / 10 / 10 / 10 / 10 / 10 / 10 / 10 % 10;
    long long num5 = i / 10 / 10 / 10 / 10 / 10 / 10 / 10 / 10 / 10 % 10;
    long long num6 = i / 10 / 10 / 10 / 10 / 10 / 10 / 10 / 10 / 10 / 10 / 10 % 10;
    long long num7 = i / 10 / 10 / 10 / 10 / 10 / 10 / 10 / 10 / 10 / 10 / 10 / 10 / 10 % 10;
    long long num8 = i / 10 / 10 / 10 / 10 / 10 / 10 / 10 / 10 / 10 / 10 / 10 / 10 / 10 / 10 / 10 % 10;

    long long k = num * 2 / 10 + num * 2 % 10 + num2 * 2 / 10 + num2 * 2 % 10 + num3 * 2 / 10 + num3 * 2 % 10 + num4 * 2 / 10 + num4 * 2 % 10 + num5 * 2 / 10 + num5 * 2 % 10 + num6 * 2 / 10 + num6 * 2 % 10 + num7 * 2 / 10 + num7 * 2 % 10 + num8 * 2 / 10 + num8 * 2 % 10;
    long long num9 = i % 10;
    long long num10 = i / 10 / 10 % 10;
    long long num11 = i / 10 / 10 / 10 / 10 % 10;
    long long num12 = i / 10 / 10 / 10 / 10 / 10 / 10 % 10;
    long long num13 = i / 10 / 10 / 10 / 10 / 10 / 10 / 10 / 10 % 10;
    long long num14 = i / 10 / 10 / 10 / 10 / 10 / 10 / 10 / 10 / 10 / 10 % 10;
    long long num15 = i / 10 / 10 / 10 / 10 / 10 / 10 / 10 / 10 / 10 / 10 / 10 / 10 % 10;
    long long num16 = i / 10 / 10 / 10 / 10 / 10 / 10 / 10 / 10 / 10 / 10 / 10 / 10 / 10 / 10 % 10;

    long long l = k + num9 + num10 + num11 + num12 + num13 + num14 + num15 + num16;
    
    if (l % 10 == 0){
        cout << "你的卡片是合法的";
    }

    if (l % 10 != 0){
        cout << "你的卡片是無效的";
    }
}
