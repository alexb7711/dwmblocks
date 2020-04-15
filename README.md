# Introduction
This is my build of dwmblocks. It is a tool to modify the statis bar for dwm. It has modules for:
1. CPU usage
2. Memory Usage
3. Internet bandwidth in and out
4. Volume level
5. Battery
6. Date
7. Time

# What is dwmblocks?
As described by torrinfail:

> Modular status bar for dwm written in c.
> # modifying blocks
> The statusbar is made from text output from commandline programs.
> Blocks are added and removed by editing the blocks.h header file.

# Dependencies
* DWM
* pulseaudio (uses pactl)

# Running dwmblocks
In your `~/.xinitrc` file put: 

``` bash
dwmblocks 2>&1 >/dev/null &
```
