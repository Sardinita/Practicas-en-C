//hacer un cronometro que comience cuando se pulse un espacio
#include <stdio.h>
#include <windows.h>
/*La libreria de  <windows.h> permite utilizar sleep (),
se utiliza para hacer al programa dormir durante x  cantidad de tiempo,
el tiempo se coloca en milisegundos*/
int main(){
    int h, m, s, x;
    x = 1000;
    for (h = 0; h < 24; h++){
        for (m = 0; m < 60; m++){
            for (s = 0; s < 60; s++){
                printf ("%02i: %02i: %02i\r", h, m, s);
                //lo que hace \r es sobre escribir la linea que se escribio anteriormente
                Sleep (x);
            }
        }
    }
}
