int main() {
    int valor = 0;
    int *dados_sw = &valor;
    int lista[] = {8, 2, 3, 4, 1};
    int tamanho = sizeof(lista) / sizeof(lista[0]);
    int indice_maior = indice_maior_num_lista(lista, tamanho);

    printf("Elementos da lista:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d\n", lista[i]);
    }

    printf("Índice do maior elemento da lista: %d\n", indice_maior);

    SW_open();

    while (1) {
        if (*dados_sw == 1) {
            LEDR_open();
            LEDR_set(indice_maior);
            SW_read(dados_sw);
        }
    }

    LEDR_close();
    SW_close();

    return 0;
}