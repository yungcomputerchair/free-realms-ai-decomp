// addr: 0x0142a7e0
// name: CommandObject_getDurationMap
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __fastcall CommandObject_getDurationMap(int param_1)

{
                    /* Returns the address of a CommandObject subobject at offset 0x48, used by Game
                       command duration/expiration routines. */
  return param_1 + 0x48;
}

