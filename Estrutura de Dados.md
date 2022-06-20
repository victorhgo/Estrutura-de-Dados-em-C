<a name="partes"></a>
# Estrutura de Dados em C
###### MC202 - Professor Rafael Crivellari Saliba Schouery

- [Introdução](#parte1)
- [Recursão](#parte2)

<a id="parte1"></a>
## Introdução

Em **Estrutura de Dados**, não basta que um programa seja escrito para resolver um determinado problema, é necessário que seja rápido, pois o programa estará lidando com uma enorme quantidade de dados.

Para isso, será estudado os algoritmos rápidos para manipular as estruturas, utilizando a matemática como garantia de qualidade. 

Os algoritmos são a base da Computação, e são os algoritmos que permite a construção de sistemas complexos, resolução de problemas complexos de otimização, matemática avançada, biologia, química, entre outros. A grande maioria dos problemas envolvem o armazenamento desses dados.

<a id="parte2"></a>
## Recursão

Podemos pensar em recursão com a ideia de que temos um problema, e podemos resolvê-lo da seguinte maneira:


**Primeiro** definimos as soluções para os casos mais básicos. **Segundo**, nós tentamos reduzir o problema para instâncias menores desse problema, ou seja, quebrar um *problemão* em *probleminhas*. **Então, finalmente** combinamos o resultado das menores instâncias para obter uma resolução do problema original.

No **caso base**, é onde será resolvido as instâncias pequenas de maneira direta.

No **caso geral**, reduzimos o problema para instâncias menores do mesmo problema e chamo a função recursivamente. A função recursiva nos dá um resultado que será utilizado para calcular o resultado final. O exemplo abaixo é para calcular o fatorial de um número.

A primeira observação que podemos fazer é que:

$$0! = 1$$

E que 

$$n! = n \cdot (n - 1) \cdot (n - 2) \cdot ...$$

Então para calcular $n!$ podemos escrever o seguinte programa:

```C
int fat(int n){
    if (n == 0){ /* Caso Base */
        return 1;
    }    
    else{ /* Caso Geral */
        return n * fat(n - 1); /* instância menor */
    }    
}
```

Algumas operações matemáticas ou objetos matemáticos que possuem uma definição recursiva, como por exemplo o fatorial, a sequência de Fibonacci, entre outras...

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



