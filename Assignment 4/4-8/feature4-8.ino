String multiplicationTable(int multiple) {
  String result,result1,result2,result3,result4,result5,result6,result7,result8,result9,result10,result11,result12,result13,result14,result15;
int i =multiple*1;int ii =multiple*2;int iii =multiple*3;int iv =multiple*4;int v =multiple*5;int vi =multiple*6;
int vii =multiple*7;int viii =multiple*8;int ix =multiple*9;int x =multiple*10;int xi =multiple*11;int xii =multiple*12;
result13 =("-------------------------------------------------");
result =("\n|                       "+String(multiple)+"                 \t|");
result1 =("\n|-----------------------------------------------|");
result2 =("\n|\t"+String(multiple)+"\t*\t1\t=\t"+String(i)+"\t|");
result3 =("\n|\t"+String(multiple)+"\t*\t2\t=\t"+String(ii)+"\t|");
result4=("\n|\t"+String(multiple)+"\t*\t3\t=\t"+String(iii)+"\t|");
result5=("\n|\t"+String(multiple)+"\t*\t4\t=\t"+String(iv)+"\t|");
result6=("\n|\t"+String(multiple)+"\t*\t5\t=\t"+String(v)+"\t|");
result7=("\n|\t"+String(multiple)+"\t*\t6\t=\t"+String(vi)+"\t|");
result8=("\n|\t"+String(multiple)+"\t*\t7\t=\t"+String(vii)+"\t|");
result9=("\n|\t"+String(multiple)+"\t*\t8\t=\t"+String(viii)+"\t|");
result10=("\n|\t"+String(multiple)+"\t*\t9\t=\t"+String(ix)+"\t|");
result11=("\n|\t"+String(multiple)+"\t*\t10\t=\t"+String(x)+"\t|");
result12=("\n|\t"+String(multiple)+"\t*\t11\t=\t"+String(xi)+"\t|");
result14=("\n|\t"+String(multiple)+"\t*\t12\t=\t"+String(xii)+"\t|");
result15=("\n-------------------------------------------------");
  return result13+result+result1+result2+result3+result4+result5+result6+result7+result8+result9+result10+result11+result12+result14+result15;
}
