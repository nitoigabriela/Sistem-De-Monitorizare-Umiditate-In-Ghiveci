# Sistem De Monitorizare Umiditate In Ghiveci

Acest proiect isi propune sa monitorizeze umiditatea din solul unui ghiveci folosind un senzor de la care se preia semnalul analogic. Astfel, cu cat umiditatea din sol este mai mare cu atat rezistenta senzorului scade, si, implicit, tensiunea care trece prin senzor creste. In consecinta, semnalul de iesire este tensiunea care trece prin senzor. 

Componente folosite:
- Arduino Uno
- Modul cu senzor de umiditate
- LCD1602A
- Breadboard
- Fire Jumper
- Potentiometru 10k ohmi
- Rezistenta 220 ohmi

Am utilizat limbajul C++ si Arduino IDE pentru mediul de dezvoltare si incarcarea pe platforma.

Senzorul are iesire atat analogica, cat si digitala. Am ales sa merg pe cea analogica deoarece are precizia mai buna.

Datele sunt preluate de la pinul analogic la care este conectat si sunt prelucrate astfel incat sa se obtina un procent de umiditate folosind functia map().

In functie de intervalul in care se afla procentul rezultat, se recomanda udarea plantei sau nu.
