String examPassChack(int yourScore, int fullScore) {
  String result;
  if (yourScore>=(fullScore/2)) {
     result=" Your are " +String(yourScore) + "form"+
     String(fullScore)+"Point in last exam.\nPass exam Congratulation.";
  }
  if (yourScore<=(fullScore/2)) {
      result=" Your are " +String(yourScore) + "form"+
     String(fullScore)+"Point in last exam.\nFail exam Attempt again.";
  }

  return result;
}
