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

## Dica 1
Comando !$ - Esse comando é uma referência ao ultimo parametro do comando anterior.
```
mkdir curso-c
cd !$
```

## Dica 2
Comando no vim - ":w hello2.c" escreve um novo arquivo chamado "hello2.c" com o conteúdo arquivo atual.

## Dica 3
Comando no vim - Esc e depois a letra "u" irá fazer o "undo".

## Dica 4
Comando para incrementar um número sem ter que estar no comando inserir. "Ctrl + a". Já o comando "Ctrl + x" faz o contrario, ele decrementa um número.

## Dica 4
O comando no vim ":wq" escreve e sai da edição, porém o comando ":x" faz a mesma coisa.

## Dica 5
O comando "o" no vim cria uma nova linha abaixo da linha atual e já entra no modo de inserção.

## Dica 6
Comando !<parametro>

O comando "!gcc" iria executar "gcc hello.c -o hello" porque foi o ultimo comando que executamos que começava com "gcc".
