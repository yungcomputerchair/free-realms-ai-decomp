// addr: 0x0141e500
// name: GetTargetState_enterState
// subsystem: common/common/state
// source (binary assert): common/common/state/GetTargetState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Removing unreachable block (ram,0x0141e5ec) */
/* Setting prototype: void GetTargetState_enterState(void * this) */

void __fastcall GetTargetState_enterState(void *this)

{
  char cVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int extraout_EDX;
  int extraout_EDX_00;
  int key_;
  undefined8 uVar9;
  int playerId_;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_28 [4];
  void *pvStack_24;
  undefined4 uStack_14;
  uint uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
                    /* Enter-state processing for GetTargetState: reads valid target/value returns,
                       stores selected card/player data, sets title/message placeholders, and
                       prompts the active player if needed. */
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_01694138;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar2 = (void *)StateMachine_popReturnValueMap(DAT_01b839d8 ^ (uint)&stack0xffffffb8);
  if (pvVar2 == (void *)0x0) {
    FUN_012f5a60("returnValueMap","..\\common\\common\\state\\GetTargetState.cpp",0x9d);
  }
  FUN_012fa910();
  iStack_4 = 0;
  cVar1 = PointerVector_iteratorNotAtEnd(0xe);
  iVar4 = extraout_EDX;
  if (cVar1 == '\0') {
    FUN_012f5a60("returnValueMap->hasKey(kValidTargetsReturn)",
                 "..\\common\\common\\state\\GetTargetState.cpp",0xa0);
    iVar4 = extraout_EDX_00;
  }
  pvVar3 = ReturnValueMap_findValueData(pvVar2,iVar4);
  FUN_013010e0(pvVar3);
  FUN_012fb470((int)this + 0xfc,*(undefined4 *)((int)this + 0xe8));
  *(undefined1 *)((int)this + 0xf8) = 1;
  pvVar3 = ReturnValueMap_findValueData(pvVar2,key_);
  if (pvVar3 == (void *)0x0) {
    FUN_012f5a60("value","..\\common\\common\\state\\GetTargetState.cpp",0xa7);
  }
  if (*(int *)((int)pvVar3 + 4) == 10) {
    iVar4 = *(int *)((int)pvVar3 + 8);
    *(undefined4 *)((int)this + 0x58) = *(undefined4 *)(iVar4 + 4);
    *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)(iVar4 + 8);
    MessageText_copyFrom(iVar4 + 0xc);
    iVar4 = StateMachineState_getGame();
    Message_setVersion((void *)((int)this + 0x54),*(int *)(iVar4 + 0x20));
  }
  uVar5 = (**(code **)(*(int *)this + 0xb8))();
  uVar9 = StateMachineState_getGame(uVar5);
  pvVar3 = find_play_element_in_maps((void *)uVar9,(int)((ulonglong)uVar9 >> 0x20));
  iVar4 = FUN_00d8d382(pvVar3,0,&PlayElement::RTTI_Type_Descriptor,&Card::RTTI_Type_Descriptor,0);
  if (iVar4 != 0) {
    uStack_10 = 0xf;
    uStack_14 = 0;
    pvStack_24 = (void *)((uint)pvStack_24 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_28,"#title#",7);
    iStack_4._0_1_ = 1;
    uVar5 = Card_getPropertyMap();
    FUN_01402480(abStack_28,uVar5);
    iStack_4 = (uint)iStack_4._1_3_ << 8;
    if (0xf < uStack_10) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_24);
    }
    uStack_10 = 0xf;
    uStack_14 = 0;
    pvStack_24 = (void *)((uint)pvStack_24 & 0xffffff00);
  }
  cVar1 = ReturnValueMap_hasIntegerKey(7);
  if (cVar1 != '\0') {
    uVar5 = ReturnValueMap_getInteger(7);
    *(undefined4 *)((int)this + 0x138) = uVar5;
  }
  cVar1 = ReturnValueMap_hasIntegerKey(4);
  if (cVar1 != '\0') {
    iVar6 = ReturnValueMap_getInteger(4);
    piVar7 = (int *)StateMachineState_getCurrentTurn();
    iVar4 = *piVar7;
    playerId_ = iVar6;
    pvVar3 = (void *)StateMachineState_getGame();
    pvVar3 = PlayArea_findPlayerElementById(pvVar3,playerId_);
    (**(code **)(iVar4 + 0x48))(pvVar3);
    *(int *)((int)this + 0xe0) = iVar6;
  }
  StateMachine_destroyReturnValueMap(pvVar2);
  pvVar2 = (void *)StateMachineState_getCurrentTurn();
  uVar8 = get_field_8(pvVar2);
  if (uVar8 != 0) {
    pvVar2 = EvaluationEnvironment_getOriginCard(*(void **)((int)this + 0xe8));
    if (pvVar2 != (void *)0x0) {
      piVar7 = EvaluationEnvironment_getOriginCard(*(void **)((int)this + 0xe8));
      cVar1 = (**(code **)(*piVar7 + 0x1e8))();
      if (cVar1 == '\0') {
        iVar4 = StateMachineState_getGame();
        set_pair_fields_4_8((void *)((int)this + 0x70),0x28b9,*(uint *)(iVar4 + 0x20));
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_28,"#title#");
        iStack_4._0_1_ = 2;
        EvaluationEnvironment_getOriginCard(*(void **)((int)this + 0xe8));
        uVar5 = Card_getPropertyMap();
        FUN_01402480(abStack_28,uVar5);
        iStack_4 = (uint)iStack_4._1_3_ << 8;
        if (0xf < uStack_10) {
                    /* WARNING: Subroutine does not return */
          _free(pvStack_24);
        }
        uStack_10 = 0xf;
        uStack_14 = 0;
        pvStack_24 = (void *)((uint)pvStack_24 & 0xffffff00);
        goto LAB_0141e802;
      }
    }
    iVar4 = StateMachineState_getGame();
    set_pair_fields_4_8((void *)((int)this + 0x70),0x2d3f,*(uint *)(iVar4 + 0x20));
  }
LAB_0141e802:
  iStack_4 = 0xffffffff;
  FUN_01300cd0();
  ExceptionList = local_c;
  return;
}

