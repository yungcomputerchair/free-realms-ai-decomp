// addr: 0x00786620
// name: AnimationController_createRuntimeState
// subsystem: common/animation/events
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AnimationController_createRuntimeState(void * this) */

void __fastcall AnimationController_createRuntimeState(void *this)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs the 100-byte runtime state object, stores it at
                       offset 0x14, then builds animation event references for the controller. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01559cdb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(100);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_007864c0(this);
  }
  local_4 = 0xffffffff;
  *(undefined4 *)((int)this + 0x14) = uVar2;
  AnimationController_buildEventReferences(this);
  ExceptionList = local_c;
  return;
}

