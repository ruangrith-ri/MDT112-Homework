String primeNumber(int maxNumber) {
  String result;
  for (int i = 2; i <= maxNumber; i++) {
      bool prim = true;
      for (int j =2 ;j*j <= i ; j++) {
          if(i % j == 0){
              prim = false;
              break;
          }
          
      }
      if(prim)
      
      result = result + String(i); 
      

  }

  
  

  

  return result;
}
