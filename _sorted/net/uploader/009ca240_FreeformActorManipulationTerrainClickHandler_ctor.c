// addr: 0x009ca240
// name: FreeformActorManipulationTerrainClickHandler_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * FreeformActorManipulationTerrainClickHandler_ctor(void * this, void *
   owner) */

void * __thiscall FreeformActorManipulationTerrainClickHandler_ctor(void *this,void *owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a FreeformActorManipulationTerrainClickHandler, invoking its base
                       constructor and storing the owner pointer. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015a3748;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008b3590(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = FreeformActorManipulationTerrainClickHandler::vftable;
  *(void **)((int)this + 0xc) = owner;
  ExceptionList = local_c;
  return this;
}

