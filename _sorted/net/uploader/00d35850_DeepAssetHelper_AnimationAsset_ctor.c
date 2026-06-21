// addr: 0x00d35850
// name: DeepAssetHelper_AnimationAsset_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * DeepAssetHelper_AnimationAsset_ctor(void * this, void * resource) */

void * __thiscall DeepAssetHelper_AnimationAsset_ctor(void *this,void *resource)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a DeepAssetHelper::AnimationAsset, stores the resource/context
                       pointer, clears a second asset field, and installs the AnimationAsset vtable.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016139f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0071bb80(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = DeepAssetHelper::AnimationAsset::vftable;
  *(void **)((int)this + 0x28) = resource;
  *(undefined4 *)((int)this + 0x2c) = 0;
  ExceptionList = local_c;
  return this;
}

