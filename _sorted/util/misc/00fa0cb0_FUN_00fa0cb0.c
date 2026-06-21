// addr: 0x00fa0cb0
// name: FUN_00fa0cb0
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_00fa0cb0(undefined4 param_1)

{
                    /* Trivial wrapper that invokes the GameServerData constructor/helper and
                       returns its input unchanged. No exact class evidence. */
  Login_GameServerData_ref_ctor();
  return param_1;
}

