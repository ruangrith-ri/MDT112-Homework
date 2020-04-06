String multiplicationTable(int multiple) {
  String result, stack2, stack1, table;
  int calculation;
  for (int i = 2; i <= 12; i++) {
        calculation = i * multiple;
        table = "-------------------------------------------------\n|\t\t\t" + String(multiple) + "\t\t\t|\n|-----------------------------------------------|\n";
        stack1 = "|\t" +String(multiple) + "\t * \t" +String(i)+ "\t  =  \t" + String(calculation) + "\t|"+ "\n"  ;
        
        
        stack2 = stack2+stack1;
      
    }
  result = table + stack2;
  return result;

}