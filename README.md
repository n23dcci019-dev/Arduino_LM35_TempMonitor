\# Arduino LM35 Temperature Monitor



Hệ thống giám sát nhiệt độ đa kênh sử dụng cảm biến LM35 và board mạch Arduino. Dự án hỗ trợ đọc dữ liệu từ nhiều cảm biến đồng thời và xuất kết quả qua Serial Port dưới định dạng JSON để dễ dàng tích hợp với các ứng dụng máy tính (PC App).



\##Tính năng

\- \*\*Đọc đa kênh:\*\* Hỗ trợ đọc đồng thời 3 kênh cảm biến nhiệt độ (A0, A1, A2).

\- \*\*Độ chính xác cao:\*\* Thuật toán chuyển đổi ADC sang độ C tối ưu cho cảm biến LM35.

\- \*\*Định dạng JSON:\*\* Dữ liệu xuất ra cổng Serial theo chuẩn JSON, giúp lập trình ứng dụng nhận diện dữ liệu dễ dàng.

\- \*\*Quản lý bằng Git:\*\* Lịch sử phát triển được quản lý chặt chẽ qua các nhánh (branch) và Pull Request.



\##Phần cứng yêu cầu

| Linh kiện | Thông số kỹ thuật | Số lượng |

| :--- | :--- | :--- |

| Board mạch | Arduino Uno R3 / Nano | 01 |

| Cảm biến | LM35 (Analog Temperature Sensor) | 03 |

| Dây cắm | Jump wires (Đực-Cái / Đực-Đực) | 1 bộ |

| Breadboard | Loại trung bình hoặc nhỏ | 01 |



\##Cấu trúc thư mục

```text

Arduino\_LM35\_TempMonitor/

├── firmware/             # Chứa mã nguồn Arduino (.ino)

│   └── LM35\_TempReader/

├── docs/                 # Tài liệu hướng dẫn và sơ đồ nguyên lý

├── pc\_app/               # Giao diện hiển thị trên máy tính (đang phát triển)

└── README.md             # Tài liệu giới thiệu dự án

##  Tác giả / Liên hệ

* **Họ và tên:** Lê Khánh Duy
* **Mã số sinh viên:** n23dcci019
* **Portfolio cá nhân:** <a href="https://n23dcci019-dev.github.io" target="_blank">Xem thêm về các dự án khác của tôi tại đây</a>
