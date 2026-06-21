// addr: 0x007f9ed0
// name: DeepAssetHelper_createTextureAsset
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall DeepAssetHelper_createTextureAsset(int param_1,char *param_2)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a DeepAssetHelper::TextureAsset using an asset path and requester
                       information from the owner, then returns the new asset or null. Evidence is
                       the named DeepAssetHelper_TextureAsset_ctor callee. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0156663b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x34);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = DeepAssetHelper_TextureAsset_ctor
                       (pvVar1,param_2,*(undefined4 *)(**(int **)(param_1 + 0xc) + 0x1d0),true,false
                       );
  }
  ExceptionList = local_c;
  return pvVar1;
}

