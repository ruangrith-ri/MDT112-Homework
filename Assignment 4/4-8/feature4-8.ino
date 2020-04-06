String multiplicationTable(int multiple) {
    String result, sum, sum2, head;
    int calculation;

    for (int i = 2; i <= 12; i++) {
    calculation = i * multiple;

        if (i >= 12) {
            head = "-------------------------------------------------\n|\t\t\t" + String(multiple) + "\t\t\t|\n|-----------------------------------------------|\n";
            sum = "|\t" + String(multiple) + "\t*\t" + String(i) + "\t=\t" + String(calculation) + "\t|" + "\n" +"-------------------------------------------------" + "\n";
        } 
        else {
            sum = "|\t" + String(multiple) + "\t*\t" + String(i) + "\t=\t" + String(calculation) + "\t|" + "\n";
        }
    sum2 = sum2 + sum;
    }
    result = head + sum2;

    return result;
}