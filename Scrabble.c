#include "body.c"

int main() {
    start(&i);
    switch(i) {
    	case 1:
    		twoPlayers(PLAYER1);
    		break;
    	case 2:
    		alertExit();
    		break;
    	default:
    		invalidChoose();
    		backToMain();
	}

    return 0;
}

