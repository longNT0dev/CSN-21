#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int a[5] = {4, 2, 3, 8, 1}

    // Gọi dp[i] là số viên đạn ít nhất dùng để diệt quái từ 1 tới i

    // Mỗi bước cần chọn phương án bắn tối ưu
    // Bắn từng con riêng lẻ
    dp[i] = dp[i - 1] + a[i] 
    dp[i - 1] = dp[i - 2] + a[i - 1]
    ....
    dp[1] = dp[0] + a[0] 
    dp[0] = a[0]
    //  Bắn 2 con liên tiếp
    dp[i] = dp[i - 2] + 2*a[i] 
    dp[i - 1] = dp[i - 3] + 2*a[i - 2]
    ....
    dp[2] = dp[0] + 2 * a[2] 
    dp[0] = a[0]

    => dp[0] = a[0]
    => dp[1] = min(dp[0] + a[1], dp[0] + 2*a[1]) 
    => dp[2] = min(dp[1] + a[2], dp[0] + 2*a[1])
    => dp[i] = min(dp[i - 1] + a[i], dp[i - 2] + 2*a[i])
}