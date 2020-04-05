String yourAreYoung(int age) {
  String result;
  if (age >= 18) {
    result = "I'm " + String(age) + "year old";
  }
  if (age < 18 && age > 0) {
    result = "I'm " + String(age) + "year old\n your are  young.";

    return result;
  }
}