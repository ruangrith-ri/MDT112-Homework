String yourAreYoung(int age) {
  String result;
  
  result = "I'm "+ String(age)+" year old";
  if(age<18){
      result = "I'm "+ String(age)+" year old\n""Your are young.";
  }

  return result;
}
