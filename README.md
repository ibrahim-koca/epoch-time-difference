# epoch-time-difference
Zaman Farkı Hesaplama Programı
Bu proje, kullanıcıdan alınan iki tarih ve saat bilgisinin farkını hesaplayan bir C programıdır. Programda struct ve union veri yapıları kullanılmıştır. Hesaplama epoch zamanı kullanılarak yapılır.

Proje Açıklaması
Bu C programı, kullanıcının girdiği iki tarih ve saat arasındaki farkı hesaplamak için geliştirilmiştir. Programda, struct veri yapısı ile tarih ve saat bilgileri alınır. Ardından bu bilgiler epoch zamanına dönüştürülür ve iki tarih arasındaki fark saniye cinsinden hesaplanır.

Program, mktime fonksiyonunu kullanarak tarihleri epoch zamanına dönüştürür ve difftime fonksiyonu ile iki tarih arasındaki farkı bulur.

Kullanılan Bileşenler
struct TarihSaat: Tarih ve saat bilgilerini tutmak için kullanılan yapı.
union EpochZaman: Tarih ve saat bilgisini epoch zamanına dönüştürmek için kullanılan yapı.
mktime: Tarih bilgisini epoch zamanına dönüştürmek için kullanılan fonksiyon.
difftime: İki epoch zamanı arasındaki farkı hesaplamak için kullanılan fonksiyon.
Programın Çalışma Prensibi
Kullanıcıdan iki tarih ve saat bilgisi alınır.
Bu bilgiler, struct veri yapısına yerleştirilir.
Her iki tarih mktime fonksiyonu ile epoch zamanına dönüştürülür.
İki epoch zamanı arasındaki fark difftime fonksiyonu ile hesaplanır.
Hesaplanan fark ekrana yazdırılır.
Günlük Hayattan Uygulama
Bu program, günlük hayatta çeşitli zaman hesaplamalarını yapmak için kullanılabilir. Örneğin:

İki etkinlik arasındaki zaman farkını hesaplamak.
Bir proje için başlangıç ve bitiş zamanı arasındaki farkı bulmak.
Bir trenin kalkış ve varış saatleri arasındaki farkı hesaplamak.
Nasıl Çalıştırılır?
Bu programı çalıştırmak için, C derleyicisi kullanmanız gerekmektedir. Programı derleyip çalıştırmak için aşağıdaki adımları izleyebilirsiniz:

Terminal veya komut satırını açın.

Programı derlemek için şu komutu kullanın:

bash
Kopyala
Düzenle
gcc main.c -o zamanfarki
Programı çalıştırmak için aşağıdaki komutu girin:

bash
Kopyala
Düzenle
./zamanfarki
Program çalışmaya başladığında, kullanıcıdan iki tarih ve saat girmesi istenir. Sonuç olarak, iki tarih arasındaki fark saniye cinsinden hesaplanıp ekrana yazdırılır.

