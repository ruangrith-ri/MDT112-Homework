String multiplication(int multiple){
    String result ,sum,sum2;
    int calculation;
  for(int i=1 ;i <= 12 ;i++){
    calculation = i*multiple;
  if(i>=12){
    sum = String(multiple)+"\r*\r" +String(i)+
    "\r=\r"+String(calculation)+"\n";
  }
   else{
    sum = String(multiple)+"\r*\r" +String(i)+
    "\r=\r"+String(calculation)+"\n";
  
   }
   sum2 = sum2+sum;
  }
  result = sum2;
  

   return result;
}


    