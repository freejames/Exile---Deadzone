// Time Multiplier
// CRE4MPIE
// GamersInc.NET
// Creds to A3W, LouD for help

if (!isServer) exitWith {};

while {true} do
{
    if (daytime >= 18 || daytime < 6) then
    {
    	1500 setFog [0.9,0.05,20];
        setTimeMultiplier 24
    }
    else
    {
        setTimeMultiplier 4
    };


    uiSleep 30;
};