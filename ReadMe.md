# Desafio Descriptografar

## Descrição

Temendo que o arquivo **dados.txt** caia em mãos erradas, alguém decidiu que as
informações deveriam ser criptografadas e que somente pessoas autorizadas possuem os
mecanismos para descriptografá-las. <br>
Você foi contratado para trabalhar em uma empresa de segurança e está encarregado de
descriptografar os nomes e as informações de várias pessoas suspeitas de corrupção,
contidas neste arquivo. <br>
Assim, implemente um algoritmo em C ou C++ que faça a leitura deste arquivo, que
descriptografe e gere um novo arquivo com as informações decriptografadas. <br>
Para descriptografar os dados, deve-se fazer uso das seguintes informações: <br>
• Sabe-se que a criptografia que foi utilizada, foi a [Cifra de César]
(https://pt.wikipedia.org/wiki/Cifra_de_C%C3%A9sar). <br>
• A criptografia foi aplicada apenas sobre letras(a-z) e números(0-9); <br>
• Não se sabe exatamente a chave que foi utilizada, no entanto sabe-se que foi um
número entre 1 e 5, portanto a chave deve ser fornecida através da leitura no
terminal. <br>
• Para a conversão dos caracteres, foi utilizada como base a tabela ASCII.