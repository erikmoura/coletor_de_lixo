# coletor_de_lixo

coletor automático de lixo em C pelo método de contagem de referências.

- **_contref.c_**

  - código fonte por meio do qual foi gerado a biblioteca estática
  - conteúdo:

| **ITEM**      | **OBJETIVO**                                                                                |
|---------------|---------------------------------------------------------------------------------------------|
|  struct Lista |                             estrutura para simulação de um heap                             |
|  void insert  |                função para realizar a inserção dos endereços criados no heap                |
| Lista* coleta |  função para realizar a liberação de endereços de memória cuja contagem de referências é 0  |
| void* malloc2 |            função para realizar a alocação de um endereço de memória e retorná-lo           |
|  void arranjo | função utilizada para atualizar o contador de referências dos endereços de memória alocados |
|  void atrib2  |                        função para realizar a atribuição de ponteiros                       |
|   void dump   |            função para exibir o status dos endereços de memória alocados no heap            |

- **_contref.h_**
  
  - cabeçalho da biblioteca
  - composto pela criação da struct Lista e pelos nomes e parâmetros das funções utilizadas

- **_libcontref.a_**

  - é o arquivo da biblioteca, pronto para que seja realizada a linkagem com o arquivo principal (nesse caso a main.c)


_obs: para realizar a linkagem entre a biblioteca e o arquivo principal a fim de criar o arquivo executável, basta abrir o terminal no diretório onde ambos estejam presentes e executar o comando gcc main.c -L. -lcontref -o main.x_
