def sortedSentence(Sentence):
    words = Sentence.split(" ")
    words.sort()
    newSentence = " ".join(words)
    return newSentence
Sentence = "to learn programming"
print(sortedSentence(Sentence))
Sentence = "saveetha"
print(sortedSentence(Sentence))
