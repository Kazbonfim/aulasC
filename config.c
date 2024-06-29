// config.h
#ifndef CONFIG_H
#define CONFIG_H

#include <locale.h>

static inline void configurar_localidade() {
    setlocale(LC_ALL, "");
}

#endif // CONFIG_H
// Criando um arquivo centralizado para lidar com acentos e demais palavras especiais do PT-BR
