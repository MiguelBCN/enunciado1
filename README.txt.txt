a. Què ens permet fer l’herència que no podríem fer altrament?
Gracias a la herencia podemos heredar atributos y metodos que nos permiten ahorrar codigo,reutilizar y desarrollar mas funciones para los hijos de los padres si es necesario sin alterar el objeto padre

b. Que passa si getArea() de la classe Ellipse no és virtual? Perquè?
Pues tendriamos 2 getArea definidos , porque cada clase circulo y ellipse tiene un getArea en este caso es una sobrecarga.

c. Perquè els constructors i destructors els hem de cridar a les classes derivades i no a la
classe base?
Porque pueden dejar residuos pues puede qu el hijo tenga mas atributos que la clase base

d. Es podria fer que getArea() fos un mètode de la classe pare “Ellipse”?
Si?, perdon no entiendo esta pregunta acaso la clase Ellipse no tiene ya un getArea?

e. Anomena els membres de dades definits en els teus programes i digues a quina classe
pertanyen. Explica les decisions de visibilitat de cadascun
Los ejercicos del 4-7 (Circle y Ellipse) tienen sus atributos como protected por defecto porque solo veo necesario usarlos dentro de la clase, si bien podia dejarlos como private escogi no hacerlo esta vez por motivos de debugueo y impresiones por pantalla desde el main
Ellipse solo puede ser visto por si mismo y Circle 
Circle solo puede ser visto por si mismo
En el ejercicio 7 la clase EllipseContainer tiene su atributo de vectores como private por instrucciones de la practica.Su visibilidad solo es posible dentro de la misma

f. L’iterador que recorre les figures, quant s’incrementa cada cop? Perquè?
Se incrementa en uno pues solo va cambiando de direccion de memoria por ejemplo pasa de 0x18A1 a 0x18A2