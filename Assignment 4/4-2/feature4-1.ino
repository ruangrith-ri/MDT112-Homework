String yourAreYoung(int age) {
    String result ; 
    if (age > 0 && age <= 18) {
        result = "i'm" + String(age) + "year old\n" "Your are young.";
    }
    else {
        result = "i'm" + String(age) + "year old";
    }
  return result;
}