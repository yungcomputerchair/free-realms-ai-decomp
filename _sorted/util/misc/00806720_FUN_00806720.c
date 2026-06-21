// addr: 0x00806720
// name: FUN_00806720
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_00806720(int param_1)

{
  int *piVar1;
  int iVar2;
  
                    /* Releases two reference-counted texture/resource pointers at offsets 0x10 and
                       0x40 and clears a trailing field. No direct class evidence in this ctx, so
                       left unnamed. */
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 != (int *)0x0) {
    LOCK();
    iVar2 = piVar1[1] + -1;
    piVar1[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      (**(code **)(*piVar1 + 4))();
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x40);
  if (piVar1 != (int *)0x0) {
    LOCK();
    iVar2 = piVar1[1] + -1;
    piVar1[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      (**(code **)(*piVar1 + 4))();
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  return;
}

