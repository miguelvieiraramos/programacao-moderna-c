# Explicações

## #include <stdio.h>
Esse linha de código está importando esse arquivo chamado "stdio.h".
Se executarmos o comando "locate stdio.h" encontramos o seguinte caminho "/usr/include/stdio.h". Portanto, o código "#include <stdio.h>" seria a mesma coisa que "#include </usr/include/stdio.h>". Vale lembrar que é nesse arquivo que se encontra a função "printf".

## int main(void) {}
É uma função obrigatória. O "int" é o tipo do valor que será retornado, na arquitetura que estou usando (usando 64 bits) então esse int é um valor até 8 bytes.


## "return 0;"
O sistema operacional é quem executa o programa e esse programa executa a função C que retorna "0". E é possível vermos o retorno de uma programa. Basta executa-lo e em seguida executar o comando "echo $?"

```
gcc hello.c -o hello
./hello
echo $?
```
se um programa retorna "0" quer dizer que rodou com sucesso, porém se retornar qualquer coisa diferente de "0" quer dizer que não rodou com sucesso.

Podemos analisar isso executando o comando "./hello && echo o programa rodou com sucesso". A mensagem só será exibida se o programa "hello" executar com sucesso.

## printf
Para saber mais sobre a função printf basta executar o comenado "man 3 printf"
A função printf retorna o número de caracteres impressos
O %d significa decimal

