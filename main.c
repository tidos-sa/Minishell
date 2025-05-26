#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>
#include <readline/history.h>

int main(void)
{
    char *input;

    while (1)
    {
        // Mostra o prompt e lê a entrada do usuário
        input = readline("minishell$ ");
        
        // Se o input for NULL (Ctrl+D), sai do programa
        if (input == NULL)
        {
            printf("exit\n");
            break;
        }
        
        // Se o input não estiver vazio, adiciona ao histórico e mostra
        if (*input)
        {
            add_history(input);
            printf("Você digitou: %s\n", input);
        }
        
        // Libera a memória alocada pelo readline
        free(input);
    }
    
    return (0);
}
