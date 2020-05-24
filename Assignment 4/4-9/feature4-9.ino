String drawTriangle(int maxNumber) {
  String result;
    for (int n =1; n<=maxNumber; n++) {
      for (int i =1; i<=n; i++) {
          result = result+("*");
      }
       result = result+"\n";
    }
    for (int n=maxNumber;n>=1 ; n--) {
    for (int i=n; i>=1; i--) {
    result = result+("*");
    }
    result = result+"\n";
    }
  return result;
}
