#include <stdio.h>
#include <time.h>

// Tarih ve saat bilgisini tutan struct
struct TarihSaat {
    int yil, ay, gun, saat, dakika, saniye;
};

// Union ile zaman bilgisini farkli formatlarda saklama
union EpochZaman {
    time_t epoch_degeri;
};

// Tarih ve saat bilgilerini epoch zamanýna çeviren fonksiyon
time_t cevir_epoch(struct TarihSaat ts) {
    struct tm t;
    t.tm_year = ts.yil - 1900; // struct tm'de yýl 1900'den baþlar
    t.tm_mon = ts.ay - 1;      // struct tm'de ay 0'dan baþlar
    t.tm_mday = ts.gun;
    t.tm_hour = ts.saat;
    t.tm_min = ts.dakika;
    t.tm_sec = ts.saniye;
    t.tm_isdst = -1; // Yaz saati uygulamasýný otomatik hesapla
    return mktime(&t);
}

int main() {
    struct TarihSaat ts1, ts2;
    union EpochZaman e1, e2;
    
    // Kullanicidan birinci tarih ve saati alma
    printf("Birinci tarihi ve saati giriniz (YYYY MM DD HH MM SS): ");
    scanf("%d %d %d %d %d %d", &ts1.yil, &ts1.ay, &ts1.gun, &ts1.saat, &ts1.dakika, &ts1.saniye);
    
    // Kullanicidan ikinci tarih ve saati alma
    printf("Ikinci tarihi ve saati giriniz (YYYY MM DD HH MM SS): ");
    scanf("%d %d %d %d %d %d", &ts2.yil, &ts2.ay, &ts2.gun, &ts2.saat, &ts2.dakika, &ts2.saniye);
    
    // epoch zamanina ceviri
    e1.epoch_degeri = cevir_epoch(ts1);
    e2.epoch_degeri = cevir_epoch(ts2);
     
    // Epoch zamanlari
    printf("Epoch zamani (saniye olarak):\n");
    printf("Birinci zaman: %ld\n", e1.epoch_degeri);
    printf("Ikinci zaman: %ld\n", e2.epoch_degeri);
    
    // Zaman farki hesaplamasi ve ekrana yazma
    double fark = difftime(e2.epoch_degeri, e1.epoch_degeri);
    printf("Iki tarih arasindaki fark: %.0f saniye\n", fark);
    
    printf("Epoch time, 1 Ocak 1970 00:00:00 UTC'den itibaren gecen saniye sayisini ifade eder.\n");
    
    return 0;
}

