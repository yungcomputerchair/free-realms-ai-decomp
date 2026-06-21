// addr: 0x01347b90
// name: FUN_01347b90
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_01347b90(int param_1,char param_2)

{
                    /* Sets a byte flag at this+0x264; when the new value is 1 it first clears or
                       resets the member at this+0x54. The caller context is too weak to identify
                       the class or semantic flag. */
  if (param_2 == '\x01') {
    TimeStamp_setCurrentFtime(param_1 + 0x54);
  }
  *(char *)(param_1 + 0x264) = param_2;
  return;
}

