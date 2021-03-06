/*
 * auxiliar.h
 *
 *  Created on: 9 may. 2020
 *      Author: utnso
 */

#ifndef AUXILIAR_H_
#define AUXILIAR_H_

#include <pthread.h>
#include <stdlib.h>
#include <commons/log.h>
#include <commons/string.h>
#include <commons/config.h>
#include <commons/collections/list.h>
#include <commons/string.h>
#include <math.h>
#include "entrenador.h"
#include "utils.h"
#include "posicion.h"

typedef enum {
	FIFO = 1,
	RR = 2,
	SJF = 3,
	SJFCD = 4
} algoritmo_planificacion;

u_int32_t distancia(t_posicion* posicion1, t_posicion* posicion2);
t_list* convertir_string_a_lista_de_listas(char** cadenas);
t_list* convertir_string_a_lista_de_posiciones(char** cadenas);
t_list* eliminar_repetidos(t_list* objetivo_global);
t_list* list_flatten(t_list* listas);
t_list* pasar_a_lista_de_pokemon(t_config* config, char* cadena);
t_list* pasar_a_lista_de_posiciones(t_config* config, char* cadena);
t_list* filtrar_entrenadores_con_objetivos(t_list* lista);
void* list_head(t_list* lista);
char* find_first(t_list* objetivos, t_list* inservibles);
float calcular_estimado_de_la_proxima_rafaga(float estimado_anterior, u_int32_t rafaga_anterior, float alpha);
algoritmo_planificacion get_algoritmo_planificacion();

#endif /* AUXILIAR_H_ */
