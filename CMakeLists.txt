# Versão mínima do CMake
cmake_minimum_required(VERSION 3.20)

# Nome do projeto
project(TCC_kfator VERSION 1.0 LANGUAGES CXX)

# Configurar a saída para o executável
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/output)

# Definir o padrão do compilador C++ mais recente
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Inclui os headers
include_directories(${CMAKE_SOURCE_DIR}/src/headers)

# Adiciona todos os arquivos .cpp da pasta src
file(GLOB SOURCES "${CMAKE_SOURCE_DIR}/src/*.cpp")

# Adicionar o executável
add_executable(acha_k_fator ${SOURCES})

# Adicionar opções de compilação (-Wall e -Werror)
target_compile_options(acha_k_fator PRIVATE -Wall)

# Ativar geração do compile_commands.json
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

