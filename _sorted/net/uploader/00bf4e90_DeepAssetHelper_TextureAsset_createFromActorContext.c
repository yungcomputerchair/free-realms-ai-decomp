// addr: 0x00bf4e90
// name: DeepAssetHelper_TextureAsset_createFromActorContext
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __fastcall DeepAssetHelper_TextureAsset_createFromActorContext(int param_1)

{
  int iVar1;
  void *pvVar2;
  char *unaff_retaddr;
  undefined4 local_1c;
  uint uStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Creates a DeepAssetHelper_TextureAsset using a texture manager/resource
                       pointer reached from the current actor context. Constructor callee identifies
                       the created type. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_015f262b;
  local_c = ExceptionList;
  uStack_18 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  local_1c = *(undefined4 *)(param_1 + 0xc);
  iVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x10))();
  if (iVar1 == 0) {
    ExceptionList = &local_1c;
    return (void *)0x0;
  }
  pvVar2 = Mem_Alloc(0x34);
  puStack_8 = (undefined1 *)0x0;
  if (pvVar2 != (void *)0x0) {
    pvVar2 = DeepAssetHelper_TextureAsset_ctor
                       (pvVar2,unaff_retaddr,*(undefined4 *)(*(int *)(iVar1 + 0x2d4) + 0x1d0),false,
                        false);
    ExceptionList = &local_1c;
    return pvVar2;
  }
  ExceptionList = &local_1c;
  return (void *)0x0;
}

