// includes the function that get's all of the cards it needs
// cards from https://www.asciiart.eu/miscellaneous/playing-cards
//       by ejm98
#include <string>

using namespace std;


string cardback[6] = {   " _____ "
                        ,"|\\ ~ /|"
                        ,"|}}:{{|"
                        ,"|}}:{{|"
                        ,"|}}:{{|"
                        ,"|/_~_\\|"};
//Use this for HQ, but if have time, let's make it look cooler
string joker[6] = {      " _____ "
                        ,"|Joker|"
                        ,"|==%, |"
                        ,"| \\/>\\|"
                        ,"| _>^^|"
                        ,"|/_\\/_|"};
      
string spades[13][6] = {{    " _____ "
                            ,"|A .  |"
                            ,"| /.\\ |"
                            ,"|(_._)|"
                            ,"|  |  |"
                            ,"|____V|"}
                        ,{   " _____ "
                            ,"|2    |"
                            ,"|  ^  |"
                            ,"|     |"
                            ,"|  ^  |"
                            ,"|____Z|"}

                        ,{   " _____ "
                            ,"|3    |"
                            ,"| ^ ^ |"
                            ,"|     |"
                            ,"|  ^  |"
                            ,"|____E|"}

                        ,{   " _____ "
                            ,"|4    |"
                            ,"| ^ ^ |"
                            ,"|     |"
                            ,"| ^ ^ |"
                            ,"|____h|"}

                        ,{   " _____ "
                            ,"|5    |"
                            ,"| ^ ^ |"
                            ,"|  ^  |"
                            ,"| ^ ^ |"
                            ,"|____S|"}

                        ,{   " _____ "
                            ,"|6    |"
                            ,"| ^ ^ |"
                            ,"| ^ ^ |"
                            ,"| ^ ^ |"
                            ,"|____9|"}

                        ,{   " _____ "
                            ,"|7    |"
                            ,"| ^ ^ |"
                            ,"|^ ^ ^|"
                            ,"| ^ ^ |"
                            ,"|____L|"}

                        ,{   " _____ "
                            ,"|8    |"
                            ,"|^ ^ ^|"
                            ,"| ^ ^ |"
                            ,"|^ ^ ^|"
                            ,"|____8|"}

                        ,{   " _____ "
                            ,"|9    |"
                            ,"|^ ^ ^|"
                            ,"|^ ^ ^|"
                            ,"|^ ^ ^|"
                            ,"|____6|"}

                        ,{   " _____ "
                            ,"|10 ^ |"
                            ,"|^ ^ ^|"
                            ,"|^ ^ ^|"
                            ,"|^ ^ ^|"
                            ,"|___0I|"}

                        ,{   " _____ "
                            ,"|J  ww|"
                            ,"| ^ {)|"
                            ,"|(.)% |"
                            ,"| | % |"
                            ,"|__%%[|"}

                        ,   {" _____ "
                            ,"|Q  ww|"
                            ,"| ^ {(|"
                            ,"|(.)%%|"
                            ,"| |%%%|"
                            ,"|_%%%O|"}

                       ,{    " _____ "
                            ,"|K  WW|"
                            ,"| ^ {)|"
                            ,"|(.)%%|"
                            ,"| |%%%|"
                            ,"|_%%%>|"}};
   
      
string clubs[13][6] = {{     " _____ "
                            ,"|A _  |"
                            ,"| ( ) |"
                            ,"|(_'_)|"
                            ,"|  |  |"
                            ,"|____V|"}
    
                        ,{   " _____ "
                            ,"|2    |"
                            ,"|  &  |"
                            ,"|     |"
                            ,"|  &  |"
                            ,"|____Z|"}

                        ,{   " _____ "
                            ,"|3    |"
                            ,"| & & |"
                            ,"|     |"
                            ,"|  &  |"
                            ,"|____E|"}

                        ,{   " _____ "
                            ,"|4    |"
                            ,"| & & |"
                            ,"|     |"
                            ,"| & & |"
                            ,"|____h|"}
                        
                        ,{   " _____ "
                            ,"|5    |"
                            ,"| & & |"
                            ,"|  &  |"
                            ,"| & & |"
                            ,"|____S|"}
                        
                        ,{   " _____ "
                            ,"|6    |"
                            ,"| & & |"
                            ,"| & & |"
                            ,"| & & |"
                            ,"|____9|"}

                        ,{   " _____ "
                            ,"|7    |"
                            ,"| & & |"
                            ,"|& & &|"
                            ,"| & & |"
                            ,"|____L|"}

                        ,{   " _____ "
                            ,"|8    |"
                            ,"|& & &|"
                            ,"| & & |"
                            ,"|& & &|"
                            ,"|____8|"}

                        ,{   " _____ "
                            ,"|9    |"
                            ,"|& & &|"
                            ,"|& & &|"
                            ,"|& & &|"
                            ,"|____6|"}

                        ,{   " _____ "
                            ,"|10 & |"
                            ,"|& & &|"
                            ,"|& & &|"
                            ,"|& & &|"
                            ,"|___0I|"}

                        ,{   " _____ "
                            ,"|J  ww|"
                            ,"| o {)|"
                            ,"|o o% |"
                            ,"| | % |"
                            ,"|__%%[|"}

                        ,{   " _____ "
                            ,"|Q  ww|"
                            ,"| o {(|"
                            ,"|o o%%|"
                            ,"| |%%%|"
                            ,"|_%%%O|"}
                        ,{   " _____ "
                            ,"|K  WW|"
                            ,"| o {)|"
                            ,"|o o%%|"
                            ,"| |%%%|"
                            ,"|_%%%>|"}};

