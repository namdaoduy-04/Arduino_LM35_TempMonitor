# Dự án giám sát nhiệt độ với LM35 và Arduino

Dự án này thực hiện việc đọc dữ liệu nhiệt độ từ nhiều cảm biến LM35 đồng thời, xử lý và xuất dữ liệu ra cổng Serial dưới định dạng JSON để phục vụ việc giám sát và tích hợp hệ thống.

### Tính năng nổi bật
- **Đa kênh:** Đọc dữ liệu từ 3 kênh cảm biến riêng biệt (A0, A1, A2).
- **Định dạng hiện đại:** Chuyển đổi dữ liệu từ CSV sang JSON giúp dễ dàng giao tiếp với các ứng dụng Web và Mobile.
- **Xử lý xung đột:** Mã nguồn minh họa quy trình làm việc nhóm chuyên nghiệp trên Git/GitHub.

---

### Danh sách linh kiện


| Tên Linh Kiện       | Số lượng | Ghi chú               |
| :------------------ | :------: | :-------------------- |
| Arduino Uno R3      | 01       | Board mạch điều khiển |
| Cảm biến LM35       | 03       | Cảm biến nhiệt độ     |
| Breadboard & Jumper | 01 bộ    | Dùng để kết nối       |

---

### Cấu trúc thư mục dự án
```text
Arduino_LM35_TempMonitor/
└── firmware/
    └── LM35_TempReader/
        ├── LM35_TempReader.ino  # Mã nguồn Arduino (C++)
        └── README.md            # Hướng dẫn dự án

Hướng dẫn cài đặt và sử dụng:
Kết nối phần cứng: Cắm 3 chân Out của LM35 vào lần lượt các chân A0, A1, A2 trên Arduino.
Tải mã nguồn: git clone https://github.com
Nạp Code: Sử dụng Arduino IDE mở file .ino và Upload lên mạch.
Xem kết quả: Mở Serial Monitor (Baudrate 9600) để nhận chuỗi JSON nhiệt độ.

Thành viên trong nhóm
Đào Duy Nam: Phụ trách xây dựng firmware và cấu trúc dự án.
Nguyễn Quang Minh: Phụ trách tối ưu hóa ổn định và xung đột mã nguồn.
