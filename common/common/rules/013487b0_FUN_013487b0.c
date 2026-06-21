// addr: 0x013487b0
// name: FUN_013487b0
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_013487b0(int param_1)

{
                    /* Returns the 32-bit field at offset 0x134 from the object; callers use it
                       around game/shuffle/state transitions but no class or semantic name is
                       evident. */
  return *(undefined4 *)(param_1 + 0x134);
}

