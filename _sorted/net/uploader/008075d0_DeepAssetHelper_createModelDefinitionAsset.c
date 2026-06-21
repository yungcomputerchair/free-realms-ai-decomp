// addr: 0x008075d0
// name: DeepAssetHelper_createModelDefinitionAsset
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __fastcall DeepAssetHelper_createModelDefinitionAsset(int param_1)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a DeepAssetHelper::ModelDefinitionAsset from requester/path data
                       stored in the input object. Evidence is the named
                       DeepAssetHelper_ModelDefinitionAsset_ctor callee. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0156763b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x54);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = DeepAssetHelper_ModelDefinitionAsset_ctor
                       (pvVar1,*(undefined4 *)(param_1 + 4),**(undefined4 **)(param_1 + 8),
                        (void *)0x0,0,false);
  }
  ExceptionList = local_c;
  return pvVar1;
}

