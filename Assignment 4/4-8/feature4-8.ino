String multiplicationTable(int multiple) {
    String result, sum1, sum2, head;
    int calculation;

    for (int i = 2; i <= 12; i++) {
    calculation = i * multiple;

        if (i >= 12) {
            head = "-------------------------------------------------\n|\t\t\t" + String(multiple) + "\t\t\t|\n|-----------------------------------------------|\n";
            sum1 = "|\t" + String(multiple) + "\t*\t" + String(i) + "\t=\t" + String(calculation) + "\t|" + "\n" +"-------------------------------------------------" + "\n";
        } 
        else {
            sum1 = "|\t" + String(multiple) + "\t*\t" + String(i) + "\t=\t" + String(calculation) + "\t|" + "\n";
        }
    sum2 = sum2 + sum1;
    }
    result = head + sum2;

    return result;
}