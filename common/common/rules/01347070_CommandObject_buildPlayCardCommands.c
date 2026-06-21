// addr: 0x01347070
// name: CommandObject_buildPlayCardCommands
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined1 __fastcall
CommandObject_buildPlayCardCommands
          (uint param_1,int param_2,int *param_3,undefined1 param_4,undefined4 param_5,void *param_6
          )

{
  char cVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  int iVar5;
  undefined4 uVar6;
  void *extraout_EDX;
  void *extraout_EDX_00;
  uint uVar7;
  uint uStack_1c;
  void *pvStack_18;
  void *local_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
                    /* Builds command objects for playing a card/action, resolving targets and
                       logging target presence. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0167d138;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar2 = Card_getActionByID(param_3,param_2);
  if (pvVar2 == (void *)0x0) {
    param_4 = 0;
  }
  else {
    pvVar4 = pvVar2;
    (**(code **)(*param_3 + 0x100))();
    pvVar3 = (void *)(**(code **)(*param_3 + 0xcc))();
    if ((pvVar3 == pvVar2) ||
       (cVar1 = CommandObject_setActionReturnKey24(), pvVar3 = extraout_EDX, cVar1 != '\0')) {
      (**(code **)(*param_3 + 0x198))(param_6);
      pvVar3 = extraout_EDX_00;
    }
    PlayElementList_collectCommandObjects(param_6,pvVar3);
    local_c = (void *)0x0;
    uStack_4 = uStack_1c;
    uVar7 = param_1;
    if (uStack_1c < param_1) {
      FUN_00d83c2d();
      FUN_00d83c2d();
    }
    while( true ) {
      if (&stack0x00000000 == (undefined1 *)0x24) {
        FUN_00d83c2d();
      }
      if (uVar7 == uStack_4) break;
      if (&stack0x00000000 == (undefined1 *)0x24) {
        FUN_00d83c2d();
      }
      if (uStack_1c <= uVar7) {
        FUN_00d83c2d();
      }
      CommandObjectVector_pushBack(param_3,&stack0xffffffd4,pvVar4);
      if (uStack_1c <= uVar7) {
        FUN_00d83c2d();
      }
      uVar7 = uVar7 + 4;
    }
    pvVar4 = (void *)(**(code **)(*param_3 + 0xcc))();
    if ((pvVar4 == pvVar2) || (cVar1 = CommandObject_setActionReturnKey24(), cVar1 != '\0')) {
      iVar5 = Card_getPropertyMap();
      if (*(uint *)(iVar5 + 0x18) < 0x10) {
        iVar5 = iVar5 + 4;
      }
      else {
        iVar5 = *(int *)(iVar5 + 4);
      }
      Game_logGeneral(*(void **)(param_1 + 8),"Playing Card: %s",iVar5);
      pvVar2 = EvaluationEnvironment_resolveTarget(param_6);
      if (pvVar2 != (void *)0x0) {
        EvaluationEnvironment_resolveTarget(param_6);
        uVar6 = PlayElement_getId();
        Game_logGeneral(*(void **)(param_1 + 8),"Card Has Target: %d",uVar6);
      }
      pvVar2 = EvaluationEnvironment_resolveTarget2(param_6);
      if (pvVar2 != (void *)0x0) {
        EvaluationEnvironment_resolveTarget2(param_6);
        uVar6 = PlayElement_getId();
        Game_logGeneral(*(void **)(param_1 + 8),"Card Has Target2: %d",uVar6);
      }
    }
    uStack_4 = 0xffffffff;
    if (pvStack_18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_18);
    }
  }
  ExceptionList = local_c;
  return param_4;
}

