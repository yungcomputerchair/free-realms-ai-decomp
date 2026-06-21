// addr: 0x00d348b0
// name: DeepAssetHelper_TextureAsset_createWithFlag
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * DeepAssetHelper_TextureAsset_createWithFlag(void * context, int
   assetId_) */

void * __thiscall DeepAssetHelper_TextureAsset_createWithFlag(void *this,void *context,int assetId_)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs a DeepAssetHelper_TextureAsset using context
                       resource data and a byte flag from the context. Constructor callee identifies
                       created type. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0161373b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x34);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = DeepAssetHelper_TextureAsset_ctor
                       (pvVar1,context,*(undefined4 *)(*(int *)((int)this + 8) + 0x1d0),
                        *(bool *)((int)this + 0x54),false);
  }
  ExceptionList = local_c;
  return pvVar1;
}

