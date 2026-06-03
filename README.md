# Lab 7 - Simple Shooter Modifications

This repository contains my Lab 7 project for CPSC 440 Game Programming.

## Description

This lab modifies the Simple Shooter starter project. The project uses Allegro, player objects, weapons, and bad guys. For Lab 7, I added collision detection, directional player drawing, directional shooting, and bad guy spawn checking.

## Features

- Player moves up, down, left, and right
- Player shows a direction marker/cannon based on the last direction moved
- Weapon fires in the direction the player last moved
- Bullets keep moving in the direction they were fired
- Player cannot move through a bad guy
- Bad guys stay on screen as obstacles
- Bad guys do not spawn on top of each other
- Weapons can still collide with and remove bad guys
- Allegro timer keeps the game updating at 60 frames per second
- Escape key closes the game

## Controls

- Up Arrow: Move player up
- Down Arrow: Move player down
- Left Arrow: Move player left
- Right Arrow: Move player right
- Spacebar: Fire weapon
- Escape: Close the game

## Project Files

- `ShooterGame.cpp` - Main game loop, input handling, timer setup, movement, and collision checks
- `player.h` - Player class definition
- `player.cpp` - Player movement, direction tracking, and drawing
- `weapon.h` - Weapon class definition
- `weapon.cpp` - Weapon firing, movement, and bad guy collision
- `BadGuy.h` - Bad guy class definition
- `BadGuy.cpp` - Bad guy drawing and spawn placement logic

## How to Run

1. Open the `.sln` file in Visual Studio.
2. Restore NuGet packages if Visual Studio asks.
3. Make sure Allegro is installed through NuGet.
4. Make sure the required Allegro add-ons are enabled:
   - Primitives Addon
   - Image Addon
5. Build and run the project.
6. Use the arrow keys to move and press Spacebar to shoot.

## Author

Christian Toliver
