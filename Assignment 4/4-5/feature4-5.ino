String gradeChack(int yourScore) {
  String result;
  
    if(yourScore<55){
        Serial.println("Your are "+String(yourScore)+" point form 100 point in Computer Programming Subject.");
        Serial.println("You get grade F. See you again next semester.");
    }
    else if(yourScore>54&&yourScore<60){
        Serial.println("Your are "+String(yourScore)+" point form 100 point in Computer Programming Subject.");
        Serial.println("You get grade D.");
    }
    else if(yourScore>59&&yourScore<65){
        Serial.println("Your are "+String(yourScore)+" point form 100 point in Computer Programming Subject.");
        Serial.println("You get grade D+.");
    }
    else if(yourScore>64&&yourScore<70){
        Serial.println("Your are "+String(yourScore)+" point form 100 point in Computer Programming Subject.");
        Serial.println("You get grade C.");
    }
    else if(yourScore>69&&yourScore<75){
        Serial.println("Your are "+String(yourScore)+" point form 100 point in Computer Programming Subject.");
        Serial.println("You get grade C+.");
    }
    else if(yourScore>74&&yourScore<80){
        Serial.println("Your are "+String(yourScore)+" point form 100 point in Computer Programming Subject.");
        Serial.println("You get grade B.");
    }
    else if(yourScore>79&&yourScore<85){
        Serial.println("Your are "+String(yourScore)+" point form 100 point in Computer Programming Subject.");
        Serial.println("You get grade B+.");
    }
    else if(yourScore>84&&yourScore<101){
        Serial.println("Your are "+String(yourScore)+" point form 100 point in Computer Programming Subject.");
        Serial.println("You get grade A.");
    }
  return result;
}
