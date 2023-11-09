# Klase `Rinda` - Programmas Dokumentācija

## Klases Apraksts

`Rinda` ir klase, kas implementē vienkāršu rindas datu struktūru. Tā ļauj lietotājam ievietot elementus rindā, noņemt elementus no rindas un parādīt esošos elementus rindā.

## Klases Metodes

### `Rinda(int s)`

Konstruktors, kas izveido rindu ar norādīto izmēru `s`. Rinda tiek inicializēta ar sākuma un beigu norādēm, un tiek izveidots masīvs, lai uzglabātu elementus.

### `void IeliktRinda(int value)`

Metode, kas ļauj ievietot norādīto vērtību `value` rindā. Ja rinda ir pilna, tiek izvadīts paziņojums "Rinda ir pilna".

### `void NonemtNoRindas()`

Metode, kas noņem elementu no rindas. Ja rinda ir tukša, tiek izvadīts paziņojums "Rinda ir tuksa".

### `void Radisana()`

Metode, kas izvada esošos elementus rindā.

## Programmas Lietošana

1. Lai sāktu darbu ar rindu, izveidojiet objektu, norādot vēlamo rindas izmēru. Piemēram, `Rinda q(10);` izveidos rindu ar izmēru 10.

2. Programma piedāvā izvēlēties dažādas darbības, ievadot attiecīgo skaitli:
   - `1` - Ielikt elementu rindā
   - `2` - Noņemt elementu no rindas
   - `3` - Parādīt esošos elementus rindā
   - `4` - Beigt darbu

3. Ja izvēlaties ielikt elementu rindā (izvēle `1`), ievadiet ciparu, kuru vēlaties ielikt.

4. Ja izvēlaties noņemt elementu no rindas (izvēle `2`), tiks izvadīts paziņojums par noņemto elementu.

5. Ja izvēlaties parādīt esošos elementus rindā (izvēle `3`), tiks izvadīta rinda ar visiem esošajiem elementiem.

6. Lai pabeigtu programmas darbību, izvēlieties opciju `4`.

Lai novērstu nepareizu ievadi, programma atgādinās par pareizām opcijām vai norādīs uz nepareizu ievadi.

**Piemērs:**
Izveleties uzdevumu:
1 - Ielikt rinda
2 - Nonemt no rindas
3 - Radit rindu
4 - Beigt darbu
>> 1

Ievadiet ciparu, kuru gribat ielikt rinda: 5
5 ir pievienots rindai


