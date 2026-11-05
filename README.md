# Shami Productions: Personality Quiz Game

![Language](https://img.shields.io/badge/language-C%2B%2B-00599C?logo=c%2B%2B&logoColor=white)
![Type](https://img.shields.io/badge/type-console%20application-lightgrey)
![Platform](https://img.shields.io/badge/platform-Windows-0078D6)
![Status](https://img.shields.io/badge/status-completed-success)

An interactive, menu-driven **console application written in C++** that lets users take four
scenario-based personality quizzes and receive a detailed result, including strengths and
challenges. The interface is built entirely from ASCII art and runs in the terminal with no
external libraries.

---

## Table of Contents

- [Overview](#overview)
- [Features](#features)
- [Quizzes](#quizzes)
- [Preview](#preview)
- [Getting Started](#getting-started)
- [Usage](#usage)
- [Technical Highlights](#technical-highlights)
- [Project Structure](#project-structure)
- [Known Limitations and Roadmap](#known-limitations-and-roadmap)
- [Acknowledgments](#acknowledgments)
- [Author](#author)
- [License](#license)

## Overview

Shami Productions is a personality quiz game that combines self-discovery with light
gameplay. Users choose a quiz from a main menu, answer a series of questions, and are
matched to a personality result, such as an element of nature, a season, a Filipino
vegetable from the folk song *Bahay Kubo*, or an adventurer type.

The project was developed as a school project (BSIT-S-T-1A-T) to practice core C++
fundamentals: control flow, functions, user input handling, and string manipulation.
It also involved designing a complete text-based user interface from scratch.

## Features

- **Four distinct quizzes**, each with its own questions, scoring, and result screens
- **Menu-driven navigation** with a title screen, quiz selection menu, and credits page
- **Detailed result screens** showing a personality summary, strengths, and challenges
- **Input validation** that handles non-numeric input, invalid menu choices, and
  out-of-range answers without crashing
- **Case-insensitive answers**, so `a` and `A` are treated the same
- **Replay flow** that lets users take another quiz or return to the menu at any time
- **Exit confirmation** to prevent accidental program termination
- **Custom ASCII-art interface** with a consistent visual theme across all screens

## Quizzes

| # | Quiz | Format | Possible Results |
|---|------|--------|------------------|
| 1 | What Element of Nature Are You? | Multiple choice (A-D) | Earth, Wind, Fire, Water |
| 2 | Which of the Four Seasons Are You? | Multiple choice (A-D) | Summer, Spring, Autumn, Winter |
| 3 | What Vegetable Are You? (*Bahay Kubo* edition) | Multiple choice, with a name prompt | Vegetables from the *Bahay Kubo* song |
| 4 | What Adventurer Are You? | Math-based puzzles and riddles, with a name prompt | Adventurous or Cautious |

## Preview

Quiz selection menu:

```text
 *    __________________________________________________   __________________________________________________    *
 *   |                                                  | |                                                  |   *
 *   |                        (1)                       | |                        (2)                       |   *
 *   |                                                  | |                                                  |   *
 *   |           WHAT ELEMENT OF NATURE ARE YOU?        | |       WHICH AMONG THE FOUR SEASONS ARE YOU?      |   *
 *   |             (EARTH, WIND, FIRE, WATER)           | |         (SUMMER, SPRING, AUTUMN, WINTER)         |   *
 *   |                                                  | |                                                  |   *
 *   |__________________________________________________| |__________________________________________________|   *
 *    __________________________________________________   __________________________________________________    *
 *   |                                                  | |                                                  |   *
 *   |                        (3)                       | |                        (4)                       |   *
 *   |                                                  | |                                                  |   *
 *   |              WHAT VEGETABLE ARE YOU?             | |             WHAT ADVENTURER ARE YOU?             |   *
 *   |               (BAHAY KUBO EDITION)               | |            (ADVENTUROUS OR CAUTIOUS)             |   *
 *   |                                                  | |                                                  |   *
 *   |__________________________________________________| |__________________________________________________|   *

          WHICH AMONG THESE PERSONALITY QUIZZES WOULD YOU LIKE TO TAKE?
                      (1, 2, 3, 4 or 0 FOR EXIT)

                                >>
```

> Screenshots of the running application can be added to a `screenshots/` folder and
> linked here.

## Getting Started

### Prerequisites

- A C++ compiler that supports C++11 or later (g++/MinGW, MSVC, or Clang)
- **Windows** is the target platform, because the program uses `system("cls")` to clear
  the screen
- Git, if you want to clone the repository

### Installation

```bash
# Clone the repository
git clone https://github.com/shmmrls/shami-personality-quiz-game.git
cd shami-personality-quiz-game

# Compile
g++ -std=c++11 shami-personality-quiz.cpp -o shami-quiz

# Run
./shami-quiz          # on Windows: shami-quiz.exe
```

You can also open `shami-personality-quiz.cpp` in an IDE such as Code::Blocks, Dev-C++, or
Visual Studio and run it from there.

> **macOS / Linux:** the program compiles and runs, but `system("cls")` does not clear the
> screen on those systems. Replace it with `system("clear")` for the intended experience.

## Usage

1. Launch the program and choose **1** from the main menu to open the quizzes.
2. Select a quiz by entering **1-4** (or **0** to go back).
3. Follow the on-screen prompts. For multiple-choice quizzes, answer with the letter of
   your choice. For the adventurer quiz, enter a numeric answer.
4. Read your result, then choose whether to take another quiz or return to the menu.
5. Choose **Exit** from the main menu and confirm to close the program.

## Technical Highlights

- **Function-based structure:** each screen and each quiz is implemented as its own
  function (`start`, `personalityQuizzes`, `elements`, `fourSeasons`, `veggieVenture`,
  `adventurer`, `credits`, `exit`), keeping `main()` focused on program flow.
- **Score-based result logic:** each quiz tallies points per category as the user
  answers, then compares the totals with chained conditions to determine the result.
- **Robust input handling:** `cin.fail()`, `cin.clear()`, and
  `cin.ignore(numeric_limits<streamsize>::max(), '\n')` are used to recover from invalid
  input and keep the input stream in a clean state.
- **Retry loops:** every question is wrapped in a validation loop that repeats until the
  user provides a valid answer.
- **C++ lambda:** the adventurer quiz uses a lambda (`getValidatedAnswer`) to reuse numeric
  validation across its math-based questions.
- **Input normalization:** `toupper()` is applied to answers and Yes/No prompts so
  input is case-insensitive.
- **Standard library only:** no third-party dependencies (`<iostream>`, `<iomanip>`,
  `<string>`, `<cstring>`, `<cstdlib>`, `<cctype>`, `<limits>`, `<cmath>`).

## Project Structure

```text
shami-personality-quiz-game/
├── shami-personality-quiz.cpp   # Complete application source
├── README.md                    # Project documentation
└── .gitignore                   # Ignores compiled binaries and IDE files
```

## Known Limitations and Roadmap

This project was built as a learning exercise, and there are clear areas to improve:

- [ ] Split the single source file into separate modules (one file per quiz) with a shared
      header for common UI and validation helpers
- [ ] Replace repeated question and ASCII-art code with data-driven structures
      (arrays or `struct`s of questions and answers) to reduce duplication
- [ ] Make screen clearing cross-platform instead of relying on `system("cls")`
- [ ] Use `std::string` and `getline` for name input to remove the 6-character limit
- [ ] Add a `Makefile` or CMake configuration for easier builds
- [ ] Save and display past quiz results
- [ ] Add more quizzes

## Acknowledgments

The quiz concepts and questions are inspired by the following sources:

- [Vegetal Quiz](https://sophie006liu.github.io/vegetal/#)
- [What Type of Adventurer Are You?](https://uquiz.com/quiz/4waRWY/what-type-of-adventurer-are-you)
- [What Season Is Your Personality?](https://www.proprofs.com/quiz-school/story.php?title=pq-what-season-is-your-personality)
- [Which of the Four Elements Are You?](https://www.proprofs.com/quiz-school/story.php?title=which--four-elements-are-you)

## Author

**Trisha Mia G. Morales**
BSIT-S-T-1A-T

- Design and programming: Trisha Mia G. Morales
- GitHub: [@shmmrls](https://github.com/shmmrls)

## License

No license has been specified for this project yet. Add a `LICENSE` file (for example,
[MIT](https://choosealicense.com/licenses/mit/)) if you want others to reuse the code.
