String examPassChack(int yourScore, int fullScore) {
  String result, result2;
  if ((yourScore)>=(fullScore/2)) {
      result = ("Your are "+String(yourScore)+" point form "+String(fullScore)+" point in last in exam.");
      result2 = ("\nPass exam Congratulations.");
  }
  else if ((yourScore)<(fullScore/2)){
      result = ("Your are "+String(yourScore)+" point form "+String(fullScore)+" point in last in exam.");
      result2 = ("\nFail exam Attempt again.");
  }
  
  return result+result2;
}
