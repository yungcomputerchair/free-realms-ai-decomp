// addr: 0x013a9690
// name: FUN_013a9690
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_013a9690(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *this;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined1 local_8 [8];
  
                    /* Generic library/game/deserialization helper with insufficient state-method
                       evidence; body is container manipulation, factory/display-action setup,
                       account/lobby lookup, or broad game utility logic. */
  this = param_2;
  if (param_2 != (int *)0x0) {
    param_2 = (int *)get_field_4(param_2);
    piVar4 = (int *)FUN_013a5b80(local_8,&param_2);
    iVar1 = *piVar4;
    iVar2 = *(int *)(param_1 + 0x80);
    iVar3 = piVar4[1];
    if ((iVar1 == 0) || (iVar1 != param_1 + 0x7c)) {
      FUN_00d83c2d();
    }
    if (iVar3 != iVar2) {
      if (iVar1 == 0) {
        FUN_00d83c2d();
      }
      if (iVar3 == *(int *)(iVar1 + 4)) {
        FUN_00d83c2d();
      }
      (**(code **)(*this + 0x3c))(*(undefined4 *)(iVar3 + 0x10));
      return;
    }
    param_2 = (int *)get_field_4(this);
    puVar5 = (undefined4 *)FUN_013a8f40(&param_2);
    uVar6 = (**(code **)(*this + 0x38))();
    *puVar5 = uVar6;
  }
  return;
}

