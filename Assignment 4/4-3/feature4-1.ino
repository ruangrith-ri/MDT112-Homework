String numberToText(int age);// if without this line code run normally
String yourAreYoung(int age) {
  String result;

  return result;
}

String yourAreYoung(int age, String ageString) {
  String result;
  result = "I'm " + numberToText(age) + " year old"; //if without line1 code numberToText(age) have "Use of indeclared identifier" ????
  if(age<=18 && age >0){
      result = "I'm " + numberToText(age) + " year old\nYour are young."; //if without line1 code numberToText(age) have "Use of indeclared identifier"???
  }

  return result;
}
