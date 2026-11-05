# 🎭 Shami Productions: Personality Quiz Game

A colorful, text-based **personality quiz game** for the console, written in C++.
Pick a quiz, answer the scenario questions, and find out which element, season,
vegetable, or type of adventurer you are, complete with strengths and challenges.

> Originally created as a school project (**BSIT-S-T-1A-T**) and now being polished up.

---

## ✨ Features

- **Interactive ASCII-art menus** with a title screen, quiz menu, and credits page
- **4 personality quizzes**, each with its own scenario-based questions and results
- **Personalized results**: the game greets you by name and shows your result
  with its strengths and challenges
- **Input validation**: invalid or non-numeric input is caught and handled
- **Replayability**: take another quiz right after finishing one, or return to the menu

## 🧩 The Quizzes

| # | Quiz | Possible Results |
|---|------|------------------|
| 1 | **What Element of Nature Are You?** | Earth, Wind, Fire, Water |
| 2 | **Which of the Four Seasons Are You?** | Summer, Spring, Autumn, Winter |
| 3 | **What Vegetable Are You?** (*Bahay Kubo* edition 🇵🇭) | Vegetables from the Filipino folk song *Bahay Kubo* |
| 4 | **What Adventurer Are You?** | Adventurous or Cautious |

## 🛠️ Built With

- **C++** (standard library only: `iostream`, `iomanip`, `string`, `cstring`, `cstdlib`, `cctype`, `limits`, `cmath`)

## 🚀 Getting Started

### Requirements

- A C++ compiler such as **g++** (MinGW), **MSVC**, or an IDE like **Code::Blocks**, **Dev-C++**, or **Visual Studio**
- **Windows** is recommended, because the program uses `system("cls")` to clear the screen

### Build and run

```bash
# Clone the repository
git clone https://github.com/shmmrls/PROJECT-ENTERTAINMENT-.git
cd PROJECT-ENTERTAINMENT-

# Compile
g++ -std=c++11 shami-personality-quiz.cpp -o shami-quiz

# Run
./shami-quiz        # on Windows: shami-quiz.exe
```

> **Using macOS or Linux?** It compiles fine, but `system("cls")` won't clear the
> screen there. Change it to `system("clear")` for the best experience.

## 🎮 How to Play

1. Launch the game and choose **1. Proceed to Personality Quizzes** from the main menu.
2. Pick a quiz (**1–4**), or enter **0** to go back.
3. Enter your name, then answer each question by typing the letter of your choice.
4. Read your result, then choose whether to take another quiz.

## 📁 Project Structure

```
.
├── shami-personality-quiz.cpp   # Full game source code
├── README.md
└── .gitignore
```

## 🙏 Credits

**Made by:** Trisha Mia G. Morales (BSIT-S-T-1A-T)
**Design and programming:** Trisha Mia G. Morales

Quizzes and games are inspired by:

- [Vegetal Quiz](https://sophie006liu.github.io/vegetal/#)
- [What Type of Adventurer Are You?](https://uquiz.com/quiz/4waRWY/what-type-of-adventurer-are-you)
- [What Season Is Your Personality?](https://www.proprofs.com/quiz-school/story.php?title=pq-what-season-is-your-personality)
- [Which of the Four Elements Are You?](https://www.proprofs.com/quiz-school/story.php?title=which--four-elements-are-you)

## 🔮 Possible Future Improvements

- Split the single source file into separate files (one per quiz)
- Make screen clearing cross-platform
- Save and display past quiz results
- Add more quizzes

## 📄 License

No license has been added yet. If you want others to be able to reuse your code,
consider adding one (for example, [MIT](https://choosealicense.com/licenses/mit/)).
