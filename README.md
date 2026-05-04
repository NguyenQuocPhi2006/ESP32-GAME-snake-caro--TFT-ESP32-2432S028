# ESP32 Game Snake & Caro - TFT Display

Dự án trò chơi Rắn săn mồi và Cờ caro trên vi điều khiển **ESP32**, sử dụng màn hình TFT và cảm ứng **XPT2046**.

## 🚀 Tính năng hiện tại
* **Game Snake**: Di chuyển mượt mà, có hệ thống tính điểm (core).
* **Menu Cảm ứng**: Hệ thống menu đa dạng, có thể điều chỉnh tốc độ, độ dài rắn, và màu sắc giao diện.
* **Tài nguyên từ SD Card**: Load icon và hình ảnh trực tiếp từ thẻ nhớ để tiết kiệm bộ nhớ RAM của ESP32.
* **Cấu trúc State Machine**: Quản lý các màn hình (Menu, Play, Settings, Game Over) bằng switch-case chuyên nghiệp.

## 🛠 Linh kiện sử dụng
* **Board**: ESP32 (Module Dev).
* **Màn hình**: TFT 2.8 inch (chipset tương thích với thư viện TFT_eSPI).
* **Cảm ứng**: XPT2046.
* **Lưu trữ**: Thẻ nhớ MicroSD (chứa các file ảnh .bin).

## 📚 Thư viện cần thiết
Dự án sử dụng các thư viện sau (bạn cần cài đặt trước khi nạp code):
* `TFT_eSPI`
* `XPT2046_Touchscreen`

## 📺 Video Demo
Xem thêm các dự án của mình tại: [vt.tiktok.com/ZS9xWo5sb/](https://vt.tiktok.com/ZS9xWo5sb/)
