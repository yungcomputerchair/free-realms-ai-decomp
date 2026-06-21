// addr: 0x00775cf0
// name: DeepAssetHelper_SkeletonDefinitionAsset_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * DeepAssetHelper_SkeletonDefinitionAsset_ctor(void * this) */

void * __fastcall DeepAssetHelper_SkeletonDefinitionAsset_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a DeepAssetHelper::SkeletonDefinitionAsset by running the common
                       asset base initializer, installing the class vtable, and clearing its asset
                       field at index 10. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01557968;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0071bb80(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = DeepAssetHelper::SkeletonDefinitionAsset::vftable;
  *(undefined4 *)((int)this + 0x28) = 0;
  ExceptionList = local_c;
  return this;
}

