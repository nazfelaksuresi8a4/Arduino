map(analog_value,0,250,0,1);

parametre sırası ise aşşağıdaki gibidir;

map(dönüsecek_deger,
   **alt_sınır**,
   **ust_sınır**,
   **alt_sınırda_ne_olacagı**,
   **ust_sınırda_ne_olacagi**)

gelen değer üst sınıra ne kadar yakınsa *ust_sınırda_ne_olacagı** verisine yaklaşık değeri verir 
gelen değer üst sınıra ne kadar uzak ve alt sınıra ne kadar yakın ise *alt_sınırda_ne_olacagı** verisine en yakın değeri verir
