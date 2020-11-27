# Programação moderna em C

## Sistema Operacional
Linux

## Como compilar?
"gcc": compilador
"hello.c": arquivo de entrada
"-o": parametro que indica o arquivo de saída
"hello": arquivo de saída
```
gcc hello.c -o hello
```

## Como executar?
Para executar o arquivo precisamos passar o diretório completo como o seguinte:
/home/miguel/Documents/curso-c/aula-0/hello 
Porém podemos fazer a mesma coisa utilizando o comando abaixo. Esse comando funciona porque o "." é um atalho para o diretório atual.
```
./hello
```
## Comando file
Esse comando tenta identificar o tipo de arquivo.
Nesse exemplo ele irá dizer que o "hello" é um arquivo ELF. Já o "hello.c" é um arquivo fonte em C.
ELF é um padrão comum de arquivo para executáveis.
```
file hello*
```


## Ferramentas
sudo apt-get install vim gcc
