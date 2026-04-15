// 1. Định nghĩa thêm chân A2
const int sensor1Pin = A0;
const int sensor2Pin = A1;
const int sensor3Pin = A2; // Thêm dòng này

void setup() {
  Serial.begin(9600);
}

void loop() {
  // 2. Đọc thêm giá trị ADC từ kênh A2
  int adcAcl1 = analogRead(sensor1Pin);
  int adcAcl2 = analogRead(sensor2Pin);
  int adcAcl3 = analogRead(sensor3Pin); // Thêm dòng này

  // Chuyển đổi sang nhiệt độ
  float temp1 = (adcAcl1 * 500.0) / 1023.0;
  float temp2 = (adcAcl2 * 500.0) / 1023.0;
  float temp3 = (adcAcl3 * 500.0) / 1023.0; // Thêm dòng này

  // 3. Gửi dữ liệu lên Serial (thêm temp3)
  Serial.print(temp1);
  Serial.print(",");
  Serial.print(temp2);
  Serial.print(",");      // Thêm dấu phẩy ngăn cách
  Serial.println(temp3);  // Đổi print thành println ở giá trị cuối cùng

  delay(1000);
}