output = open('output.txt', 'w', encoding='utf8')

for card_index in range(len(data.cards.stats)):
  output.write('\t[CARD_NUMBER_' + data.cards.numbers[card_index].index.upper().replace(' ', '_').replace('-', '_').replace('~', '_').replace("'", '_') + ']\n\t{\n')
  output.write('\t\t.cardName = "' + data.cards.numbers[card_index].index + '"\n')
  output.write('\t},\n')

output.close()