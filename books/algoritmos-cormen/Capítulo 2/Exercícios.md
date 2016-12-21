# Exercícios - Capítulo 2

### Exercícios

__2.1-1__ Usando a Figura 2.2 como modelo, ilustre a operação de `Insertion-Sort` no arranjo A = {31, 41, 59, 26, 41, 58}.

> A = {31, `41`, 59, 26, 41, 58} <br />
> A = {31, 41, `59`, 26, 41, 58} <br />
> A = {31, 41, 59, `26`, 41, 58} <br />
> A = {26, 31, 41, 59, `41`, 58} <br />
> A = {26, 31, 41, 41, 59, `58`} <br />
> \>> A = {26, 31, 41, 41, 58, 59}   

__2.1-2__ Reecreva o procedimento `Insertion-Sort` para ordenar em ordem não crescente, em vez da ordem não decrescente.

>``` python
def e212(a):
    for i in range(1, len(a)):
        chave = a[i]
        posicao = i - 1

>        while posicao >= 0 and a[posicao] < chave:
            a[posicao + 1] = a[posicao]
            a[posicao] = chave
            posicao = posicao - 1

>    return a
```

__2.1-3__ Considere o problema de busca.
<br /><br />
__Entrada__: Uma sequência de `n` números A = {a₁,a₂,...,an} e um valor `v`.
<br />
__Saída__: Um índice `i` tal que `v = A[i]` ou o valor especial `NIL`, se `v` não aparecer em A.
<br /><br />
Escreva o pseudocódigo para busca linear, que faça a varredura da sequência, procurando por `v`. Usando um invariante de laço, prove que seu algoritmo é correto. Certifique-se de que seu invariante de laço satisfaz as três propriedades necessárias.

> A variável `index` representará o invariante de laço.<br />
__Inicialização__: `index` será inicializada com o valor `NIL`, fazendo com que seja verdade antes da primeira iteração.<br />
__Manutenção__: Durante as iterações `index` continuará com seu valor válido independetemente se tiver encontrado um valor ou não.<br />
__Término__: Após o fim do laço, a variável `index` possuirá valor válido.

>``` python
def e213(a, v):
    r = "NIL"
    for i in range(len(a)):
        if a[i] == v:
            r = i

>    return r
```

__2.1-4__ Considere o problema de somar dois inteiros binários de `n` bits, armazenados em dois arranjos de `n` elementos A e B. A soma dos dois inteiros deve ser armazenada em forma binária em um arranjo (`n` + 1) elementos C. Enuncie o problema formalmente e escreva o pseudocódigo para somar os dois inteiros.

>``` python
def e214(a, b):
    n = len(a)
    c = [0] * (n + 1)

>    for i in range(n - 1, -1, -1):
        sum_ = a[i] + b[i] + c[i + 1]
        c[i] = int(sum_ / 2)
        c[i + 1] = int(sum_ % 2)

>    return c
```

__2.2-1__ Expresse a função `n³/1000 - 100n² - 100n + 3` em termos de notação Θ.

__2.2-2__ Considere a ordenação de `n` números armazenados no arranjo `A`, localizando primeiro o menor elemento de `A` e permutando esse elemento com o elemento contido em `A[1]`. Em seguida, determine o segundo menor elemento de `A` e permute-o com `A[2]`. Continue dessa maneira para os `n - 1` elementos de `A`. Escreva o pseudocódigo para esse algoritmo, conhecido como __ordenação por seleção__. Qual invariante de laço esse algoritmo mantém? Por que ele só precisa ser executado para os primeiros `n - 1` elementos, e não para todos os `n` elementos? Forneça os tempos de execução do melhor caso e do pior caso da ordenação por seleção em notação Θ.

__2.2-3__ Considere mais uma vez uma busca linear (veja Exercício __2.1-3__). Quantos elementos da sequência de entrada precisam ser verificados na média, considerando que o elemento que está sendo procurado tenha a mesma probabilidade de ser qualquer elemento do arranjo? E no pior caso? Quais são os tempos de execução do caso médio e do pior caso na busca linear em notação Θ? Justifique suas respostas.

__2.2-4__ Como podemos modificar praticamente qualquer algoritmo para ter um bom tempo de execução no melhor caso?