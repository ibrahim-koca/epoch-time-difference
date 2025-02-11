<h3 align="center">EpochTimeDiffCalculator</h3>
<p align="center">
      Zamanı, saniyelerle ölçün: epoch tabanlı zaman farkı hesaplama uygulaması.

## Epoch Time Difference Calculator
EpochTimeDiffCalculator uygulaması, kullanıcının girdiği iki tarih ve saat arasındaki zaman farkını hesaplamak için epoch zamanı (Unix timestamp) kullanır. Bu uygulama, tarih ve saat bilgilerini saniyelerle ölçmek için epoch sistemine dönüştürür ve iki farklı tarih arasındaki farkı saniye cinsinden gösterir.

## İçindekiler

- [Hızlı Başlangıç](#hızlı-başlangıç)
- [Neler Dahil](#neler-dahil)
- [Özellikler](#özellikler)
- [Kurulum](#kurulum)
- [Nasıl Kullanılır](#nasıl-kullanılır)
- [Günlük Hayatta Kullanım Alanları](#günlük-hayatta-kullanım-alanları)


## Hızlı Başlangıç

- [indir](https://github.com/ibrahim-koca/epoch-time-difference/archive/refs/heads/main.zip)

- Depoyu Klonla:
```
git clone https://github.com/ibrahim-koca/epoch-time-difference.git
```

## Neler Dahil

├── epoch_difference.c  # Ana kod dosyası<br>
├── README.md           # Proje açıklama dosyası<br>

## Özellikler

- Tarih ve Saat Girişi: Kullanıcı, istediği iki tarih ve saati girebilir.
- Epoch Zamanı Hesaplama: Uygulama, verilen tarihleri epoch zamanına dönüştürür (1 Ocak 1970'ten itibaren geçen saniyeler).
- Zaman Farkı Hesaplama: İki tarih arasındaki zaman farkı saniye cinsinden hesaplanır ve kullanıcıya sunulur.
- Kolay Kullanım: Uygulama, kullanıcı dostu bir arayüze sahiptir ve tarih-giriş işlemleri oldukça basittir.<br><br>
Bu proje, tarih ve saatle ilgili hesaplamalar yapan uygulamalara örnek teşkil eder. Epoch zamanı kullanarak, farklı zaman dilimlerinde hesaplamalar yapabilir ve bir tarihsel olayla ilgili detaylı bilgi elde edebilirsiniz.

## Kurulum

1. Terminal veya komut satırını açın.
2.  Depoyu klonlayın:
```
git clone https://github.com/ibrahim-koca/epoch-time-difference.git
```
3.  Klasöre gidin:
```
cd epoch-time-difference
```
4.  Programı derleyin:
```
gcc main.c -o epoch_diff
```
Windows kullananlar için:
```
gcc main.c -o epoch_diff.exe
epoch_diff.exe
```
5.  Programı çalıştırın:
```
./epoch_diff
```

## Nasıl Kullanılır

- Program çalıştırıldığında kullanıcıdan iki tarih ve saat bilgisi alır.
- Bu tarihleri epoch zamanına çevirir.
- Ardından iki zaman arasındaki farkı saniye cinsinden hesaplar ve ekrana yazdırır.<br>
Kullanım Örneği:<br>
```
Birinci tarihi ve saati giriniz (YYYY MM DD HH MM SS): 2024 02 10 14 30 00
İkinci tarihi ve saati giriniz (YYYY MM DD HH MM SS): 2024 02 11 16 45 00

Epoch zamanı (saniye olarak):
Birinci zaman: 1707571800
İkinci zaman: 1707653100
İki tarih arasındaki fark: 81300 saniye
```
## Günlük Hayatta Kullanım Alanları  

Bu program, özellikle proje yöneticileri ve ekip yöneticileri için **zaman yönetimi** konusunda büyük kolaylık sağlar. **Proje sürecinin takibi, çalışanların çalışma süreleri ve tatil planlamalarının yönetimi** gibi konularda kullanılabilir.  

- **Proje Süresi Takibi:** Bir projenin başlangıç ve bitiş tarihlerini girerek, proje için toplam geçen süreyi hesaplayabilirsiniz.  
- **Çalışanların Çalışma ve Tatil Günleri:** Çalışanların işe başlama ve tatil günlerini girerek, toplam çalışma süresini hesaplayabilir ve tatil planlamalarını optimize edebilirsiniz.  
- **Mesai Yönetimi:** Çalışanların günlük çalışma saatlerini analiz ederek, fazla mesai veya eksik çalışma sürelerini takip edebilirsiniz.  
- **Kaynak Planlama:** Bir çalışanın belirli bir zaman diliminde birden fazla projeye katılımını hesaplamak için kullanılabilir.  

Bu uygulama, özellikle büyük ekiplerle çalışan proje yöneticileri için verimli bir planlama aracı olabilir.  
