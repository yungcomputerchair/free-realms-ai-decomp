// addr: 0x00a86fa0
// name: DeepAssetHelper_TextureAsset_createFromContext
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * DeepAssetHelper_TextureAsset_createFromContext(void * context, int
   assetId_) */

void * __thiscall
DeepAssetHelper_TextureAsset_createFromContext(void *this,void *context,int assetId_)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs a DeepAssetHelper_TextureAsset using an asset id and
                       a texture manager/resource pointer reached from the context. Constructor
                       callee identifies created type. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015bd4eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x34);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = DeepAssetHelper_TextureAsset_ctor
                       (pvVar1,context,
                        *(undefined4 *)
                         (*(int *)(*(int *)(*(int *)((int)this + 8) + 0xe8) + 0x25c) + 0x1d0),false,
                        false);
  }
  ExceptionList = local_c;
  return pvVar1;
}

