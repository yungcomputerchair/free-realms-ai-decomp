// addr: 0x00764c50
// name: FUN_00764c50
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00764c50(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
                    /* Replaces a ref-counted pointer stored at this+0xc, increments the incoming
                       object, releases the old one, invokes a vtable callback on the new object,
                       and notifies if the owner is active. Exact class is not evident. */
  if (param_2 != (int *)0x0) {
    LOCK();
    param_2[1] = param_2[1] + 1;
    UNLOCK();
    (**(code **)(*param_2 + 8))(param_1);
  }
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 != (int *)0x0) {
    LOCK();
    iVar2 = piVar1[1] + -1;
    piVar1[1] = iVar2;
    UNLOCK();
    if (iVar2 == 0) {
      (**(code **)(*piVar1 + 4))();
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  *(int **)(param_1 + 0xc) = param_2;
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00735a30();
  }
  return;
}

