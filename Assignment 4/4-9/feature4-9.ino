String drawTriangle(int maxNumber) {
  String result;
  for(int i = 1;i<=maxNumber;i++){
      for(int j = 1;j<=i;j++){
          result = result + ("*");
      }
      result = result + "\n";
  }
  for(int k = maxNumber-1;k>=1;k--){
      for(int l = k;l>=1;l--){
          result = result + ("*");
      }
      result = result +"\n";
  }

  return result;
}