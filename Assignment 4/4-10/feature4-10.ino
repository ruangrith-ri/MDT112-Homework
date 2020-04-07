String primeNumber(int maxNumber) {
    int count = 0;
    String result;

    for (int i = 2; i <= maxNumber; i++) {
        bool prime = true;
        for (int j =2 ;j*j <= i ; j++) {
            if(i % j == 0){
                prime = false;
                break;
            }

        }
        if(prime == true) {
            result = result + String(i);

            count = count + 1;

            result += String("\t");
        }

        if(count == 5) {
              result = result + "\n";

              count = 0;
          }
    }
    return result;
}