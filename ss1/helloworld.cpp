#include <iostream>
#include <unordered_map>
#include <chrono>
using namespace std;

// sum(5) = 5 + sum(4)
// sum(4) = 4 + sum(3)
// sum(3) = 3 + sum(2)
// sum(2) = 2 + sum(1)
// sum(1) = 1
// int sum(int n)
// {
//    // Phần cơ sở => Kết thúc hàm (điều kiện dừng)
//    if (n == 1)
//       return 1;

//    // Phần đệ quy => Gọi lại hàm để thực hiện tính toán
//    return n + sum(n - 1);
// }

// Hãy viết thuật toán đệ quy để lấy ra số Fibo thứ n trong dãy
// F(5) = F(4) + F(3)
// F(4) = F(3) + F(2)
// F(3) = F(2) + F(1)
// F(2) = 1 F(1) = 1

unordered_map<long, long> memo; // Danh sách
// Lưu trữ lại các kết quả đã tính toán nếu có
int fibonanci(int n)
{
   // Phần cơ sở => Điều kiện dừng n = 1 || n = 2
   if (n == 1 || n == 2)
      return 1;

   // Kiểm tra trong bộ nhớ
   if (memo[n] != 0)
   {
      return memo[n];
   }

   memo[n] = fibonanci(n - 1) + fibonanci(n - 2);

   // Phần đệ quy
   return memo[n];
}

int fibonanciWithoutMemo(int n)
{
   // Phần cơ sở => Điều kiện dừng n = 1 || n = 2
   if (n == 1 || n == 2)
      return 1;

   return fibonanci(n - 1) + fibonanci(n - 2);
}

int main()
{
   // Tính tổng các số 1, n bằng phương pháp đệ quy
   // 1 + 2 + 3 + ... + n
   int n;
   cin >> n;
   // int sum = 0;
   // for(int i = 1; i <= n; i++) {
   //    sum += i;
   // }
   auto start = std::chrono::high_resolution_clock::now();
   cout << fibonanci(n);
   auto end = std::chrono::high_resolution_clock::now();
   auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
   std::cout << "Thời gian thực hiện: " << duration.count() << " milliseconds" << std::endl;

   auto start1 = std::chrono::high_resolution_clock::now();
   cout << fibonanciWithoutMemo(n);
   auto end1 = std::chrono::high_resolution_clock::now();
   auto duration1 = std::chrono::duration_cast<std::chrono::milliseconds>(end1 - start1);
   std::cout << "Thời gian thực hiện: " << duration1.count() << " milliseconds" << std::endl;
 
   // cout << sum;
   // cout << sum(n);
}
