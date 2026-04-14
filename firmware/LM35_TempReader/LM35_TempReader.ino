// Khai báo chân kết nối cảm biến LM35
const int potPin = A0; 
float temp;

void setup() {
  // Khởi tạo giao tiếp Serial ở baudrate 9600
  Serial.begin(9600);
}

void loop() {
  // Đọc giá trị điện áp từ chân A0 (0 - 1023)
  int analogValue = analogRead(potPin);
  
  // Chuyển đổi giá trị analog sang nhiệt độ (C)
  // Công thức: (Giá trị * 5.0 / 1024) * 100
  temp = analogValue * (5.0 / 1024.0) * 100.0;
  
  // In kết quả ra Serial Monitor
  Serial.print("Nhiet do: ");
  Serial.print(temp);
  Serial.println(" C");
  
  // Đợi 1 giây trước khi đọc lần tiếp theo
  delay(1000);
}