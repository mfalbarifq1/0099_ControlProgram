#include<iostream>
using namespace std;

int main() {
    float bmi, berat, tinggi;

    cout << "Berapa berat badan kamu (kg)? ";
    cin >> berat;
    cout << "Berapa tinggi badan kamu (meter, contoh 1.7)? ";
    cin >> tinggi;


    bmi = berat / (tinggi * tinggi);
    cout << "Skor BMI Anda: " << bmi << endl;

    if (bmi < 18.5) {
        cout << "Status: Kamu kurus sekali" << endl;
    }
    else {

}