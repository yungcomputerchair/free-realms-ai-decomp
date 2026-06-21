// addr: 0x0140c990
// name: FUN_0140c990
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_0140c990(int *param_1,void *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  void *pvVar6;
  int *piVar7;
  void *pvVar8;
  int value_;
  void *unaff_EBX;
  void *unaff_EBP;
  void *unaff_ESI;
  void *unaff_retaddr;
  void *pvStack_24;
  void *pvStack_20;
  void *pvStack_1c;
  void *pvStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Allocates or lazily initializes an object/helper and wires it into the owning
                       object. Exact class identity is unknown. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0169206c;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffcc;
  ExceptionList = &local_c;
  (**(code **)(*param_1 + 0x30))();
  uVar4 = PlayElement_getId();
  uVar4 = PlayElement_getId(uVar4);
  uVar4 = FUN_0138a380(uVar4);
  Game_logGeneral((void *)param_1[0xc],
                  "moveToCardPosition cardArchetype: %d, cardElementID: %d, dest: %d",uVar4);
  iVar5 = Game_getMyPlayerID((void *)param_1[0xc]);
  pvVar6 = PlayArea_findPlayerElementById((void *)param_1[0xc],iVar5);
  iVar5 = (**(code **)(*param_1 + 0x28))();
  piVar7 = PlayArea_findPlayerElementById((void *)param_1[0xc],iVar5);
  pvStack_18 = (void *)0x0;
  pvStack_24 = (void *)0x0;
  pvStack_20 = (void *)0x0;
  pvStack_1c = (void *)0x0;
  if ((pvVar6 != (void *)0x0) && (iVar5 = PlayElement_getGame(), iVar5 != 0)) {
    PlayElement_getGame();
    pvStack_18 = (void *)FUN_0139d7c0();
    uVar4 = PlayElement_getId();
    Game_logGeneral((void *)param_1[0xc],"myHandPile: %d",uVar4);
  }
  if (piVar7 != (int *)0x0) {
    PlayElement_getGame();
    pvStack_24 = (void *)Player_getDiscardPile();
    (**(code **)(*piVar7 + 0x90))();
    PlayElement_getGame();
    pvStack_20 = (void *)FUN_0139d7c0();
    PlayElement_getGame();
    pvStack_1c = (void *)FUN_0139d7a0();
    uVar4 = PlayElement_getId();
    uVar4 = PlayElement_getId(uVar4);
    Game_logGeneral((void *)param_1[0xc],"limboPile: %d, discardPile: %d",uVar4);
  }
  iVar5 = (**(code **)(*param_1 + 0x30))();
  if (iVar5 != 0) {
    (**(code **)(*param_1 + 0x30))();
    uVar4 = PlayElement_getId();
    Game_logGeneral((void *)param_1[0xc],"parent: %d",uVar4);
  }
  pvVar6 = (void *)0x0;
  if ((pvStack_18 != (void *)0x0) &&
     (pvVar8 = (void *)(**(code **)(*param_1 + 0x30))(), pvStack_18 == pvVar8)) {
    Game_logGeneral((void *)param_1[0xc],"removing card from hand.",uVar3);
    pvVar8 = Mem_Alloc(0x14);
    uStack_4 = 0;
    if (pvVar8 != (void *)0x0) {
      pvVar6 = (void *)FUN_012f9eb0();
    }
    uStack_4 = 0xffffffff;
    FUN_012f8c70(0x62);
    iVar5 = StateMachine_getCurrentState();
    DisplayActionBuilder_addIntArg(pvVar6,iVar5);
    iVar5 = PlayElement_getId();
    DisplayActionBuilder_addIntArg(pvVar6,iVar5);
    (**(code **)(*(int *)param_1[0xc] + 0x154))(pvVar6);
  }
  if (((pvStack_24 == param_2) || (pvStack_20 == param_2)) || (pvStack_1c == param_2)) {
    uVar4 = PlayElement_getId();
    Game_logGeneral((void *)param_1[0xc],"DISCARDING: %d",uVar4);
    pcVar1 = *(code **)(*param_1 + 0x1ec);
    *(undefined1 *)((int)param_1 + 0x69) = 0;
    (*pcVar1)();
    (**(code **)(*param_1 + 0x18c))();
    (**(code **)(*(int *)param_1[0xc] + 0x184))(param_1);
  }
  pvVar6 = Mem_Alloc(0x14);
  uStack_4 = 1;
  if (pvVar6 == (void *)0x0) {
    pvVar8 = (void *)0x0;
  }
  else {
    pvVar8 = (void *)FUN_012f9eb0();
  }
  uStack_4 = 0xffffffff;
  FUN_012f8c70(0x73);
  iVar5 = StateMachine_getCurrentState();
  DisplayActionBuilder_addIntArg(pvVar8,iVar5);
  iVar5 = PlayElement_getId();
  DisplayActionBuilder_addIntArg(pvVar8,iVar5);
  iVar5 = (**(code **)(*param_1 + 0x30))();
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    (**(code **)(*param_1 + 0x30))();
    iVar5 = PlayElement_getId();
  }
  DisplayActionBuilder_addIntArg(pvVar8,iVar5);
  iVar5 = PlayElement_getId();
  DisplayActionBuilder_addIntArg(pvVar8,iVar5);
  DisplayActionBuilder_addIntArg(pvVar8,3);
  uVar4 = (**(code **)(*param_1 + 0x30))
                    (0,&PlayElement::RTTI_Type_Descriptor,&CWCard::RTTI_Type_Descriptor,0);
  FUN_00d8d382(uVar4);
  FUN_00d8d382(param_2,0,&PlayElement::RTTI_Type_Descriptor,&CWCard::RTTI_Type_Descriptor,0);
  (**(code **)(*(int *)param_1[0xc] + 0x154))(pvVar8);
  if (param_2 == (void *)0x2) {
    PlayElement_changeParent(2,3);
  }
  else {
    if (param_1[6] != 0) {
      FUN_01342eb0(param_1,param_1[0xe]);
    }
    param_1[6] = (int)param_2;
    param_1[0xe] = 3;
    Player_compactZoneVector_013442b0(param_1,3);
  }
  bVar2 = Game_getFlag_14d((void *)param_1[0xc]);
  if (((!bVar2) && (pvStack_18 != (void *)0x0)) && (pvStack_18 == param_2)) {
    pvVar8 = Mem_Alloc(0x14);
    puStack_8 = (undefined1 *)0x2;
    if (pvVar8 == (void *)0x0) {
      pvVar8 = (void *)0x0;
    }
    else {
      pvVar8 = (void *)FUN_012f9eb0();
    }
    puStack_8 = (undefined1 *)0xffffffff;
    FUN_012f8c70(99);
    iVar5 = StateMachine_getCurrentState();
    DisplayActionBuilder_addIntArg(pvVar8,iVar5);
    iVar5 = PlayElement_getId();
    DisplayActionBuilder_addIntArg(pvVar8,iVar5);
    (**(code **)(*(int *)param_1[0xc] + 0x154))(pvVar8);
  }
  iVar5 = (**(code **)(*param_1 + 0x28))();
  pvVar8 = (void *)FUN_01340340();
  pvVar8 = PlayArea_findPlayerElementById(pvVar8,iVar5);
  if (pvVar8 != (void *)0x0) {
    iVar5 = (**(code **)(*param_1 + 0x28))();
    pvVar8 = (void *)FUN_01340340();
    pvVar8 = PlayArea_findPlayerElementById(pvVar8,iVar5);
    piVar7 = (int *)unknown_getField30(pvVar8);
    if (piVar7 != (int *)0x0) {
      pvVar8 = Mem_Alloc(0x14);
      puStack_8 = (undefined1 *)0x3;
      if (pvVar8 == (void *)0x0) {
        pvVar8 = (void *)0x0;
      }
      else {
        pvVar8 = (void *)FUN_012f9eb0();
      }
      puStack_8 = (undefined1 *)0xffffffff;
      iVar5 = StateMachine_getCurrentState();
      value_ = (**(code **)(*piVar7 + 0x28))();
      FUN_012f8c70(0x1adc9);
      DisplayActionBuilder_addIntArg(pvVar8,iVar5);
      DisplayActionBuilder_addIntArg(pvVar8,value_);
      (**(code **)(*(int *)param_1[0xc] + 0x154))(pvVar8);
      param_2 = unaff_retaddr;
    }
  }
  (**(code **)(*param_1 + 0x6c))(param_2,pvVar6);
  if (((unaff_ESI == param_2) || (unaff_EBP == param_2)) || (unaff_EBX == param_2)) {
    (**(code **)(*param_1 + 0x1f0))();
  }
  ExceptionList = pvStack_18;
  return 1;
}

