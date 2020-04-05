String drawTriangle(int maxNumber) {
  String result;
    for (int i=1; i<=maxNumber; i++) {
        for (int j=1; j<=i; j++) {
            if (j>=maxNumber) {
                result = "";
            }
            if (j<=maxNumber) {
                result = "*";
            }
        }
        "\n";
    }
    for (int i=1; i<=maxNumber; i++) {
        for (int j=i; j<=maxNumber; j++) {
            if (j>=1) {
                result = "";
            }
            if (j<=maxNumber) {
                result = "*";
            }
        }
         "\n";
    }
  return result;
}
