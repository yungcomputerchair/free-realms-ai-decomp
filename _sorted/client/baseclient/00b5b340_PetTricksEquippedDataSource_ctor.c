// addr: 0x00b5b340
// name: PetTricksEquippedDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PetTricksEquippedDataSource_ctor(void * this, void * owner) */

void * __thiscall PetTricksEquippedDataSource_ctor(void *this,void *owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a PetTricksEquippedDataSource by initializing
                       BasePetTrickDataSource and then installing PetTricksEquippedDataSource
                       vtables. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015dbb08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  BasePetTrickDataSource_ctor(this,owner);
  *(undefined ***)this = PetTricksEquippedDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = PetTricksEquippedDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = PetTricksEquippedDataSource::vftable;
  ExceptionList = local_c;
  return this;
}

