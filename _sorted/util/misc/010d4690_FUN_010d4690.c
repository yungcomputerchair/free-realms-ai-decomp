// addr: 0x010d4690
// name: FUN_010d4690
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_010d4690(int param_1)

{
  int iVar1;
  int iVar2;
  
                    /* Marks all entries from an owned collection as dirty/active by iterating
                       virtual count, fetching each entry, and setting flags. No class evidence. */
  *(undefined1 *)(param_1 + 0x2c5) = 1;
  if (*(int *)(param_1 + 0x2c0) != 0) {
    iVar2 = 0;
    iVar1 = (*(code *)**(undefined4 **)(*(int *)(param_1 + 0x2c0) + 0x30))();
    if (0 < iVar1) {
      do {
        iVar1 = FUN_010d44f0(iVar2,1);
        if ((iVar1 != 0) && (*(char *)(iVar1 + 4) != '\x01')) {
          *(undefined1 *)(iVar1 + 4) = 1;
          *(undefined1 *)(param_1 + 0x2c4) = 1;
        }
        iVar2 = iVar2 + 1;
        iVar1 = (*(code *)**(undefined4 **)(*(int *)(param_1 + 0x2c0) + 0x30))();
      } while (iVar2 < iVar1);
    }
  }
  return;
}

