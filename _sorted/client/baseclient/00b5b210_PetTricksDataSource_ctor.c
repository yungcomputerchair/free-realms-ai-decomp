// addr: 0x00b5b210
// name: PetTricksDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PetTricksDataSource_ctor(void * this, void * owner) */

void * __thiscall PetTricksDataSource_ctor(void *this,void *owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a PetTricksDataSource by initializing BasePetTrickDataSource and
                       then installing PetTricksDataSource vtables. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015dba78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  BasePetTrickDataSource_ctor(this,owner);
  *(undefined ***)this = PetTricksDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = PetTricksDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = PetTricksDataSource::vftable;
  ExceptionList = local_c;
  return this;
}

