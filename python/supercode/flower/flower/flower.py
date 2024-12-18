from turtle import *  # Importiruem vse funktsii iz biblioteki turtle
import colorsys  # Biblioteka dlya raboty s cvetovymi modelyami

# Nastraivaem skorost' risovaniya i fonovyy tsvet
speed(0)  # Skorost' risovaniya maksimal'naya
bgcolor("black")  # Ustanavlivaem fon chernogo tsveta

# Initsializiruem peremennuyu dlya otslezhivaniya otsenka tsveta (hue)
h = 0  # Nachal'noe znachenie otsenka cveta (HSV model')

# Vneshniy tsikl dlya 16 povtoreniy
for i in range(16):  # Perebiraem 16 povtoreniy, kazhdoye sozdaet odnu chast' risunka
    # Vlozhennyy tsikl dlya risovaniya 18 figur
    for j in range(18):  # Kazhdyy tsikl risuet odnu figurku v ramkakh vneshnego tsikla
        # Poluchaem tsvet, preobrazuyem iz HSV v RGB
        c = colorsys.hsv_to_rgb(h, 1, 1)  # Preobrazovanie HSV (hue, saturation, value) v RGB
        color(c)  # Ustanavlivaem tekushchiy tsvet dlya risovaniya

        # Uvelichivaem otsenok cveta dlya sleduyushchey figurki
        h += 0.005  # Postepenno smeshchenie otsenka cveta dlya effekta radugi
        
        # Risuyem figury
        right(90)  # Povorachivaem pero na 90 gradusov napravo
        circle(150 - j * 6, 90)  # Risuyem duhu s radiysom (150 - j * 6) i ugolom 90 gradusov
        left(90)  # Povorachivaem pero na 90 gradusov nalevo
        circle(150 - j * 6, 90)  # Risuyem eshche odnu duhu
        right(180)  # Povorachivaem pero na 180 gradusov dlya razvorota
        circle(40, 24)  # Risuyem malenkuyu duhu s radiysom 40 i ugolom 24 gradusa

# Kod zakonchivaetsya, no funktsiyu done() mozhno dobavit', chtoby turtle okno ostavalos' otkrytym
# done()  # Eto zavershit programmu i ostavit risunok na ekrane

