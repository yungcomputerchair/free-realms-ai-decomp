// addr: 0x00d39740
// name: DeepAssetHelper_TextureAsset_createPaletteTexture
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall DeepAssetHelper_TextureAsset_createPaletteTexture(int param_1,char *param_2)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a DeepAssetHelper_TextureAsset using a nested palette/texture
                       resource pointer and passes a true flag. Constructor callee identifies the
                       created type. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0161412b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x34);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = DeepAssetHelper_TextureAsset_ctor
                       (pvVar1,param_2,
                        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xc) + 0x30) + 0x1d0),true,false
                       );
  }
  ExceptionList = local_c;
  return pvVar1;
}

