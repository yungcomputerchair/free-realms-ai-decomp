// addr: 0x0081f480
// name: FUN_0081f480
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_0081f480(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iStack_4;
  
                    /* Registers a UI object by the hash/id returned from its vfunc +0x28, skipping
                       insertion if that id is already in the 128-bucket table at this+0xddf0. The
                       manager class is unknown. */
  piVar2 = param_2;
  if (param_2 != (int *)0x0) {
    iStack_4 = param_1;
    uVar3 = (**(code **)(*param_2 + 0x28))();
    for (iVar1 = *(int *)(param_1 + 0xddf0 + (uVar3 & 0x7f) * 4); iVar1 != 0;
        iVar1 = *(int *)(iVar1 + 0x10)) {
      if (*(uint *)(iVar1 + 0xc) == uVar3) {
        return;
      }
    }
    param_2 = (int *)(**(code **)(*piVar2 + 0x28))();
    iStack_4 = (**(code **)(*piVar2 + 0x28))();
    FUN_0081ddc0(&iStack_4,&param_2);
  }
  return;
}

