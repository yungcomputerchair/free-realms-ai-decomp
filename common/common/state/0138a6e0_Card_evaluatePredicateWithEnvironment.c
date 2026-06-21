// addr: 0x0138a6e0
// name: Card_evaluatePredicateWithEnvironment
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Card_evaluatePredicateWithEnvironment(void * this, void * arg1, void *
   arg2) */

bool __thiscall Card_evaluatePredicateWithEnvironment(void *this,void *arg1,void *arg2)

{
  undefined1 uVar1;
  undefined1 local_a0 [136];
  void *pvStack_18;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Creates an EvaluationEnvironment for this card/game, adds argument context,
                       and invokes the card virtual predicate at vtable +0xe8. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168382b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  EvaluationEnvironment_ctor(DAT_01b839d8 ^ (uint)&stack0xffffff54);
  local_4 = 0;
  EvaluationEnvironment_setGame(*(undefined4 *)((int)this + 0x30));
  FUN_013815b0(arg2);
  uVar1 = (**(code **)(*(int *)this + 0xe8))(arg1,arg2,local_a0);
  uStack_10 = 0xffffffff;
  FUN_01385460();
  ExceptionList = pvStack_18;
  return (bool)uVar1;
}

