// addr: 0x013452b0
// name: Game_evaluateVirtual64WithEnvironment
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Game_evaluateVirtual64WithEnvironment(void * this, void * arg1, void *
   arg2) */

bool __thiscall Game_evaluateVirtual64WithEnvironment(void *this,void *arg1,void *arg2)

{
  undefined1 uVar1;
  void *pvVar2;
  int actionId_;
  void *unaff_retaddr;
  undefined1 local_a0 [128];
  void *pvStack_20;
  undefined4 uStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Creates an EvaluationEnvironment, binds context from arg1, and invokes a game
                       virtual predicate/method through the indicated vtable slot. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167ccfb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  EvaluationEnvironment_ctor(DAT_01b839d8 ^ (uint)&stack0xffffff54);
  local_4 = 0;
  (**(code **)(*(int *)this + 0x84))(local_a0);
  pvVar2 = Card_getActionByID(unaff_retaddr,actionId_);
  EvaluationEnvironment_setActionReturn(pvVar2);
  uVar1 = (**(code **)(*(int *)this + 100))(unaff_retaddr,arg1,arg2,&stack0xffffff5c);
  uStack_18 = 0xffffffff;
  FUN_01385460();
  ExceptionList = pvStack_20;
  return (bool)uVar1;
}

