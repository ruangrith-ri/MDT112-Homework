#define CURRENT_YEAR 2020

int yourAge(int yearCE) {
    yearCE = CURRENT_YEAR - yearCE; 
    return yearCE;
}
