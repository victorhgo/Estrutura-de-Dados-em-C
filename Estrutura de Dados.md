<a name="partes"></a>
# Estrutura de Dados em C++

- [Introdução](#parte1)
- [Recursão](#parte2)
- [Listas Lineares](#parte3)

<a id="parte1"></a>
## Introdução

Em **Estrutura de Dados**, não basta que um programa seja escrito para resolver um determinado problema, é necessário que seja rápido, pois o programa estará lidando com uma enorme quantidade de dados.

Para isso, será estudado os algoritmos rápidos para manipular as estruturas de dados, utilizando sempre a matemática como garantia de qualidade. 

Os Algoritmos são a base da Computação, e são os algoritmos que permitem a construção de sistemas complexos, resoluções de problemas complexos de otimização, matemática avançada, biologia, química, entre outros. A grande maioria dos problemas envolvem o armazenamento desses dados.

Iremos estudar estruturas como filas, Filas, Hash, Árvores e Arrays (Vetores). Cada uma delas possuem caracteristicas únicas que a tornam adequadas ou não para resolver um determinado problema. Será necessário aprender como construí-las e também como manipulá-las (como consultar, inserir ou remover dados).

<a id="parte2"></a>
## Recursão

Recursão pode ser explicada da seguinte maneira: É entregue a vocẽ um problema que pode ser dividido em problemas menores, ou seja, dividir o problema até que se obtenha probleminhas que serão mais fáceis de resolver. Um detalhe a se observar é que exista um caso base para o problema.

Podemos dividir a recursividade nos seguintes passos:

**Primeiro** definimos as soluções para os casos mais básicos, ou seja, o caso base. **Segundo**, nós tentamos reduzir o problema para instâncias menores desse problema, ou seja, quebrar o *problemão* em *probleminhas*. **Então, finalmente** combinamos o resultado das menores instâncias para obter uma resolução do problema original.

No **caso base**, é onde será resolvido as instâncias pequenas de maneira direta.

No **caso geral**, reduzimos o problema para instâncias menores do mesmo problema e chamo a função recursivamente. A função recursiva nos dá um resultado que será utilizado para calcular o resultado final. Um dos exemplos mais clássicos de recursividade é para calcular o fatorial de um número $n > 0$.

Por convenção, sabemos que: (Caso base)

$$0! = 1$$

E também sabemos que: (Caso Geral, diminuindo o problema em instâncias menores)

$$n! = n \cdot (n - 1) \cdot (n - 2) \cdot ...$$

Então para calcular $n!$ podemos escrever a seguinte função recursiva:

```C
int fat(int n){
    if (n == 0){ /* Caso Base */
        return 1;
    }    
    else {       /* Caso Geral */
        return n * fat(n - 1); /* Instância Menor do problema inicial */
    }    
}
```

Um exemplo da mesma função para calcular o fatorial de um número $n$ sem utilizar chamada recursiva, seria:

```C
int main(){

    int count = 1, factorial = 1, number;
    printf("What number would you like to factorate? ");
    scanf("%d", &number);
//    1 * 2 * 3 * ... * n
    while(count <= number){
        factorial = count * factorial;
        count++;
    }
    printf("The factorial of %d is %d", number, factorial);
}

```

Algumas operações matemáticas ou objetos matemáticos que possuem uma definição recursiva, como por exemplo a sequência de Fibonacci, entre outras...

Outro exemplo de uma função recursiva é o calculo da exponenciação, que pode ser escrita da seguinte maneira:

> Se $a$ é um número real e $b$ um número inteiro não-negativo:

- Se $b = 0$, então $a^b = 1$
- Se $b > 0$ então $a^b = a \cdot a^{b-1}$

Então implementamos a função em C:

```C
double potencia(double a, int b){
    if (b == 0){ /* Caso base */
        return 1;
    }
    else{ /* Caso Geral */
        return a * pow(a, (b - 1));
    }    
}
```

### Terminar a Torre de Hanoi e colocar aqui o algoritmo



<a id="parte3"></a>
# Listas Lineares

As listas lineares são as estruturas de dados mais simples de se manipular. As operações mais importantes são de adição ou remoção de dados na lista, e também buscar por dados especificos.

Por se tratar de operações simples, é necessário que os algoritmos sejam eficientes ao trabalhar com essas estruturas.

## filas

Uma fila é uma coleção de dados de forma ordenada (sequencial) onde teremos acesso a um dado por vez, é também denominada estrutura do FIFO:

- FIFO: First In, First Out

Ou seja, um dado sempre será adicionado ao final da lista, e ao remover um dado, será removido o último dado a ser adicionado na lista.

- Uma fila contendo os 9 primeiros inteiros maiores do que zero:

| 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 |
|---|---|---|---|---|---|---|---|---|

Observe na fila acima que o último número a ser adicionado na fila foi o 9, que também será o primeiro dado a ser removido da fila.

Uma aplicação para filas é a maneira como o navegador de internet armazena as páginas web navegadas por um usuário. Quando clicamos em *Avançar* e *Voltar* blablabla... também escrever o exemplo de editor de texto com a função voltar e avançar (Ctrl + Z e Ctrl-X)

## Filas

A fila, assim como a fila, também é uma coleção de dados sequencial, porém ao contrário da fila, ela é do tipo LIFO:

- LIFO: Last in, First Out

Ou seja, um dado sempre será adicionado ao final da lista, e ao remover um dado, será removido o primeiro dado a ser adicionado na lista.

<p align="center">
  <img src="Images/queue.jpg" width="700" height="450" alt="Waiting queue">
  <em>Exemplo de uma fila de espera</em>
</p>



