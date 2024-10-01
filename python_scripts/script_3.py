output = open('output.txt', 'w', encoding='utf8')

for card_index in range(len(data.cards.stats)):
  output.write('\t[CARD_NUMBER_' + data.cards.numbers[card_index].index.upper().replace(' ', '_') + ']\n\t{\n')
  output.write('\t\t.defense = ' + str(data.cards.stats[card_index].cardstats.defense) + ',\n')
  output.write('\t\t.attack = ' + str(data.cards.stats[card_index].cardstats.atk) + ',\n')
  output.write('\t\t.monsterType = MONSTER_TYPE_' + str(data.cards.stats[card_index].cardstats.mtype).upper().replace(' ', '_') + ',\n')
  output.write('\t\t.race = RACE_' + str(data.cards.stats[card_index].cardstats.race).upper().replace(' ', '_') + ',\n')
  output.write('\t\t.level = ' + str(data.cards.stats[card_index].cardstats.stars) + ',\n')
  output.write('\t\t.attribute = ATTRIBUTE_' + str(data.cards.stats[card_index].cardstats.attribute).upper().replace(' ', '_') + ',\n')
  output.write('\t},\n')

output.close()