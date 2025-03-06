# Báo cáo Bài tập lớn - Nhóm 2

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
-Bài toán "Mã đi tuần" (Knight’s Tour) là một bài toán cổ điển trong lập trình và toán học. Trên một bàn cờ kích thước 𝑁×𝑁, một quân mã bắt đầu từ một vị trí cho trước và di chuyển theo quy tắc của quân mã trong cờ vua. Nhiệm vụ là tìm một lộ trình sao cho quân mã đi qua tất cả các ô trên bàn cờ đúng một lần.

3. Đầu vào
-Số nguyên 𝑁 (kích thước bàn cờ: N×N).
-Hai số nguyên (x,y) là tọa độ ban đầu của quân mã trên bàn cờ (chỉ số bắt đầu từ 0).
5. Đầu ra
-Nếu tìm được lộ trình thỏa mãn điều kiện, xuất ra một ma trận N×N trong đó số tại ô (i,j) thể hiện thứ tự nước đi của quân mã.
-Nếu không tìm được lộ trình hợp lệ, thông báo không có lời giải.
6. Ràng buộc
-Quân mã chỉ được di chuyển theo quy tắc của cờ vua: mỗi nước đi có dạng chữ "L" (có 8 hướng di chuyển hợp lệ).
-Quân mã không được đi vào ô đã đi qua trước đó.
-Khi N≥5, bài toán luôn có lời giải (trừ một số trường hợp đặc biệt).
-Khi N=1, luôn có lời giải (quân mã không cần di chuyển).
-Khi N=2, không có lời giải vì mã không thể đi hết bàn cờ.
-Khi N=3, chỉ có một số trường hợp có lời giải.
### b. Thuật toán/Hướng tiếp cận
(Mô tả chi tiết cách giải quyết bài toán, có thể kèm theo sơ đồ hoặc giả mã để minh họa)
1. Ý tưởng giải thuật
-Đặt quân mã tại vị trí bắt đầu (x,y).
-Đánh dấu ô hiện tại là đã đi qua (bằng một số thứ tự).
-Duyệt qua tất cả 8 nước đi hợp lệ của quân mã (các bước nhảy hình chữ "L").
-Nếu đi hết N×N ô, trả về thành công.
-Nếu gặp ngõ cụt (tức là không còn nước đi hợp lệ), quay lui (Backtrack) và thử hướng khác.
2 Giả mã đề minh họa
Hàm KnightTour(x, y, bước_đi):
 -Nếu bước_đi = N*N: 
        → In ra bàn cờ (đã tìm thấy lộ trình)
        → Kết thúc

 - Duyệt qua tất cả 8 nước đi hợp lệ của quân mã:
        nx = x + dx[i]
        ny = y + dy[i]

 - Nếu (nx, ny) nằm trong bàn cờ và chưa đi qua:
        Đánh dấu ô (nx, ny) với bước_đi
        Gọi đệ quy KnightTour(nx, ny, bước_đi + 1)
        Nếu thành công → Kết thúc

            Nếu không, hủy dấu ô (nx, ny) (quay lui)
## 4. Ví dụ minh hoạ
### Ví dụ 1
**Input:**  
(Mô tả input)  
**Output:**  
(Mô tả output)  
**Giải thích:**  
(Mô tả cách giải)

### Ví dụ 2
**Input:**  
(Mô tả input)  
**Output:**  
(Mô tả output)  
**Giải thích:**  
(Mô tả cách giải)

### Ví dụ 3
**Input:**  
(Mô tả input)  
**Output:**  
(Mô tả output)  
**Giải thích:**  
(Mô tả cách giải)

---

## 5. Link video báo cáo
[Video báo cáo nhóm X](#)

---

## 6. Link source code
[Thư mục src](./src)

