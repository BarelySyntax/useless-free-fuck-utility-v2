# The Useless Fuck Utility

I made the useless fuck utility, in my free time. It's really useless and worthless, i prefer placing it in `/bin/` for systemwide effects or simply `~/.local/bin/` so that it can easily be accessed, the license is GPLv3 (obviously).

# USAGE
Open the terminal and type in (assuming it is in `/bin/` or `~/.local/bin/`):

`$ fuck <name> #Name anything really!`

Example output:

`Alice was piped into until buffer overflow`

`Table got pointer dereferenced unsafely`

**With the latest v2 feature (create your own format!)**

`$ fuck <name> "[{name}]: {phrase}."`

`$ fuck <name> "{name}<--->{phrase}!!!"`

Example output:

`[Alice]: was piped into until buffer overflow.`

`Table<--->got pointer dereferenced unsafely!!!`

# Useless Information
I will also provide a x86_64 pre-compiled version for Linux only, if you are on other operating systems. You unfortunately need to compile it from source.

To use the **pre-compiled binary** (named `fuck`):

```bash
# 1. Give it executable permission
$ chmod +x fuck

# 2. Run it directly
$ ./fuck <name>
```

To apply **systemwide** (requires root privileges, assuming root. Use `sudo` if you are a user, and assuming you are in the directory where `fuck` is located.)

```bash
# 1. Copy to /bin/
$ cp ./fuck /bin/fuck
```
To apply for **user-specific** access (assuming you are in the directory where `fuck` is located.)

```bash
# 1. Create the directory if it doesn't exist (optional, but safe)
$ mkdir -p ~/.local/bin/

# 2. Copy the executable to your local binary directory
$ cp ./fuck ~/.local/bin/fuck
```

# Contributing

This is a GPLv3-licensed project. Feel free to fork and add more absurd technical phrases or simply improvements!

# Compiling from Source (The Cross-Platform Way)

If you are on an operating system other than Linux x86-64, or prefer to compile the latest source:

1.  **Install CMake** (version 3.10 or higher) and a C++ compiler (GCC, Clang, or MSVC).
2.  Navigate to the repository root in your terminal and run the following commands:

```bash
# 1. Clone the github repository
$ git clone https://github.com/CompliantCompiler-CC/useless-free-fuck-utility-v2.git
$ cd useless-free-fuck-utility-v2

# 2. Create a build directory (standard practice)
$ mkdir build
$ cd build

# 3. Configure CMake (This generates the build files for your OS/Compiler)
$ cmake ..

# 4. Build the utility (This runs the compilation)
$ cmake --build .

# 5. Run the executable from the build directory
$ ./fuck <name>
