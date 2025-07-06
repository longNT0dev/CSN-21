#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;         // Nhập số phần tử
    vector<int> A(n); // Mảng chứa dãy số
    for (int i = 0; i < n; ++i)
        cin >> A[i];

    vector<int> L(n, 1); // Mảng lưu độ dài LIS kết thúc tại mỗi vị trí, khởi tạo = 1

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            if (A[j] < A[i] && L[i] < L[j] + 1)
            {
                L[i] = L[j] + 1;
            }
        }
    }

    int result = *max_element(L.begin(), L.end()); // Tìm giá trị lớn nhất trong mảng L
    cout << "Do dai day con tang dai nhat: " << result << endl;

    return 0;
}
