# 42Istanbul 

## Ex00

1. touch z 
2. Vim z
3. İ tuşuna basarak insert edilir. Yazma aşamasına geçilir
4. İçerisine girdikten sonra Z yazılıyor.
5. ESC çıkış yapmak için basılır.
6. :wq enter
7. W yaz kaydet anlamına gelir.
8. Q çıkış yap anlamına gelir.
9. İşlem bukadar.

## Ex01

Dosya tarihi değiştirme
1. Touch testShell00 ile dosya oluşturulur.
Kısa yol 
2. Yol : touch -t 06012348 test1 yazarak yıl bilgisi değiştirilebilir.

1. -h hedef dosya sembolik link in kendisine değil işaret ettiği dosyaya etki etmesini sağlar.
2. -a dosyanın erişim zamanı güncellenir. Değişiklik zamanı değişmez.
3. -m dosyanın değişiklik zamanı günceller erişim zamanını güncelleme.
4. -t belirtilen zaman damgasını kullanarak dosyanın zaman damgalarını ayarlar. Zaman damgası formatı [YYMMDDhhmm] şeklindedir


## Ex02 

link li dosya oluşturma test6 -> test0
ln -f test3 test5
ln -s test0 test6
=> alt dizin test0 ana dizin test6 olarak çalışır.
Tarih bilgisini değiştirdikten sonra dosya izinlerin chmod ile değiştirildiğinde izin yazısının solunda yer alan 2 1 2 2 1 2 1 sırasıyla her dosya kendi yapısına göre numaralandırılmaktadır. 

Test6 izin değiştirilmesi : chmod -h 777 test6

Open exo2.tar ile açılınca izinler değişmiyor.

Tar -cf exo2.tar test*
Tar -xpf exo2.tar 

Link -> li dosya nın dizinlerini değiştirmek.

Chmod -h 777 test6 

## Ex03 

ssh key oluşturma:

1. Ssh-keygen
2. cad ~/.ssh
3. cat ~/.ssh/id_rsa.pub
4. Buradaki key bilgisini Settings üzerinden ssh-key içerisine kaydediyoruz.
5. Daha sonrasında git clone yaparak projeyi indirme işlemine başlayabiliriz.

1. Ex04 içerisine id_rsa_pub adında dosya açıyoruz içerisine public keyimizi ekliyoruz. 
2. id_rsa ve id_rsa.pub dosyasını silinebilir.
3. Bunun dışında başka bir şey yapmıyoruz.

## Ex04 

-> bash ex04/midLs çalıştırma oluşturma adımları.

1: vim -u NONE midLs 
2: içerisin yazılacak metin ->>>  ls -mpt
3: kaydet ve ardından çalıştırmak istediğin dizin de
4: bash ex04/midLs   olarak çalıştırılıyor.
5: -m çıktıları ( , ) ile ayrılmış şekilde gösterir.
6: -p her bir dizinin sonuna ( / ) ekler.
7: -t dizinin son değiştirilme tarih’ ine göre sıralar.

## Ex05 

1. Git add .
2. Git commit -m “ilk mesaj”
3. Git push 
4. Bu işlemler bittikten sonra 
5. Vim git_commit.sh dosya oluşturulur. İçerisine alt satırdaki yazı girilir.
6. Git log —format=“%H” -n5
7. Bu kaydedildikten sonra çalıştırılması istenilen yerde 
8. Bash git_commit.sh | cat -e yazılarak çalıştırılır.
9. Bu bize son gönderilen son 5 git log commit mesajını döndürür. 
10. Burada -n5 son 5 komite temsil eder.
11. Git log commit içerisindeki değişiklik kaydını temsil eder.
12. —format=“%H” commit lerin gösterim formatını belirtir. %H commitin tam bash değerini gösterir.
13. -n5 son 5 comiti gösterir.



## Ex06

Touch ile git_ignored.sh dosyası oluşturuyoruz.
İçerisine git ls-files --others --ignored --exclude-standard yazılır.
Burada :  
1. Git ls-files git içerisindeki dosyaları gösterir. 
2. —other git tarafından izlenmeyen dosyaları gösterir. 
3. —ignored git ls-files komutu tarafından gösterilmeyen ancak .gitignore dosyası veya diğer ignore kuralları tarafından yoksayılan dosyaları  listelemek için kullanılır. 
4. —exclude-standard git’in standar yoksayma kuralları , bu kuralları aktif eder.


Touch .gitignore
İçerisindeki dosyaları almadan göndermeyi 
.gitignore dosyası oluşturarak ignore olacak dosyaları giriyoruz.




## Eksikler: ~

Git —other git tarafından izlenmeyen
Git —ignored ise git ls-files gösterilmeyen ancak .gitignore dosyası ve diğer ignore kuralları tarafından yoksayılan dosyaları listelemek için kullanılır.
git --exclude-standard komutu, gitignore dosyalarında veya gitin varsayılan ayarlarında (standard) yer almayan dosyaları dikkate alarak işlem yapar veya göz ardı eder.



Ls -pmt 
M ( , ) temsil eder.
P ( / ) temsil eder.
T ( Zaman ) Temsil eder.

Ln -f test3 test5 
Test3 force ederek test 5 üzerine yazılır.
ln -f komutu, hedef dosyanın varlığını gözetmeksizin bağlantı oluşturur veya hedef dosyayı değiştirir.

Ln -s test0 test6
Test0 ın kısayolunu test6 da oluştururuz.
