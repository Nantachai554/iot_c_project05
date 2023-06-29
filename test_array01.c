#include<stdio.h>

void main(){
    int scoreA;//ตัวแปรปกติทั้วไป
    int scoreB[5];//ตัวแปรอาร์เรย์

    float salaryIoTA;
    float salaryIoTB[100];//ตัวแปรอาร์เรย์

    char nameA;
    char nameB[50];//ตัวแปรอาร์เรย์

    scoreA = 100;
    printf("%d\n",scoreA);
    scoreB[1] = 200;
    scoreB[4] = 400;
    
    printf("%d\n",scoreB[1]);
    printf("%d\n",scoreB[4]);

    salaryIoTB[29] = 10000.25;
    
    //โจทย์ ต้องการผลรวมของช่องที่2 ของ score B กับ
    //ช่องที่ 30 ของ salaryIoTB แล้วไปเก็บในช่องที่ 100 ของ
    //slayryIoTB เสร็จแล้วแสดงผลที่หน้าจอ

    salaryIoTB[99] = scoreB[1] + salaryIoTB[29];
    printf("%f.2\n",salaryIoTB[99]);
}