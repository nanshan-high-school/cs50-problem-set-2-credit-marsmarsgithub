#include <iostream>
using namespace std;
void a(int);
void b(int);
int main() {
  long int cardnumber;
  cout << "請輸入信用卡號:";
   b(cardnumber);
  int sixteenth = cardnumber;
   b(cardnumber);
  int fifteenth = cardnumber;
   b(cardnumber);
  int fourteenth = cardnumber;
   b(cardnumber);
  int thirteenth = cardnumber;
   b(cardnumber);
  int twelveth = cardnumber;
   b(cardnumber);
  int eleventh = cardnumber;
   b(cardnumber);
  int tenth = cardnumber;
   b(cardnumber);
  int ninth = cardnumber;
   b(cardnumber);
  int eighth = cardnumber;
   b(cardnumber);
  int seventh = cardnumber;
   b(cardnumber);
  int sixth = cardnumber;
   b(cardnumber);
  int fifth = cardnumber;
   b(cardnumber);
  int fourth = cardnumber;
   b(cardnumber);
  int third = cardnumber;
  int w = cardnumber;
   b(cardnumber);
  int second = cardnumber;
   b(cardnumber);
  int z = cardnumber;
  int y = cardnumber;
  a(z);
  a(third);
  a(fifth);
  a(seventh);
  a(ninth);
  a(eleventh);
  a(thirteenth);
  a(fifteenth);
   int c = z + second  + third + fourth + fifth + sixth + seventh + eighth + ninth + tenth + eleventh + twelveth + thirteenth + fourteenth + fifteenth + sixteenth;
   if ( c % 10 == 0 ) {
    if ( y == 4 ) cout << "這是Visa card。";
    else if ( y == 5 && w <= 55 && w >= 51 ) cout << "這是Master card。"; 
    cout << "這是Master card。";
}
    else cout << "這是其他信用卡。"; 
}
else cout << "這是其他信用卡。\n";
void a(int number) {
  if ( number*2 >= 10 ) {
    number=number / 10 + number % 10;
}
  else number=number * 2;
}
void b(int number) {
  number=number % 10;
}
