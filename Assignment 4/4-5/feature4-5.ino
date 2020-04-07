String gradeChack(int yourScore) {
  String result;
  if (yourScore <= 54 )
  {
      result = "Your are" + String(yourScore) + "point  in Computer Programming Subject. \nYouget grade F";
  }
  if (yourScore > 54 && yourScore <= 59)
  {
      result = "Your are" + String(yourScore) + "point form 100 point in Computer Programming Subject. \nYouget grade D";
  }
  if (yourScore > 59 && yourScore <= 64)
  {
      result = "Your are" + String(yourScore) + "point form 100 point in Computer Programming Subject. \nYouget grade D+";
  }
  if (yourScore > 64 && yourScore <= 69)
  {
      result = "Your are" + String(yourScore) + "point form 100 point in Computer Programming Subject. \nYouget grade C";
  }
  if (yourScore > 69 && yourScore <= 74)
  {
      result = "Your are" + String(yourScore) + "point form 100 point in Computer Programming Subject. \nYouget grade C+";
  }
  if (yourScore > 74 && yourScore <= 79)
  {
      result = "Your are" + String(yourScore) + "point form 100 point in Computer Programming Subject. \nYouget grade B";
  }
  if (yourScore > 79 && yourScore <= 84)
  {
      result = "Your are" + String(yourScore) + "point form 100 point in Computer Programming Subject. \nYouget grade B+";
  }
  if (yourScore > 84 && yourScore <= 100)
  {
      result = "Your are" + String(yourScore) + "point form 100 point in Computer Programming Subject. \nYouget grade A";
  }

  return result;
}
