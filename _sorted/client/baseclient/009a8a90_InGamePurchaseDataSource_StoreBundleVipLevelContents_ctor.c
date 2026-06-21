// addr: 0x009a8a90
// name: InGamePurchaseDataSource_StoreBundleVipLevelContents_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * InGamePurchaseDataSource_StoreBundleVipLevelContents_ctor(void * this,
   void * name, void * owner) */

void * __thiscall
InGamePurchaseDataSource_StoreBundleVipLevelContents_ctor(void *this,void *name,void *owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the InGamePurchaseDataSource::StoreBundleVipLevelContents data
                       source by invoking the shared StoreBundles base constructor and installing
                       the StoreBundleVipLevelContents vtables. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0159e308;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  InGamePurchaseDataSource_StoreBundles_ctor(this,name);
  *(undefined ***)this = InGamePurchaseDataSource::StoreBundleVipLevelContents::vftable;
  *(undefined ***)((int)this + 0x30) =
       InGamePurchaseDataSource::StoreBundleVipLevelContents::vftable;
  *(undefined ***)((int)this + 0x34) =
       InGamePurchaseDataSource::StoreBundleVipLevelContents::vftable;
  *(undefined ***)((int)this + 0x254) =
       InGamePurchaseDataSource::StoreBundleVipLevelContents::vftable;
  *(undefined ***)((int)this + 0x270) =
       InGamePurchaseDataSource::StoreBundleVipLevelContents::vftable;
  *(undefined4 *)((int)this + 0x12dc) = 0;
  *(undefined1 *)((int)this + 0x1299) = 0;
  ExceptionList = local_c;
  return this;
}

