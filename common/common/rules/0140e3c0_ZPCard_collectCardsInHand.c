// addr: 0x0140e3c0
// name: ZPCard_collectCardsInHand
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall ZPCard_collectCardsInHand(int *param_1,int param_2,void *param_3)

{
  char cVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  undefined1 uStack_b5;
  int iStack_b4;
  undefined1 auStack_b0 [4];
  void *pvStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  undefined1 local_a0 [148];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Builds a child environment and delegates to the cards-in-hand collection for
                       ZPCard logic. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016922b6;
  local_c = ExceptionList;
  pvVar2 = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffff38);
  ExceptionList = &local_c;
  EvaluationEnvironment_ctor();
  local_4 = 0;
  uVar3 = FUN_01340340();
  EvaluationEnvironment_setGame(uVar3);
  if (param_3 != (void *)0x0) {
    EvaluationEnvironment_copyFrom(local_a0,param_3,pvVar2);
  }
  iVar4 = (**(code **)(*param_1 + 0x28))();
  pvVar2 = (void *)FUN_01340340();
  pvVar2 = PlayArea_findPlayerElementById(pvVar2,iVar4);
  FUN_013815b0(pvVar2);
  set_play_element_id_field(local_a0,param_1);
  if (param_2 == 0x270) {
    iVar4 = (**(code **)(*param_1 + 0x30))();
    if (iVar4 == 0) {
      local_4 = 0xffffffff;
      FUN_01385460();
      ExceptionList = local_c;
      return 0;
    }
    (**(code **)(*param_1 + 0x30))();
    iVar4 = PlayElement_getId();
  }
  else {
    if (param_2 == 0x22973) {
      uStack_b5 = 0;
      iVar4 = (**(code **)(*param_1 + 0x1f8))(local_a0,0x22973,0,1,&uStack_b5,1,0);
      cVar1 = (**(code **)(*param_1 + 0x1c0))(0x22655);
      if (cVar1 != '\0') {
        iVar6 = (**(code **)(*param_1 + 0x15c))(0x229fa,param_3);
        iVar4 = iVar4 + iVar6;
      }
      local_4 = 0xffffffff;
      FUN_01385460();
      ExceptionList = local_c;
      return iVar4;
    }
    if (param_2 == 0x229fa) {
      iStack_b4 = 0;
      pvStack_ac = (void *)0x0;
      iStack_a8 = 0;
      uStack_a4 = 0;
      local_4 = CONCAT31(local_4._1_3_,1);
      piVar5 = (int *)FUN_01340340();
      (**(code **)(*piVar5 + 0x144))(auStack_b0);
      for (uVar7 = 0;
          (pvStack_ac != (void *)0x0 && (uVar7 < (uint)(iStack_a8 - (int)pvStack_ac >> 2)));
          uVar7 = uVar7 + 1) {
        piVar5 = *(int **)((int)pvStack_ac + uVar7 * 4);
        iVar4 = (**(code **)(*param_1 + 0x28))();
        iVar6 = (**(code **)(*piVar5 + 0x28))();
        if ((iVar6 == iVar4) &&
           (iVar4 = (**(code **)(*piVar5 + 0x15c))(0x22971,param_3), iVar4 == 0x222e3)) {
          iStack_b4 = iStack_b4 + 1;
        }
      }
      iVar4 = (4 - iStack_b4) * 3;
      local_4 = local_4 & 0xffffff00;
      if (pvStack_ac != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_ac);
      }
      pvStack_ac = (void *)0x0;
      iStack_a8 = 0;
      uStack_a4 = 0;
    }
    else {
      iVar4 = Card_collectCardsInHand(param_2,local_a0);
    }
  }
  local_4 = 0xffffffff;
  FUN_01385460();
  ExceptionList = local_c;
  return iVar4;
}

