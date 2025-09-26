![C++](https://img.shields.io/badge/C++-00599C?logo=cplusplus&logoColor=white)  
![OOP](https://img.shields.io/badge/Concepts-Classes%20%26%20Pointers-blue)  
![Git](https://img.shields.io/badge/Version%20Control-Git-orange)  

# 🎮 Video Game Library  

> A layered **C++ program** designed to practice **classes, pointers, memory management, and Git collaboration**.  
> The project implements a **video game collection system** with functionality for adding, removing, displaying, saving, and loading games.  

---

## 📙 Table of Contents  
- [About](#-about)  
- [Classes](#-classes)  
- [Features](#-features)  
- [Files](#-files)  
- [Usage](#-usage)  
- [Project Reflection](#-project-reflection)  
- [Learn More](#-learn-more)  
- [Contact](#-contact)  

---

## 📌 About  

This project was built as a team-driven introduction to **object-oriented programming in C++** and **Git-based group collaboration**.  

The program is organized into layered classes:  
- **Driver** → manages program flow and user interaction.  
- **VideoGameLibrary** → manages storage of multiple video games.  
- **VideoGame** → represents an individual game with metadata.  
- **Text** → custom string handler class.  

The design emphasizes:  
- Encapsulation (private data with getters/setters).  
- Dynamic memory management using pointers.  
- Modular code structure split into headers and source files.  
- File I/O for persistence (saving/loading the library).  

---

## 🏗️ Classes  

### 🔹 Driver  
- Controls overall program execution.  
- Provides a user menu in a loop.  
- Calls library functions to add/remove/display games.  
- Allows saving and loading data from files.  

### 🔹 VideoGameLibrary (Storage Class)  
- Stores games via a pointer to an array of pointers to `VideoGame` objects.  
- Tracks maximum capacity and active game count.  
- Functions: constructor, destructor, add, remove, resize, display, save, load.  

### 🔹 VideoGame (Data Class)  
- Holds metadata for each game.  
- Variables: name, author, publisher (`Text` objects), year, rating.  
- Functions: constructor, destructor, getters, setters.  

### 🔹 Text (Helper Class)  
- Custom string handler class.  
- Uses a pointer to a character array and size variable.  
- Functions: constructor, destructor, getter for size, getter for string.  

---

## 🚀 Features  

- **Add games** → dynamically stores new video games.  
- **Remove games** → safely deletes games from the library.  
- **Display games** → print either full details or titles only.  
- **Save/Load** → persistence through file I/O.  
- **Resizing** → expands storage capacity when full.  
- **Interactive Menu** →  
  1. Load video games from a file  
  2. Save video games to a file  
  3. Add a new video game  
  4. Remove an existing video game  
  5. Display all video games  
  6. Exit the program  

---

## 📂 Files  

- `Driver.cpp` → main program flow.  
- `VideoGame_Library.cpp` / `VideoGame_Library.h` → storage class.  
- `VideoGame.cpp` / `VideoGame.h` → data class.  
- `Text.cpp` / `Text.h` → helper class.  
- `Data_Class.cpp` / `Data_Class.h` → additional data handling.  
- `Test_Case.txt` → test input file for verifying program paths.  
- `README.md` → project documentation.  

---

## 💻 Usage  

1. Compile the program (example with g++):  
   `g++ Driver.cpp VideoGame_Library.cpp VideoGame.cpp Text.cpp Data_Class.cpp -o videogame_library`  

2. Run the executable:  
   `./videogame_library`  

3. Follow the on-screen menu to:  
   - Load video games from a file  
   - Add new video games  
   - Remove games  
   - Display the library  
   - Save to file  
   - Exit the program  

---

## 📝 Project Reflection  

### Roles  
- **Leader (Bryson Bargas):** Wrote `Driver.cpp`, helped write `VideoGame_Library`, organized and delegated work.  
- **Architect (Cyrus):** Wrote `Data_Class` and `VideoGame`, helped debug `VideoGame_Library`.  
- **Debugger (Mal):** Wrote initial `README.md`, debugged code, contributed to `VideoGame_Library`.  
- **Tester (Isaac):** Wrote `Text` class, performed extensive testing and Git support.  

### Process & Takeaways  
- Work was split across files and classes, which made implementation faster but debugging harder.  
- Git was used successfully to collaborate, though the history became messy.  
- Debugging required everyone to learn each part of the code.  
- If done again, more time would be spent collaborating on shared sections to improve debugging efficiency.  
- Learned the importance of **Git, teamwork, and debugging collaboratively**.  

### Outcome  
The final program provides a fully functional **video game management system** that allows users to load, save, add, remove, and display games through a menu-driven interface.  

---

## 📬 Learn More  

The program can be tested with included test files such as `Test_Case(1).txt` or `Test_Case(20).txt`, using menu options to load, add, display, and save video games.  

---

## 📇 Contact  

For more details or collaboration opportunities:  
- Portfolio: [brycemani4c.github.io](https://brycemani4c.github.io)  
- Email: [Bryson.A.Bargas@gmail.com](mailto:Bryson.A.Bargas@gmail.com)  
