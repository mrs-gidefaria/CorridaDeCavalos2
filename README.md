## 🏇 Simulação de Corrida de Cavalos

Este projeto apresenta uma simulação de corrida entre quatro cavalos: **Garrucha**, **Soberano**, **Valente** e **Champanhe**, que fiz durante a faculdade.

---

### 🎮 Funcionamento

A corrida é composta por 10 momentos. Em cada um deles:

* Cada cavalo avança uma distância aleatória entre 1 e 50 metros.
* A distância total de cada cavalo é atualizada e exibida.
* Um intervalo de tempo (`sleep`) simula o ritmo da corrida.

---

### 🏁 Resultado

Após os 10 momentos:

* As distâncias finais são comparadas.
* O cavalo com maior distância é anunciado como vencedor.

🛠️ **Nota:** O algoritmo de verificação do vencedor contém condicionais redundantes e imprime sempre que *Valente* venceu, independentemente do resultado real. Pode ser aprimorado para refletir o verdadeiro vencedor com base nas distâncias finais.

---

### 📄 Estrutura do Código

* Inicialização do gerador de números aleatórios com base no tempo atual
* Laço `for` para simular os momentos da corrida
* Impressão progressiva da posição dos cavalos
* Simulação de tempo real com `sleep(1)`
* Determinação (falha) do vencedor ao final

---

🔗 Arquivo: `CorridaDeCavalos2.c`
