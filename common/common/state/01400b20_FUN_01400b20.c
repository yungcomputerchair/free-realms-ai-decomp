// addr: 0x01400b20
// name: FUN_01400b20
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_01400b20(undefined4 *param_1,int param_2)

{
  uint *puVar1;
  void *this;
  uint value;
  uint value_00;
  bool bVar2;
  uint3 extraout_var;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  uint3 uVar4;
  int iVar3;
  uint *puVar5;
  int unaff_EDI;
  
                    /* Generic library/game/deserialization helper with insufficient state-method
                       evidence; body is container manipulation, factory/display-action setup,
                       account/lobby lookup, or broad game utility logic. */
  iVar3 = 0;
  if (*(int *)(param_2 + 4) != 0) {
    iVar3 = (*(int *)(param_2 + 8) - *(int *)(param_2 + 4)) / 0xc;
  }
  Serializer_startAppendingSTLContainer((void *)*param_1,iVar3,unaff_EDI);
  puVar1 = *(uint **)(param_2 + 8);
  if (puVar1 < *(uint **)(param_2 + 4)) {
    FUN_00d83c2d();
  }
  puVar5 = *(uint **)(param_2 + 4);
  if (*(uint **)(param_2 + 8) < puVar5) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (param_2 == 0) {
      FUN_00d83c2d();
    }
    if (puVar5 == puVar1) break;
    if (param_2 == 0) {
      FUN_00d83c2d();
    }
    if (*(uint **)(param_2 + 8) <= puVar5) {
      FUN_00d83c2d();
    }
    this = (void *)*param_1;
    value = puVar5[1];
    value_00 = puVar5[2];
    bVar2 = Serializer_appendInteger(this,*puVar5);
    uVar4 = extraout_var;
    if (((!bVar2) || (bVar2 = Serializer_appendInteger(this,value), uVar4 = extraout_var_00, !bVar2)
        ) || (bVar2 = Serializer_appendInteger(this,value_00), uVar4 = extraout_var_01, !bVar2)) {
      return (uint)uVar4 << 8;
    }
    if (*(uint **)(param_2 + 8) <= puVar5) {
      FUN_00d83c2d();
    }
    puVar5 = puVar5 + 3;
  }
  iVar3 = Serialize_returnTrue();
  return iVar3;
}

