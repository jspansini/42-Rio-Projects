#include <stdio.h>
#include <fcntl.h>

char *get_next_line(int fd)
{
    return (NULL);
}


/*
    - função usada para abrir o arquivo
        int open (const char* Path, int flags [, int mode ]); 
       
        - retorna o fd                                      <-  3
        - caminho arquivo                                   -> "/c/Users/Fotomovel/Desktop/teste/testando.txt"
        - O_RDONLY / O_WRONLY / O_RDWR / O_CREAT /O_EXCL    -> usaremos: O_RDONLY


    - função usada para ler o conteudo do arquivo
        size_t read (int fd, void* buf, size_t cnt);

        - retorna
         - fd                                               <- 3
         - dados_obtidos_do_arquivo                         -> treinando    //10 com byte nulo
         - buffer_size                                      -> 10

*/
int main(void)
{
    int bytes;
    char    dados_obtidos_do_arquivo[10];
    size_t buffer_size;

    //dados_obtidos_do_arquivo[10];
    bytes = 0;
    buffer_size = 10;

    int fd = open("foo.txt", O_RDONLY);
   
    printf("fd = %d\n", fd);
     
    if (fd == -1)   //houve erro ao abrir o arquivo
    {
        printf("erro ao abrir o arquivo\n");                
    }

    getchar();
    bytes = read (fd, &dados_obtidos_do_arquivo, buffer_size);
    
    printf("bytes = %i\n", bytes);
    getchar();

    dados_obtidos_do_arquivo[10] = '\0';
    printf("dados lidos = %s\n", dados_obtidos_do_arquivo);
    
    close(fd);
    getchar();
    return 0;

}
    //int open (const char* Path, int flags [, int mode ]); 

/*
------------------------------------------------------------------------------------------------------

s - suply                   |   open abre o arquivo na main (moulinette)
i - input                   |   fd é o identificador do arquivo que vou trabalhar.
p - process                 |   ler uma linha de uma arquivo                                   <------------ obter uma linha do arquivo.
o - output                  |   uma string / representa a linha do arquivo                   | *.c *.h
c - customer                |   moulinette que recebe a string mencionada acima.

------------------------------------------------------------------------------------------------------

output de qualidade:
    - uma string                                                 | requisito funcional
    - terminada em \n                                            | requisito funcional
    - sem vazamento de memória.                                  | requisito não funcional
    - norminette.                                                | requisito não funcional
    - consumir o menor numero de bytes possível                  | não funcional



------------------------------------------------------------------------------------------------------


p - process                 |   ler uma linha de uma arquivo

- usando a função read vamos 



Qual proposito da gnl?
    Me ensinar a ler arquivos do sistema
    Pincelar processos do sistema
    Me ensinar o uso da variavel estática
    O uso do read


Abro um arquivo (fopen)
Leio até meu buffer size(entrada do norminette para teste?)
   Percorro o buffer com strchr
       Se tiver \n no meio
           Termino no \n 
       Se nao, sigo ate fim de buffer
O que li fica numa variavel estatica que passo para fora duplicando o conteudo com a dup?
Crio uma variavel += oq vem do dup
*/