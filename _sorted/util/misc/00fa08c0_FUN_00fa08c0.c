// addr: 0x00fa08c0
// name: FUN_00fa08c0
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall FUN_00fa08c0(undefined4 *param_1)

{
                    /* Initializes a small Login/GameServerData-related holder with default value
                       0xf and calls the GameServerData constructor/helper. No exact class evidence.
                        */
  *param_1 = 0xf;
  Login_GameServerData_ref_ctor();
  return param_1;
}

