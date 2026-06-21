// addr: 0x01504480
// name: CommandObject_Move_ctor
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObject_Move_ctor(void * this, void * log, int moveKind_) */

void * __thiscall CommandObject_Move_ctor(void *this,void *log,int moveKind_)

{
  rsize_t _DstSize;
  int *piVar1;
  uint uVar2;
  void *pvVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int *_Dst;
  undefined1 local_1c [4];
  int *piStack_18;
  int *piStack_14;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Constructs and initializes a CommandObject_Move from the current evaluation
                       environment, including source/destination cards, player context, move kind,
                       reveal-list removal, and special active-player bookkeeping. Evidence is the
                       vftable assignment and name string "CommandObject_Move". */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b4c00;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffc8;
  ExceptionList = &local_c;
  CommandObject_ctor(this,log);
  local_4 = 0;
  *(undefined ***)this = CommandObject_Move::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_Move::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x48),
             "CommandObject_Move",0x12);
  pvVar3 = EvaluationEnvironment_getGame(log);
  *(void **)((int)this + 0x30) = pvVar3;
  pvVar3 = EvaluationEnvironment_getMember14(log);
  *(void **)((int)this + 300) = pvVar3;
  pvVar3 = EvaluationEnvironment_getOriginCard(log);
  *(void **)((int)this + 100) = pvVar3;
  piVar4 = EvaluationEnvironment_resolveTarget(log);
  *(int **)((int)this + 0x68) = piVar4;
  if (*(int *)((int)this + 300) == 0) {
    iVar5 = (**(code **)(*piVar4 + 0x28))();
    pvVar3 = EvaluationEnvironment_getGame(log);
    pvVar3 = PlayArea_findPlayerElementById(pvVar3,iVar5);
    *(void **)((int)this + 300) = pvVar3;
    if (pvVar3 == (void *)0x0) {
      iVar5 = (**(code **)(**(int **)((int)this + 100) + 0x28))();
      pvVar3 = EvaluationEnvironment_getGame(log);
      pvVar3 = PlayArea_findPlayerElementById(pvVar3,iVar5);
      *(void **)((int)this + 300) = pvVar3;
    }
  }
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  *(int *)((int)this + 0x124) = moveKind_;
  if ((moveKind_ == 4) || (moveKind_ == 0x31)) {
    *(undefined1 *)((int)this + 0x81) = 0;
  }
  *(undefined4 *)((int)this + 0x130) = 2;
  FUN_01385f30(local_1c);
  local_4 = CONCAT31(local_4._1_3_,1);
  if ((piStack_18 != (int *)0x0) && ((int)piStack_14 - (int)piStack_18 >> 2 != 0)) {
    EvaluationEnvironment_tracef
              (log,"Checking to see if card to be moved is in the revealed cards list.",uVar2);
    piVar4 = piStack_14;
    if (piStack_14 < piStack_18) {
      FUN_00d83c2d();
    }
    _Dst = piStack_18;
    if (piStack_14 < piStack_18) {
      FUN_00d83c2d();
    }
    piVar1 = piStack_14;
    if (_Dst != piVar4) {
      do {
        if (*_Dst == *(int *)((int)this + 100)) break;
        _Dst = _Dst + 1;
      } while (_Dst != piVar4);
    }
    if (piStack_14 < piStack_18) {
      FUN_00d83c2d();
    }
    if (&stack0x00000000 == (undefined1 *)0x1c) {
      FUN_00d83c2d();
    }
    if (_Dst != piVar1) {
      EvaluationEnvironment_tracef(log,"Card is in the revealed cards list. removing",uVar2);
      iVar5 = (int)piStack_14 - (int)(_Dst + 1) >> 2;
      if (0 < iVar5) {
        _DstSize = iVar5 * 4;
        _memmove_s(_Dst,_DstSize,_Dst + 1,_DstSize);
      }
      piStack_14 = piStack_14 + -1;
      EvaluationEnvironment_setRevealedCardsReturn(local_1c);
    }
  }
  *(undefined4 *)((int)this + 0x7c) = 0;
  if (*(int *)((int)this + 0x124) == 4) {
    *(undefined4 *)((int)this + 0x7c) = 0xd;
  }
  iVar5 = (**(code **)(**(int **)((int)this + 100) + 0x28))();
  pvVar3 = EvaluationEnvironment_getGame(log);
  pvVar3 = PlayArea_findPlayerElementById(pvVar3,iVar5);
  if ((pvVar3 != (void *)0x0) && (iVar5 = PlayElement_getGame(), iVar5 != 0)) {
    iVar5 = FUN_0139d7a0();
    if (*(int *)((int)this + 0x68) == iVar5) {
      *(undefined4 *)((int)this + 0x7c) = 0;
    }
    iVar5 = FUN_0139d7c0();
    if (*(int *)((int)this + 0x68) == iVar5) {
      *(undefined4 *)((int)this + 0x74) = 0x43;
      *(undefined4 *)((int)this + 0x7c) = 0x43;
      FUN_013871f0(pvVar3);
    }
  }
  uVar6 = (**(code **)(**(int **)((int)this + 100) + 0x30))();
  *(undefined4 *)((int)this + 0x128) = uVar6;
  iVar5 = unknown_getField38(*(void **)((int)this + 100));
  if (iVar5 == 1) {
    *(undefined4 *)((int)this + 0x74) = 0x4e;
    iVar5 = PlayElement_getId();
    set_integer_value_for_key(0x33,iVar5);
    if (*(int *)((int)this + 0x68) != 0) {
      iVar5 = PlayElement_getId();
      set_integer_value_for_key(0x34,iVar5);
    }
  }
  local_4 = local_4 & 0xffffff00;
  if (piStack_18 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(piStack_18);
  }
  ExceptionList = local_c;
  return this;
}

