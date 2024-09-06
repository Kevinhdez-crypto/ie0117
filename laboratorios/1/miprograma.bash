#!/bin/bash
#Kevin Hernandez Umaña C33773
#Para que este progaram funcione se debe definir la variable mes como $MES para que incluya el septiembre


DIAS_RESTANTES="5"

RESP="Hoy es $(date +"%A"), $(date +"%d") de $(date +"%B"), del año $(date +"%Y").Faltan $DIAS_RESTANTES dias para el mes de $MES."

echo $RESP


