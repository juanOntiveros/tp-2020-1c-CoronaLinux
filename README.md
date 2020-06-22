# CoronaLinux 


## TO DO [Team]

- [X] Arreglar problema +1
- [ ] Hacer funcion find_first (si no encuentra devuelve el primero)
- [X] Universalizar funcion distancia
- [ ] Implementacion Deadlock (IN_PROGRESS)
- [ ] Implementacion SJF sin desalojo
- [ ] Implementacion SJF con desalojo
- [ ] Implementacion RR
- [ ] Contabilizar ciclos de CPU    
        . Intercambio = 5
        . Movimiento = 1
        . Envio mensaje = 1
        . Atrapar pokemon = ¿?
- [ ] Tema Handshake en caso de fallo de conexion con el Broker


### . DEADLOCK  

- [X] Chequear que la cantidad de pokemons disponibles a atrapar sea 0
- [X] Hacer lista de entrenadores con objetivo cumplido
- [X] Hacer lista de entrenadores con objetivo no cumplido
- [X] Hacer lista de los pokemons que necesita cada entrenador (After deteccion deadlock)
- [X] Hacer lista de los pokemons que no le sirven al entrenador (After deteccion deadlock)
- [X] Crear estructura entrenador_deadlock (global)
- [X] Inicio while (hasta que todos los entrenadores tengan los pokemons que necesitan)
- [X] Elegir 1 entrenador e ir comparando con los pokemons_inservibles del resto
- [X] Mandar a planificar al entrenador elegido a la posicion del entrenador con el que va a intercambiar
- [X] Una vez en posicion, chequear si necesita alguno de los que a el no le sirven
- [X] Realizar intercambio
- [ ] Actualizar el estado del entrenador (si ya cumplio su objetivo propio o no (si sigue en deadlock o no))

### . ALGORITMOS PLANIFICACION

[ ] Editar estructura t_entrenador (agregar rafaga y estimacion_anterior)

## TO DO [GameCard]

- [ ] Implementación del procedimiento al recibir mensaje NEW_POKEMON (IN_PROGRESS)
- [ ] Implementación del procedimiento al recibir mensaje CATCH_POKEMON
- [ ] Implementación del procedimiento al recibir mensaje GET_POKEMON
- [ ] Separar funciones de Archivos en un .c distinto

### . NEW_POKEMON  

- [X] Verificar existencia de archivo del pokemon. En caso contrario crearlo con su metadata.bin
- [X] Verificar si se puede abrir el archivo
- [ ] Verificar si las posiciones ya existen en el archivo y actualizarlas. En caso contrario agregarlas en una nueva línea
- [ ] Esperar la cantidad de segundos definidas en el .config
- [ ] Enviar mensaje APPEARED_POKEMON al Broker

