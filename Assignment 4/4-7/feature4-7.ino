String multiplication(int multiple){
    String result;
    for(int i = 1 ; i<=12 ; i++){
        result = String(multiple) + "\t" "*" "\t" + "1" "\t" "=" "\t" + (multiple * i) + "\n";
    }
    return result;
}