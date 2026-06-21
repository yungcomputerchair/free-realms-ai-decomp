// addr: 0x01394920
// name: Card_collectCardsInHand
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall Card_collectCardsInHand(int *param_1,int param_2,void *param_3)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  undefined1 local_1c [4];
  int iStack_18;
  int iStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Collects or traces Cards In Hand for a player/card context. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01684490;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_2 != 0) {
    if (param_2 < 0x244) {
      if (param_2 == 0x243) {
        Game_getCurrentTurn((void *)param_1[0xc]);
        iVar1 = FUN_013f7ea0();
        ExceptionList = local_c;
        return iVar1;
      }
      if (param_2 == 0x9e) {
        iVar1 = (**(code **)(*param_1 + 0x28))();
        pvVar2 = PlayArea_findPlayerElementById((void *)param_1[0xc],iVar1);
        if (pvVar2 == (void *)0x0) {
          ExceptionList = local_c;
          return 0;
        }
        iVar1 = unknown_getField30(pvVar2);
        if (iVar1 == 0) {
          ExceptionList = local_c;
          return 0;
        }
        unknown_getField30(pvVar2);
        iVar1 = PlayElement_getId();
        ExceptionList = local_c;
        return iVar1;
      }
      if (param_2 == 0x23e) {
        iVar1 = PlayElement_getId();
        ExceptionList = local_c;
        return iVar1;
      }
    }
    else if (param_2 == 0x2f5) {
      if (param_3 != (void *)0x0) {
        EvaluationEnvironment_tracef(param_3,"Cards In Hand",DAT_01b839d8 ^ (uint)&stack0xffffffd8);
      }
      iVar1 = (**(code **)(*param_1 + 0x28))();
      pvVar2 = PlayArea_findPlayerElementById((void *)param_1[0xc],iVar1);
      if (pvVar2 != (void *)0x0) {
        iStack_18 = 0;
        iStack_14 = 0;
        uStack_10 = 0;
        local_4 = 0;
        PlayElement_getGame();
        piVar3 = (int *)FUN_0139d7c0();
        (**(code **)(*piVar3 + 0x34))(local_1c);
        if (iStack_18 == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = iStack_14 - iStack_18 >> 2;
        }
        local_4 = 0xffffffff;
        STLVector_int_clear(local_1c);
        ExceptionList = local_c;
        return iVar1;
      }
      ExceptionList = local_c;
      return 0;
    }
    FUN_012fa910();
    local_4 = 1;
    (**(code **)(*param_1 + 4))(param_2,local_1c);
    if (iStack_18 == 2) {
      iVar1 = FUN_0123c340();
      local_4 = 0xffffffff;
      FUN_01300cd0();
      ExceptionList = local_c;
      return iVar1;
    }
    local_4 = 0xffffffff;
    FUN_01300cd0();
  }
  ExceptionList = local_c;
  return 0;
}

