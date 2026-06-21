// addr: 0x00b5b120
// name: BasePetTrickDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * BasePetTrickDataSource_ctor(void * this, void * owner) */

void * __thiscall BasePetTrickDataSource_ctor(void *this,void *owner)

{
  void *in_stack_00000008;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a BasePetTrickDataSource with a caller-provided table name,
                       installs vtables, and stores owner context. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015dba18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,in_stack_00000008);
  *(undefined ***)this = BasePetTrickDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = BasePetTrickDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = BasePetTrickDataSource::vftable;
  *(void **)((int)this + 0x254) = owner;
  ExceptionList = local_c;
  return this;
}

