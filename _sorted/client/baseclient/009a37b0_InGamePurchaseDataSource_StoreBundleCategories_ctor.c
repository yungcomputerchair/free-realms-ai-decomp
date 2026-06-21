// addr: 0x009a37b0
// name: InGamePurchaseDataSource_StoreBundleCategories_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * InGamePurchaseDataSource_StoreBundleCategories_ctor(void * this, void *
   name, void * owner) */

void * __thiscall
InGamePurchaseDataSource_StoreBundleCategories_ctor(void *this,void *name,void *owner)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the StoreBundleCategories data source, initializes the
                       InternalDsBase portion, stores the owner, installs StoreBundleCategories
                       vtables, and initializes its fixed pool. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0159d426;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  FUN_009974a0(name);
  *(undefined ***)((int)this + 0x38) = InGamePurchaseDataSource::InternalDsBase::vftable;
  *(void **)((int)this + 0x3c) = owner;
  local_4 = 1;
  *(undefined ***)this = InGamePurchaseDataSource::StoreBundleCategories::vftable;
  *(undefined ***)((int)this + 0x38) = InGamePurchaseDataSource::StoreBundleCategories::vftable;
  FUN_0099c580(uVar1);
  ExceptionList = local_c;
  return this;
}

