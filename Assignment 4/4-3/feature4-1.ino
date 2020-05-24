String numberToText(int age);

String yourAreYoung(int age) {
  String result;

  return result;
}

String yourAreYoung(int age, String ageString) {
  String result;
  if (age <= 18) 
  { 
      result = "I'm " + numberToText(age) + " years old \n You are  young.";
  }
  else
  {
      result = "I'm " + numberToText(age) + " years old";    
  }
  return result;
}
