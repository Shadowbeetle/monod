# Monod & Competition

A biologia szennyviztisztitokban az eleveniszapos (mikrobialis) tisztitas utan az iszapot ulepitik, 
mielott a tisztitott vizet a befogadoba engednek. Ennek soran az iszap fizikai osszetetletol, vagyis az azt alkoto
mikorroganizmusok alakjatol esz azok aranyatol fugg. Ket fele mikroorganismust szokas megkulonboztetni es fajlagos szaporodasi
aranyuk alapjan szokas tervezni mind az ipari, mind a kiserleti szennyviztisztitokat. A fonolas felepetisu bakteriumok stabil,
nehezen ulepedo szerekzetet adnak a szennyviznek, tulzott elszaporodasuk azonban ulepithetetlen, nyalkas szennyvizhez 
(filamentous bulk) vezethet. Az egyszerubb flokkulens mikroorganizmusok tulszaporodasa sem szerencses, hiszen ez esetben a 
az eleveniszap "osszeesik" a nagy resze igen gyorsan kiulepszik, azonban az ulepedes nem 100%-os a szennyvis foluluszojaban
magas marad a szervesanayg tartalom, igy nagy lehet az elfolyo viz szervesanyag terhelese (aminek megszunetese a biologiai
szennyviztisztitas alapveto feladata). Eppen ezert fontos a fonalas es flokkulens bakteriumok megfelelo aranya, amit mind
ipari, mind kiserleti reaktorok tervezesenel szukseges figyelmbe venni.

Tervezes soran a Monod modell kulnbozo specialis formai bizonyltak hatekonynak. Szukseges meghatarozni azt a szubsztrat 
koncentraciot amelynel a ket faj fajlagos szaporodasi sebessege megegyezik, igy egyik sem tudja tulnoni a masikat. Mivel a 
legtobb esetben nem statikus folyadekrol, hanem aramlo szennyvizrol beszelunk igy valolyaban a szubsztrat aram, meghatarozasa
szukseges. Szabalyozni viszont a terfogataramot tudjuk, igy vegeredmenyben a monod modell kompeticiora alkalmazott valtozatval
azt a folyadekaramot keressuk, ahol egy stabil allandosult allapot johet letre. Ennek kiszamolasara szolgal a competition.c 
forditasaval kapott program.

Hasznalata a kovetkezo keppen tortenik:

`competition u1max[1/h] u2max[1/h] Ks1 Ks2 V[m3]`

peldaul: 

`competition 0.8 2 0.5 1.2 20`

Igy megkapjuk a szukesges terfogataramot m3/h-ban.

Forditas (OS/X, Linux):

`gcc -Wall competition.c -o competition`

E mellett a monod.c forditasaval egy egyszeru fajlagos novekedesi sebeseeg szamolot kapunk.

Hasznalata a kovetkezo keppen tortenik:

`monod umax S Ks`

peldaul: 

`monod 0.8 2 0.5`

Forditas (OS/X, Linux):

`gcc -Wall monod.c -o monod`
