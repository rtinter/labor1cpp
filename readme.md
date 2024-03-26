Labor 1 - C++ Programmierung
Anforderungen


1. In der main Funktion werden die Programmargumente (argv) in einen C++ String Vektor gespeichert und alle Elemente in einer for-Schleife mit cout ausgegeben.

2. Ein Programmargument wird einer Fließkommavariable zugewiesen, wobei eine Umwandlung von string nach double stattfindet.

3. Weitere Funktionalität wird in den Dateien labor1.[h|c]pp implementiert.

4. Eine beliebige transzendente mathematische Funktion aus cmath wird auf die oben genannte Variable angewendet, und das Ergebnis wird in einer Variable gespeichert.

5. Die oben genannte Variable wird mittels C++ Cast in einen Ganzzahlwert umgewandelt und in einer Ganzzahlvariable gespeichert.
 
6. Eine Funktion wird definiert und aufgerufen, die den oben genannten Ganzzahlwert als Argument erhält und diesen im Gültigkeitsbereich des Aufrufers verändert. Falls erforderlich, wird const in der Argumentliste der Funktionsdeklaration richtig gesetzt.

7. Der Ganzzahlwert wird in Hexadezimalformatierung in der Konsole ausgegeben, wobei iostream genutzt wird.

8. Es wird ein eigener Datentyp namens "Person" definiert, basierend auf einer Struktur, mit Feldern wie Vorname (string), Nachname (string), Geburtsdatum (string), Alter in Jahren (int), Tagen (int) und Stunden (int).

9. Ein Vektor von Personen wird erzeugt.

10. Die Personendaten werden aus einer Datei mit C++ ifstream eingelesen.

11. C++ Exceptions beim Einlesen der Datei (z.B. Datei nicht vorhanden) werden abgefangen.

12. Der Dateiname ist über argv vom Benutzer bestimmbar.

13. Das Alter wird aus dem Geburtsdatum in Stunden, Tagen und Jahren berechnet, unter Verwendung von std::chrono und/oder ctime.

14. Das Alter in Jahren wird in Textform auf der Konsole ausgegeben, wobei Nachkommastellen weggelassen werden und Zahlen als Textvorlagen verwendet werden.

15. Die "range-based loop" wird für Iteration mit Typinferenz zum Durchlaufen der Vektoren genutzt.

16. C++ Stream IO wird für Text Ein-/Ausgabe verwendet.

17. Adäquate eingebaute Datentypen wie std::string und std::vector werden genutzt, wobei auf Vorzeichenbehaftung geachtet wird.

18. Die Typinferenz auto wird mindestens einmal beim Rückgabewert einer Funktion genutzt.

19. lle Variablen werden im C++11 Stil initialisiert, z.B. int a {5} ohne Zuweisungsoperator.

20. Referenzen werden bei Funktionsargumenten genutzt, wenn möglich.

21. const wird wann immer möglich genutzt.

22. Nur die öffentlichen Funktionen werden in der Datei labor1.hpp deklariert (d.h. die in main.cpp aufgerufenen).