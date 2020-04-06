String primeNumber(int maxNumber) {
  String result;
 
  for (int i=1; i<=5; i++) {
  
        {
            
         
            if((i==1 || i%2 == 0 || i%3 == 0 || i%5==0 || i%7==0) 
                && (i!=2 && i!=3 && i!=5 && i!=7)){
                result = result + String (i) ;
                continue;        
            }
            "\t";     
        }   
        
    "\n";

  }
  return result;
}
