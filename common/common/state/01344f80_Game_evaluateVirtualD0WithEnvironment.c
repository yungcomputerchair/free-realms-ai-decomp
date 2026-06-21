// addr: 0x01344f80
// name: Game_evaluateVirtualD0WithEnvironment
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Game_evaluateVirtualD0WithEnvironment(void * this, void * arg1, void *
   arg2) */

bool __thiscall Game_evaluateVirtualD0WithEnvironment(void *this,void *arg1,void *arg2)

{
  undefined1 uVar1;
  int *unaff_retaddr;
  undefined1 local_a0 [132];
  void *pvStack_1c;
  undefined4 uStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Creates an EvaluationEnvironment, seeds it from the game/context, and invokes
                       the virtual method at vtable +0xd0. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167cc3b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  EvaluationEnvironment_ctor(DAT_01b839d8 ^ (uint)&stack0xffffff58);
  local_4 = 0;
  (**(code **)(*(int *)this + 0x84))(local_a0);
  EvaluationEnvironment_setBooleanKey4(0);
  set_play_element_id_field(&stack0xffffff5c,unaff_retaddr);
  uVar1 = (**(code **)(*unaff_retaddr + 0xd0))(arg1,arg2,&stack0xffffff5c);
  uStack_14 = 0xffffffff;
  FUN_01385460();
  ExceptionList = pvStack_1c;
  return (bool)uVar1;
}

