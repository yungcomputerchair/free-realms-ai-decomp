// addr: 0x01394350
// name: FUN_01394350
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_01394350(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_1c [4];
  void *pvStack_18;
  int iStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Allocates or lazily initializes an object/helper and wires it into the owning
                       object. Exact class identity is unknown. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01684431;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = (**(code **)(*param_1 + 0x28))(DAT_01b839d8 ^ (uint)&stack0xffffffcc);
  pvVar2 = PlayArea_findPlayerElementById((void *)param_1[0xc],iVar1);
  if (pvVar2 == (void *)0x0) {
    ExceptionList = local_c;
    return;
  }
  PlayElement_getGame();
  iVar1 = FUN_0139d7c0();
  if (iVar1 != 0) {
    PlayElement_getGame();
    piVar3 = (int *)FUN_0139d7c0();
    if (piVar3 == param_2) {
      pvStack_18 = (void *)0x0;
      iStack_14 = 0;
      uStack_10 = 0;
      uStack_4 = 0;
      (**(code **)(*param_2 + 0x34))(auStack_1c);
      if (pvStack_18 == (void *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = iStack_14 - (int)pvStack_18 >> 2;
      }
      uStack_4 = 0xffffffff;
      if (pvStack_18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_18);
      }
      pvStack_18 = (void *)0x0;
      iStack_14 = 0;
      uStack_10 = 0;
    }
    else {
      PlayElement_getGame();
      piVar3 = (int *)FUN_0139d7c0();
      if (piVar3 != param_3) goto LAB_0139450a;
      pvStack_18 = (void *)0x0;
      iStack_14 = 0;
      uStack_10 = 0;
      uStack_4 = 1;
      (**(code **)(*param_3 + 0x34))(auStack_1c);
      if (pvStack_18 == (void *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = iStack_14 - (int)pvStack_18 >> 2;
      }
      uStack_4 = 0xffffffff;
      STLVector_int_clear(auStack_1c);
    }
    if (-1 < iVar1) {
      pvVar2 = Mem_Alloc(0x14);
      uStack_4 = 2;
      if (pvVar2 == (void *)0x0) {
        pvVar2 = (void *)0x0;
      }
      else {
        pvVar2 = (void *)FUN_012f9eb0();
      }
      uStack_4 = 0xffffffff;
      FUN_012f8c70(0x68);
      iVar4 = StateMachine_getCurrentState();
      DisplayActionBuilder_addIntArg(pvVar2,iVar4);
      iVar4 = (**(code **)(*param_1 + 0x28))();
      DisplayActionBuilder_addIntArg(pvVar2,iVar4);
      DisplayActionBuilder_addIntArg(pvVar2,0x2f5);
      DisplayActionBuilder_addIntArg(pvVar2,iVar1);
      (**(code **)(*(int *)param_1[0xc] + 0x154))(pvVar2);
    }
  }
LAB_0139450a:
  PlayElement_getGame();
  iVar1 = FUN_0139d7a0();
  if (iVar1 != 0) {
    PlayElement_getGame();
    piVar3 = (int *)FUN_0139d7a0();
    if (piVar3 == param_2) {
      pvStack_18 = (void *)0x0;
      iStack_14 = 0;
      uStack_10 = 0;
      uStack_4 = 3;
      (**(code **)(*param_2 + 0x34))(auStack_1c);
      if (pvStack_18 == (void *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = iStack_14 - (int)pvStack_18 >> 2;
      }
      uStack_4 = 0xffffffff;
      if (pvStack_18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_18);
      }
      pvStack_18 = (void *)0x0;
      iStack_14 = 0;
      uStack_10 = 0;
    }
    else {
      PlayElement_getGame();
      piVar3 = (int *)FUN_0139d7a0();
      if (piVar3 != param_3) goto LAB_0139467d;
      pvStack_18 = (void *)0x0;
      iStack_14 = 0;
      uStack_10 = 0;
      uStack_4 = 4;
      (**(code **)(*param_3 + 0x34))(auStack_1c);
      if (pvStack_18 == (void *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = iStack_14 - (int)pvStack_18 >> 2;
      }
      uStack_4 = 0xffffffff;
      STLVector_int_clear(auStack_1c);
    }
    if (-1 < iVar1) {
      pvVar2 = Mem_Alloc(0x14);
      uStack_4 = 5;
      if (pvVar2 == (void *)0x0) {
        pvVar2 = (void *)0x0;
      }
      else {
        pvVar2 = (void *)FUN_012f9eb0();
      }
      uStack_4 = 0xffffffff;
      FUN_012f8c70(0x68);
      iVar4 = StateMachine_getCurrentState();
      DisplayActionBuilder_addIntArg(pvVar2,iVar4);
      iVar4 = (**(code **)(*param_1 + 0x28))();
      DisplayActionBuilder_addIntArg(pvVar2,iVar4);
      DisplayActionBuilder_addIntArg(pvVar2,0xff3);
      DisplayActionBuilder_addIntArg(pvVar2,iVar1);
      (**(code **)(*(int *)param_1[0xc] + 0x154))(pvVar2);
    }
  }
LAB_0139467d:
  PlayElement_getGame();
  piVar3 = (int *)Player_getDiscardPile();
  if (piVar3 != (int *)0x0) {
    if (piVar3 == param_2) {
      pvStack_18 = (void *)0x0;
      iStack_14 = 0;
      uStack_10 = 0;
      uStack_4 = 6;
      (**(code **)(*piVar3 + 0x34))(auStack_1c);
      if (pvStack_18 == (void *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = iStack_14 - (int)pvStack_18 >> 2;
      }
      uStack_4 = 0xffffffff;
      if (pvStack_18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_18);
      }
      pvStack_18 = (void *)0x0;
      iStack_14 = 0;
      uStack_10 = 0;
    }
    else {
      if (piVar3 != param_3) {
        ExceptionList = local_c;
        return;
      }
      pvStack_18 = (void *)0x0;
      iStack_14 = 0;
      uStack_10 = 0;
      uStack_4 = 7;
      (**(code **)(*piVar3 + 0x34))(auStack_1c);
      if (pvStack_18 == (void *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = iStack_14 - (int)pvStack_18 >> 2;
      }
      uStack_4 = 0xffffffff;
      STLVector_int_clear(auStack_1c);
    }
    if (-1 < iVar1) {
      pvVar2 = Mem_Alloc(0x14);
      uStack_4 = 8;
      if (pvVar2 == (void *)0x0) {
        pvVar2 = (void *)0x0;
      }
      else {
        pvVar2 = (void *)FUN_012f9eb0();
      }
      uStack_4 = 0xffffffff;
      FUN_012f8c70(0x68);
      iVar4 = StateMachine_getCurrentState();
      DisplayActionBuilder_addIntArg(pvVar2,iVar4);
      iVar4 = (**(code **)(*param_1 + 0x28))();
      DisplayActionBuilder_addIntArg(pvVar2,iVar4);
      DisplayActionBuilder_addIntArg(pvVar2,0x1019);
      DisplayActionBuilder_addIntArg(pvVar2,iVar1);
      (**(code **)(*(int *)param_1[0xc] + 0x154))(pvVar2);
    }
  }
  ExceptionList = local_c;
  return;
}

