#include <iostream>
using namespace std;
float calcolaarea (float r)
{
    float area;
    area = 3.13 * (r^2);
    return area;
}
float calcolacirconferenza (float r)
{
    float circonferenza;
    circonferenza = 2 * 3.14 * r;
    return circonferenza;
}

void main() {
  float circonferenza1, circonferenza2, area1, area2, r1, r2;
  cout << "Qual è il primo raggio?" << endl;
  cin>> r1;
   cout << "Qual è il econdo raggio?" << endl;
  cin>> r2;
  area1=calcolaarea(r1);
  area2=calcolaarea(r2);
  circonferenza1=calcolacirconferenza(r1);
  circonferenza2=calcolacirconferenza(r2);
  cout << circonferenza1 << endl;
  cout << circonferenza2 << endl;
  cout << area1 << endl;
  cout << area2 << endl;
}


