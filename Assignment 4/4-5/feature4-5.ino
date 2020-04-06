String gradeChack(int yourScore) {
  String result;
  result = ("Your are "+ String(yourScore) + " point  from 100 point in Computer Programming Subject.");
   if (yourScore>=85 && yourScore<=100)
  {
     result = ("You get grade A.");
  }
   if (yourScore>=84 && yourScore<=80)
  {
     result = ("You get grade B+.");
  }
  if (yourScore>=75 && yourScore<=79)
  {
    result =("You get grade B.");
  }
 if (yourScore>=70 && yourScore<=74)
  {
    result = ("You get grade C+.");
  }
 if (yourScore>=65 && yourScore<=69)
  {
     result =("You get grade C. ");
  }
 if (yourScore>=60 && yourScore<=64)
  {
     result =("You get grade D+.");
  }
   if (yourScore>=55 && yourScore<=59)
  {
    result = ("You get grade D.");
  }
  if (yourScore>=0 && yourScore<=54)
  {
    result = ("You get grade F.\n");
    result = result +("See you again next semester.");
     
  }
 
 
  return result;
}
