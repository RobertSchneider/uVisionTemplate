//*******************************************************************
#include "lib.h"

cHwPinConfig::MAP cHwPinConfig::table[] = 
{
	END_OF_TABLE
};

cHwPort_N portD(cHwPort_N::PD);
cDevDigital led(portD, 15, cDevDigital::Out, 0);

//*******************************************************************
int main(void)
{
	led.set(1);
	while(1);
}

//EOF
