String yourAreYoung(int age) {
  String result;
  if (age >= 18) {
      result = "I'am " + String(age) + " Year old ";
  }
  if (age < 18 && age > 0) {
      result = "I'am " + String(age) + " year old \nyour are young.";
  }
  return result;
}
