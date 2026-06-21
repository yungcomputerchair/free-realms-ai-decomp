// addr: 0x01345110
// name: FUN_01345110
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool FUN_01345110(void * this) */

bool __fastcall FUN_01345110(void *this)

{
  undefined1 uVar1;
  int *unaff_retaddr;
  undefined1 local_a0 [144];
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Creates a temporary EvaluationEnvironment, invokes virtual hooks, then
                       destroys the environment. Domain context is weak; likely an adapter/helper
                       for evaluation callbacks. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167cc9b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  EvaluationEnvironment_ctor(DAT_01b839d8 ^ (uint)&stack0xffffff58);
  local_4 = 0;
  (**(code **)(*(int *)this + 0x84))(local_a0);
  uVar1 = (**(code **)(*unaff_retaddr + 0x150))();
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_01385460();
  ExceptionList = pvStack_10;
  return (bool)uVar1;
}

