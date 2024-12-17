from collections import Counter

#from collections import Counter` — eto import iz standartnoy biblioteki Python modulya `collections`, 
#kotoryy predostavlyayet spetsial'nyy klass `Counter`. 
#Klass `Counter` ispol'zuyetsya dlya podscheta kolichestva elementov v iteriruemykh ob'ektakh, 
#takikh kak spiski ili stroki.

def most_common_words(text, top_n=5):
    

    # """
    # Analyzes a text and finds the most common words.

    # Parameters:
    # text (str): The input text to analyze.
    # top_n (int): The number of most common words to display.

    # Returns:
    # None
    # """



    # Ubirayu znaki prepinaniya i privoju text k nijnemu registru
    words = text.lower().replace('.', '').replace(',', '').split()

    # Ispolzuyu cunter dlya podsota slov
    word_counts = Counter(words)

    # Polucayu samie castie slova 
    most_common = word_counts.most_common(top_n)

    print(f"Top {top_n} most common words:")
    for word, count in most_common:
        print(f"{word}: {count} time(s)")

# Example
if __name__ == "__main__":
    sample_text = """
    Programming is the process of writing computer programs that perform specific tasks.
    Programming is important for solving complex problems, analyzing data, and creating applications.
    """
    most_common_words(sample_text)

