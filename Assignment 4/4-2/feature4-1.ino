

String yourAreYoung(int age) 
{  
  String result;
  
   result=(" I'm "+String(age)+" year old.");
  if (age <18) 
  {
      result=(" I'm "+String(age)+" year old.");
      result =result +("Your are young.\n");
  }
  return result;
}
