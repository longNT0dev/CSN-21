#include <iostream>
#include <sstream>

using namespace std;

int countNumber2(int X) {
    int count = 0;

    while(X > 1 && X % 2 == 0) {
        count += 1;
        X = X / 2;
    }

    return count;
}

int countNumber5(int X) {
    int count = 0;

    while (X > 1 && X % 5 == 0)
    {
        count += 1;
        X = X / 5;
    }

    return count;
}

void laySoChuSo0TanCung(int X)
{
    // Phân tích X thành tích để đếm được có bao nhiêu chữ số 2 
    // 60 = 2 * 2 * 3 * 5
    // 70 = 2 * 5 * 7
    int number2Count = countNumber2(X);
    // Phân tích X thành tích để đếm được có bao nhiêu chữ số 5
    int number5Count = countNumber5(X);

    // Giả sử có 2 chữ số 2 và 4 chữ số 5 => (2,5), (2,5)
    int result = min(number2Count, number5Count);

    cout << "Có " << result << " số 0 ở tận cùng của chữ số " << X; 
}

int main()
{

    int X = 2000;
    laySoChuSo0TanCung(X);

    return 0;
}