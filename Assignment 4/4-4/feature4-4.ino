String examPassChack(int yourScore, int fullScore) {
  String result;
   double full = fullScore/2;
  if (yourScore >= full) {
    
    result = "your are " +String(yourScore) + "point form " + String(fullScore) +
             "point in last exam.\n Pass exam Congratulations. ";
  }
  if (yourScore < full) {
          result = "your are " +String(yourScore) + "point form " + String(fullScore) +
             "point in last exam.\n Fail exam Attempt again. ";
  }

  return result;
}
