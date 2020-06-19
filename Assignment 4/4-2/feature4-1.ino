String yourAreYoung(int age) {
  String result;
 if (age < 18){
            result = "I am " + String(age) + " year old \nYour are young." ;
        }
        else {
            result = "I am " + String(age) + " year old" ;
        }

  return result;
}
