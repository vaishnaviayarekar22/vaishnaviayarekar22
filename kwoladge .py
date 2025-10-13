def ask_questions(section_name, questions, scores):
    print(f"\n📘 Starting Section: {section_name}")
    print("-" * 60)
    score = 0

    for i, q in enumerate(questions, 1):
        print(f"\nQ{i}. {q['question']}")
        for opt in q["options"]:
            print(opt)
        ans = input("Your Answer (a/b/c/d): ").strip().lower()
        if ans == q["answer"]:
            score += 1
            print("Correct!")
        else:
            print(f"Wrong! Correct answer: {q['answer']}) {q['options'][ord(q['answer']) - 97][3:]}")
    scores[section_name] = score
    print(f"\nSection '{section_name}' completed! You scored {score}/10\n")


def show_performance(scores):
    print("\n FINAL PERFORMANCE REPORT 📊")
    print("=" * 60)

    total_marks = sum(scores.values())
    percentage = (total_marks / 50) * 100

    for sec, marks in scores.items():
        print(f"{sec}: {marks}/10 Marks")

    print("-" * 60)
    print(f"Total Score: {total_marks}/50")
    print(f"Percentage: {percentage:.2f}%")

    if percentage >= 90:
        print(" Excellent! Outstanding performance!")
    elif percentage >= 75:
        print(" Very Good! Keep it up.")
    elif percentage >= 50:
        print(" Fair performance. You can improve with more practice.")
    else:
        print(" Needs improvement. Revise the topics and try again!")

    print("=" * 60)
    print("Thank you for using the Knowledge Tester! ")


