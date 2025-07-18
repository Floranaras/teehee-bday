# teehee-bday 🎂

A fun CLI tool that displays ASCII art birthday messages using C recursion!

## Features

- Clean ASCII art "Happy Birthday" message
- Typewriter effect with recursive character-by-character printing
- Lightweight and fast
- Perfect for surprising friends in the terminal

## Installation

### From AUR (Arch Linux)
```bash
yay -S teehee-bday
```

### Manual Installation
```bash
git clone https://github.com/Floranaras/teehee-bday.git
cd teehee-bday
gcc -o teehee-bday birthday.c
./teehee-bday
```

## Usage

Simply run:
```bash
teehee-bday
```

Watch the recursive typewriter effect spell out a birthday message!

## Building

```bash
gcc -o teehee-bday birthday.c -O2
```

## License

MIT License
