// addr: 0x00d35b30
// name: DeepAssetHelper_ModelDefinitionAsset_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * DeepAssetHelper_ModelDefinitionAsset_ctor(void * this, undefined4
   requesterArg1_, undefined4 requesterArg2_, void * refObject, int dependency_, bool flag_) */

void * __thiscall
DeepAssetHelper_ModelDefinitionAsset_ctor
          (void *this,undefined4 requesterArg1_,undefined4 requesterArg2_,void *refObject,
          int dependency_,bool flag_)

{
  int *piVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a DeepAssetHelper::ModelDefinitionAsset, initializes its
                       AssetRequester base, stores dependency/reference pointers, and increments
                       refcounts on non-null referenced objects. Evidence is AssetRequester and
                       DeepAssetHelper::ModelDefinitionAsset vtable assignments. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01613a93;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0071bb80(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)((int)this + 0x28) =
       AssetManagement::AssetRequestInterface::AssetRequester::vftable;
  *(undefined4 *)((int)this + 0x2c) = requesterArg1_;
  *(void **)((int)this + 0x34) = refObject;
  *(undefined4 *)((int)this + 0x30) = requesterArg2_;
  *(undefined ***)this = DeepAssetHelper::ModelDefinitionAsset::vftable;
  *(undefined ***)((int)this + 0x28) = DeepAssetHelper::ModelDefinitionAsset::vftable;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(int *)((int)this + 0x3c) = dependency_;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(bool *)((int)this + 0x50) = flag_;
  if (dependency_ != 0) {
    LOCK();
    *(int *)(dependency_ + 4) = *(int *)(dependency_ + 4) + 1;
    UNLOCK();
  }
  if (*(int *)((int)this + 0x34) != 0) {
    piVar1 = (int *)(*(int *)((int)this + 0x34) + 4);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  ExceptionList = local_c;
  return this;
}

