String primeNumber(int maxNumber) {
  long String result = "2\t";
  int count = 1;
  for(int i = 3; i <= maxNumber; i++) {
    bool check = true;
    for(int divide = 2; divide < i; divide++){
        if(i % divide == 0){
            check = false;
        }
        
    }
    if(check == true){
        //Serial.println(i);Checkค่าเฉยๆ
        result = result + String(i) + "\t";
        count++;
        if(count % 5 == 0){
            result = result + "\n";
        }
    }
  }
  return result;
}