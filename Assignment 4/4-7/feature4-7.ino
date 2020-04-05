String multiplication(int multiple){
    String result,combine,combine2;
    int calculation;
    for(int i=1;i<=12;i++){
        calculation = i*multiple;
        combine = String(multiple) + " * " +String(i)+ " = " + String(calculation) + "\n";
        combine2 = combine2+combine;
        
    }
    result = combine2;
    


    return result;
}