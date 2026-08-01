# TouchGFX Login System with Custom Keyboard

## Overview

This project is a **TouchGFX-based Login System** developed for STM32. It demonstrates a modern login interface with a custom on-screen keyboard, password visibility toggle, reusable custom containers, and navigation between multiple screens.

The project is designed to provide a clean and user-friendly login experience while showcasing TouchGFX UI development techniques.

---

## Features

* Custom On-Screen Keyboard
* User Input Screen
* Password Setup Screen
* Password Show/Hide Toggle
* Custom Container Implementation
* Screen Navigation
* Touch-Based User Interface
* Reusable UI Components

---

## Project Workflow

### Login Screen

The login screen allows the user to enter credentials using a custom on-screen keyboard.

**Components**

* User Name Input
* Password Input
* Login Button
* Navigation Buttons

---

### Password Setup Screen

The password setup screen allows users to create or update a password.

It contains two action buttons:

* **System Design**
* **Instruction**

These buttons navigate to their respective screens.

---

### Password Visibility

The password field includes a visibility toggle.

Two states are implemented:

* **Visible** – Displays the entered password.
* **Hidden** – Masks the password with secure characters.

This is implemented by changing the visibility state when the user presses the eye icon.

---

### Custom Keyboard

The project includes a fully customized TouchGFX keyboard.

Features include:

* Touch input
* Character entry
* Number entry
* Backspace support
* Enter/Confirm action

---

### Custom Container

A reusable custom container is created to simplify UI development.

The custom container helps:

* Reduce duplicate code
* Reuse UI components
* Improve project organization
* Maintain a consistent user interface

---

## Screenshots

### Login Screen
<img width="597" height="362" alt="image" src="https://github.com/user-attachments/assets/40551acc-1df5-452d-a7ab-f033ab646811" />



---

### Custom Keyboard

<img width="597" height="337" alt="image" src="https://github.com/user-attachments/assets/b0ca36a8-5900-49b4-9342-119c322caf89" />


### Password Setup

![Password Setup](Assets/password_setup.png)

---

### Password Visibility

<img width="607" height="372" alt="image" src="https://github.com/user-attachments/assets/57a3c013-e182-4367-8559-532b406ff4a4" /> 
<img width="597" height="365" alt="image" src="https://github.com/user-attachments/assets/757e4acf-1b80-4dc0-88a4-870561b9bc00" />

---

### Custom Container

<img width="562" height="232" alt="image" src="https://github.com/user-attachments/assets/dd5aa649-8450-4a5f-814d-5b4f3c86761a" /> <img width="552" height="222" alt="image" src="https://github.com/user-attachments/assets/4075cee8-c99e-4156-b7c5-eba965631e4c" />
<img width="552" height="222" alt="image" src="https://github.com/user-attachments/assets/e93e324e-f72d-49b0-9e4b-16a33cbdcaf8" />
<img width="557" height="225" alt="image" src="https://github.com/user-attachments/assets/4623aa4a-e911-4bc4-8a67-1af12385f431" />


---

## Technologies Used

* TouchGFX
* STM32
* STM32CubeIDE
* C++

---

## Project Structure

```
TouchGFX Project
│
├── Login Screen
├── Password Setup Screen
├── Custom Keyboard
├── Custom Container
├── Navigation Logic
└── Password Visibility Logic
```

---

## Future Improvements

* User authentication
* PIN validation
* Multiple user profiles
* Secure password storage
* Keyboard animations
* Theme support

---

## Author

Developed as a TouchGFX learning project to demonstrate custom UI design, reusable components, and user interaction.
