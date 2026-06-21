// addr: 0x0150b050
// name: CommandObjectDiscard_doCommand
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectDiscard.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CommandObjectDiscard_doCommand(void * this) */

bool __fastcall CommandObjectDiscard_doCommand(void *this)

{
  rsize_t _DstSize;
  void *_Dst;
  bool bVar1;
  void *pvVar2;
  int *target;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  uint uVar6;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  int extraout_EDX_05;
  int extraout_EDX_06;
  uint uVar7;
  undefined8 uVar8;
  TypeDescriptor *pTVar9;
  TypeDescriptor *pTVar10;
  int *target_00;
  undefined4 uVar11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Executes/finalizes a discard: validates mTarget as a Card, disconnects
                       unowned cards, runs queued child command objects, and optionally sends the
                       discard-card game command. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016b5acb;
  local_c = ExceptionList;
  pvVar2 = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffdc);
  ExceptionList = &local_c;
  if ((*(char *)((int)this + 0x13c) == '\0') ||
     (bVar1 = Game_getFlag_14d(*(void **)((int)this + 0x30)), bVar1)) {
    if (*(int *)((int)this + 0x68) == 0) {
      FUN_012f5a60("mTarget","..\\common\\common\\command\\CommandObjectDiscard.cpp",0xe8);
    }
    target = (int *)FUN_00d8d382(*(undefined4 *)((int)this + 0x68),0,
                                 &PlayElement::RTTI_Type_Descriptor,&Card::RTTI_Type_Descriptor,0);
    if (target == (int *)0x0) {
      FUN_012f5a60(&DAT_018778b4,"..\\common\\common\\command\\CommandObjectDiscard.cpp",0xea);
    }
    uVar8 = (**(code **)(*target + 0x28))();
    iVar3 = (int)((ulonglong)uVar8 >> 0x20);
    if ((int)uVar8 == 0) {
      Game_logGeneral(*(void **)((int)this + 0x30),"card is unowned, disconnecting from parent.",
                      pvVar2);
      iVar3 = (**(code **)(*target + 0x30))();
      if (iVar3 != 0) {
        target_00 = target;
        pvVar4 = (void *)(**(code **)(*target + 0x30))();
        PlayElement_copyKeywordMapTo(pvVar4,target_00);
        uVar5 = (**(code **)(*target + 0x30))
                          (0,&PlayElement::RTTI_Type_Descriptor,&Card::RTTI_Type_Descriptor,0);
        iVar3 = FUN_00d8d382(uVar5);
        if (iVar3 != 0) {
          Card_clearActionReferencesToElement((void *)(iVar3 + 0x48),target);
        }
      }
      (**(code **)(**(int **)((int)this + 0x30) + 0x184))(target);
      (**(code **)(*target + 0xbc))(0);
      iVar3 = extraout_EDX;
    }
    uVar6 = *(uint *)((int)this + 0x134);
    if (uVar6 < *(uint *)((int)this + 0x130)) {
      FUN_00d83c2d();
      iVar3 = extraout_EDX_00;
    }
    uVar7 = *(uint *)((int)this + 0x130);
    if (*(uint *)((int)this + 0x134) < uVar7) {
      FUN_00d83c2d();
      iVar3 = extraout_EDX_01;
    }
    while( true ) {
      if (this == (void *)0xfffffed4) {
        FUN_00d83c2d();
        iVar3 = extraout_EDX_02;
      }
      if (uVar7 == uVar6) break;
      if (this == (void *)0xfffffed4) {
        FUN_00d83c2d();
        iVar3 = extraout_EDX_03;
      }
      if (*(uint *)((int)this + 0x134) <= uVar7) {
        FUN_00d83c2d();
        iVar3 = extraout_EDX_04;
      }
      uVar11 = 0;
      pTVar10 = &CommandObject::RTTI_Type_Descriptor;
      pTVar9 = &PlayElement::RTTI_Type_Descriptor;
      uVar5 = 0;
      pvVar4 = find_play_element_in_maps(*(void **)((int)this + 0x30),iVar3);
      pvVar4 = (void *)FUN_00d8d382(pvVar4,uVar5,pTVar9,pTVar10,uVar11);
      CommandObjectVector_pushBack(pvVar4,pvVar2);
      iVar3 = extraout_EDX_05;
      if (*(uint *)((int)this + 0x134) <= uVar7) {
        FUN_00d83c2d();
        iVar3 = extraout_EDX_06;
      }
      uVar7 = uVar7 + 4;
    }
    pvVar4 = *(void **)((int)this + 0x134);
    if (pvVar4 < *(void **)((int)this + 0x130)) {
      FUN_00d83c2d();
    }
    _Dst = *(void **)((int)this + 0x130);
    if (*(void **)((int)this + 0x134) < _Dst) {
      FUN_00d83c2d();
    }
    if (_Dst != pvVar4) {
      iVar3 = *(int *)((int)this + 0x134) - (int)pvVar4 >> 2;
      _DstSize = iVar3 * 4;
      if (0 < iVar3) {
        _memmove_s(_Dst,_DstSize,pvVar4,_DstSize);
      }
      *(void **)((int)this + 0x134) = (void *)(_DstSize + (int)_Dst);
    }
    if (*(char *)((int)this + 0x13c) != '\0') {
      Game_logGeneral(*(void **)((int)this + 0x30),"sending game command for discardcard.",pvVar2);
      pvVar2 = Mem_Alloc(0x50);
      pvVar4 = (void *)0x0;
      uStack_4 = 0;
      if (pvVar2 != (void *)0x0) {
        pvVar4 = GameCommand_DiscardCard_ctor(pvVar2,*(void **)((int)this + 0x30));
      }
      uStack_4 = 0xffffffff;
      uVar6 = GamePlayer_getPlayerId();
      set_field_4(pvVar4,uVar6);
      GameCommand_DiscardCard_setupCard(pvVar4,target);
      GameCommand_DiscardCard_setRandomFlag(pvVar4,*(bool *)((int)this + 0x13d));
      Game_dispatchCommandToAllPlayers(*(void **)((int)this + 0x30),pvVar4);
    }
  }
  ExceptionList = local_c;
  return true;
}

