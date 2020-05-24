String gradeChack(int yourScore) {
  String result;
  if (yourScore >= 85 && yourScore <= 100) {
    result = "Your are " + String(yourScore) +
             " point form in Computer Programming Subject. \nYou get grade A .";
  }
  if (yourScore >= 80 && yourScore <= 84) {
    result = "Your are " + String(yourScore) +
             " point form in Computer Programming Subject. \nYou get grade B+ .";
  }
  if (yourScore >= 75 && yourScore <= 79) {
    result = "Your are " + String(yourScore) +
             " point form in Computer Programming Subject. \nYou get grade B .";
  }
  if (yourScore >= 70 && yourScore <= 74) {
    result = "Your are " + String(yourScore) +
             " point form in Computer Programming Subject. \nYou get grade C+ .";
  }
  if (yourScore >= 65 && yourScore <= 69) {
    result = "Your are " + String(yourScore) +
             " point form in Computer Programming Subject. \nYou get grade C .";
  }
  if (yourScore >= 60 && yourScore <= 64) {
    result = "Your are " + String(yourScore) +
             " point form in Computer Programming Subject. \nYou get grade D+ .";
  }
  if (yourScore >= 55 && yourScore <= 59) {
    result = "Your are " + String(yourScore) +
             " point form in Computer Programming Subject. \nYou get grade D .";
  }
  if (yourScore >= 0 && yourScore <= 54) {
    result = "Your are " + String(yourScore) +
             " point form in Computer Programming Subject. \nYou get grade F .\nSee you aging next semeject.";
  }
  return result;
}
