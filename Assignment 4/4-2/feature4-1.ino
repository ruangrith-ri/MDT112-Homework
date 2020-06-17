String yourAreYoung(int age) {
  String result,result2;

  result = ("I'm "+String(age)+" year old ");

  if (age < 18) {
  result2 = ("\nYour are young");
  }

  return result+result2;
}