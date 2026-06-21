// addr: 0x009a8c10
// name: InGamePurchaseDataSource_StoreBundleOfTheDay_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * InGamePurchaseDataSource_StoreBundleOfTheDay_ctor(void * this, void *
   name, void * owner) */

void * __thiscall
InGamePurchaseDataSource_StoreBundleOfTheDay_ctor(void *this,void *name,void *owner)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the InGamePurchaseDataSource::StoreBundleOfTheDay data source by
                       invoking the shared StoreBundles base constructor and installing the
                       StoreBundleOfTheDay vtables. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0159e386;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  InGamePurchaseDataSource_StoreBundles_ctor(this,name);
  local_4 = 0;
  *(undefined ***)this = InGamePurchaseDataSource::StoreBundleOfTheDay::vftable;
  *(undefined ***)((int)this + 0x30) = InGamePurchaseDataSource::StoreBundleOfTheDay::vftable;
  *(undefined ***)((int)this + 0x34) = InGamePurchaseDataSource::StoreBundleOfTheDay::vftable;
  *(undefined ***)((int)this + 0x254) = InGamePurchaseDataSource::StoreBundleOfTheDay::vftable;
  *(undefined ***)((int)this + 0x270) = InGamePurchaseDataSource::StoreBundleOfTheDay::vftable;
  FUN_0099d9d0(uVar1);
  ExceptionList = local_c;
  return this;
}

