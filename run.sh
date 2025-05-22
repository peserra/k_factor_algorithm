#!/bin/bash

PROJECT_DIR="$(dirname "$0")"
BUILD_DIR="$PROJECT_DIR/build"

cd "$PROJECT_DIR" || exit

# Etapa 1: Configuração do CMake
if [ ! -d "$BUILD_DIR" ]; then
    echo "Configuring CMake..."
    cmake -B "$BUILD_DIR" -DCMAKE_BUILD_TYPE=Release
fi

# Etapa 2: Compilação
echo "Building the project..."
cmake --build "$BUILD_DIR" --target acha_k_fator

# Etapa 3: Execução
EXECUTABLE="$PROJECT_DIR/output/acha_k_fator"
if [ -f "$EXECUTABLE" ]; then
    echo "Running the program..."
    "$EXECUTABLE"
else
    echo "Executable not found. Build failed."
fi
