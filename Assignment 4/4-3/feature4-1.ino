String yourAreYoung(int age) {
  String result;

  return result;
}

String yourAreYoung(int age, String numberToText) {
  String result;
  result = "i'm" + String(numberToText) + "year old";
    if (age > 0 && age <= 18) {
        result = "i'm" + String(numberToText) + "year old\n" "Your are young.";
    }
    else {
        result = "i'm" + String(numberToText) + "year old";
    }
  return result;
}
