#include <iostream>
#include <fstream>
#include <cstdlib>
#include "../objects/item/Item.hpp"
#include "../playercore/Player.hpp"
#include "../playercore/Equipe.hpp"
#include "../evolution/evolutionInclude.hxx"
#include "../../utils/Class.hpp"
#include "../../utils/File.hpp"

#include "main.hpp"
//#include "srcCpp/jlppc/regimys/gui/MainFrame.hpp"

using namespace std;




namespace Main{
void Main::gererErreur(string errorName, bool fatal){
    errLog << "Erreur : " << errorName << endl;
    if(fatal){
        errLog << "Erreur fatale." << endl;
        Main::log.close();
        errLog.close();
        quit(1);
    }
}

int Main::quit(int returne){
	Main::log.close();
    errLog.close();
    exit(returne);
    return returne;
}
int Main::main(){

#ifdef WINDOWS
       File errLogF = File("logs\\errLog.txt");
       File logF = File("logs\\log.txt");
#else
       File errLogF = File("logs/errLog.txt");
       File logF = File("logs/log.txt");
#endif

       Main::log = *logF.getOut();
       errLog = *errLogF.getOut();
       if(!log || !errLog){
           exit(2);
       }

       //MainFrame.open();

       return quit(0);
   }

}
int main()
{
	initStatic();
    return Main::main();
}

void initStatic(void){
	E_Level::classe = new Class<E_Level>("E_Level", 7964684);
	E_Item::classe = new Class<E_Item>("E_Item", 3644954);
	E_Land::classe = new Class<E_Land>("E_Land", 0xEEEEE);
	Equipe::PNULL = new Pokemon();
	Item::initItems();
	Player::bagSize = Item::getItemNumber();
}
