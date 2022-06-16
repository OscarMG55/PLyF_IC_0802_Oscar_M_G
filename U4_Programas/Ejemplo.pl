%Hechos
%
padre(manuel, jhon).      %manuel es padre de jhon
padre(manuel, alex).
padre(manuel, diana).
padre(manuel, viviana).

padre(jhon, dania).       %jhon es padre de dania
padre(jhon, dilan).
padre(alex, angelica).
padre(alex, lenis).
padre(alejandro, valentina).
padre(alejandro, estefania).

madre(diana, veronica).         %diana es madre de veronica
madre(diana, hector).
madre(viviana, alejandro).
madre(veronica, diego).

%reglas para las consultas
%
abuelo(X,Y):-padre(X,Z),padre(Z,Y).   %:- es parecido a un if
abuelo(X,Y):-padre(X,Z),madre(Z,Y).   % se consultan los hijos de X y
abuelo(X,Y):-madre(X,Z),padre(Z,Y).   % se almacenan en Z y se hace lo
abuelo(X,Y):-madre(X,Z),madre(Z,Y).   % mismo con Z y Y
nieto(X,Y):-abuelo(Y,X).
hermano(X,Y):-padre(Z,X),padre(Z,Y).
hermano(X,Y):-madre(Z,X),madre(Z,Y).
sobrino(X,Y):-hermano(Z,Y),padre(Z,X).
sobrino(X,Y):-hermano(Z,Y),madre(Z,X).
tio(X,Y):-sobrino(Y,X).









