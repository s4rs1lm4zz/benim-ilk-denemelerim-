#include<stdio.h>
#include<stdlib.h>

// bölme çıkarma işlemi yapıcagız 
// veriable buldum 
// veriable type bul

int main () {
  int sayım1; // int demek tek ondalık sayı içindir 1,5,20 gibi 
  char sayım2; // char ise karakter uzunlugunda tanımlama yapmamız içindir mesela karakter ismi 
  float sayım3; // float ise bunda da kesirli sayıları temsil eder mesela 5,a,b/4 gibi 
  double sayım4; // buda double dır yani daha fazla anlamına gelir mesela 13.455.364 gibi 
float toplamsayım; // burda ise yazdırmak için toplam sayı diye veriable oluşturuyorum

    printf("lütfen ilk sayı girin  \n"); // burda kullanıcının ekranına 1.sayıyı girmesini istedik
  scanf("%d", &sayım1); // burda da ise scanf ile kullanıcının girdigi degeri sayım1 e eşileddik ve veriable mıza deger atadık 
  printf("lüfen 2.degeri girin  \n"); // burdada tekrar kullanıcının ekranına deger girmesini istedik 
  scanf(" %c", &sayım2); // burda da kullanıcının verdigi degeri veriablemıza atadık 
  printf("lütfen 3. degeri giriniz  \n"); // burda tekrar kullanıcıdan 3. veriable için deger istedik 
  scanf("%f", &sayım3);// burda da tekrar kullanıcıdan aldıgı degeri sayım3 adlı veriable tanımladık 
  printf("lütfen 4. sayıyıda giriniz  \n"); // burdada tekrar kullanıcya deger vermesini istedik 
 scanf("%lf", &sayım4); // burda tekrar kullanıcıdan alınan degeri veriable mıza tanımladık 

sayım1=sayım2+sayım3+ --sayım4; // burda sayım1 i digerlerine eşitliyoruz ama şöyle birşey var -- veya ++ önce gelirse arttırıp eksiltip işlem yapıyoruz ama sondaysa önce işlem sonra kine deger veriyoruz
  sayım2=sayım1+ --sayım3+ ++sayım4; // burda da aynı şekilde sayım2 yi eşitliyoruz diger veriable lara ama --,++, öncemi sonramı geliyor veriabledan dikkat ederek 
  sayım3=sayım2+ ++sayım1+ sayım4--; // burda da aynı şekilde sayım2 yi eşitliyoruz diger veriable lara ama --,++, öncemi sonramı geliyor veriabledan dikkat ederek 
  sayım4=sayım1+ sayım2++ + ++sayım3; // burda da aynı şekilde işlem var 

  toplamsayım =sayım1+sayım2+sayım3+sayım4; // burda ise oluşturdugum veriable bana sonuç vermesi için tanımlıyorum neye istedigim şeye yani toplam sayıya 

  printf("toplam sayım \n"); // burda ise en son olarak bütün işlem bitince yazdırmasını yanı  çıkttı verebilmesi için yazıyorum 
return 0 ;
}
