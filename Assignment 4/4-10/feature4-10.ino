String primeNumber(int maxNumber) {
  String result;
    String  stack1 , stack2 ;
    for (int i = 1 ; i <= maxNumber ; i++){
        for (int j = 1 ; i <= j ; j++){
            if (i%j!=0){
                result = i;
            }
        }
    }
    
    
  
  return result;
    }   