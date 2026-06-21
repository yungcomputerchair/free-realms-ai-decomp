// addr: 0x0132c1d0
// name: GameResult_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GameResult_ctor(void * this) */

void * __thiscall GameResult_ctor(void *this)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 in_stack_00000004;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a game-result style object with fields such as
                       NumberOfCardsDestroyed, NumberOfCardsPlayed, and NumberOfTurns. Evidence is
                       the referenced GameResult-related field strings and allocation/initialization
                       of result data. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167a7cb;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  pvVar2 = Mem_Alloc(0x18);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = ReturnValueMap_ctor(uVar1);
  }
  local_4 = 0xffffffff;
  StateMachine_pushPendingState(uVar3);
  uVar3 = (**(code **)(**(int **)((int)this + 0x32c) + 0x40))();
  GameResult_appendValue(in_stack_00000004);
  pvVar2 = (void *)StateMachine_setCurrentState(uVar3);
  ExceptionList = local_c;
  return pvVar2;
}

