# Nome do compilador
CC = g++

# Flags de compilação
CFLAGS = -Wall -std=c++11

# Nome do arquivo executável
TARGET = main

# Comando padrão para compilar o projeto
all: $(TARGET)

# Regra para compilar o arquivo main.cpp e gerar o executável
$(TARGET): main.cpp
	$(CC) $(CFLAGS) -o $(TARGET) main.cpp

# Regra para limpar os arquivos gerados (útil para recompilar do zero)
clean:
	rm -f $(TARGET)

# Regra para rodar o programa (opcional)
run: $(TARGET)
	./$(TARGET)
