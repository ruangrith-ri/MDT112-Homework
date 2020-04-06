String yourAreYoung(int age) {
  String result;

  return result;
}

String yourAreYoung(int age, String numberString) {
  String result;
  result = "i'm" + String(numberString) + "year old";
    if (age > 0 && age <= 18) {
        result = "i'm" + String(numberString) + "year old\n" "Your are young.";
    }
    else {
        result = "i'm" + String(numberString) + "year old";
    }
  return result;
}
