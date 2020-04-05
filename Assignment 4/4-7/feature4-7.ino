String multiplication(int multiple){
    String result,combine,combine2;
    int calculation;
    for(int i=1;i<=12;i++){
        calculation = i*multiple;
        if (i>=10){
            combine = String(multiple) + "\r * \r" +String(i)+ "\r =  \r" + String(calculation) + "\n";
        }
        else{
            combine = String(multiple) + "\r * \r" +String(i)+ "\r  =  \r" + String(calculation) + "\n";
        }
        
        combine2 = combine2+combine;
        
    }
    result = combine2;
    


    return result;
}