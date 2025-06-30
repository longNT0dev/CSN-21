#include <iostream>
#include <sstream>

using namespace std;

int laySoLuongDoChoiLonNhat(int prices[], int k, int endIndex)
{
    int soLuongDoChoiToiDa = 0;

    for (int i = 0; i < endIndex; i += 1)
    {
        int priceItem = prices[i];
        cout << "Price:" << priceItem << "\n";
        k = k - priceItem;
        cout << "MoneyLeft:" << k << "\n";
        if (k >= 0)
        {
            soLuongDoChoiToiDa += 1;
        }
        else
        {
            return soLuongDoChoiToiDa;
        }
    }

    return soLuongDoChoiToiDa;
}

void generateBinary(string str, int strLength, int pos)
{
    for(char i = '0'; i <= '1'; i++) {
        // Điều kiện để in ra chuỗi hợp lệ
        str[pos] = i;
        if (pos == strLength - 1)
        {
            // Hiển thị chuỗi nhị phân
            cout << str << "\n";
        }
        else
        {
            // Gọi backtrack để làm gì đó
            generateBinary(str, strLength, pos + 1);
        }
    }
}

int main()
{
    // int k;
    // // int prices[] = {3, 10, 2, 1, 9, 20, 8};
    // // Mảng prices sau khi sắp xếp
    // int prices[] = {1, 2, 3, 8, 9, 10, 20};
    // int endIndex = sizeof(prices) / sizeof(prices[0]);
    // cin >> k;

    // cout << laySoLuongDoChoiLonNhat(prices, k, endIndex);

    // Ngươi dùng nhập vào 1 số n => Hãy liệt kê ra tất cả các chuỗi nhị phân có độ dài n
    int n;
    cout << "Nhập vào độ dài chuỗi: \n";
    cin >> n;
    string str(n, 'a');

    generateBinary(str, n, 0);
}