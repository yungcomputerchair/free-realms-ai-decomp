// addr: 0x01414960
// name: HandleResponseState_leaveState
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall HandleResponseState_leaveState(int param_1)

{
  undefined4 *puVar1;
  void **item;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined1 *commandList;
  void *local_20;
  undefined1 local_1c [4];
  void *local_18;
  int local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Handles leaving HandleResponseState, processing cost cards and pending
                       response state cleanup. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01692d53;
  local_c = ExceptionList;
  item = (void **)(DAT_01b839d8 ^ (uint)&stack0xffffffcc);
  ExceptionList = &local_c;
  pcVar8 = "IN HANDLERESPONSE::LEAVESTATE";
  pvVar2 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar2,pcVar8,item);
  StateMachine_popPendingState(*(void **)(param_1 + 8));
  uVar3 = get_field_1c_if_vector_nonempty(*(void **)(param_1 + 8));
  if (uVar3 != 0) {
    local_18 = (void *)0x0;
    local_14 = 0;
    local_10 = 0;
    local_4 = 0;
    puVar1 = *(undefined4 **)(param_1 + 0x144);
    if (puVar1 < *(undefined4 **)(param_1 + 0x140)) {
      FUN_00d83c2d();
    }
    puVar6 = *(undefined4 **)(param_1 + 0x140);
    if (*(undefined4 **)(param_1 + 0x144) < puVar6) {
      FUN_00d83c2d();
    }
    while( true ) {
      if (param_1 == -0x13c) {
        FUN_00d83c2d();
      }
      if (puVar6 == puVar1) break;
      if (param_1 == -0x13c) {
        FUN_00d83c2d();
      }
      if (*(undefined4 **)(param_1 + 0x144) <= puVar6) {
        FUN_00d83c2d();
      }
      uVar7 = StateMachineState_getGame
                        (*puVar6,0,&PlayElement::RTTI_Type_Descriptor,&Card::RTTI_Type_Descriptor,0)
      ;
      pvVar2 = find_play_element_in_maps((void *)uVar7,(int)((ulonglong)uVar7 >> 0x20));
      local_20 = (void *)FUN_00d8d382(pvVar2);
      if (local_20 != (void *)0x0) {
        PointerVector_pushBack(local_1c,&local_20,item);
      }
      if (*(undefined4 **)(param_1 + 0x144) <= puVar6) {
        FUN_00d83c2d();
      }
      puVar6 = puVar6 + 1;
    }
    if (local_18 == (void *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = local_14 - (int)local_18 >> 2;
    }
    pcVar8 = "costCards.size(): %d";
    pvVar2 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar2,pcVar8,iVar4);
    commandList = local_1c;
    get_field_1c_if_vector_nonempty(*(void **)(param_1 + 8));
    CommandObjectList_buildEventValueAction0E(commandList);
    local_4 = 0xffffffff;
    if (local_18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_18);
    }
    local_18 = (void *)0x0;
    local_14 = 0;
    local_10 = 0;
  }
  if (*(int *)(param_1 + 0x150) == 0xd) {
    iVar4 = StateMachine_peekReturnValueMap();
    if (iVar4 == 0) {
      local_20 = Mem_Alloc(0x18);
      local_4 = 1;
      if (local_20 == (void *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = ReturnValueMap_ctor();
      }
      local_4 = 0xffffffff;
      StateMachine_pushPendingState(uVar5);
    }
    FUN_014181b0(0x13,param_1 + 0x14c);
  }
  uVar3 = *(uint *)(param_1 + 0x128);
  pvVar2 = (void *)StateMachineState_getCurrentTurn();
  set_field_10(pvVar2,uVar3);
  pcVar8 = "END HANDLERESPONSE::LEAVESTATE";
  pvVar2 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar2,pcVar8,item);
  ExceptionList = local_c;
  return 1;
}

