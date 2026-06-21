// addr: 0x00b98d70
// name: ClientPointOfInterestManager_InternalDs_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ClientPointOfInterestManager_InternalDs_ctor(void * this, void * owner)
    */

void * __thiscall ClientPointOfInterestManager_InternalDs_ctor(void *this,void *owner)

{
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a ClientPointOfInterestManager internal data source with two
                       context fields after GuiDsTable initialization. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015e3ca8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,owner);
  *(undefined ***)this = ClientPointOfInterestManager::InternalDs::vftable;
  *(undefined ***)((int)this + 0x30) = ClientPointOfInterestManager::InternalDs::vftable;
  *(undefined ***)((int)this + 0x34) = ClientPointOfInterestManager::InternalDs::vftable;
  *(undefined4 *)((int)this + 0x254) = in_stack_00000008;
  *(undefined4 *)((int)this + 600) = in_stack_0000000c;
  ExceptionList = local_c;
  return this;
}

