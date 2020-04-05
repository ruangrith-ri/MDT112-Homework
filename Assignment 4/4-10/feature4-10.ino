String primeNumber(int maxNumber) {
  String result;
    for (int i=1; i<=maxNumber; i++) {
        for(int j=1;j<=i;j++)
        {
            if(i%2!=0||i%3!=0||i%5!=0||i%7!=0)
            {
            result = result + i;
            j++;
            }
            else 
            {
            j++;
            }
        }
        result = ;
    }
  return result;
}
