// addr: 0x0146be10
// name: MultiActionState_leaveState
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MultiActionState_leaveState(void * state) */

void __fastcall MultiActionState_leaveState(void *state)

{
  uint *puVar1;
  rsize_t _DstSize;
  void *_Dst;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  bool bVar5;
  uint uVar6;
  void *pvVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined1 *puVar12;
  int *piVar13;
  char *pcVar14;
  undefined4 local_78;
  int *local_70;
  void *local_6c;
  undefined1 *local_68;
  undefined1 local_60 [12];
  undefined1 local_54 [8];
  int local_4c;
  undefined1 local_48 [8];
  int local_40;
  undefined1 local_3c [4];
  int *local_38;
  int *local_34;
  undefined4 local_30;
  undefined1 local_2c [4];
  int *local_28;
  int *local_24;
  undefined1 local_1c [4];
  void *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Leaves MultiActionState, records revealed cards, logs null/revealed-card
                       diagnostics, and pops the pending state. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169e896;
  local_c = ExceptionList;
  uVar6 = DAT_01b839d8 ^ (uint)&stack0xffffff78;
  ExceptionList = &local_c;
  pcVar14 = "MultiActionState::leaveState";
  pvVar7 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar7,pcVar14,uVar6);
  pvVar7 = (void *)StateMachineState_getGame();
  bVar5 = Game_getFlag_14d(pvVar7);
  if (bVar5) {
    pvVar7 = Mem_Alloc(0x28);
    local_4 = 0;
    local_6c = pvVar7;
    if (pvVar7 == (void *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      puVar8 = (undefined4 *)StateMachineState_getGame();
      puVar8 = GameCommand_FinishMultiaction_ctor(pvVar7,puVar8,uVar6);
    }
    local_4 = 0xffffffff;
    StateMachineState_getGame();
    iVar9 = FUN_01347a90();
    FUN_014dd310(puVar8,iVar9);
    set_field_4(puVar8,*(uint *)((int)state + 0x100));
    iVar9 = *(int *)((int)state + 0x100);
    pvVar7 = (void *)StateMachineState_getGame();
    Game_broadcastCallbackResultExceptPlayer(pvVar7,iVar9,puVar8);
  }
  FUN_01385f30(local_2c);
  local_4 = 1;
  FUN_01385a50(local_3c);
  local_4._0_1_ = 2;
  local_6c = Mem_Alloc(0x18);
  local_4._0_1_ = 3;
  if (local_6c == (void *)0x0) {
    local_78 = 0;
  }
  else {
    local_78 = ReturnValueMap_ctor();
  }
  local_4._0_1_ = 2;
  uVar4 = (undefined1)local_4;
  local_4._0_1_ = 2;
  if ((local_38 != (int *)0x0) &&
     (uVar4 = (undefined1)local_4, (int)local_34 - (int)local_38 >> 2 != 0)) {
    FUN_012fa910();
    piVar13 = local_34;
    local_4 = CONCAT31(local_4._1_3_,4);
    if (local_34 < local_38) {
      FUN_00d83c2d();
    }
    piVar11 = local_38;
    if (local_34 < local_38) {
      FUN_00d83c2d();
    }
    while( true ) {
      if (&stack0x00000000 == (undefined1 *)0x3c) {
        FUN_00d83c2d();
      }
      if (piVar11 == piVar13) break;
      if (&stack0x00000000 == (undefined1 *)0x3c) {
        FUN_00d83c2d();
      }
      if (local_34 <= piVar11) {
        FUN_00d83c2d();
      }
      if (*piVar11 != 0) {
        local_70 = (int *)PlayElement_getId();
        FUN_01300680(6);
        FUN_0042c155(&local_70);
      }
      if (local_34 <= piVar11) {
        FUN_00d83c2d();
      }
      piVar11 = piVar11 + 1;
    }
    FUN_014181b0(0x32,local_60);
    local_4._0_1_ = 2;
    FUN_01300cd0();
    uVar4 = (undefined1)local_4;
  }
  local_4._0_1_ = uVar4;
  FUN_012fa910();
  local_4 = CONCAT31(local_4._1_3_,5);
  if (*(char *)((int)state + 0x16c) == '\0') {
    iVar9 = *(int *)((int)state + 0x10c) - *(int *)((int)state + 0x110);
  }
  else {
    iVar9 = *(int *)((int)state + 0x170);
  }
  FUN_01300680(2);
  local_40 = iVar9;
  FUN_014181b0(10,local_48);
  local_70 = local_24;
  if (local_24 < local_28) {
    FUN_00d83c2d();
  }
  FUN_012fa910();
  local_4 = CONCAT31(local_4._1_3_,6);
  FUN_01300680(6);
  pvVar7 = *(void **)(local_4c + 8);
  puVar1 = (uint *)(local_4c + 8);
  puVar8 = (undefined4 *)(local_4c + 4);
  if (pvVar7 < *(void **)(local_4c + 4)) {
    FUN_00d83c2d();
  }
  _Dst = (void *)*puVar8;
  if ((void *)*puVar1 < _Dst) {
    FUN_00d83c2d();
  }
  if (_Dst != pvVar7) {
    iVar9 = (int)(*puVar1 - (int)pvVar7) >> 2;
    _DstSize = iVar9 * 4;
    if (0 < iVar9) {
      _memmove_s(_Dst,_DstSize,pvVar7,_DstSize);
    }
    *puVar1 = (uint)(_DstSize + (int)_Dst);
  }
  piVar13 = local_28;
  if (local_24 < local_28) {
    FUN_00d83c2d();
  }
  puVar12 = local_2c;
  local_68 = puVar12;
  while( true ) {
    if ((puVar12 == (undefined1 *)0x0) || (puVar12 != local_2c)) {
      FUN_00d83c2d();
    }
    if (piVar13 == local_70) break;
    if (puVar12 == (undefined1 *)0x0) {
      FUN_00d83c2d();
    }
    if (*(int **)(puVar12 + 8) <= piVar13) {
      FUN_00d83c2d();
    }
    if (*piVar13 == 0) {
      pcVar14 = "Found Null card in revealed card list!";
      pvVar7 = (void *)StateMachineState_getGame();
      Game_logGeneral(pvVar7,pcVar14,uVar6);
    }
    else {
      if (*(int **)(puVar12 + 8) <= piVar13) {
        FUN_00d83c2d();
      }
      uVar10 = PlayElement_getId();
      pcVar14 = "Adding card: %d to revealed list.";
      pvVar7 = (void *)StateMachineState_getGame();
      Game_logGeneral(pvVar7,pcVar14,uVar10);
      if (*(int **)(puVar12 + 8) <= piVar13) {
        FUN_00d83c2d();
      }
      pvVar7 = (void *)PlayElement_getId();
      local_6c = pvVar7;
      FUN_01300680(6);
      iVar9 = local_4c;
      uVar2 = *(uint *)(local_4c + 4);
      if ((uVar2 == 0) ||
         ((uint)((int)(*(int *)(local_4c + 0xc) - uVar2) >> 2) <=
          (uint)((int)(*(int *)(local_4c + 8) - uVar2) >> 2))) {
        uVar3 = *(uint *)(local_4c + 8);
        if (uVar3 < uVar2) {
          FUN_00d83c2d();
        }
        Vector_insertSingleAndReturnIterator_realloc(local_60,iVar9,uVar3,&local_6c);
        puVar12 = local_68;
      }
      else {
        puVar8 = *(undefined4 **)(local_4c + 8);
        *puVar8 = pvVar7;
        *(undefined4 **)(local_4c + 8) = puVar8 + 1;
        puVar12 = local_68;
      }
    }
    if (*(int **)(puVar12 + 8) <= piVar13) {
      FUN_00d83c2d();
    }
    piVar13 = piVar13 + 1;
  }
  FUN_014181b0(0x16,local_54);
  iVar9 = Rules_getDynamicCardReturnCard();
  if (iVar9 != 0) {
    Rules_getDynamicCardReturnCard();
    uVar10 = PlayElement_getId();
    ReturnValueMap_setInteger(0x23,uVar10);
  }
  iVar9 = Rules_getIntegerKey16();
  if (0 < iVar9) {
    uVar10 = Rules_getIntegerKey16();
    ReturnValueMap_setInteger(0x2e,uVar10);
  }
  iVar9 = Rules_getIntegerKey1B();
  if (0 < iVar9) {
    uVar10 = Rules_getIntegerKey1B();
    ReturnValueMap_setInteger(0x2f,uVar10);
  }
  if (0 < *(int *)((int)state + 0x164)) {
    ReturnValueMap_setInteger(0x22,*(int *)((int)state + 0x164));
  }
  StateMachine_pushPendingState(local_78);
  FUN_01385d90(local_1c);
  local_4 = CONCAT31(local_4._1_3_,7);
  StateMachine_popPendingState(*(void **)((int)state + 8));
  if ((*(char *)((int)state + 0x161) != '\0') &&
     (uVar6 = get_field_1c_if_vector_nonempty(*(void **)((int)state + 8)), uVar6 != 0)) {
    puVar12 = local_1c;
    get_field_1c_if_vector_nonempty(*(void **)((int)state + 8));
    CommandObjectList_buildEventValueAction0E(puVar12);
  }
  if (((local_38 != (int *)0x0) && ((int)local_34 - (int)local_38 >> 2 != 0)) &&
     (uVar6 = get_field_1c_if_vector_nonempty(*(void **)((int)state + 8)), uVar6 != 0)) {
    puVar12 = local_3c;
    get_field_1c_if_vector_nonempty(*(void **)((int)state + 8));
    CommandObjectList_buildEventValueAction40(puVar12);
  }
  local_4 = CONCAT31(local_4._1_3_,6);
  if (local_18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_18);
  }
  local_18 = (void *)0x0;
  local_14 = 0;
  local_10 = 0;
  local_4._0_1_ = 5;
  FUN_01300cd0();
  local_4._0_1_ = 2;
  FUN_01300cd0();
  local_4 = CONCAT31(local_4._1_3_,1);
  if (local_38 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_38);
  }
  local_38 = (int *)0x0;
  local_34 = (int *)0x0;
  local_30 = 0;
  local_4 = 0xffffffff;
  if (local_28 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_28);
  }
  ExceptionList = local_c;
  return;
}

