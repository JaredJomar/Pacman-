# Project_02
# Pacman++ Project 

## Objective

The objective of the "Pacman++ Project" for the CIIC4010/ICOM4015 course was to enhance the popular game Pacman by implementing various features and changes in three phases. The project was due on April 8, 2022.

## Project Overview

In this project, the goal was to add new features and improvements to the Pacman game. The primary focus was on enhancing various aspects of the game, and the project was divided into three phases, each with increasing complexity.

### Phase 1 (Suggested Deadline: March 18)

- **New Map**: Replace the map attribute with a new Map instance when the GameState is reset. The new map instance must be original.
- **Random Ghosts**: Modify the GhostSpawner class to spawn ghosts that are randomly "red," "pink," "cyan," or "orange" when the 'g' key is pressed.
- **Non-Infinite Lives**: Adjust the behavior of the 'm' key so that if Pacman already has three lives, pressing 'm' will not grant an additional life.

### Phase 2 (Suggested Deadline: March 25)

- **Debugging Power Up**: Create an abstract Powerup Class with a virtual activate() method for Pacman. When the spacebar is pressed, the activate method will be called, triggering a power-up effect. The choice of the power-up is up to the team.
- **Win State**: Implement a "WinState" class. When all dots on the map are collected, the current state should change to "WinState" (triggered by pressing 'y' on the keyboard).
- **Pause State**: Create a "PauseState" class. This state should activate when the 'p' key is pressed and provide options to resume or quit the game.

### Phase 3 (Suggested Deadline: April 8)

- **Cherry Power Up**: Create a subclass of Powerup called "CherryPowerUp." When activated, this power-up will teleport Pacman to a random location on the map when he eats a cherry.
- **Strawberry Power Up**: Create a subclass of Powerup called "StrawberryPowerUp." When activated, this power-up makes Pacman briefly invisible and invincible, allowing him to dodge ghosts. It's activated when he eats a strawberry.
- **Random Power Ups**: Develop a "RandomPowerUp" subclass of Powerup that grants the player extra points. It must appear in random positions with unique sprites, excluding cherries and strawberries.
- **Choose Player State**: Implement a "ChoosePlayerState" where players can select their character (e.g., Pacman or Ms. Pacman) and influence how the sprite looks within the map.

## Project Notes

- Teams consisted of two students and used GitHub Classroom for collaboration.
- Personal repositories were not graded, and teamwork was highly emphasized.
- Best practices from Git and GitHub labs were encouraged, including using branches for different features.
- Communication and collaboration between team members were essential, with regular meetings suggested.
- Professionalism in collaboration was emphasized, considering future potential coworking opportunities and references.
- A structured approach to problem-solving was outlined in case issues arose with team members.
