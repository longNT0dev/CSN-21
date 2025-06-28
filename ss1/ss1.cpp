#include <iostream>

using namespace std;

// Chuyển đổi 1 số thập phân sang số thập lục phân bằng đệ quy
void convertToHexa(int n)
{
    // Giá trị cơ bản
    if (n < 16)
    {
        if (n < 10)
        {
            cout << n;
        }
        else
        {
            cout << char(n + 55);
        }
    }
    else
    {
        convertToHexa(n / 16);
        if (n % 16 < 10)
        {
            cout << n % 16;
        }
        else
        {
            cout << char((n % 16) + 55);
        }
    }
}

int main()
{
    convertToHexa(11);
    return 0;
}