string hearts[13][6] = {{    " _____ "
                            ,"|A_ _ |"
                            ,"|( v )|"
                            ,"| \\ / |"
                            ,"|  .  |"
                            ,"|____V|"}
                            
                        ,{   " _____ "
                            ,"|2    |"
                            ,"|  v  |"
                            ,"|     |"
                            ,"|  v  |"
                            ,"|____Z|"}
                        
                        ,{   " _____ "
                            ,"|3    |"
                            ,"| v v |"
                            ,"|     |"
                            ,"|  v  |"
                            ,"|____E|"}
                        
                        ,{   " _____ "
                            ,"|4    |"
                            ,"| v v |"
                            ,"|     |"
                            ,"| v v |"
                            ,"|____h|"}
                        
                        ,{   " _____ "
                            ,"|5    |"
                            ,"| v v |"
                            ,"|  v  |"
                            ,"| v v |"
                            ,"|____S|"}
                        
                        ,{   " _____ "
                            ,"|6    |"
                            ,"| v v |"
                            ,"| v v |"
                            ,"| v v |"
                            ,"|____9|"}
                        
                        ,{   " _____ "
                            ,"|7    |"
                            ,"| v v |"
                            ,"|v v v|"
                            ,"| v v |"
                            ,"|____L|"}
                        
                        ,{   " _____ "
                            ,"|8    |"
                            ,"|v v v|"
                            ,"| v v |"
                            ,"|v v v|"
                            ,"|____8|"}
                            
                        ,{   " _____ "
                            ,"|9    |"
                            ,"|v v v|"
                            ,"|v v v|"
                            ,"|v v v|"
                            ,"|____6|"}
                        
                        ,{   " _____ "
                            ,"|10 v |"
                            ,"|v v v|"
                            ,"|v v v|"
                            ,"|v v v|"
                            ,"|___0I|"}
                        
                        ,{   " _____ "
                            ,"|J  ww|"
                            ,"|   {)|"
                            ,"|(v)% |"
                            ,"| v % |"
                            ,"|__%%[|"}
                            
                        ,{   " _____ "
                            ,"|Q  ww|"
                            ,"|   {(|"
                            ,"|(v)%%|"
                            ,"| v%%%|"
                            ,"|_%%%O|"}
                            
                        ,{   " _____ "
                            ,"|K  WW|"
                            ,"|   {)|"
                            ,"|(v)%%|"
                            ,"| v%%%|"
                            ,"|_%%%>|"}   };

string diamonds[13][6] = {{  " _____ "
                            ,"|A ^  |"
                            ,"| / \\ |"
                            ,"| \\ / |"
                            ,"|  .  |"
                            ,"|____V|"}
                            
                        ,{   " _____ "
                            ,"|2    |"
                            ,"|  o  |"
                            ,"|     |"
                            ,"|  o  |"
                            ,"|____Z|"}
                            
                        ,{   " _____ "
                            ,"|3    |"
                            ,"| o o |"
                            ,"|     |"
                            ,"|  o  |"
                            ,"|____E|"}
                        
                        ,{   " _____ "
                            ,"|4    |"
                            ,"| o o |"
                            ,"|     |"
                            ,"| o o |"
                            ,"|____h|"}
                            
                        ,{   " _____ "
                            ,"|5    |"
                            ,"| o o |"
                            ,"|  o  |"
                            ,"| o o |"
                            ,"|____S|"}
                            
                        ,{   " _____ "
                            ,"|6    |"
                            ,"| o o |"
                            ,"| o o |"
                            ,"| o o |"
                            ,"|____9|"}
                            
                        ,{   " _____ "
                            ,"|7    |"
                            ,"| o o |"
                            ,"|o o o|"
                            ,"| o o |"
                            ,"|____L|"}
                            
                        ,{   " _____ "
                            ,"|8    |"
                            ,"|o o o|"
                            ,"| o o |"
                            ,"|o o o|"
                            ,"|____8|"}

                        ,{   " _____ "
                            ,"|9    |"
                            ,"|o o o|"
                            ,"|o o o|"
                            ,"|o o o|"
                            ,"|____6|"}
                            
                        ,{   " _____ "
                            ,"|10 o |"
                            ,"|o o o|"
                            ,"|o o o|"
                            ,"|o o o|"
                            ,"|___0I|"}
                            
                        ,{   " _____ "
                            ,"|J  ww|"
                            ,"| /\\{)|"
                            ,"| \\/% |"
                            ,"|   % |"
                            ,"|__%%[|"}
                            
                        ,{   " _____ "
                            ,"|Q  ww|"
                            ,"| /\\{(|"
                            ,"| \\/%%|"
                            ,"|  %%%|"
                            ,"|_%%%O|"}
                            
                        ,{   " _____ "
                            ,"|K  WW|"
                            ,"| /\\{)|"
                            ,"| \\/%%|"
                            ,"|  %%%|"
                            ,"|_%%%>|"}};