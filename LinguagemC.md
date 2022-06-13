
<a name="paginas"></a>
# Estrutura de Dados em C
- [Introdução](#pagina1)
- [Funções em C](#pagina2)
- [Compilando um Programa](#pagina3)
- [Tipos(vetores e *strings*)](#pagina4)
- [*Struct* e *typedef*](#pagina5)
- [Abstração de Dados](#pagina6)

<a id="pagina1"></a>
## Introdução

Em **Estrutura de Dados**, não basta que um programa seja escrito para resolver um determinado problema, é necessário que seja rápido, pois o programa estará lidando com uma enorme quantidade de dados.

Para isso, será estudado os algoritmos rápidos para manipular as estruturas, utilizando a matemática como garantia de qualidade. 

Os algoritmos são a base da Computação, e são os algoritmos que permite a construção de sistemas complexos, resolução de problemas complexos de otimização, matemática avançada, biologia, química, entre outros. A grande maioria dos problemas envolvem o armazenamento desses dados.

Agora **por quê aprender Estrutura de Dados em C?** Primeiramente pode-se dizer que o C trará um aprofundamento em programação muito maior, e também o entendimento de como funcionam os computadores em baixo nível como alocação de memória,ser capaz de manipular dados na memória por exemplo. O C é muito mais rápido que a maioria das linguagens existentes.

<a id="pagina2"></a>
## Funções em C

Como é escrito funções na linguagem C. Primeiro é definido o tipo da função, no caso do exemplo, será escrito uma função que retorna o valor máximo entre dois números inteiros, então nossa função será declarada do tipo inteiro, pois ela retornará um inteiro (int). Uma função do tipo *void* não retornará nenhum valor.

```C
int maximum(int a, int b)
```

A função declarada acima recebera como parâmetos dois números inteiros *a* e *b*.

A função testará os dois números utilizando o *if/else* e retornará qual o maior número entre eles, então a função completa será:

```C
int maximum(int a, int b){
    if (a > b) {
        return a;
    }
    else{
        return b;
    }
}
```

É boa prática sempre definir o *protótipo da função*, ou seja, escrever a função sem o bloco:

```C
int sum(int x, int x)
```

Ou seja, é uma *"promessa"* de que essa função que somará dois números inteiros existirá no programa, e permitirá que essa função seja utilizada mesmo antes de ser definida.


### Função Main

Em C, toda a execução de um programa ocorre através da função *main*. Ela sempre devolverá um tipo *int*. O *return code 0* garante que o código executou sem erros.

A estrutura da função *main* sempre será:

```C
int main(){
    code...
}
```

Então, um programa para retornar o maior de dois número utilizando a função *maximum* e a função *main* ficará:

```C
#include <stdio.h>

int maximum(int a, int b){
    if (a > b) {
        return a;
    }
    else{
        return b;
    }    
}

int main(){
    int a, b, max_number;
    prinf("Enter a value for a: ");
    scanf("%d", &a);
    printf("Enter a value for b: ");
    scanf("%d", &b);

    max_number = maximum(a, b);

    printf("The greater number is %i", max_number);
    return 0;
}
```
<a id="pagina3"></a>
## Compilando um Programa em C

Para compilar os programas escritos em C, será utilizado o GNU C Compiler(ou *gcc*). A sintaxe do *gcc* é a seguinte:

> *gcc -ansi -Wall -pedantic-errors -Werror -g -lm **program.c** -o **executable***

Algumas flags que foram utilizadas:

- ***-ansi***: utiliza o padrão C89 (versão mais portável da linguagem C)

- ***-Wall***: irá retornar mais *warnings* de compilação, como por exemplo o esquecimento de ";" em uma determinada linha, uma variável declarada que não está sendo utilizada, entre outros.

- ***-pendantic-errors*** força a seguir o padrão **ANSI**

- ***-Werror***: os *warnings* viram erros de compilação, e o programa não é compilado.

- ***-g***: permite utilizar as ferramentas **gdb** (*Gnu debbuger*) e **valgring**(serve para encontrar alguns erros e visualizar certas sessões de memórias).

- ***-lm***: permite a utilização de funções matemáticas importadas da biblioteca *math.h*.

- ***-o***: será o nome do executável do programa compilado.

<a id="pagina4"></a>
## Tipo de dados: vetores ou *arrays*

As listas, também conhecidas como *arrays*, são chamados de vetores em C, e possuem as seguintes estruturas:

Todos os elementos possuem o mesmo tipo, os vetores também tem um tamanho fixo que é definido na declaração da variável. Um exemplo da declaração de um vetor onde será armazenado todas as notas de alunos de uma determinada sala que comporta 30 alunos.

```C
int notas[30];
```

Para acessar os dados armazenados nos vetores, é utilizado o índice do vetor, então para o vetor *notas* declarado como as notas de alunos, suponha que o professor queira acessar a nota armazenado na posição 5 do vetor onde ele sabe que é a nota de João, então a nota de João está armazenada em:

```C
float notas[4] = 10.0; // Nota do João
```

Note que a estrutura dos indices de um vetor, inicia com 0, então a primeira posição de um vetor será *vetor[0]* e a quinta posição, *vetor[4]*.

### Trabalhando com *arrays*

Para facilitar a manipulação de dados de um vetor, é utilizado um laço *for* para acessar todas posições de um vetor.

No exemplo do vetor *notas*, suponha que o professor queira digitar a nota dos 30 alunos de uma vez no vetor. O laço *for* será utilizado da seguinte maneira:

```C
for(i = 0; i < 30; i++){
    printf("Digite a nota do aluno %i", i);
    scanf("%f", &notas[i]);
}
```

Onde a variável *i* representará o índice do vetor, e pra cada iteração de *i*, uma diferente posição do vetor será selecionada para que seja armazenada a nota do aluno *i*.

#### Boas práticas para lidar com *arrays*

Podemos ter uma função que faça a escrita e leitura em vetores, isso ajuda a otimizar o código e facilitar a leitura e manutenção do programa.

No exemplo para escrever as notas dos alunos, pode-se criar uma função *write* para escrever as notas dos alunos em *notas[30]*. Essa função modifica o conteúdo do vetor *notas*.

```C
void write(float notas[], int n = 30){
    int i;
    for (i = 0; i < n; i++){
        printf("Digite a nota do aluno %i", i);
        scanf("%f", &notas[i]);
    }
}
```

Os vetores podem ser lidos utilizando uma função que será chamada de *read*, porém não é possível retornar um vetor. Nesse caso é necessário passar um vetor como parâmetro e modificar o seu conteúdo.

```C
void read(float notas[], int n = 30){
    int i;
    for (i = 0; i < n; i++){
        printf("A nota do aluno %i é %f", notas[i]);
    }
}
```

### Código completo do programa

Então o programa completo, para escrever as notas do aluno e depois o professor conseguir ler uma por uma, ficará da seguinte maneira:

```C
#include <stdio.h>

void write(float notas[], int n){
    int i;
    for (i = 0; i < n; i++){
        printf("Digite a nota do aluno %i: ", i);
        scanf("%f", &notas[i]);
    }
}

void read(float notas[], int n){
    int i;
    for (i = 0; i < n; i++){
        printf("A nota do aluno %i é %.1f\n", i, notas[i]);
    }
}

int main(){
    float notas[30];
    write(notas, 30);
    read(notas, 30);
    return 0;
}
```

## Váriaveis


### Váriaveis globais

As váriaveis globais podem ser acessadas em qualquer função. Porém são apenas utilizadas em casos muito específicos, pois podem levar a erros que são dificeis de encontrar.

São declaradas antes de qualquer função, como por exemplo:

```C
#include <stdio.h>

int global;
```

A variável *global* foi declarada como um inteiro.

### Váriaveis locais

As váriaveis locais existem apenas dentro da função onde foram definidas, então no momento em que a função termina sua execução, o valor armazenado na váriável é perdido.

## Strings

Strings são vetores de *char*. Onde o tamanho de uma *string* é delimitado por *'\0'*. Exemplo:

```C
int size(char string[]){
    int i;
/* Considerações sobre o bloco vazio de for: Poderia ser trocado por while, pois um for vazio pode ser um bug no programa. */
    for (i = 0; string[i] != '\0'; i++)
    return i;
}
```

O código acima irá retornar a quantidade de caracteres(o valor de 'i') encontrados numa *string*, e irá parar quando encontrar o terminador *'\0'*.

### Acerca da biblioteca *string.h*

A biblioteca *string.h* possuem diversas funções que nos auxiliam na hora de trabalhar com strings, são elas:

- ***strlen*** essa função irá retornar o tamanho de uma string:
exemplo: *strlen(string[])*

- ***strcmp*** irá comparar duas strings:
exemplo: *strcmp(stringA, stringB)*

- ***strcpy*** copia uma string A para uma string B:
exemplo: *strcpy(stringA, stringB)*

- ***strcat*** usada para concatenar duas, a string de destino (stringA) receberá os *n* primeiros caracteres da string inicial(stringB).
exemplo: *strcat(stringA, stringN, size_t n)*

A *string.h* possuí diversas funções que podem ser consultadas no manual da biblioteca.

<a id="pagina5"></a>
## Registros

Um Registro é uma coleção de váriaveis de vários tipos diferentes em que estão relacionadas uma com a outra, essas variáveis estarão organizadas em uma única estrutura e serão referenciadas pelo nome do registro. Cada variável é chamada de **membro** do registro e esses membros são acessados por um nome na estrutura. Cada **estrutura** irá definir um novo tipo, com as mesmas características de um tipo padrão da linguagem (*int*, *char*, *float*, *etc...*). Os registros não possuem funções associadas. Em C será declarado o tipo de uma estrutura apenas uma vez, porém poderá ser declarado vários registros da mesma estrutura.

### Como declarar a estrutura de um Registro?

Utilizando *struct* para inicializar um registro chamado *registro* com *N* membros:

```C
struct registro{
    tipo1 membro1;
    tipo2 membro2;
    ...
    tipoN membroN;
};
```

Declarando um registro:

```C
struct registro nome_registro;
```

Um exemplo será definir um registro jogador onde será armazenado todos os dados como nome, idade, peso, altura, números de vitórias e números de derrotas em jogo:

Primeiro podemos declarar uma estrutura(fisico) que conterá as características físicas do lutador como peso e altura:

```C
struct fisico{
    float peso;
    float altura;
};
```

Após definir as estruturas físicas do jogador, podemos definir a estrutura do lutador:

```C
struct jogador{
    char nome[30];
    int idade;
    struct fisico caract;
    int vitorias;
    int derrotas;
};
```

### Utilizando o Registro

Para acessar um membro de um registro:

> registro.membro

Onde por exemplo podemos visualizar o nome de um jogador como:

```C
struct jogador jogador1
...
printf("Jogador: %s\n", jogador1.nome);
```

Ou o peso e altura do jogador:

```C
struct jogador jogador1
...
printf("Peso: %.2f Altura: %.2f", jogador1.caract.peso
                                  jogador1.caract.altura);
```

Para copiar um jogador, podemos atribuir um jogador ao outro:

```C 
jogador1 = jogador2;
```

A linguagem C entenderá que precisa copiar todas as informações do *jogador1* para o *jogador2*.

### O comando *typedef*

O comando *typedef* nos permite dar um novo nome para um tipo que já existe, por exemplo.

As váriáveis do tipo inteiros já existem como *int* em C. Porém pode ser criado um novo tipo, por exemplo inteiros:

```C
typedef int inteiro;

inteiro x; // que é o mesmo que int x;
```

O comando *typedef* será utilizado na hora de dar nome para a *struct*, então da seguinte forma:

```C
struct registro{
    tipo1 membro1;
    tipo2 membro2;
    ...
    tipoN membroN;
} novonome; // Onde aqui será o novo nome da struct.
```

Fazendo isso poderemos declarar uma variável da seguinte maneira:

```C
novonome var;

// Ao invés de 

struct registro var;

```

<a id="pagina6"></a>
## Abstração de Dados

Uma pequena reflexão proposta pelo professor em aula: Quando escrevemos um algoritmo que somará dois valores do tipo *float*, nós não estamos nos preocupando em como a operação interna é feita. Por exemplo, internamente o *float* é representado por um número binário. Logo, o compilador irá esconder todos os detalhes da operação realizada. Mas quando lidamos com números complexos, nos preocupamos com os detalhes, pois temos que realizar mais operações para somar os números: É necessário somar as partes Reais com as partes Imaginárias, e somar o quadrado dessa soma. Então, como abstrair um número complexo? Podemos fazer isso utilizando registros(como feito no problema 2) ou funções.

Então um Tipo Abstrato de Dados é um conjunto de valores associados a um conjunto de operações permitidas nesses dados:

- **Interface** - Na interface nós definimos as funções, como elas irão funcionar e também é definido o que precisa ser implementado. Então será definido quais operações podemos realizar num tipo abstrato de Dados.

- **Implementação** - Na implementação nós definimos como as coisas serão feitas no código, suas funções. Então será o conjunto de algoritmos que realizarão as operações. Na implementação será o único lugar onde nos preocuparemos como as coisas funcionam internamente.

- **Cliente** - Será o código que irá utilizar as funções definidas na implementação sem se importar como as funções funcionam, só é necessário conhecer quais são as funções e como elas podem ser utilizadas. O Cliente nunca deverá acessar uma variável diretamente.

> A **Interface** e a **Implementação** poderão ser reutilizadas em outros programas.

Em C nós utilizamos uma *struct* para trabalhar com esse tipo abstrato de Dados. O conjunto de funções que manipulam a *struct* será a Interface.

### Como é programado isso?

No diretório *Source Codes/Exemplo 2*, será criado a inteface *complexos.h* com a *struct* e os protótipos de função.

