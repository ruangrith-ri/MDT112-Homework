String primeNumber(int maxNumber) {
  String result;

  int check = 0;

  for (int i = 2; i <= maxNumber; i++) {
      bool prime = true;
      for (int j =2 ;j*j <= i ; j++) {
          if(i % j == 0){
              prime = false;
              break;
          }
          
      }
      if(prime == true) {
          String text = String(i) + "\t";

          result += text;
          check += 1;

          if(check == 5) {
              result = result + "\n";

              check = 0;
          }
        
      }

  }
  return result;
}