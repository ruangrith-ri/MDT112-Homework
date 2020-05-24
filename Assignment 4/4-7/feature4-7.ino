String multiplication(int multiple){
    String result;
int ans;
for( int i=1 ;i<13;i++)
{
ans = multiple*i;
result = (String(multiple)+ " * " +int(i) + " = "+ int (ans) );
}
return result;


}