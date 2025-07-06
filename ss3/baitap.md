1. Có n con quái xuất hiện trong thành phố. Để tiêu diệt được một con quái cần tốn a[i] viên đạn đối với con quái thứ i. Nếu bạn tiêu diệt hai con quái gần nhau, ví dụ con quái thứ i và i + 1 thì chỉ cần 2 x a[i] viên đạn.

Nhiệm vụ của bạn là làm sao tốn tổng số đạn ít nhất để tiêu diệt hết đám quái và bảo vệ thành phố.

2. Trong cửa hàng có n viên kẹo, viên kẹo thứ i có giá tiền là p[i] và độ ngọt là h[i]. Bạn có tối đa m tiền trong túi, hãy dùng số tiền đó một cách khéo léo để mua kẹo trong cửa hàng, sao cho tổng độ ngọt của tất cả viên kẹo bạn mua là lớn nhất có thể.

3. Ở thành phố nơi bạn sống vừa mới khai trương một rạp chiếu phim lớn. Hôm nay, rạp sẽ chiếu n bộ phim theo khung giờ cố định, bộ phim thứ i sẽ chiếu vào khung giờ t[i-1] đến t[i]. Trước khi xem bất kỳ bộ phim nào, bạn phải mua vé xem bộ phim ấy, có hai loại vé cho bạn lựa chọn:

Vé loại 1: Vé xem phim với giá p[i] tương ứng cho bộ phim thứ i.

Vé loại 2: Vé đặc biệt có thể xem nhiều bộ phim với tổng thời lượng tối đa 180 phút với giá 100 đô.

Nhiệm vụ của bạn là tính số tiền tối ưu nhất phải trả cho mỗi lần mua vé phim.

Ví dụ , rạp chiếu 3 bộ phim với các khung giờ t=[0,10,20,30], giá vé của các bộ phim là p=[40,50,60]. Bộ phim thứ nhất và thứ hai bạn dùng vé loại 1 là tối ưu nhất, số tiền bạn phải trả là 40,50. Bộ phim thứ ba bạn dùng vé loại hai là tối ưu nhất, vì trước đó bạn đã trả 40 + 50 = 90 rồi, nên bạn chỉ cần trả thêm 10 đô nữa là có vé loại 2 với thời lượng 180 phút, thời lượng này lớn hơn thời lượng của những bộ phim gần nhất nên vé này hợp lệ.




s(7) = {8,6,1,3,7,10} 20} 

Độ dài lớn nhất của chuỗi con có 4 phần tử = Độ dài lớn nhất của chuỗi con có 3 phần tử + 1
Độ dài lớn nhất của chuỗi con có 3 phần tử = Độ dài lớn nhất của chuỗi con có 2 phần tử + 1
....
s(1) = 1
1. Định nghĩa dãy con tăng là gì
{8, 10}
{8, 20}
{8, 10, 20}
{6, 7, 10, 20}
{1, 3, 7, 10, 20}

1. Tách bài toán lớn thành các bài toán nhỏ hơn 
2. Tìm ra quy luật, công thức liên hệ giữa bài toán nhỏ hơn và bài toán lớn hơn
3. Tìm ra bài toán base case 
=> 

1. Bài toán gốc tìm độ dài lớn nhất của chuỗi con tăng n phần tử 
=> Tách thành Tìm độ dài lớn nhất của chuỗi con tăng n - 1 phần tử 
2. Mối quan hệ của bài toán gốc và bài toán con là gì? 
=> Suy luận, thử về bài toán cụ thể

Tìm độ dài lớn nhất của chuỗi con tăng 3 phần tử => a3 = { {-2, 0}, {-2, 3!!} ... {1, 3} ... {2, 3} ... 4}
Tìm độ dài lớn nhất của chuỗi con tăng 2 phần tử => a2 = { {1, 3} ... {2, 3} ... { 1, 2, 6!! }... 4 ... }
Tìm độ dài lớn nhất của chuỗi con tăng 1 phần tử => BASE CASE = 1 (do chỉ có 1 phần tử nên độ dài lớn nhất chỉ có thể là 1) a1 = { 4 }


Giả sử mảng A là: [3, 4, 2, 5]

Ta xây dựng mảng L[] từ trái sang phải:

i = 0: A[0] = 3 → không có phần tử nào trước đó
→ L[0] = 1

i = 1: A[1] = 4

j = 0: A[0] = 3 ≤ 4 → có thể nối: L[1] = L[0] + 1 = 2

i = 2: A[2] = 2

j = 0: 3 > 2 → bỏ

j = 1: 4 > 2 → bỏ
→ Không nối được vào đâu → L[2] = 1

i = 3: A[3] = 5

j = 0: 3 ≤ 5 → L[3] = max(L[3], L[0] + 1) = max(1, 1+1) = 2

j = 1: 4 ≤ 5 → L[3] = max(2, 2+1) = 3

j = 2: 2 ≤ 5 → L[3] = max(3, 1+1) = 3
→ L[3] = 3