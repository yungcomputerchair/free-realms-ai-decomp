// addr: 0x00742d10
// name: FUN_00742d10
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_00742d10(int param_1)

{
                    /* Lazy getter for cached graphics/resource field at offset 0x14; triggers
                       rebuild via FUN_007589d0 if the dirty/valid byte at 0x41 is clear. */
  if (*(char *)(param_1 + 0x41) == '\0') {
    FUN_007589d0();
  }
  return *(undefined4 *)(param_1 + 0x14);
}

