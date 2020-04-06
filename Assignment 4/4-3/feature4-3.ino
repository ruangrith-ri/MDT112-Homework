String numberToText(int age) 
{
  String result;
  String text [] ={"zero","one","two","three","four","five","six","seven","eight","nine","ten",
  "eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty",
  "twenty-one","twenty-two","twenty-three","twenty-four","twenty-five","twenty-six","twenty-seven","twenty-eight","twenty-nine","thirty",
 "thirty-one","thirty-two","thirty-three","thirty-four","thirty-five","thirty-six","thirty-seven","thirty-eight","thirty-nine","forty",
"forty-one","forty-two","forty-three","forty-four","forty-five","forty-six","forty-seven","forty-eight","forty-nine","fifty"};

   if (age<=50) 
   {
    result = text[age];
   }
   result = text[age];
   if (age==51) {
   result=("fifty-one");
   }
    if (age==52) {
   result=("fifty-two");
   }
    if (age==53) {
   result=("fifty-three");
   }
    if (age==54) {
   result=("fifty-four");
   }
    if (age==55) {
   result=("fifty-five");
   }
    if (age==56) {
   result=("fifty-six");
   }
    if (age==57) {
   result=("fifty-seven");
   }
   if (age==58) {
   result=("fifty-eight");
   }
   if (age==59) {
   result=("fifty-nine");
   }
   if (age==60) {
   result=("sixty");
   }
   if (age==61) {
   result=("sixty-one");
   }
   if (age==62) {
   result=("sixty-two");
   }
   if (age==63) {
   result=("sixty-three");
   }
   if (age==64) {
   result=("sixty-four");
   }
   if (age==65) {
   result=("sixty-five");
   }
   if (age==66) {
   result=("sixty-six");
   }
   if (age==67) {
   result=("sixty-seven");
   }
   if (age==68) {
   result=("sixty-eight");
   }
   if (age==69) {
   result=("sixty-nine");
   }


  return result;
}
 