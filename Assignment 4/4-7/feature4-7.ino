String multiplication(int multiple) {
  String result;
  int ans;
  for (int i = 1; i <= 12; i++) {
    ans = multiple * i;
    Serial.println(String(multiple) + " * " + int(i) + " = " + int(ans));
  }

  return result;
}
