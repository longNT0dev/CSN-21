#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // int a[5] = {4, 2, 3, 8, 1}

    // // Gọi dp[i] là số viên đạn ít nhất dùng để diệt quái từ 0 tới i
    // // BASE CASE
    // dp[0] = a[0]
    // // Cách 1: Bắn từng con dp[0] + a[1]
    // // Cách 2: Bắn liên tiếp 2*a[0]
    // dp[1] = min(dp[0] + a[1], 2*a[0])


    // // Con thứ 3
    // // Cách 1: Bắn từng con: dp[1] + a[2]
    // // Cách 2: Bắn liên tiếp dp[0] + 2*a[1]
    // dp[2] = min(dp[1] + a[2], dp[0] + 2*a[1])
    // dp[i] = min(dp[i - 1] + a[i], dp[i - 2] + 2* a[i - 1])


    // for 2 > i - 1
    //     dp[i] = min(dp[i - 1] + a[i], dp[i - 2] + 2* a[i - 1])
}
