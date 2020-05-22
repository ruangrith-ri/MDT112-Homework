String yourAreYoung(int age) {
  String result;

  return result;
}

String yourAreYoung(int age, String ageString) {
  String result;
  if (age >=18  ) {
      result = "I'm  "+ numberToText(age)+"  year old";
  }
  if(age < 18 && age > 0){
      result = "I'm  "+numberToText(age) + " year old\nYour are young.";
  }


    return result;
}
