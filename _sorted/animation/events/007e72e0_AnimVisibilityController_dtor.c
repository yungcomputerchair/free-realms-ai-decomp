// addr: 0x007e72e0
// name: AnimVisibilityController_dtor
// subsystem: common/animation/events
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AnimVisibilityController_dtor(void * this) */

void __fastcall AnimVisibilityController_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructs AnimVisibilityController, clears its reference array, then restores
                       base VisibilityController and SoeUtil::RefCounted vtables. */
  puStack_8 = &LAB_01564848;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = AnimVisibilityController::vftable;
  *(undefined4 *)((int)this + 8) = AnimVisibilityController::vftable;
  local_4 = 0;
  if (*(void **)((int)this + 0xc) != (void *)0x0) {
    AnimVisibilityController_removeReference
              (*(void **)((int)this + 0xc),(undefined4 *)((int)this + 8));
  }
  *(undefined ***)this = VisibilityController::vftable;
  *(undefined ***)this = SoeUtil::RefCounted::vftable;
  ExceptionList = local_c;
  return;
}

