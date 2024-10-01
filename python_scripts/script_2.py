output = open('output.txt', 'w', encoding='utf8')

new_cards = [

]

count = 0
for card in data.cards.internalnumbers:
  if count < 194:
      if card.index != 'None':
        output.write("   '''" + card.index + "''',\n")
      else:
        output.write("   '''" + new_cards[count] + "''',\n")
        count = count + 1

output.close()