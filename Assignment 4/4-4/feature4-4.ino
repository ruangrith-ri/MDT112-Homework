String examPassChack(int yourScore, int fullScore) {
    String result;
    result = "You are " + String(yourScore) + " point from " + String(fullScore) + " point in last exam.";
    if (yourScore > fullScore/2) {
        result = "You are " + String(yourScore) + " point from " + String(fullScore) + " point in last exam.\n"
        "Pass exam Congratulations.";
    }
    else {
        result = "You are " + String(yourScore) + " point from " + String(fullScore) + " point in last exam.\n"
        "Fail exam Attempt again.";
    }
  return result;
}
