// addr: 0x01407930
// name: FUN_01407930
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __thiscall FUN_01407930(int *param_1,void *param_2)

{
  bool bVar1;
  uint uVar2;
  undefined3 extraout_var;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  uint3 uVar3;
  int unaff_EBX;
  int iVar4;
  int aiStack_3c [2];
  undefined1 auStack_34 [4];
  void *local_30 [2];
  undefined1 local_28;
  uint uStack_1c;
  undefined4 local_18;
  undefined1 *local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Generic library/game/deserialization helper with insufficient state-method
                       evidence; body is container manipulation, factory/display-action setup,
                       account/lobby lookup, or broad game utility logic. */
  puStack_8 = &LAB_01691798;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)aiStack_3c;
  ExceptionList = &local_c;
  local_14 = &DAT_0000000f;
  local_18 = 0;
  local_28 = 0;
  local_4 = 0;
  uVar2 = (**(code **)(*param_1 + 0x10))(param_2,local_30,DAT_01b839d8 ^ (uint)&stack0xffffffb4);
  if ((char)uVar2 != '\0') {
    uVar2 = FUN_01407cf0(param_2);
    if ((char)uVar2 == '\0') {
      local_c = (void *)0xffffffff;
      if (0xf < uStack_1c) {
                    /* WARNING: Subroutine does not return */
        _free(local_30[0]);
      }
      goto LAB_014079ae;
    }
    bVar1 = Deserializer_readInteger(param_2,(int *)&stack0xffffffc0);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if (bVar1) {
      iVar4 = 0;
      if (0 < unaff_EBX) {
        do {
          bVar1 = Deserializer_readString(param_2,auStack_34);
          if (!bVar1) {
            local_c = (void *)0xffffffff;
            uVar3 = extraout_var_00;
            if (0xf < uStack_1c) {
                    /* WARNING: Subroutine does not return */
              _free(local_30[0]);
            }
LAB_01407ac1:
            ExceptionList = local_14;
            return (uint)uVar3 << 8;
          }
          bVar1 = Deserializer_readInteger(param_2,aiStack_3c);
          if (!bVar1) {
            local_c = (void *)0xffffffff;
            uVar3 = extraout_var_01;
            if (0xf < uStack_1c) {
                    /* WARNING: Subroutine does not return */
              _free(local_30[0]);
            }
            goto LAB_01407ac1;
          }
          FUN_01407760(auStack_34,aiStack_3c[0]);
          iVar4 = iVar4 + 1;
        } while (iVar4 < unaff_EBX);
      }
      uVar2 = (**(code **)(*param_1 + 0x14))(param_2);
      local_c = (void *)0xffffffff;
      if (uStack_1c < 0x10) {
        ExceptionList = local_14;
        return uVar2;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_30[0]);
    }
  }
  local_c = (void *)0xffffffff;
  if (0xf < uStack_1c) {
                    /* WARNING: Subroutine does not return */
    _free(local_30[0]);
  }
LAB_014079ae:
  ExceptionList = local_14;
  return uVar2 & 0xffffff00;
}

