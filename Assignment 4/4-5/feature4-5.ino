String gradeChack(int yourScore) {
  String result,result2;
  result = ("Your are "+String(yourScore)+" point form 100 Point in Computer Programming Subject.");
  
  if (yourScore<=54) {
      result2 = ("\nYour get grade F. see you again next semester");
  
  }
  if (yourScore>=55 && yourScore<=59) {
      result2 = ("\nYour get grade D. see you again next semester");
  
  }

  if (yourScore>=60 && yourScore<=64) {
      result2 = ("\nYour get grade D+. see you again next semester");
  
  }
  
  if (yourScore>=65 && yourScore<=69) {
      result2 = ("\nYour get grade C. see you again next semester");
  
  }
  
  if (yourScore>=70 && yourScore<=74) {
      result2 = ("\nYour get grade C+. see you again next semester");
  
  }

  if (yourScore>=75 && yourScore<=79) {
      result2 = ("\nYour get grade B. ");
  
  }

  if (yourScore>=80 && yourScore<=84) {
      result2 = ("\nYour get grade B+. see you again next semester");
  
  }

  if (yourScore>=85 && yourScore<=100) {
      result2 = ("\nYour get grade A. see you again next semester");
  
  }
  
  
  return result+result2;
}
