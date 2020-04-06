String multiplicationTable(int multiple) {
  String result,result1,result2,result3;
int ans;
result1 = ("-------------------------------------------------\n");
result2 = ("|                        "+String(multiple)+"                      |\n");
result3 =("|-----------------------------------------------|");


for( int i=1 ;i<13;i++)
{
ans = multiple*i;
result = ("|\t"+String(multiple)+ "\t*\t" +int(i) + "\t=\t"+ int (ans)+"\t|\t");

}

  return result1+result2+result3+result;
}
