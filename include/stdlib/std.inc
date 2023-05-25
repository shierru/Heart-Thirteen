#if defined _std_included
	#endinput
#endif
#define _std_included

#define YSI_YES_HEAP_MALLOC

#include <YSI_Server/y_scriptinit>
#include <YSI_Server/y_flooding>

public OnScriptInit() {
	SetMaxConnections(1, e_FLOOD_ACTION_FBAN);

    print(" ==========================================  ");
    print(" ||   ooooooo   ooooooo   ooooooooooooo  ||  ");
    print(" ||    88888     88888        88888      ||  ");
    print(" ||    88888     88888        88888      ||  ");   
    print(" ||    8888oooooo88888        88888      ||  ");   
    print(" ||    88888     88888        88888      ||  ");   
    print(" ||    88888     88888        88888      ||  ");   
    print(" ||   o88888o   o88888o      o88888o     ||  ");
    print(" ==========================================  ");
}