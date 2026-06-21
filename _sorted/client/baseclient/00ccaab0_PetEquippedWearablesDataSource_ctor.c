// addr: 0x00ccaab0
// name: PetEquippedWearablesDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PetEquippedWearablesDataSource_ctor(void * this, void * owner, void *
   arg3, void * arg4) */

void * __thiscall PetEquippedWearablesDataSource_ctor(void *this,void *owner,void *arg3,void *arg4)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a PetEquippedWearablesDataSource, installs its data-source
                       vtables, stores the owner, and clears its current selection/state field. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0160c388;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00cb1bb0(arg4,arg3);
  *(undefined ***)this = PetEquippedWearablesDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = PetEquippedWearablesDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = PetEquippedWearablesDataSource::vftable;
  *(undefined ***)((int)this + 0x254) = PetEquippedWearablesDataSource::vftable;
  *(void **)((int)this + 0x2dc) = owner;
  *(undefined4 *)((int)this + 0x2e0) = 0;
  ExceptionList = local_c;
  return this;
}

