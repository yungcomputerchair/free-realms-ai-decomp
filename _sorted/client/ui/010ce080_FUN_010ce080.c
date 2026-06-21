// addr: 0x010ce080
// name: FUN_010ce080
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_010ce080(int param_1,undefined4 param_2)

{
                    /* Stores a value at this+0x178 and marks a dirty/valid flag at this+0x189. The
                       owning UI class and field meaning are not identified. */
  *(undefined4 *)(param_1 + 0x178) = param_2;
  *(undefined1 *)(param_1 + 0x189) = 1;
  return;
}

