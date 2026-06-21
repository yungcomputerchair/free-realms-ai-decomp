// addr: 0x00d36130
// name: DeepAssetHelper_MaterialPaletteAsset_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __fastcall DeepAssetHelper_MaterialPaletteAsset_create(int param_1)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs a DeepAssetHelper_MaterialPaletteAsset from context
                       fields and a flag byte. Constructor callee identifies the created type. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01613b6b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x80);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = DeepAssetHelper_MaterialPaletteAsset_ctor
                       (pvVar1,*(void **)(param_1 + 4),*(void **)(param_1 + 8),
                        *(bool *)(param_1 + 0x28));
  }
  ExceptionList = local_c;
  return pvVar1;
}

