String examPassChack(int yourScore, int fullScore) {
  String result;
   result = ("Your are "+ String(yourScore) + " point  from " +int(fullScore) +" point in last exam");
  int half;
  half =fullScore/2;
  if (yourScore>half)
  {
     result = (" Pass exam Congratuations.");
  }
  else
  {
    result =(" Fail exam Attempt again.");
  }
  return result;
}
