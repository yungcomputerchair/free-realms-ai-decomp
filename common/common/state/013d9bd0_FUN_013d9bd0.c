// addr: 0x013d9bd0
// name: FUN_013d9bd0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall FUN_013d9bd0(int *param_1,void *param_2)

{
  char extraout_AL;
  bool bVar1;
  uint3 extraout_var;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  uint3 extraout_var_02;
  uint3 uVar3;
  uint3 extraout_var_03;
  uint3 extraout_var_04;
  int iVar2;
  int unaff_EDI;
  undefined1 local_34 [4];
  undefined1 uStack_30;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  void *pvStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Generic library/game/deserialization helper with insufficient state-method
                       evidence; body is container manipulation, factory/display-action setup,
                       account/lobby lookup, or broad game utility logic. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0168c198;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)local_34;
  ExceptionList = &local_c;
  (**(code **)(*param_1 + 0x10))(param_2,local_34,DAT_01b839d8 ^ (uint)&stack0xffffffc4);
  uVar3 = extraout_var;
  if (((extraout_AL != '\0') &&
      (bVar1 = LobbyCommand_deserialize(param_1,param_2), uVar3 = extraout_var_00, bVar1)) &&
     (bVar1 = Deserializer_readInteger(param_2,param_1 + 2), uVar3 = extraout_var_01, bVar1)) {
    if (unaff_EDI < 2) {
      uStack_1c = 0xf;
      uStack_20 = 0;
      uStack_30 = 0;
      local_c = (void *)0x0;
      bVar1 = Deserializer_readString(param_2,local_34);
      if (!bVar1) {
        local_c = (void *)0xffffffff;
        FUN_0041f1d7();
        uVar3 = extraout_var_02;
        goto LAB_013d9c7b;
      }
      local_c = (void *)0xffffffff;
      FUN_0041f1d7();
    }
    else if ((1 < unaff_EDI) &&
            (bVar1 = Deserializer_readInteger(param_2,param_1 + 3), uVar3 = extraout_var_03, !bVar1)
            ) goto LAB_013d9c7b;
    if ((unaff_EDI < 3) ||
       (bVar1 = Deserializer_readIntegerVector(&stack0xffffffc8,param_1 + 4),
       uVar3 = extraout_var_04, bVar1)) {
      iVar2 = (**(code **)(*param_1 + 0x14))(param_2);
      ExceptionList = pvStack_14;
      return iVar2;
    }
  }
LAB_013d9c7b:
  ExceptionList = pvStack_14;
  return (uint)uVar3 << 8;
}

