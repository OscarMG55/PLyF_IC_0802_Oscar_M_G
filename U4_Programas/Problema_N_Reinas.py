#algoritmo de Las Vegas
import random

#Definicion espacios disponibles
def disponibles(y,n):
    columnas_disponibles = []
    for x in range(n):
        if(columna[x] or diagonal_izquierda[x+y] or diagonal_derecha[x-y+n-1]): 
            #si la reina es atacada se debe volver a empezar
            continue
        columnas_disponibles.append(x)
    return columnas_disponibles

n = 4
solucion = []

columna = [False]*n
diagonal_izquierda = [False]*(n*2)
diagonal_derecha = [False]*(n*2)

while(len(solucion)!=n and n>3):
#for i in range(10):
    solucion = []
    columna = [False]*n
    diagonal_izquierda = [False]*(n*2)
    diagonal_derecha = [False]*(n*2)
    
    for y in range(n):
        #colocar la reina en una columna aleatoria
        columnas_d = disponibles(y,n)
        #sólo si hay columnas no atacadas
        if(columnas_d):
            x = random.choice(columnas_d)
        else:
            break
        
        columna[x] = diagonal_izquierda[x+y] = diagonal_derecha[x-y+n-1] = True
        solucion.append((x,y))
        
print(solucion)