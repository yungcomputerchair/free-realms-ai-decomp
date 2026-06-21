// addr: 0x0144be60
// name: FUN_0144be60
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_0144be60(void *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int extraout_EAX;
  void *pvVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  TypeDescriptor *pTVar9;
  char *fmt;
  TypeDescriptor *pTVar10;
  undefined4 uVar11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Allocates or lazily initializes an object/helper and wires it into the owning
                       object. Exact class identity is unknown. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0169ad06;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  while( true ) {
    while (param_2 == 1) {
      param_2 = StateMachine_popState(param_1);
    }
    if (param_2 != 3) break;
    StateMachine_popState(param_1);
    StateMachine_processCurrentTurn(param_1);
    param_2 = extraout_EAX;
  }
  if ((*(int *)((int)param_1 + 0xc) == 0) ||
     (*(int *)((int)param_1 + 0x10) - *(int *)((int)param_1 + 0xc) >> 2 == 0)) {
    pvVar4 = (void *)get_field_4(param_1);
    bVar1 = unknown_getGameGuardFlag(pvVar4);
    if (!bVar1) {
      FUN_012f5dc0("popped off with nothing on stack!",uVar3);
    }
  }
  if (param_2 == 0) {
    fmt = "state returned invalid %d";
  }
  else {
    if (param_2 == 2) {
      piVar5 = (int *)get_field_4(param_1);
      cVar2 = (**(code **)(*piVar5 + 0x1a0))();
      if (cVar2 == '\0') {
        pvVar4 = StateMachine_getCurrentTurn(param_1);
        uVar3 = get_field_8(pvVar4);
        if (uVar3 == 0) {
          ExceptionList = local_c;
          return 1;
        }
        pvVar4 = StateMachine_getCurrentTurn(param_1);
        get_field_8(pvVar4);
        iVar6 = GamePlayer_getPlayerId();
        if (iVar6 != 2) {
          ExceptionList = local_c;
          return 1;
        }
        pvVar4 = Mem_Alloc(0x14);
        uStack_4 = 1;
        if (pvVar4 == (void *)0x0) {
          pvVar4 = (void *)0x0;
        }
        else {
          pvVar4 = (void *)FUN_012f9eb0();
        }
        uStack_4 = 0xffffffff;
        FUN_012f8c70(0x1ade8);
        get_field_4(param_1);
        iVar6 = StateMachine_getCurrentState();
        DisplayActionBuilder_addIntArg(pvVar4,iVar6);
        iVar6 = 2;
      }
      else {
        uVar11 = 0;
        pTVar10 = &CWMainController::RTTI_Type_Descriptor;
        pTVar9 = &CTP::Game::RTTI_Type_Descriptor;
        uVar8 = 0;
        uVar3 = get_field_4(param_1);
        piVar5 = (int *)FUN_00d8d382(uVar3,uVar8,pTVar9,pTVar10,uVar11);
        if (piVar5 == (int *)0x0) {
          ExceptionList = local_c;
          return 1;
        }
        if ((char)piVar5[0x127] != '\0') {
          pvVar4 = StateMachine_getCurrentTurn(param_1);
          uVar3 = get_field_8(pvVar4);
          if (uVar3 == 0) {
            ExceptionList = local_c;
            return 1;
          }
          pvVar4 = StateMachine_getCurrentTurn(param_1);
          get_field_8(pvVar4);
          iVar6 = GamePlayer_getPlayerId();
          StateMachine_updateCurrentTurnForResult(iVar6);
          ExceptionList = local_c;
          return 1;
        }
        pvVar4 = StateMachine_getCurrentTurn(param_1);
        uVar3 = get_field_8(pvVar4);
        if (uVar3 == 0) {
          ExceptionList = local_c;
          return 1;
        }
        pvVar4 = StateMachine_getCurrentTurn(param_1);
        get_field_8(pvVar4);
        iVar6 = GamePlayer_getPlayerId();
        iVar7 = (**(code **)(*piVar5 + 0x228))();
        if (iVar7 != iVar6) {
          ExceptionList = local_c;
          return 1;
        }
        get_field_4(param_1);
        FUN_0132c2a0();
        pvVar4 = Mem_Alloc(0x14);
        uStack_4 = 0;
        if (pvVar4 == (void *)0x0) {
          pvVar4 = (void *)0x0;
        }
        else {
          pvVar4 = (void *)FUN_012f9eb0();
        }
        uStack_4 = 0xffffffff;
        FUN_012f8c70(0xac);
        get_field_4(param_1);
        iVar6 = StateMachine_getCurrentState();
      }
      DisplayActionBuilder_addIntArg(pvVar4,iVar6);
      piVar5 = (int *)get_field_4(param_1);
      (**(code **)(*piVar5 + 0x154))(pvVar4);
      ExceptionList = local_c;
      return 1;
    }
    fmt = "returned invalid %d";
  }
  pvVar4 = (void *)get_field_4(param_1);
  Game_logGeneral(pvVar4,fmt,param_2);
  ExceptionList = local_c;
  return 0;
}

