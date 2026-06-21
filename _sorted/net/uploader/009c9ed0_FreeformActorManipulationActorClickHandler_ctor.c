// addr: 0x009c9ed0
// name: FreeformActorManipulationActorClickHandler_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * FreeformActorManipulationActorClickHandler_ctor(void * this, void *
   owner) */

void * __thiscall FreeformActorManipulationActorClickHandler_ctor(void *this,void *owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a FreeformActorManipulationActorClickHandler, invoking its base
                       click-handler constructor and storing the owner pointer. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015a36b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008c49a0(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = FreeformActorManipulationActorClickHandler::vftable;
  *(void **)((int)this + 0xc) = owner;
  ExceptionList = local_c;
  return this;
}

