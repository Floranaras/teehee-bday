#include <stdio.h>
#include <unistd.h>

const char* birthday_lines[] = {
    "  _  _                       ___ _     _   _       _           ",
    " | || |__ _ _ __ _ __ _  _  | _ |_)_ _| |_| |_  __| |__ _ _  _ ",
    " | __ / _` | '_ \\ '_ \\ || | | _ \\ | '_|  _| ' \\/ _` / _` | || |",
    " |_||_\\__,_| .__/ .__/\\_, | |___/_|_|  \\__|_||_\\__,_\\__,_|\\_, |",
    "           |_|  |_|   |__/                                |__/ ",
    "",
    "                             ████████╗███████╗███████╗██╗  ██╗███████╗███████╗",
    "                             ╚══██╔══╝██╔════╝██╔════╝██║  ██║██╔════╝██╔════╝",
    "                                ██║   █████╗  █████╗  ███████║█████╗  █████╗",
    "                                ██║   ██╔══╝  ██╔══╝  ██╔══██║██╔══╝  ██╔══╝",
    "                                ██║   ███████╗███████╗██║  ██║███████╗███████╗",
    "                                ╚═╝   ╚══════╝╚══════╝╚═╝  ╚═╝╚══════╝╚══════╝",
    "",
    "                               🎉 Have an amazing day! 🎂",
    ""
};

int getLineCount() 
{
    return sizeof(birthday_lines) / sizeof(birthday_lines[0]);
}

void printLine (const char* line, int char_index) 
{
    if (line[char_index] == '\0') 
    {
        printf("\n");
        return;
    }
    
    printf("%c", line[char_index]);
    fflush(stdout);
    
    usleep(5000);
    
    printLine(line, char_index + 1);
}

void typewriter (int line_index, int total_lines) 
{
    if (line_index >= total_lines)
        return;
    
    printLine(birthday_lines[line_index], 0);
    
    typewriter(line_index + 1, total_lines);
}

int main() 
{
    int total_lines = getLineCount();
    
    sleep(1);
    
    typewriter(0, total_lines);
    
    printf("\n🎈 Hope your day is as awesome as you are, Teehee! 🎈\n");
    
    return 0;
}
