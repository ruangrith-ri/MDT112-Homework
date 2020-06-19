String examPassChack(int yourScore, int fullScore) {
  String result;
    if (yourScore < (fullScore/2)){
    result = "Your are " + String(yourScore) + " point from " + String(fullScore) + " point in last exam\n Fail exam Attempt again.";
    }
    else if (yourScore > (fullScore/2)) {
    result = "Your are " + String(yourScore) + " point from " + String(fullScore) + " point in last exam\n Pass exam Congratulation.";
    }

  return result;
}
