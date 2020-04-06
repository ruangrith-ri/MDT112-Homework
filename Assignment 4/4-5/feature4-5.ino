String gradeChack(int yourScore) {
  String result,result1;
  
    if(yourScore<55){
        result=("Your are "+String(yourScore)+" point form 100 point in Computer Programming Subject.");
        result1=("\nYou get grade F. See you again next semester.");
    }
    else if(yourScore>54&&yourScore<60){
        result=("Your are "+String(yourScore)+" point form 100 point in Computer Programming Subject.");
        result1=("\nYou get grade D.");
    }
    else if(yourScore>59&&yourScore<65){
        result=("Your are "+String(yourScore)+" point form 100 point in Computer Programming Subject.");
        result1=("\nYou get grade D+.");
    }
    else if(yourScore>64&&yourScore<70){
        result=("Your are "+String(yourScore)+" point form 100 point in Computer Programming Subject.");
        result1=("\nYou get grade C.");
    }
    else if(yourScore>69&&yourScore<75){
        result=("Your are "+String(yourScore)+" point form 100 point in Computer Programming Subject.");
        result1=("\nYou get grade C+.");
    }
    else if(yourScore>74&&yourScore<80){
        result=("Your are "+String(yourScore)+" point form 100 point in Computer Programming Subject.");
        result1=("\nYou get grade B.");
    }
    else if(yourScore>79&&yourScore<85){
        result=("Your are "+String(yourScore)+" point form 100 point in Computer Programming Subject.");
        result1=("\nYou get grade B+.");
    }
    else if(yourScore>84&&yourScore<101){
        result=("Your are "+String(yourScore)+" point form 100 point in Computer Programming Subject.");
        result1=("\nYou get grade A.");
    }
  return result+result1;
}