# 🧱 Tetris Console Game

Dự án trò chơi xếp gạch (Tetris) cổ điển chạy trên nền tảng Console Windows. Đây là sản phẩm đồ án môn học **Kỹ năng nghề nghiệp**, tập trung vào việc áp dụng lập trình hướng cấu trúc C++, quản lý phiên bản với Git/GitHub và xử lý đồ họa thời gian thực trên môi trường Terminal.

## 👥 Thành viên thực hiện

1. **Vũ Quang Huy (25730116) - Trưởng nhóm**
2. **Võ Trần Tín (25730154)**
3. **Nguyễn Thanh Long (25730124)**
4. **Nguyễn Châu Tuấn (25730159)**
5. **Trần Nguyễn Lâm Thành (25730147)**

## 🛠 Yêu cầu hệ thống

* **Hệ điều hành**: Windows (Sử dụng thư viện `windows.h` để điều khiển tọa độ con trỏ và `conio.h` để nhận tín hiệu bàn phím).
* **Trình biên dịch**:
    * MSVC (Tích hợp trong Visual Studio 2019/2022).
    * GCC/MinGW (Hỗ trợ trên Code::Blocks hoặc Dev-C++).

## 🚀 Hướng dẫn cài đặt và Chạy

### 1. Tải mã nguồn
Mở Terminal (Command Prompt, PowerShell hoặc Git Bash) và thực hiện lệnh:
```bash
git clone https://github.com/VoTranTin-25730154/25730116_25730154_25730124_25730159_25730147.git
cd 25730116_25730154_25730124_25730159_25730147
```

### 2. Biên dịch trên Visual Studio
1. Mở Visual Studio, chọn **Create a new project** -> **Empty Project (C++)**.
2. Chuột phải vào Project trong *Solution Explorer*, chọn **Add > Existing Item...**
3. Chọn toàn bộ 7 file (`.h` và `.cpp`) đã tải về.
4. Nhấn **Ctrl + F5** để bắt đầu biên dịch và chạy.

### 3. Biên dịch trên Code::Blocks
1. Chọn **File > New > Project > Empty Project**.
2. Chuột phải vào Project, chọn **Add files...** và thêm tất cả file mã nguồn.
3. Nhấn **F9 (Build and Run)**.

---

## 🎮 Cách điều khiển & Tính năng
Trò chơi mô phỏng cơ chế Tetris tiêu chuẩn với các thao tác:

* **W / Phím Lên**: Xoay khối gạch (Rotate).
* **A / Phím Trái**: Di chuyển sang trái.
* **D / Phím Phải**: Di chuyển sang phải.
* **S / Phím Xuống**: Rơi nhanh (Soft Drop).
* **P**: Tạm dừng (Pause).
* **R**: Chơi lại (Reset) khi thua.
* **ESC**: Thoát game.

**Tính năng nổi bật:**
* **Dynamic Difficulty**: Tốc độ rơi tăng dần theo tiến trình chơi để tạo thử thách.
* **High Score Storage**: Tự động lưu kỷ lục điểm số vào file `.txt`.

---

## 📂 Cấu trúc mã nguồn
Dự án được tổ chức chặt chẽ thành 7 file:

* **Common.h**: Chứa hằng số hệ thống, phím điều khiển và biến toàn cục (`score`, `board`).
* **Tetromino.h**: Định nghĩa dữ liệu 4D cho 7 khối gạch và các prototype logic liên quan.
* **Render.h / Render.cpp**: Phụ trách hiển thị đồ họa Console, vẽ ma trận và phát âm thanh.
* **GameLogic.h / GameLogic.cpp**: Xử lý va chạm, cố định khối, xóa hàng và lưu trữ dữ liệu.
* **Tetris.cpp**: Điểm khởi đầu chương trình, quản lý Game Loop chính.

---
*Dự án hoàn thành vào tháng 05/2026 - Nhóm đồ án Kỹ năng nghề nghiệp.*