def main():
    sections = {
        "A": {
            "name": "Section A: Science & Environment (10 Marks)",
            "questions": [
                {"question": "What is the main source of energy for all living things on Earth?",
                 "options": ["a) Moon", "b) Sun", "c) Stars", "d) Air"], "answer": "b"},
                {"question": "What is the process called when water changes into vapor due to heat?",
                 "options": ["a) Condensation", "b) Evaporation", "c) Precipitation", "d) Freezing"], "answer": "b"},
                {"question": "Why do we see lightning before we hear thunder?",
                 "options": ["a) Light travels faster than sound", "b) Sound travels faster", "c) Lightning is louder", "d) Both happen together"], "answer": "a"},
                {"question": "Which planet has rings around it?",
                 "options": ["a) Earth", "b) Jupiter", "c) Saturn", "d) Mars"], "answer": "c"},
                {"question": "What is the unit used to measure temperature?",
                 "options": ["a) Meter", "b) Degree Celsius", "c) Gram", "d) Volt"], "answer": "b"},
                {"question": "What is the difference between a herbivore and a carnivore?",
                 "options": ["a) Herbivores eat meat", "b) Carnivores eat plants", "c) Herbivores eat plants, carnivores eat meat", "d) Both eat plants"], "answer": "c"},
                {"question": "Why are honeybees important for farming?",
                 "options": ["a) They eat crops", "b) They make honey", "c) They pollinate plants", "d) They dig soil"], "answer": "c"},
                {"question": "Which part of our body controls all other parts?",
                 "options": ["a) Heart", "b) Brain", "c) Lungs", "d) Stomach"], "answer": "b"},
                {"question": "Why does a shadow form?",
                 "options": ["a) Light passes through objects", "b) Light is absorbed", "c) An object blocks light", "d) Reflection"], "answer": "c"},
                {"question": "Name one thing that can conduct electricity and one that cannot.",
                 "options": ["a) Metal conducts, rubber does not", "b) Rubber conducts, metal does not", "c) Both conduct", "d) None conduct"], "answer": "a"}
            ]
        },

        "B": {
            "name": "Section B: India & the World (10 Marks)",
            "questions": [
                {"question": "Who is the President of India (as of now)?",
                 "options": ["a) Narendra Modi", "b) Droupadi Murmu", "c) A.P.J. Abdul Kalam", "d) Ram Nath Kovind"], "answer": "b"},
                {"question": "In which continent is India located?",
                 "options": ["a) Africa", "b) Europe", "c) Asia", "d) Australia"], "answer": "c"},
                {"question": "Name any one neighboring country of India.",
                 "options": ["a) Brazil", "b) Pakistan", "c) Russia", "d) France"], "answer": "b"},
                {"question": "What is the capital of Maharashtra?",
                 "options": ["a) Pune", "b) Mumbai", "c) Nagpur", "d) Nashik"], "answer": "b"},
                {"question": "Name two Indian states that share a border with the sea.",
                 "options": ["a) Goa and Tamil Nadu", "b) Bihar and Haryana", "c) Punjab and Delhi", "d) Madhya Pradesh and Jharkhand"], "answer": "a"},
                {"question": "Who wrote the Indian National Anthem?",
                 "options": ["a) Mahatma Gandhi", "b) Rabindranath Tagore", "c) Lata Mangeshkar", "d) Jawaharlal Nehru"], "answer": "b"},
                {"question": "Name one mountain range in India.",
                 "options": ["a) Andes", "b) Alps", "c) Himalayas", "d) Rockies"], "answer": "c"},
                {"question": "What is the full form of “UNO”?",
                 "options": ["a) United Nations Organization", "b) Universal Nation Office", "c) Union National Order", "d) United National Office"], "answer": "a"},
                {"question": "Which Indian scientist is known as the “Missile Man of India”?",
                 "options": ["a) C.V. Raman", "b) Dr. A.P.J. Abdul Kalam", "c) Homi Bhabha", "d) Vikram Sarabhai"], "answer": "b"},
                {"question": "Name the current Prime Minister of India.",
                 "options": ["a) Rahul Gandhi", "b) Narendra Modi", "c) Manmohan Singh", "d) Amit Shah"], "answer": "b"}
            ]
        },

        "C": {
            "name": "Section C: Mathematics & Logical Reasoning (10 Marks)",
            "questions": [
                {"question": "What is 15 × 12 = ?",
                 "options": ["a) 150", "b) 160", "c) 180", "d) 200"], "answer": "c"},
                {"question": "Perimeter of a rectangle is 40 cm. Length = 12 cm. Breadth?",
                 "options": ["a) 8 cm", "b) 10 cm", "c) 6 cm", "d) 5 cm"], "answer": "a"},
                {"question": "1/2 of 3/4 = ?",
                 "options": ["a) 3/8", "b) 1/2", "c) 2/3", "d) 1/4"], "answer": "a"},
                {"question": "Train travels 60 km in 1 hour. Distance in 2½ hours?",
                 "options": ["a) 120 km", "b) 150 km", "c) 180 km", "d) 160 km"], "answer": "b"},
                {"question": "Which number is the smallest: 3.25, 3.5, 3.05, 3.15?",
                 "options": ["a) 3.25", "b) 3.5", "c) 3.05", "d) 3.15"], "answer": "c"},
                {"question": "Arrange ascending: 42, 24, 84, 14",
                 "options": ["a) 14, 24, 42, 84", "b) 24, 14, 42, 84", "c) 14, 42, 24, 84", "d) 42, 24, 84, 14"], "answer": "a"},
                {"question": "Find missing: 7, 14, 28, ___, 112",
                 "options": ["a) 42", "b) 56", "c) 64", "d) 48"], "answer": "b"},
                {"question": "If “CAT” = 3120 (C=3, A=1, T=20), then “DOG” = ?",
                 "options": ["a) 4157", "b) 4120", "c) 3210", "d) 3147"], "answer": "a"},
                {"question": "Number divisible by both 3 and 5?",
                 "options": ["a) 12", "b) 15", "c) 20", "d) 25"], "answer": "b"},
                {"question": "If today is Wednesday, day after 15 days?",
                 "options": ["a) Monday", "b) Tuesday", "c) Thursday", "d) Friday"], "answer": "c"}
            ]
        },

        "D": {
            "name": "Section D: English & Communication (10 Marks)",
            "questions": [
                {"question": "The earth ____ around the sun.",
                 "options": ["a) moves", "b) move", "c) moving", "d) moved"], "answer": "a"},
                {"question": "Opposite of beautiful?",
                 "options": ["a) Ugly", "b) Pretty", "c) Bright", "d) Lovely"], "answer": "a"},
                {"question": "Plural of leaf?",
                 "options": ["a) Leafs", "b) Leaves", "c) Leafes", "d) Leaf"], "answer": "b"},
                {"question": "He is taller ___ his brother.",
                 "options": ["a) than", "b) then", "c) as", "d) to"], "answer": "a"},
                {"question": "Correct spelling:",
                 "options": ["a) Enviroment", "b) Environment", "c) Environmant", "d) Environmet"], "answer": "b"},
                {"question": "Synonym of happy?",
                 "options": ["a) Sad", "b) Glad", "c) Angry", "d) Lonely"], "answer": "b"},
                {"question": "Sentence about best friend?",
                 "options": ["a) My best friend is kind", "b) My best friend is selfish", "c) My best friend is lazy", "d) My best friend is rude"], "answer": "a"},
                {"question": "Meaning of pollution?",
                 "options": ["a) Clean air", "b) Harmful substances in environment", "c) Fresh water", "d) Pure land"], "answer": "b"},
                {"question": "Correct sentence rearrangement: playing / are / children / the / park / in / the",
                 "options": ["a) The children are playing in the park", "b) Children the are playing park in", "c) Playing children are in the park", "d) Children playing are the park in"], "answer": "a"},
                {"question": "Past tense of go?",
                 "options": ["a) Goes", "b) Went", "c) Going", "d) Gone"], "answer": "b"}
            ]
        },

        "E": {
            "name": "Section E: Observation & General Reasoning (10 Marks)",
            "questions": [
                {"question": "If all pencils are pens, some pens are markers, can we say all markers are pencils?",
                 "options": ["a) Yes", "b) No", "c) Maybe", "d) Cannot say"], "answer": "b"},
                {"question": "Which does not belong?",
                 "options": ["a) Square", "b) Circle", "c) Triangle", "d) Potato"], "answer": "d"},
                {"question": "Farmer has 17 sheep. All but 9 ran away. How many left?",
                 "options": ["a) 8", "b) 9", "c) 17", "d) 0"], "answer": "b"},
                {"question": "What comes next: A, C, F, J, O, ___",
                 "options": ["a) T", "b) U", "c) V", "d) W"], "answer": "b"},
                {"question": "Facing north, turn right twice. Direction?",
                 "options": ["a) East", "b) West", "c) South", "d) North"], "answer": "c"},
                {"question": "3 apples for ₹45. Cost of 1 apple?",
                 "options": ["a) ₹10", "b) ₹15", "c) ₹12", "d) ₹20"], "answer": "b"},
                {"question": "Which is heavier: 500g or 1.5kg?",
                 "options": ["a) 500g", "b) 1.5kg", "c) Equal", "d) None"], "answer": "b"},
                {"question": "Clock shows 8:45. After 2h 30m?",
                 "options": ["a) 10:45", "b) 11:15", "c) 11:30", "d) 12:15"], "answer": "b"},
                {"question": "Which sinks in water: plastic ball or iron nail?",
                 "options": ["a) Plastic ball", "b) Iron nail", "c) Both", "d) None"], "answer": "b"},
                {"question": "If a mango costs ₹12, how many with ₹100?",
                 "options": ["a) 6", "b) 7", "c) 8", "d) 9"], "answer": "c"}
            ]
        }
    }

    print("Welcome to the 6th Standard Knowledge Tester ")
    print("=" * 60)

    scores = {}

    while True:
        print("\nSelect a section to attempt:")
        for key, sec in sections.items():
            print(f"{key}. {sec['name']}")
        print("X. Exit and Show Final Performance")

        choice = input("\nEnter your choice (A/B/C/D/E or X): ").strip().upper()

        if choice == "X":
            show_performance(scores)
            break
        elif choice in sections:
            ask_questions(sections[choice]["name"], sections[choice]["questions"], scores)
        else:
            print("Invalid choice. Please try again.")


if __name__ == "__main__":
    main()