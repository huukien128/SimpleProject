# Báo cáo Bài tập lớn - Nhóm 1

## 1. Thông tin nhóm
| STT | Họ và tên | MSSV | Vai trò |
|---|---|---|---|
| 1 | Nguyễn Hữu Kiên | 24022807 | Nhóm trưởng |
| 2 | Nguyễn Đức Thành | 24022833 | Thành viên |
| 3 | Nguyễn Hoàng Long | 24022811 | Thành viên | 
| 4 | Lê Thành Đức | 24022778 | Thành viên |
| 5 | Phạm Hoàng Long |24022812| Thành viên |

---

## 2. Thông tin bài tập
- **Tên bài toán**: Knight’s Tour - Bài toán mã đi tuần  
Đề bài  
Trên bàn cờ NxN, con mã điểm (x, y). Tìm đường đi qua mọi ô đúng 1 lần.  
Gợi ý:  
-Đệ quy thử từng nước đi.  
-Nếu thăm hết mọi ô, thành công.  
-Nếu đi vào ngõ cụt, quay lui.  
---
## 3. Hướng giải quyết bài toán
### a. Phân tích bài toán 
(Mô tả sơ bộ về bài toán, yêu cầu đầu vào - đầu ra, các ràng buộc nếu có)  

1. Mô tả sơ bộ

- Bài toán "Mã đi tuần" (Knight’s Tour) là một bài toán cổ điển trong lập trình và toán học. Trên một bàn cờ kích thước 𝑁×𝑁, một quân mã bắt đầu từ một vị trí cho trước và di chuyển theo quy tắc của quân mã trong cờ vua. Nhiệm vụ là tìm một lộ trình sao cho quân mã đi qua tất cả các ô trên bàn cờ đúng một lần.  

3. Đầu vào
     
- Số nguyên 𝑁 (kích thước bàn cờ: N×N).  
- Hai số nguyên (x,y) là tọa độ ban đầu của quân mã trên bàn cờ (chỉ số bắt đầu từ 0). 

5. Đầu ra
    
- Nếu tìm được lộ trình thỏa mãn điều kiện, xuất ra một ma trận N×N trong đó số tại ô (i,j) thể hiện thứ tự nước đi của quân mã.  
- Nếu không tìm được lộ trình hợp lệ, thông báo không có lời giải.
 
6. Ràng buộc  

- Quân mã chỉ được di chuyển theo quy tắc của cờ vua: mỗi nước đi có dạng chữ "L" (có 8 hướng di chuyển hợp lệ).  
- Quân mã không được đi vào ô đã đi qua trước đó.  
- Khi N≥5, bài toán luôn có lời giải (trừ một số trường hợp đặc biệt).  
- Khi N=1, luôn có lời giải (quân mã không cần di chuyển).  
- Khi N=2, 3 không có lời giải vì mã không thể đi hết bàn cờ.   
### b. Thuật toán/Hướng tiếp cận
(Mô tả chi tiết cách giải quyết bài toán, có thể kèm theo sơ đồ hoặc giả mã để minh họa)  

1. Ý tưởng giải thuật

 - Đặt quân mã tại vị trí bắt đầu (x,y).  
 - Đánh dấu ô hiện tại là đã đi qua (bằng một số thứ tự).  
 - Duyệt qua tất cả 8 nước đi hợp lệ của quân mã (các bước nhảy hình chữ "L").  
 - Nếu đi hết N×N ô, trả về thành công.  
 - Nếu gặp ngõ cụt (tức là không còn nước đi hợp lệ), quay lui (Backtrack) và thử hướng khác. 

 2. Giả mã đề minh họa  

      Hàm KnightTour(x, y, bước_đi):  
   - Nếu bước_đi = N*N:  
            → In ra bàn cờ (đã tìm thấy lộ trình)  
            → Kết thúc  

   - Duyệt qua tất cả 8 nước đi hợp lệ của quân mã:  
        Nếu ô tiếp theo hợp lệ và chưa được đi qua:  
            → Đánh dấu ô đó với bước_đi  
            → Gọi KnightTour(x_mới, y_mới, bước_đi + 1)   
            → Nếu tìm thấy lời giải, kết thúc  
            → Nếu không, huỷ đánh dấu ô (quay lui)  
          
   - Nếu không còn nước đi hợp lệ nào:  
             → Quay lui
     
3.Ưu và Nhược điểm của Backtracking trong Mã đi tuần

 -Ưu điểm  
 
 - Dễ hiểu, dễ triển khai: Chỉ kiểm tra nước đi hợp lệ và quay lui khi cần.  
 - Tìm được mọi lời giải: Có thể tìm tất cả các cách đi hợp lệ.  
 - Áp dụng cho mọi bàn cờ: Chạy được với mọi kích thước N×N.  
 - Tiết kiệm bộ nhớ

-Nhược điểm  

 - Tốc độ chậm khi N lớn
 - Dễ gặp ngõ cụt: Cần quay lui nhiều lần nếu không tối ưu.
 - Không tối ưu: Thử nhiều nhánh trước khi tìm được lời giải.

 -Tối ưu  
 
  - Dùng Warnsdorff’s Rule để ưu tiên nước đi ít lựa chọn tiếp theo nhất.
  - Tối ưu hóa bằng AI hoặc tìm kiếm heuristic.


## 4. Ví dụ minh hoạ
### Ví dụ 1
**Input:**  
Nhap kich thuoc ban co: 3  
Nhap vi tri cua quan ma (0 -> 2): 1 1  
**Output:**    
Khong co loi giai!  
**Giải thích:**  
- Khi quân mã ở vị trí (1;1) thì nó sẽ không có nước đi hợp lệ nào khác (không thỏa mãn điều kiện trong hàm check) dẫn đến việc Valid = 0. Khi đó, dòng lệnh trong else sẽ được thực hiện và in ra màn hình: Khong co loi giai!

### Ví dụ 2
**Input:**  
- Nhap kich thuoc ban co: 5  
- Nhap vi tri cua quan ma (0 -> 4): 0 0  
**Output:**

1       20      17      12      3

16      11      2       7       18

21      24      19      4       13

10      15      6       23      8

25      22      9       14      5  
**Giải thích:**    
- Đánh dấu ô hiện tại với số bước.
- Nếu đã đi đủ 25 ô (N²) → In kết quả.
- Nếu không có nước đi hợp lệ → Quay lui, thử hướng khác.  
- Kết quả là một hành trình hợp lệ của quân mã, đi qua tất cả ô mà không lặp lại
### Ví dụ 3
**Input:**  
Nhap kich thuoc ban co: 6  
Nhap vi tri cua quan ma (0 -> 5):1 2  
**Output:**  
36      21      26      29      2       19

25      30      1       20      7       28

22      35      24      27      18      3

31      12      33      6       15      8

34      23      10      13      4       17

11      32      5       16      9       14

**Giải thích:**  
- Đánh dấu ô hiện tại với số bước.
- Nếu đã đi đủ 36 ô (N²) → In kết quả.
- Nếu không có nước đi hợp lệ → Quay lui, thử hướng khác.  
- Kết quả là một hành trình hợp lệ của quân mã, đi qua tất cả ô mà không lặp lại

---

## 5. Link video báo cáo
[Video báo cáo nhóm 1](https://www.youtube.com/watch?v=7OZu0q0jHQ0)

---

## 6. Link source code
[Thư mục src](./src)

