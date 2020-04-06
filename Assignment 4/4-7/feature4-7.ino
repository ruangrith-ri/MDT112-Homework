String multiplication(int multiple){
    String result,stack2,stack1;
    int calculation;
    for(int i=1;i<=12;i++){
        calculation = i*multiple;
        
        stack1 = String(multiple) + "\t * \t" +String(i)+ "\t  =  \t" + String(calculation) + "\n";
        
        
        stack2 = stack2+stack1;
        
    }
    result = stack2;
    


    return result;
}