String gradeChack(int yourScore) {
  String result;
    if(yourScore >= 54){
        result = "Your are" +String(yourScore)+" point from 100 point in Computer Programming Subject.\nYou get grade F. See you again next semester.";
    }

    else if(yourScore >= 55 && yourScore <= 59){
        result = "Your are" +String(yourScore)+" point from 100 point in Computer Programming Subject.\nYou get grade D. See you again next semester.";
    }

    else if(yourScore >= 60 && yourScore <= 64){
        result = "Your are" +String(yourScore)+" point from 100 point in Computer Programming Subject.\nYou get grade D+. See you again next semester.";
    }

    else if(yourScore >= 65 && yourScore <= 69){
        result = "Your are" +String(yourScore)+" point from 100 point in Computer Programming Subject.\nYou get grade C. See you again next semester.";
    }

    else if(yourScore >= 70 && yourScore <= 74){
        result = "Your are" +String(yourScore)+" point from 100 point in Computer Programming Subject.\nYou get grade C+. See you again next semester.";
    }

    else if(yourScore >= 75 && yourScore <= 79){
        result = "Your are" +String(yourScore)+" point from 100 point in Computer Programming Subject.\nYou get grade B. See you again next semester.";
    }

    else if(yourScore >= 80 && yourScore <= 84){
        result = "Your are" +String(yourScore)+" point from 100 point in Computer Programming Subject.\nYou get grade B+. See you again next semester.";
    }

    else if(yourScore >= 85 && yourScore <= 100){
        result = "Your are" +String(yourScore)+" point from 100 point in Computer Programming Subject.\nYou get grade A. See you again next semester.";
    }


  return result;
}
