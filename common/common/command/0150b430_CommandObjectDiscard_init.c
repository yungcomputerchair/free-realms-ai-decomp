// addr: 0x0150b430
// name: CommandObjectDiscard_init
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectDiscard.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectDiscard_init(void * this, void * context_or_flag) */

void __thiscall CommandObjectDiscard_init(void *this,void *context_or_flag)

{
  rsize_t _DstSize;
  char cVar1;
  bool bVar2;
  void *card;
  int *piVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  char *pcVar10;
  void *pvVar11;
  void *unaff_EDI;
  void *pvStack_44;
  undefined4 uStack_40;
  undefined1 auStack_3c [8];
  undefined1 auStack_34 [8];
  undefined1 auStack_2c [4];
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Initializes a CommandObject_Discard: sets the command name, captures
                       target/player/origin fields, determines hand/deck discard cases, and may
                       enqueue child discard/cost commands. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016b5b7b;
  local_c = ExceptionList;
  card = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffac);
  ExceptionList = &local_c;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x48),
             "CommandObject_Discard",0x15);
  pvVar11 = context_or_flag;
  piVar3 = EvaluationEnvironment_resolveTarget(context_or_flag);
  *(int **)((int)this + 0x68) = piVar3;
  iVar4 = (**(code **)(*piVar3 + 0x30))();
  if (iVar4 != 0) {
    (**(code **)(**(int **)((int)this + 0x68) + 0x30))();
    iVar4 = PlayElement_getId();
    set_integer_value_for_key(0x3b,iVar4);
    (**(code **)(**(int **)((int)this + 0x68) + 0x30))();
    iVar4 = PlayElement_getId();
    set_integer_value_for_key(0x3b,iVar4);
  }
  pvVar5 = EvaluationEnvironment_getGame(pvVar11);
  *(void **)((int)this + 0x30) = pvVar5;
  pvVar5 = EvaluationEnvironment_getOriginCard(pvVar11);
  *(void **)((int)this + 100) = pvVar5;
  pvVar5 = EvaluationEnvironment_getMember14(pvVar11);
  *(void **)((int)this + 0x128) = pvVar5;
  *(undefined1 *)((int)this + 0x13c) = 0;
  pvVar5 = EvaluationEnvironment_getAction(pvVar11);
  *(bool *)((int)this + 0x13d) = pvVar5 == (void *)0x1;
  context_or_flag =
       (void *)FUN_00d8d382(*(undefined4 *)((int)this + 0x68),0,&PlayElement::RTTI_Type_Descriptor,
                            &Card::RTTI_Type_Descriptor,0);
  if (context_or_flag != (int *)0x0) {
    iVar4 = (**(code **)(*(int *)context_or_flag + 0x28))();
    pvVar5 = PlayArea_findPlayerElementById(*(void **)((int)this + 0x30),iVar4);
    if (pvVar5 != (void *)0x0) {
      piVar3 = *(int **)((int)this + 0x68);
      PlayElement_getGame();
      pvStack_44 = (void *)FUN_0139d7c0();
      pvVar5 = (void *)(**(code **)(*piVar3 + 0x30))();
      if (pvVar5 == pvStack_44) {
        EvaluationEnvironment_tracef(pvVar11,"Discarding a card from hand!",card);
        *(undefined4 *)((int)this + 0x7c) = 0xd;
        DiscardCardState_setSpecialDiscardFlag(true);
      }
      else {
        piVar3 = *(int **)((int)this + 0x68);
        PlayElement_getGame();
        iVar4 = FUN_0139d7a0();
        iVar6 = (**(code **)(*piVar3 + 0x30))();
        if (iVar6 == iVar4) {
          EvaluationEnvironment_tracef(pvVar11,"Discarding a card from draw deck!",card);
          FUN_01385f30(auStack_1c);
          uStack_4 = 0;
          puVar7 = (undefined4 *)FUN_01258ef0(auStack_3c);
          puVar8 = (undefined4 *)FUN_01258ec0(auStack_34);
          puVar7 = (undefined4 *)
                   FUN_01355ae0(auStack_2c,*puVar8,puVar8[1],*puVar7,puVar7[1],&context_or_flag);
          pvStack_44 = (void *)*puVar7;
          uStack_40 = puVar7[1];
          uVar9 = FUN_01258ef0(auStack_2c);
          cVar1 = FUN_012586d0(uVar9);
          if (cVar1 != '\0') {
            EvaluationEnvironment_tracef
                      (pvVar11,"Found card in revealed cards, not using game command.",card);
          }
          uStack_4 = 0xffffffff;
          STLVector_int_clear(auStack_1c);
        }
      }
    }
  }
  if ((*(int *)((int)this + 0x124) != 2) &&
     ((iVar4 = unknown_getField38(*(void **)((int)this + 0x68)), iVar4 == 1 ||
      (iVar4 = unknown_getField38(*(void **)((int)this + 0x68)), iVar4 == 2)))) {
    EvaluationEnvironment_tracef
              (pvVar11,"mTarget is BorneContainmentType or StackedContainmentType",card);
    uVar9 = (**(code **)(**(int **)((int)this + 0x68) + 0x30))
                      (0,&PlayElement::RTTI_Type_Descriptor,&Card::RTTI_Type_Descriptor,0);
    pcVar10 = (char *)FUN_00d8d382(uVar9);
    if (pcVar10 != (char *)0x0) {
      EvaluationEnvironment_logCardMessage(pvVar11,"setting Last Owner to :",pcVar10,card);
      cVar1 = Rules_getBooleanKey9DefaultFalse();
      if (cVar1 == '\0') {
        FUN_01387360(pcVar10);
        Game_getCurrentTurn(*(void **)((int)this + 0x30));
        EventEmissionDepthMap_setCurrentDepthValue((int)pcVar10);
      }
    }
  }
  if ((*(char *)((int)this + 0x13c) == '\0') ||
     (bVar2 = Game_getFlag_14d(*(void **)((int)this + 0x30)), bVar2)) {
    EvaluationEnvironment_tracef(pvVar11,"doing normal discard",card);
    puStack_28 = (undefined4 *)0x0;
    puStack_24 = (undefined4 *)0x0;
    uStack_20 = 0;
    uStack_4 = 1;
    (**(code **)(**(int **)((int)this + 0x68) + 0x34))(auStack_2c);
    while ((puVar7 = puStack_28, puStack_28 != (undefined4 *)0x0 &&
           ((int)puStack_24 - (int)puStack_28 >> 2 != 0))) {
      if (puStack_24 < puStack_28) {
        FUN_00d83c2d();
      }
      if (puStack_24 <= puVar7) {
        FUN_00d83c2d();
      }
      puVar8 = puStack_28;
      piVar3 = (int *)*puVar7;
      if (puStack_24 < puStack_28) {
        FUN_00d83c2d();
      }
      puVar7 = puVar8 + 1;
      iVar4 = (int)puStack_24 - (int)puVar7 >> 2;
      if (0 < iVar4) {
        _DstSize = iVar4 * 4;
        _memmove_s(puVar8,_DstSize,puVar7,_DstSize);
      }
      puStack_24 = puStack_24 + -1;
      if (piVar3 == (int *)0x0) {
        FUN_012f5a60("target","..\\common\\common\\command\\CommandObjectDiscard.cpp",0x7c);
      }
      pvVar11 = (void *)((int)this + 0x84);
      set_play_element_id_field(pvVar11,piVar3);
      if (*(char *)((int)this + 0x13d) == '\0') {
        pvVar5 = *(void **)((int)this + 0x30);
        pcVar10 = "Cost Effect Not Set.";
      }
      else {
        EvaluationEnvironment_setPlayElementReturn(piVar3,(int)card,unaff_EDI);
        EvaluationEnvironment_setPlayElementReturn(piVar3,(int)card,unaff_EDI);
        pvVar5 = *(void **)((int)this + 0x30);
        pcVar10 = "Adding discardcostcard.";
      }
      Game_logGeneral(pvVar5,pcVar10,card);
      iVar4 = (**(code **)(*piVar3 + 0x28))();
      if (iVar4 != 0) {
        pvVar5 = PlayArea_findPlayerElementById(*(void **)((int)this + 0x30),iVar4);
        if (pvVar5 == (void *)0x0) {
          FUN_012f5a60("player","..\\common\\common\\command\\CommandObjectDiscard.cpp",0x92);
        }
        PlayElement_getGame();
        pvVar5 = (void *)Player_getDiscardPile();
        EvaluationEnvironment_setCurrentTargetFromElement(pvVar11,pvVar5,card);
        pvStack_44 = Mem_Alloc(0x13c);
        uStack_4._0_1_ = 2;
        if (pvStack_44 == (void *)0x0) {
          pvVar5 = (void *)0x0;
        }
        else {
          pvVar5 = CommandObject_Move_ctor(pvStack_44,pvVar11,4);
        }
        uStack_4 = CONCAT31(uStack_4._1_3_,1);
        EvaluationEnvironment_setCurrentTargetFromElement(pvVar11,*(void **)((int)this + 0x68),card)
        ;
        if (pvVar5 != (void *)0x0) {
          pvStack_44 = (void *)PlayElement_getId();
          FUN_0042c155(&pvStack_44);
        }
      }
    }
    uStack_4 = 0xffffffff;
    if (puStack_28 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_28);
    }
    puStack_28 = (undefined4 *)0x0;
    puStack_24 = (undefined4 *)0x0;
    uStack_20 = 0;
  }
  set_play_element_id_field((void *)((int)this + 0x84),*(void **)((int)this + 100));
  if (*(void **)((int)this + 100) != (void *)0x0) {
    iVar4 = unknown_getField38(*(void **)((int)this + 100));
    if ((iVar4 == 2) || (cVar1 = (**(code **)(*(int *)context_or_flag + 0x4c))(), cVar1 == '\0')) {
      *(undefined4 *)((int)this + 0x74) = 0;
    }
    else {
      pvVar11 = Rules_getVariable2dCard();
      if (pvVar11 == (void *)0x0) {
        pvVar11 = (void *)FUN_00d8d382(*(undefined4 *)((int)this + 0x68),0,
                                       &PlayElement::RTTI_Type_Descriptor,
                                       &Card::RTTI_Type_Descriptor,0);
        PlayElement_setLastOwner(pvVar11);
      }
      *(undefined4 *)((int)this + 0x74) = 0x32;
    }
  }
  *(undefined1 *)((int)this + 0x81) = 0;
  ExceptionList = local_c;
  return;
}

