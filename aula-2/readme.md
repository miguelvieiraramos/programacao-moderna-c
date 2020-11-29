# Explicações

# char
O char possui 1 byte ou seja 8 bits. O maior número que pode ser armazenado no char seria o 255.Porque 1111 1111 (bits) é igual a 255. Se você fizer 2^8 dará 256 porém diminuimos 1 porque o 0 já é um número.

# -128 até 127
O char pode armazenar 8 bits (1 byte). É comum aos compiladores que ao declarar "char" automaticamente essa variável é "signed", isso quer dizer que mesmo 8 bits equivalendo 255 nós utilizamos o primeiro bit para o sinal. Se o primeiro bit for 0 quer dizer que o número é positivo, já se for 1 quer dizer que o número é negativo.
```
0111 1111 = 127 //
1111 1111 = -127
1000 0000 = -128
1100 0000 = -64
```
