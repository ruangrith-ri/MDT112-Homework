String gradeChack(int yourScore) {
  String result;
  if (yourScore >= 85 && yourScore <= 100) {
    result = "Your are " + String(yourScore) +
             "point form in Computer Programming Subject.\n You get grade A .";
  }
  if (yourScore >= 80 && yourScore <= 84) {
    result = "Your are " + String(yourScore) +
             "point form in Computer Programming Subject.\n You get grade B+ .";
  }
  if (yourScore >= 75 && yourScore <= 79) {
    result = "Your are " + String(yourScore) +
             "point form in Computer Programming Subject.\n You get grade B .";
  }
  if (yourScore >= 70 && yourScore <= 74) {
    result = "Your are " + String(yourScore) +
             "point form in Computer Programming Subject.\n You get grade C+ .";
  }
  if (yourScore >= 65 && yourScore <= 69) {
    result = "Your are " + String(yourScore) +
             "point form in Computer Programming Subject.\n You get grade C .";
  }
  if (yourScore >= 60 && yourScore <= 64) {
    result = "Your are " + String(yourScore) +
             "point form in Computer Programming Subject.\n You get grade D+ .";
  }
  if (yourScore <= 59 && yourScore >= 55) {
    result = "Your are " + String(yourScore) +
             "point form in Computer Programming Subject.\n You get grade D .";
  }
  if (yourScore <= 54 && yourScore >= 0) {
    result = "Your are " + String(yourScore) +
             "point form in Computer Programming Subject.\n You get grade F .\n See you aging next semeject.";
  }

  return result;
}
