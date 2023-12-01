#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_USUARIOS 1000

struct Usuario {
    int id;
    char nome[50];
    char email[50];
    char sexo[15];
    char endereco[100];
    double altura;
    int vacina;
};

int gerarId() {
    return rand() % 10000 + 1;
}

void imprimirUsuario(struct Usuario usuario) {
    printf("ID: %d\n", usuario.id);
    printf("Nome: %s\n", usuario.nome);
    printf("Email: %s\n", usuario.email);
    printf("Sexo: %s\n", usuario.sexo);
    printf("Endereco: %s\n", usuario.endereco);
    printf("Altura: %.2f\n", usuario.altura);
    printf("Vacina: %d\n", usuario.vacina);
    printf("\n");
}

void incluirUsuario(struct Usuario usuarios[], int *totalUsuarios) {
    if (*totalUsuarios < MAX_USUARIOS) {
        struct Usuario novoUsuario;
        novoUsuario.id = gerarId();

        printf("Digite o nome completo: ");
        scanf(" %[^\n]s", novoUsuario.nome);

        printf("Digite o email: ");
        scanf(" %s", novoUsuario.email);

        if (strchr(novoUsuario.email, '@') == NULL) {
            printf("Email invalido. O email deve conter o caractere '@'.\n");
            return;
        }

        printf("Digite o sexo (Feminino/Masculino/Indiferente): ");
        scanf(" %s", novoUsuario.sexo);

        if (strcmp(novoUsuario.sexo, "Feminino") != 0 && strcmp(novoUsuario.sexo, "Masculino") != 0 &&
            strcmp(novoUsuario.sexo, "Indiferente") != 0) {
            printf("Sexo invalido. Digite Feminino, Masculino ou Indiferente.\n");
            return;
        }

        printf("Digite o endereco: ");
        scanf(" %[^\n]s", novoUsuario.endereco);

        printf("Digite a altura (entre 1 e 2 metros): ");
        scanf("%lf", &novoUsuario.altura);

        if (novoUsuario.altura < 1 || novoUsuario.altura > 2) {
            printf("Altura invalida. A altura deve estar entre 1 e 2 metros.\n");
            return;
        }

        printf("A pessoa foi vacinada? (1 para sim, 0 para nao): ");
        scanf("%d", &novoUsuario.vacina);

        if (novoUsuario.vacina != 0 && novoUsuario.vacina != 1) {
            printf("Opcao de vacinacao invalida. Digite 1 para sim ou 0 para nao.\n");
            return;
        }

        usuarios[*totalUsuarios] = novoUsuario;
        (*totalUsuarios)++;
        printf("Usuario cadastrado com sucesso!\n");
    } else {
        printf("Limite maximo de usuarios atingido.\n");
    }
}

void editarUsuario(struct Usuario usuarios[], int totalUsuarios) {
    int idEditar;
    printf("Digite o ID do usuario que deseja editar: ");
    scanf("%d", &idEditar);

    for (int i = 0; i < totalUsuarios; i++) {
        if (usuarios[i].id == idEditar) {
            printf("Digite o novo nome completo: ");
            scanf(" %[^\n]s", usuarios[i].nome);

            printf("Digite o novo email: ");
            scanf(" %s", usuarios[i].email);

            if (strchr(usuarios[i].email, '@') == NULL) {
                printf("Email invalido. O email deve conter o caractere '@'.\n");
                return;
            }

            printf("Digite o novo sexo (Feminino/Masculino/Indiferente): ");
            scanf(" %s", usuarios[i].sexo);

            if (strcmp(usuarios[i].sexo, "Feminino") != 0 && strcmp(usuarios[i].sexo, "Masculino") != 0 &&
                strcmp(usuarios[i].sexo, "Indiferente") != 0) {
                printf("Sexo invalido. Digite Feminino, Masculino ou Indiferente.\n");
                return;
            }

            printf("Digite o novo endereco: ");
            scanf(" %[^\n]s", usuarios[i].endereco);

            printf("Digite a nova altura (entre 1 e 2 metros): ");
            scanf("%lf", &usuarios[i].altura);

            if (usuarios[i].altura < 1 || usuarios[i].altura > 2) {
                printf("Altura invalida. A altura deve estar entre 1 e 2 metros.\n");
                return;
            }

            printf("A pessoa foi vacinada? (1 para sim, 0 para nao): ");
            scanf("%d", &usuarios[i].vacina);

            if (usuarios[i].vacina != 0 && usuarios[i].vacina != 1) {
                printf("Opcao de vacinacao invalida. Digite 1 para sim ou 0 para nao.\n");
                return;
            }

            printf("Usuario editado com sucesso!\n");
            return;
        }
    }

    printf("Usuario nao encontrado.\n");
}

void excluirUsuario(struct Usuario usuarios[], int *totalUsuarios) {
    int idExcluir;
    printf("Digite o ID do usuario que deseja excluir: ");
    scanf("%d", &idExcluir);

    for (int i = 0; i < *totalUsuarios; i++) {
        if (usuarios[i].id == idExcluir) {
            for (int j = i; j < *totalUsuarios - 1; j++) {
                usuarios[j] = usuarios[j + 1];
            }
            (*totalUsuarios)--;
            printf("Usuario excluido com sucesso!\n");
            return;
        }
    }

    printf("Usuario nao encontrado.\n");
}

void buscarUsuarioPorEmail(struct Usuario usuarios[], int totalUsuarios) {
    char emailBuscar[50];
    printf("Digite o email do usuario que deseja buscar: ");
    scanf(" %s", emailBuscar);

    for (int i = 0; i < totalUsuarios; i++) {
        if (strcmp(usuarios[i].email, emailBuscar) == 0) {
            imprimirUsuario(usuarios[i]);
            return;
        }
    }

    printf("Usuario nao encontrado.\n");
}

void imprimirTodosUsuarios(struct Usuario usuarios[], int totalUsuarios) {
    for (int i = 0; i < totalUsuarios; i++) {
        imprimirUsuario(usuarios[i]);
    }
}

int main() {
    struct Usuario usuarios[MAX_USUARIOS];
    int totalUsuarios = 0;
    char opcao;

    do {
        printf("\nEscolha uma opcao:\n");
        printf("1. Incluir usuario\n");
        printf("2. Editar usuario\n");
        printf("3. Excluir usuario\n");
        printf("4. Buscar usuario por email\n");
        printf("5. Imprimir todos os usuarios\n");
        printf("0. Sair\n");

        printf("Opcao: ");
        scanf(" %c", &opcao);

        switch (opcao) {
            case '1':
                incluirUsuario(usuarios, &totalUsuarios);
                break;
            case '2':
                editarUsuario(usuarios, totalUsuarios);
                break;
            case '3':
                excluirUsuario(usuarios, &totalUsuarios);
                break;
            case '4':
                buscarUsuarioPorEmail(usuarios, totalUsuarios);
                break;
            case '5':
                imprimirTodosUsuarios(usuarios, totalUsuarios);
                break;
            case '0':
                printf("Saindo do programa. Ate mais!\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != '0');

    return 0;
}
