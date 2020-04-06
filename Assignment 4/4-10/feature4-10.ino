String primeNumber(int maxNumber) {
  String result;
    for (int i=2; i<=maxNumber; i++) {
        
            if((i%2)!=0||(i%3)!=0||(i%5)!=0||(i%7)!=0)
            {
            result = (""+String(i)+"\t");
            i++;
            }
    }
return result+result+result+result+result;}



