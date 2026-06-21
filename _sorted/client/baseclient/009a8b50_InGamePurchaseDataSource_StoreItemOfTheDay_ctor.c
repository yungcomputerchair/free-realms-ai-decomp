// addr: 0x009a8b50
// name: InGamePurchaseDataSource_StoreItemOfTheDay_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * InGamePurchaseDataSource_StoreItemOfTheDay_ctor(void * this, void *
   name, void * owner) */

void * __thiscall InGamePurchaseDataSource_StoreItemOfTheDay_ctor(void *this,void *name,void *owner)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the InGamePurchaseDataSource::StoreItemOfTheDay data source by
                       invoking the shared StoreBundles base constructor and installing the
                       StoreItemOfTheDay vtables. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0159e346;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  InGamePurchaseDataSource_StoreBundles_ctor(this,name);
  local_4 = 0;
  *(undefined ***)this = InGamePurchaseDataSource::StoreItemOfTheDay::vftable;
  *(undefined ***)((int)this + 0x30) = InGamePurchaseDataSource::StoreItemOfTheDay::vftable;
  *(undefined ***)((int)this + 0x34) = InGamePurchaseDataSource::StoreItemOfTheDay::vftable;
  *(undefined ***)((int)this + 0x254) = InGamePurchaseDataSource::StoreItemOfTheDay::vftable;
  *(undefined ***)((int)this + 0x270) = InGamePurchaseDataSource::StoreItemOfTheDay::vftable;
  FUN_0099d8d0(uVar1);
  ExceptionList = local_c;
  return this;
}

