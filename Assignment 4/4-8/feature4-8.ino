String multiplicationTable(int multiple) {
  String result, combine, combine2, toptable;
  int calculation;
  for (int i = 2; i <= 12; i++) {
    calculation = i * multiple;
    if (i >= 12) {
      toptable = "-------------------------------------------------\n|\t\t\t" + String(multiple) + "\t\t\t|\n|-----------------------------------------------|\n";

      combine = "|\t" + String(multiple) + "\t*\t" + String(i) + "\t=\t" + String(calculation) + "\t|" + "\n" + "-------------------------------------------------" + "\n";
    } 
    else {

      combine = "|\t" + String(multiple) + "\t*\t" + String(i) + "\t=\t" + String(calculation) + "\t|" + "\n";

    }
    combine2 = combine2 + combine;
  }
  result = toptable + combine2;
  return result;

}