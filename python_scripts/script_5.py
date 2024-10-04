import re

cards = [
    "4-Starred Ladybug of Doom",
    "Bazoo the Soul-Eater",
    "Card Destruction",
    "Dark Necrofear",
    "Darklord Marie",
    "Earthbound Spirit",
    "Jar of Greed",
    "Kycoo the Ghost Destroyer",
    "Mage Power",
    "Magic Cylinder",
    "Magic Drain",
    "Maryokutai",
    "Royal Command",
    "Skull Lair",
    "Solemn Wishes",
    "Soul Exchange",
    "St. Joan",
    "The Fiend Megacyber",
    "The Forgiving Maiden",
    "The Last Warrior from Another Planet",
    "Thousand-Eyes Idol",
    "Thousand-Eyes Restrict",
    "Torrential Tribute",
    "United We Stand",
    "Zombyra the Dark"
]

for card in cards:
    print('	"graphics/Resize/' + re.sub('[^0-9a-zA-Z]+', '', card) + '.6bpp",')