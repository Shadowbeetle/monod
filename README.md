# Monod & Competition

A biológiai szennyvíztisztítókban az eleveniszapos (mikrobiális) tisztítás után az iszapot ülepítik, 
mielőtt a tisztított vizet a befogadóba engednék. Ennek során az iszap fizikai összetételtől, vagyis az azt alkotó mikroorganizmusok alakjától és azok aranyától függ. Két féle mikroorganizmust szokás megkülönböztetni és fajlagos szaporodási arányuk alapján tervezni mind az ipari, mind a kísérleti szennyvíztisztítókat. A fonalas felépítésű baktériumok stabil, nehezen ülepedő szerkezetet adnak a szennyvíznek, túlzott elszaporodásuk azonban ülepíthetetlen, nyálkás szennyvízhez (filamentous bulk) vezethet. Az egyszerűbb flokkulens mikroorganizmusok túlszaporodása sem szerencsés, hiszen ez esetben az eleveniszap "összeesik", a nagy része igen gyorsan kiülepszik, azonban az ülepedés nem 100%-os, a szennyvíz fölülúszójában magas marad a szervesanyag tartalom, igy nagy lehet az elfolyó víz szervesanyag terhelésé (aminek megszüntetése a biológiai szennyvíztisztítás alapvető feladata). Éppen ezért fontos a fonalas és flokkulens baktériumok megfelelő aranya, amit mind ipari, mind kísérleti reaktorok tervezésénél szükséges figyelembe venni.
 
Tervezes során a Monod modell különböző speciális formái bizonyultak hatékonynak. Szükséges meghatározni azt a szubsztrát  koncentrációt amelynél a két faj fajlagos szaporodási sebessége megegyezik, így egyik sem tudja túlnőni a másikat. Mivel a legtöbb esetben nem statikus folyadékról, hanem áramló szennyvízről beszélünk, így valójában a szubsztrát áram meghatározása
szükséges. Szabályozni viszont a térfogatáramot tudjuk, így végeredményben a Monod modell kompetícióra alkalmazott változatával azt a folyadékáramot keressük, ahol egy stabil állandósult állapot jöhet létre. Ennek kiszámolására szolgál a competition.c fordításával kapott program.

Használata a következő képpen történik:

`competition u1max[1/h] u2max[1/h] Ks1 Ks2 V[m3]`

például: 

`competition 0.8 2 0.5 1.2 20`

Így megkapjuk a szükséges térfogatáramot m3/h-ban.
 
Fordítás (OS/X, Linux):

`gcc -Wall competition.c -o competition`

E mellett a monod.c fordításával egy egyszerű fajlagos növekedési sebesség számolót kapunk.
 
Használata a következő képpen történik:

`monod umax S Ks`

például: 

`monod 0.8 2 0.5`

Fordítás (OS/X, Linux):

`gcc -Wall monod.c -o monod`
