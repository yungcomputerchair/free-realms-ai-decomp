// addr: 0x01411e20
// name: Card_getActiveActionsForTarget
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4
Card_getActiveActionsForTarget
          (int param_1,undefined4 param_2,undefined4 param_3,void *param_4,void *param_5,
          void *param_6,char param_7)

{
  int *element;
  void *this;
  int value_;
  undefined4 *puVar1;
  char cVar2;
  bool bVar3;
  void **item;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined1 local_c4 [4];
  undefined4 *local_c0;
  undefined4 *local_bc;
  undefined4 local_b8;
  undefined1 *local_b4;
  undefined4 *local_b0;
  int *local_ac;
  undefined4 *local_a8;
  int *local_a4;
  undefined1 local_a0 [148];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Checks actions on a target card, collecting accepted actions and logging
                       accepted/done status. */
  puStack_8 = &LAB_016927a6;
  local_c = ExceptionList;
  item = (void **)(DAT_01b839d8 ^ (uint)&stack0xffffff2c);
  ExceptionList = &local_c;
  local_c0 = (undefined4 *)0x0;
  local_bc = (undefined4 *)0x0;
  local_b8 = 0;
  local_4 = 0;
  cVar2 = FUN_01411880(param_1,param_2,param_3,local_c4,param_6);
  if (cVar2 == '\0') {
    local_4 = 0xffffffff;
    if (local_c0 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_c0);
    }
    uVar5 = 0;
  }
  else {
    local_a4 = PlayArea_findPlayerElementById(param_6,param_1);
    local_a8 = local_bc;
    if (local_bc < local_c0) {
      FUN_00d83c2d();
    }
    puVar1 = local_c0;
    if (local_bc < local_c0) {
      FUN_00d83c2d();
    }
    local_b4 = local_c4;
    local_b0 = puVar1;
    while( true ) {
      puVar1 = local_b0;
      puVar6 = local_b4;
      if ((local_b4 == (undefined1 *)0x0) || (local_b4 != local_c4)) {
        FUN_00d83c2d();
      }
      if (puVar1 == local_a8) break;
      if (puVar6 == (undefined1 *)0x0) {
        FUN_00d83c2d();
      }
      if (*(undefined4 **)(puVar6 + 8) <= puVar1) {
        FUN_00d83c2d();
      }
      element = (int *)*puVar1;
      this = (void *)puVar1[1];
      value_ = puVar1[2];
      local_ac = element;
      if (param_7 == '\0') {
        cVar2 = CommandObject_setActionReturnKey5();
        if (cVar2 != '\x01') goto LAB_01411f47;
      }
      else {
LAB_01411f47:
        bVar3 = IntVector_contains((int)element,param_5);
        if (bVar3) {
          EvaluationEnvironment_ctor();
          local_4 = CONCAT31(local_4._1_3_,1);
          puVar6 = local_a0;
          (**(code **)(*local_a4 + 0x84))();
          set_play_element_id_field(&local_a4,element);
          EvaluationEnvironment_setActionReturn(this);
          EvaluationEnvironment_setBooleanKey9(1);
          EvaluationEnvironment_setBooleanKey4(0);
          EvaluationEnvironment_setBooleanKey13(0);
          EvaluationEnvironment_setCurrentTargetFromElement(&local_a4,(void *)0x0,puVar6);
          EvaluationEnvironment_setPlayElementId(0);
          iVar4 = PlayElement_getId();
          if (iVar4 != value_) {
            set_integer_value_for_key(0x38,value_);
            Game_logGeneral(param_6,"Action is from %d",value_);
          }
          uVar5 = PlayElement_getId();
          uVar5 = FUN_01321f20(uVar5);
          uVar5 = PackedActionId_getLow12Bits(uVar5);
          uVar5 = FUN_01321f20(uVar5);
          uVar5 = PackedActionId_getHighBits(uVar5);
          Game_logGeneral(param_6,"Checking action %d (%d) on card %d",uVar5);
          ActionLogEntry_writeDebugString(this,param_6);
          (**(code **)(*element + 0x154))(0);
          cVar2 = (**(code **)(*element + 0xdc))(this,&local_a8,1);
          if (cVar2 == '\x01') {
            Game_logGeneral(param_6,"Accepted and pushing.",item);
            PointerVector_pushBack(param_4,&local_ac,item);
          }
          EvaluationEnvironment_setCurrentTargetFromElement(local_a0,(void *)0x0,item);
          EvaluationEnvironment_setPlayElementId(0);
          Game_logGeneral(param_6,"(Done)",item);
          local_4 = local_4 & 0xffffff00;
          FUN_01385460();
        }
      }
      if (*(undefined4 **)(local_b4 + 8) <= local_b0) {
        FUN_00d83c2d();
      }
      local_b0 = local_b0 + 3;
    }
    local_4 = 0xffffffff;
    if (local_c0 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_c0);
    }
    uVar5 = 1;
  }
  ExceptionList = local_c;
  return uVar5;
}

