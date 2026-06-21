// addr: 0x00435ba2
// name: FUN_00435ba2
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined1 __thiscall FUN_00435ba2(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  if ((param_2 == 0) ||
     ((*(int *)(param_2 + 0x48) != 0 &&
      (uVar4 = thunk_FUN_00409711(),
      (uint)((ulonglong)uVar4 >> 0x20) != (-(uint)((int)uVar4 != 0) & (int)uVar4 + 0x24U))))) {
    uVar1 = 0;
  }
  else {
    iVar2 = FUN_00409455(0x54);
    if (iVar2 == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)FUN_0043561e(param_2,param_3,param_4);
    }
    uVar1 = (**(code **)(*param_1 + 0x58))(0xffffffff,piVar3);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x10))(0);
    }
  }
  return uVar1;
}

