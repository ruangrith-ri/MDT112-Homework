String examPassChack(int yourScore, int fullScore) {
  String result;
    if((yourScore)>=(fullScore/2)){
        Serial.println("Your are "+String(yourScore)+" point from "+String(fullScore)+" point in last exam.");
        Serial.println("Pass exam Congratulations.");
    }
    else if((yourScore)<(fullScore/2)){
        Serial.println("Your are "+String(yourScore)+" point from "+String(fullScore)+" point in last exam.");
        Serial.println("Fail exam Attempt again.");
    }

  return result;
}
