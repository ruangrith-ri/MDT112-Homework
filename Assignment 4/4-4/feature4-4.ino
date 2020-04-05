String examPassChack(int yourScore, int fullScore) {
  String result;
    if (yourScore>(fullScore/2)) 
  {
      result="you are"+ String(yourScore)+"form"+String(fullScore)+"point in last exam\n Pass exam Congratulations";
  }
  if(yourScore<=(fullScore/2))
  {
      result="you are"+String(yourScore)+"from"+String(fullScore)+"point inlast exam\n  Fail exam Attempt agin";
  }


  return result;
}
