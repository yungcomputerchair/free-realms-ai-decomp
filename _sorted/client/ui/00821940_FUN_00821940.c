// addr: 0x00821940
// name: FUN_00821940
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_00821940(int param_1)

{
                    /* Releases and clears an owned pointer at this+0x50 when state bits 1 and 2 are
                       both set in flags at this+0x4c. The field's UI meaning is unknown. */
  if (((byte)*(undefined4 *)(param_1 + 0x4c) & 6) == 6) {
    if (*(undefined4 **)(param_1 + 0x50) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x50))(1);
    }
    *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xfffffff9;
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return;
}

