*This project has been created as part of the 42 curriculum by aberdal.*

# ft_printf

## Açıklama

Bu proje, C dilindeki standart `printf` fonksiyonunun yeniden yazılmasıdır.
Amaç; değişken sayıda parametre alan fonksiyonları (variadic functions),
format çözümlemeyi ve `write` sistem çağrısını kullanmayı öğrenmektir.

Bu kütüphane, libc içindeki `printf` fonksiyonunun temel özelliklerini taklit eden
`ft_printf` fonksiyonunu içerir.

#### Desteklenen formatlar:

- %c %s %p %d %i %u %x %X %%

---

## Kullanım ve Derleme

### Derleme

#### Kütüphaneyi derlemek için:

- make

#### Temizleme Object dosyalarını silmek için:

- make clean

#### Tüm dosyaları silmek için:

 - make fclean

#### Yeniden derlemek için:

- make re

## Dosya Yapısı

├── ft_printf.c

├── ft_format.c

├── ft_putchar.c

├── ft_puthex.c

├── ft_putnbr.c

├── ft_putptr.c

├── ft_putstr.c

├── ft_unsigned.c

├── ft_printf.h

├── Makefile

└── README.md

## Kaynaklar

- Dokümantasyon

- man printf

- man stdarg


## Yapay Zeka Kullanımı

#### Yapay zeka araçları şu amaçlarla kullanılmıştır:
---
- Variadic fonksiyonların öğrenilmesi

- Algoritma mantığının anlaşılması

- Hata ayıklama süreci

- Tüm kodlar manuel olarak yazılmış ve anlaşılmıştır.

### imza
                                                
                -@+-#@#:                            
             -#@@+++:.*%###+-                       
          .#@@@@*+++++ -@@@%-*@@@@*                 
        *@@@@@@*+++++++: *#:*@@@@@@+-               
        *@@@@@#+****++**=  *@@@@@@@#++.             
         .%@@@=++++++-=+#%:*++**==+%*++=            
           *@+++=:-#%@@@@-#@*+++:.::##++            
            ::+%@@@@@@@@@:@@@*+*++#@@@@#-           
              ==*@@@@@@@#:@@@@*++%:*%@@@%           
              :@%+:=%@@@=:*@@@@=%% +*%@@@=          
               -@@@@*..*.    .##@+-+*+@@@%          
                -@@@@@+         #.+=.:=**#=         
                 -@@@+             @@*.%@#          
                  =@+              .-%@:=-          
                                   *@+ =+:*+        
                                   :@@**=           
                                    %@%+-           
                             :+*-   %@@#:           
                            :@#:   +%###            
                            +@@*-:+*+++             
                              *@#%@@@+                   
                                                    
