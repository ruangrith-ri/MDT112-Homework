String primeNumber(int maxNumber) {
  String result;
  
  for (int i = 1; i <= maxNumber; i++) {
    if ((i == 1 || i % 2 == 0 || i % 3 == 0 || i % 7 == 0) &&
        (i != 2 && i != 3 && i != 5 && i != 7)) {

      continue;
    }

    result = result +  String(i);
    result = result + "\t";
                   

  }

  return result;
}
