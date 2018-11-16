#include <iostream>
using namespace std;
int main() {
  long int cardnumber;
  cout << "請輸入信用卡號:\n";
  cin >> cardnumber;
  long int card=cardnumber,card2=cardnumber/10,total=0,checknumber;
  for (int i=0;i<8;i++){
    int number=card%10;
    card=card/100;
    total=total+number;
  }
  for (int X=0;X<8;X++){
    int number=card2;
    card2=card2/100;
  if (number>9){
    number/10+number%10;
  }
  else {
  number=number*2;
  }
  total=total+number;
  }
   for ( int y = 0 ; y < 15 ; y++ ) {
    cardnumber = cardnumber / 10;
  }
  if (total % 10 == 0) {
    checknumber = 0;
  }
  else {
    checknumber = 10 - total % 10;
  }
  if ( total % 10 == 0 ) {
  if ( cardnumber == 4 ) cout << "這是Visa card。";
    else if ( cardnumber == 5 ) cout << "這是Master card。";
    else cout << "這是其他信用卡。";
  }
  else cout << "這是其他信用卡。\n";
}

