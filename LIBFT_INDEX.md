# Libft Function Index

Indice rapido para consulta de funcoes da libft, separado por tipo.

## Estrutura

- funcao: nome da funcao
- descricao: o que a funcao faz
- uso principal: quando usar no projeto
- equivalente libc: se reproduz funcao nativa da libc (ou extensao comum)

## Classificacao de caracteres

| funcao | descricao | uso principal | equivalente libc |
|---|---|---|---|
| ft_isalpha | verifica se o caractere e letra | validar entrada textual | sim: isalpha |
| ft_isalnum | verifica se o caractere e alfanumerico | validar tokens e identificadores | sim: isalnum |
| ft_isascii | verifica se o valor pertence ao conjunto ASCII | filtrar bytes invalidos | sim: isascii |
| ft_isdigit | verifica se o caractere e digito decimal | parse de numeros | sim: isdigit |
| ft_isprint | verifica se o caractere e imprimivel | sanitizar output de terminal | sim: isprint |
| ft_isspace | verifica espacos em branco (espaco, tab, etc.) | pular separadores em parser | relacionado: isspace |
| ft_toupper | converte letra minuscula para maiuscula | normalizacao de comparacao | sim: toupper |
| ft_tolower | converte letra maiuscula para minuscula | normalizacao de comparacao | sim: tolower |

## Conversao numerica

| funcao | descricao | uso principal | equivalente libc |
|---|---|---|---|
| ft_atoi | converte string para int | parse rapido de inteiro | sim: atoi |
| ft_atol | converte string para long | parse com faixa maior que int | sim: atol |
| ft_atoi_safe | converte string para int com validacao | parse seguro com tratamento de erro | relacionado: strtol |
| ft_itoa | converte int para string | serializar inteiro em texto | nao |
| ft_itoa_base | converte numero para string em base arbitraria | representar valor em base 2, 10, 16 | nao |

## Memoria

| funcao | descricao | uso principal | equivalente libc |
|---|---|---|---|
| ft_bzero | zera n bytes de memoria | inicializar buffers e structs | sim: bzero |
| ft_calloc | aloca memoria zerada para vetor de elementos | criar arrays ja inicializados | sim: calloc |
| ft_memchr | busca byte em bloco de memoria | localizar separadores em buffer binario | sim: memchr |
| ft_memcmp | compara blocos de memoria | comparar dados binarios | sim: memcmp |
| ft_memcpy | copia memoria sem overlap | copiar blocos independentes | sim: memcpy |
| ft_memmove | copia memoria com suporte a overlap | mover bytes na mesma regiao | sim: memmove |
| ft_memset | preenche memoria com byte especifico | inicializar blocos com padrao | sim: memset |

## Strings - busca e analise

| funcao | descricao | uso principal | equivalente libc |
|---|---|---|---|
| ft_strlen | calcula tamanho da string | limites de loops e alocacoes | sim: strlen |
| ft_strchr | encontra primeira ocorrencia de caractere | localizar delimitador | sim: strchr |
| ft_strrchr | encontra ultima ocorrencia de caractere | localizar ultima barra, ponto, etc. | sim: strrchr |
| ft_strnstr | busca substring ate limite len | parser com janela limitada | sim: strnstr |

## Strings - comparacao

| funcao | descricao | uso principal | equivalente libc |
|---|---|---|---|
| ft_strncmp | compara duas strings ate n caracteres | comparar prefixos ou buffers limitados | sim: strncmp |
| ft_strcmp | compara duas strings ate diferenca ou fim | comparacao total de strings | sim: strcmp |

## Strings - criacao e modificacao

| funcao | descricao | uso principal | equivalente libc |
|---|---|---|---|
| ft_strdup | duplica string em nova alocacao | obter copia com ownership proprio | sim: strdup |
| ft_strndup | duplica ate n caracteres | copiar fatia controlada de string | sim (POSIX): strndup |
| ft_substr | extrai substring por inicio e tamanho | recortar trecho de string | nao |
| ft_strjoin | concatena duas strings em nova alocacao | montar paths e mensagens | nao |
| ft_strjoin_free | concatena strings com politica de free | reduzir boilerplate de joins dinamicos | nao |
| ft_split | divide string por delimitador | tokenizacao por separador simples | nao |
| ft_strtrim | remove caracteres de set nas bordas | limpar espacos ou simbolos perifericos | nao |
| ft_strmapi | cria nova string aplicando funcao por indice | transformacao funcional de string | nao |
| ft_striteri | aplica funcao em cada caractere da propria string | modificacao in-place de string | nao |
| ft_strlcpy | copia string com limite e termino seguro | evitar overflow no destino | sim (BSD): strlcpy |
| ft_strlcat | concatena com limite e retorno de tamanho total | append com controle de buffer | sim (BSD): strlcat |

## Escrita e output

| funcao | descricao | uso principal | equivalente libc |
|---|---|---|---|
| ft_putchar_fd | escreve um caractere em fd | output unitario em arquivo/terminal | nao |
| ft_putstr_fd | escreve string em fd | mensagens para stdout/stderr | nao |
| ft_putendl_fd | escreve string seguida de \n em fd | logs por linha | nao |
| ft_putnbr_fd | escreve inteiro em fd | output numerico sem printf | nao |
| ft_printf | formatacao para stdout | output formatado com placeholders | sim: printf |
| ft_printf_fd | formatacao para fd especifico | output formatado em stderr/arquivo | relacionado: dprintf |
| ft_putstr_color_fd | escreve string colorida com ANSI em fd | destacar erro, sucesso, aviso | nao |

## Listas encadeadas

| funcao | descricao | uso principal | equivalente libc |
|---|---|---|---|
| ft_lstnew | cria no de lista com content | iniciar lista encadeada | nao |
| ft_lstadd_front | adiciona no no inicio | push front | nao |
| ft_lstsize | conta quantidade de nos | obter tamanho da lista | nao |
| ft_lstlast | retorna ultimo no | append eficiente | nao |
| ft_lstadd_back | adiciona no no fim | insercao no final | nao |
| ft_lstdelone | deleta um no com callback del | liberar no individual | nao |
| ft_lstclear | libera lista inteira com del | cleanup completo | nao |
| ft_lstiter | percorre lista aplicando callback | executar acao em todos os nos | nao |
| ft_lstmap | cria lista nova com transformacao | map funcional em lista | nao |
| ft_lst_get_node | retorna no por indice | acesso posicional em lista | nao |
| ft_lst_remove_if | remove nos por predicado de comparacao | filtrar lista | nao |

## Matrizes e utilitarios

| funcao | descricao | uso principal | equivalente libc |
|---|---|---|---|
| ft_matrix_len | conta linhas de char** terminada em NULL | saber tamanho logico de matriz de strings | nao |
| ft_free_matrix | libera matriz de strings terminada em NULL | cleanup de split e tabelas dinamicas | nao |

## Integracoes da libft

| funcao | descricao | uso principal | equivalente libc |
|---|---|---|---|
| get_next_line | le uma linha por chamada de um fd | leitura incremental de arquivo/entrada | nao |
