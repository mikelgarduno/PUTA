#ifndef SQL_MANAGER_H
#define SQL_MANAGER_H

#include "sqlite3.h"
#include "../include/autor.h"
#include "../include/categoria.h"
#include "../include/editorial.h"


sqlite3* abrirDB();
void cerrarDB(sqlite3 *db);

void insertarAutor(Autor objAutor);
void insertarCategoria(Categoria objCategoria);
void insertarEditorial(Editorial objEditorial);

void mostrarAutores();
void seleccionarAutor(int seleccion);

void buscarLibroPorTitulo(char *titulo);
void buscarLibroPorCategoria();
void buscarLibroPorEditorial();
#endif
