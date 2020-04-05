String primeNumber(int maxNumber) {
  String result;
    for (int i=1; i<=maxNumber; i++) {
    if(i%2!=0||i%3!=0||i%5!=0||i%7!=0){
        result = i;
    }
     
    }
  return result;
}
