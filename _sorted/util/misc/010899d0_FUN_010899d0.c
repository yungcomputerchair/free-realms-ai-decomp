// addr: 0x010899d0
// name: FUN_010899d0
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_010899d0(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
                    /* Computes and caches the lowest-timestamp/priority matching entry from an
                       object list by looking up each id in a global table. No exact class evidence.
                        */
  FUN_01045d50();
  iVar5 = FUN_01045c80();
  *(undefined1 *)(param_1 + 0x134) = 1;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  iVar1 = *(int *)(param_1 + 0x108);
  do {
    if (iVar1 == 0) {
      return;
    }
    uVar2 = *(uint *)(iVar1 + 4);
    for (puVar3 = *(undefined4 **)(iVar5 + 0x10 + (uVar2 % 10) * 4); puVar3 != (undefined4 *)0x0;
        puVar3 = (undefined4 *)*puVar3) {
      if (puVar3[1] == uVar2) {
        if ((puVar3 != (undefined4 *)0x0) &&
           ((iVar4 = puVar3[0x28], *(int *)(param_1 + 0x138) == 0 ||
            (iVar4 < *(int *)(param_1 + 0x13c))))) {
          *(uint *)(param_1 + 0x138) = uVar2;
          *(int *)(param_1 + 0x13c) = iVar4;
        }
        break;
      }
    }
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) {
      return;
    }
  } while( true );
}

