#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>

// prints the flame and
// prints the snout of the dragon and
// prints the tips of the wings
void printFlame()
{
   printf("\n\n\n\n\n\n");
   printf("                 .\"-,.__\n");
   printf("                 `.     `.  ,\n");
   printf("              .--'  .._,'\"-' `.\n");
   printf("             .    .'         `'\n");
   printf("             `.   /          ,'\n");
   printf("               `  '--.   ,-\"'\n");
   printf("                `\"`   |  \\\n");
   printf("                   -. \\, |\n");
   printf("                    `--Y.'      ___.\n");
   printf("                         \\     L._, \\\n");
   printf("               _.,        `.   <  <\\                _\n");
   printf("             ,' '           `, `.   | \\            ( `\n");
   printf("          ../, `.            `  |    .\\`.           \\ \\_\n");
}

// prints the 3d dragon text and
// prints the snout of the dragon and
// prints the tips of the wings
void print3DText()
{
   printf("                                                       ,----..            ,--. \n");
   printf("    ,---,    ,-.----.      ,---,         ,----..      /   /   \\         ,--.'| \n");
   printf("  .'  .' `\\  \\    /  \\    '  .' \\       /   /   \\    /   .     :    ,--,:  : | \n");
   printf(",---.'     \\ ;   :    \\  /  ;    '.    |   :     :  .   /   ;.  \\,`--.'`|  ' : \n");
   printf("|   |  .`\\  ||   | .\\ : :  :       \\   .   |  ;. / .   ;   /  ` ;|   :  :  | | \n");
   printf(":   : |  '  |.   : |: | :  |   /\\   \\  .   ; /--`  ;   |  ; \\ ; |:   |   \\ | : \n");
   printf("|   ' '  ;  :|   |  \\ : |  :  ' ;.   : ;   | ;  __ |   :  | ; | '|   : '  '; | \n");
   printf("'   | ;  .  ||   : .  / |  |  ;/  \\   \\|   : |.' .'.   |  ' ' ' :'   ' ;.    ; \n");
   printf("|   | :  |  ';   | |  \\ '  :  | \\  \\ ,'.   | '_.' :'   ;  \\; /  ||   | | \\   | \n");
   printf("'   : | /  ; |   | ;\\  \\|  |  '  '--'  '   ; : \\  | \\   \\  ',  / '   : |  ; .' \n");
   printf("|   | '` ,/  :   ' | \\.|  :  :        '   | '/  .'  ;   :    /  |   | '`--'   \n");
   printf(";   :  .'    :   : :-'  |  | ,'        |   :    /     \\   \\ .'   '   : |       \n");
   printf("|   ,.'      |   |.'    `--''           \\   \\ .'       `---`     ;   |.'       \n");
   printf("'---'        `---'                       `---`                   '---'        \n");
   printf("                                ___.\n");
   printf("                               L._, \\\n");
   printf("               _.,             <  <\\                _\n");
   printf("             ,' '              `.   | \\            ( `\n");
   printf("          ../, `.               |    .\\`.           \\ \\_\n");
}

// prints the dragon without the snout and
// without the tips of the wings
void printDragon()
{
   printf("         ,' ,..  .           _.,'    ||\\l            )  '\".\n");
   printf("        , ,'   \\           ,'.-.`-._,'  |           .  _._`.\n");
   printf("      ,' /      \\ \\        `' ' `--/   | \\          / /   ..\\\n");
   printf("    .'  /        \\ .         |\\__ - _ ,'` `        / /     `.`.\n");
   printf("    |  '          ..         `-...-\"  |  `-'      / /        . `.\n");
   printf("    | /           |L__           |    |          / /          `. `.\n");
   printf("   , /            .   .          |    |         / /             ` \\\n");
   printf("  / /          ,. ,`._ `-_       |    |  _   ,-' /               ` \\\n");
   printf(" / .           \"`_/. `-_ \\_,.  ,'    +-' `-'  _,        ..,-.    \\`.\n");
   printf(".  '         .-f    ,'   `    '.       \\__.---'     _   .'   '     \\ \\\n");
   printf("' /          `.'    l     .' /          \\..      ,_|/   `.  ,'`     L`\n");
   printf("|'      _.-\"\"` `.    \\ _,'  `            \\ `.___`.\"\"`-.  , |   |    | \\\n");
   printf("||    ,'      `. `.   '       _,...._        `  |    `/ '  |   '     .|\n");
   printf("||  ,'          `. ;.,.---' ,'       `.   `.. `-'  .-' /_ .'    ;_   ||\n");
   printf("|| '              V      / /           `   | `   ,'   ,' '.    !  `. ||\n");
   printf("||/            _,-------7 '              . |  `-'    l         /    `||\n");
   printf(". |          ,' .-   ,' ||               | .-.        `.      .'     ||\n");
   printf("`'        ,'    `\".'    |               |    `.        '. -.'       `'\n");
   printf("          /      ,'      |               |,'    \\-.._,.'/\n");
   printf("          .     /        .               .       \\    .''\n");
   printf("        .`.    |         `.             /         :_,'.'\n");
   printf("          \\ `...\\   _     ,'-.        .'         /_.-'\n");
   printf("           `-.__ `,  `'   .  _.>----''.  _  __  /\n");
   printf("                .'        /\"'          |  '\"   '_\n");
   printf("               /_|.-'\\ ,\".             '.'`__'-( \\\n");
   printf("                 / ,\"'\\,'               `/  `-.|\"\n");
}

int main()
{
   // controls dragon flame
   bool flame_is_on = true;

   // loops through time sequence
   for (int i = 0; i < 10; i++)
   {
      // clear previous "image"
      system("clear");
      // print dragon with flame
      // print dragon without 3d text
      if (flame_is_on)
      {
         printFlame();
         printDragon();
      }
      // print dragon without flame
      // print dragon with 3d text
      else
      {
         print3DText();
         printDragon();
      }
      // switch
      flame_is_on = !flame_is_on;
      // suspends execution of the calling thread for
      // 500k microseconds / 0.5 seconds
      usleep(500000);
   }
   // yeah
   printf("\nA compiler written in C.\n");
   printf("Designed by Christopher Francisco.\n");
   return 0;
}
