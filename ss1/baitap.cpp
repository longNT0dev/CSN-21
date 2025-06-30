#include <iostream>
using namespace std;

// bool kiemTraMangDoiXung(int arr[], int startIndex, int endIndex)
// {
//     // Phần cơ sở
//     if (startIndex >= endIndex)
//     {
//         return true;
//     }

//     cout << arr[startIndex] << "\n";
//     cout << arr[endIndex] << "\n";
//     // Phần đệ quy
//     if (arr[startIndex] != arr[endIndex])
//     {
//         return false;
//     }

//     return kiemTraMangDoiXung(arr, startIndex + 1, endIndex - 1);
// }

int tongBinhPhuong(int n) {
    // Phần cơ sở
    if(n == 1) return 1;

    // Phần đệ quy 
    return n^2 + tongBinhPhuong(n - 1);
} 

int main()
{
    // Bài 1
    // int arr[6] = {1, 2, 3, 3, 2, 1};
    // int startIndex = 0;
    // int endIndex = 5;
    // bool isValid = kiemTraMangDoiXung(arr, startIndex, endIndex);
    // cout << isValid;

    // Bài 2
    // S(n) = ? => n^2 + S(n - 1)
    // S(5) = 5^2 + S(4)
    // S(4) = 4^2 + S(3)
    // S(3) = 3^2 + S(2)
    tongBinhPhuong(8);

    return 0;
}