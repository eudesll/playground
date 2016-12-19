# Node.js - Aula 01 - Exercício

### Explique como um processo síncrono e assíncrono roda no Node.js, dê um exemplo para cada.
__Síncrono:__ Em um processo síncrono o cliente precisa esperar até que o servidor termine a ação que ele está executando, independentemente do cliente que a solicitou, para poder executar sua ação desejada.
__Assíncrono:__ Diferente do síncrono, o assíncrono define que o servidor pode executar `N` ações simultâneas de diferentes clientes.

### Como o V8 executa JavaScript? Demonstre 1 exemplo com código ou imagem.
!['Explicação V8 Javascript'](http://cjus.github.io/nodejs-presentation-advanced/images/NodeJS-EventedIOAsyncIO_latest.png "Funcionamento V8")
O V8 pode ser representado pelo `Event Loop`, que de forma assíncrona redireciona todas as requisições e respostas aos seu devidos lugares.

### Qual a diferença entre um sistema single para um multi-thread?
__Single:__ O Node trabalha em single-thread, o que representa uma diminuição nos gastos de processamento e de memória.
__Multi:__ Sistemas Web em Java trabalham em multi-thread, que significa que a cada requisição é executada em uma thread diferente, fazendo com que o custo de processamento e armazenamento sejam maiores.

### Como a Thread Pool tem um tamanho padrão de 4, o que acontece se você enviar 5 requisições ao banco?
A quinta requisição aguardará a finalização de uma das quatro em execução para ser executada.
__Obs:__ _O limite do Thread Pool pode ser aumentado para até 128 requisições_

### Como você venderia o peixe do Node.js na sua empresa para tentar convencer seu chefe da sua adoção?
Apresentando:
* Grandes empresas que aderiram a tecnologia
* Ganho de perfomance
* Baixa curva de aprendizado
* Economia com gastos em infraestrutura e mão de obra

### Qual a versão do seu `node`?

```
> node -v
v5.8.0
```
### Qual a versão do seu `npm`?

```
> npm -v
3.7.3
```