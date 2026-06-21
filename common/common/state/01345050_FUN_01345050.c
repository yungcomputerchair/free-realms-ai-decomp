// addr: 0x01345050
// name: FUN_01345050
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool FUN_01345050(void * this) */

bool __fastcall FUN_01345050(void *this)

{
  undefined1 uVar1;
  undefined4 unaff_retaddr;
  undefined1 local_a0 [136];
  void *pvStack_18;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Creates a temporary EvaluationEnvironment, invokes virtual hooks, then
                       destroys the environment. Domain context is weak; likely an adapter/helper
                       for evaluation callbacks. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167cc6b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  EvaluationEnvironment_ctor(DAT_01b839d8 ^ (uint)&stack0xffffff58);
  local_4 = 0;
  (**(code **)(*(int *)this + 0x84))(local_a0);
  uVar1 = (**(code **)(*(int *)this + 0x4c))(unaff_retaddr,&stack0xffffff5c);
  uStack_10 = 0xffffffff;
  FUN_01385460();
  ExceptionList = pvStack_18;
  return (bool)uVar1;
}

