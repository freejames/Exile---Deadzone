{
    _code = compileFinal (preprocessFileLineNumbers (_x select 1));
    missionNamespace setVariable [(_x select 0), _code];
}
forEach
[
    ['GM_SetPitchBankYaw', 'Functions\GM_SetPitchBankYaw.sqf']
];