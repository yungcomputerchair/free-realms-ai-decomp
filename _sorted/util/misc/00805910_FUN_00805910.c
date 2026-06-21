// addr: 0x00805910
// name: FUN_00805910
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00805910(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
                    /* Releases three reference-counted pointers at offsets 0x20/0x60/0xa0 using
                       locked decrement and virtual destroy-on-zero, then clears a state
                       byte/global-backed value. No class evidence, so left unnamed. */
  piVar1 = *(int **)(param_1 + 0x20);
  if (piVar1 != (int *)0x0) {
    LOCK();
    iVar2 = piVar1[1] + -1;
    piVar1[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      (**(code **)(*piVar1 + 4))();
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x60);
  if (piVar1 != (int *)0x0) {
    LOCK();
    iVar2 = piVar1[1] + -1;
    piVar1[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      (**(code **)(*piVar1 + 4))();
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  piVar1 = *(int **)(param_1 + 0xa0);
  if (piVar1 != (int *)0x0) {
    LOCK();
    iVar2 = piVar1[1] + -1;
    piVar1[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      (**(code **)(*piVar1 + 4))();
    }
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  uVar3 = _DAT_0175b420;
  *(undefined1 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xd0) = uVar3;
  return;
}

