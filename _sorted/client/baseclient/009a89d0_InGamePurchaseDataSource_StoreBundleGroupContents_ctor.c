// addr: 0x009a89d0
// name: InGamePurchaseDataSource_StoreBundleGroupContents_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * InGamePurchaseDataSource_StoreBundleGroupContents_ctor(void * this,
   void * name, void * owner) */

void * __thiscall
InGamePurchaseDataSource_StoreBundleGroupContents_ctor(void *this,void *name,void *owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the InGamePurchaseDataSource::StoreBundleGroupContents data source
                       by invoking the shared StoreBundles base constructor and installing the
                       StoreBundleGroupContents vtables. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0159e2d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  InGamePurchaseDataSource_StoreBundles_ctor(this,name);
  *(undefined ***)this = InGamePurchaseDataSource::StoreBundleGroupContents::vftable;
  *(undefined ***)((int)this + 0x30) = InGamePurchaseDataSource::StoreBundleGroupContents::vftable;
  *(undefined ***)((int)this + 0x34) = InGamePurchaseDataSource::StoreBundleGroupContents::vftable;
  *(undefined ***)((int)this + 0x254) = InGamePurchaseDataSource::StoreBundleGroupContents::vftable;
  *(undefined ***)((int)this + 0x270) = InGamePurchaseDataSource::StoreBundleGroupContents::vftable;
  *(undefined4 *)((int)this + 0x12dc) = DAT_01be590c;
  *(undefined1 *)((int)this + 0x1299) = 0;
  ExceptionList = local_c;
  return this;
}

