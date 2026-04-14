// Định nghĩa các chân Analog
const int sensor1Pin = A0; 
const int sensor2Pin = A1; 

void setup() {
  // Khởi tạo Serial với tốc độ 9600 baud
  Serial.begin(9600);
}

void loop() {
  // Đọc giá trị ADC từ 2 kênh
  int adcVal1 = analogRead(sensor1Pin);
  int adcVal2 = analogRead(sensor2Pin);

  // Chuyển đổi sang nhiệt độ (độ C)
  float temp1 = (adcVal1 * 500.0) / 1023.0;
  float temp2 = (adcVal2 * 500.0) / 1023.0;

  // Gửi dữ liệu lên Serial Monitor theo định dạng CSV
  // Ví dụ: 28.50,30.12
  Serial.print(temp1);
  Serial.print(",");
  Serial.println(temp2);

  // Đợi 1 giây trước khi đọc lần tiếp theo
  delay(1000);
}