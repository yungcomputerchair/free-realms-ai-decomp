// addr: 0x00a6d870
// name: BaseInventoryDataSource_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * BaseInventoryDataSource_ctor(void * this, void * owner, void * arg3,
   void * name) */

void * __thiscall BaseInventoryDataSource_ctor(void *this,void *owner,void *arg3,void *name)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a BaseInventoryDataSource by invoking the shared data-source base
                       initializer, installing all BaseInventoryDataSource vtables, and storing
                       owner/state fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015b9ac8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00cb1bb0(name,arg3);
  *(undefined ***)this = BaseInventoryDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = BaseInventoryDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = BaseInventoryDataSource::vftable;
  *(undefined ***)((int)this + 0x254) = BaseInventoryDataSource::vftable;
  *(void **)((int)this + 0x2dc) = owner;
  *(undefined4 *)((int)this + 0x2e0) = 0;
  *(undefined4 *)((int)this + 0x2e4) = 0;
  ExceptionList = local_c;
  return this;
}

