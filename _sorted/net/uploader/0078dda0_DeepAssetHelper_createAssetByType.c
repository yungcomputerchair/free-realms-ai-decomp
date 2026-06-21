// addr: 0x0078dda0
// name: DeepAssetHelper_createAssetByType
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall DeepAssetHelper_createAssetByType(int param_1,char *param_2,undefined4 param_3)

{
  uint uVar1;
  void *pvVar2;
  void *refObject;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Factory for asset-helper products selected by asset type id. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0155a758;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  switch(param_3) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
    if (*(int *)(param_1 + 0x40) == 0) {
      return (void *)0x0;
    }
    if (*(int *)(*(int *)(param_1 + 0x40) + 0x34) == 0) {
      return (void *)0x0;
    }
    ExceptionList = &local_c;
    pvVar2 = Mem_Alloc(0x54);
    local_4 = 4;
    if (pvVar2 == (void *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else {
      if (*(int *)(param_1 + 0xb0) == 0) {
        refObject = (void *)0x0;
      }
      else {
        refObject = *(void **)(*(int *)(param_1 + 0xb0) + 0x28);
      }
      pvVar2 = DeepAssetHelper_ModelDefinitionAsset_ctor
                         (pvVar2,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x114),
                          refObject,*(int *)(param_1 + 0x40),true);
    }
    local_4 = 0xffffffff;
    FUN_0071aeb0(*(undefined4 *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 0x40) = 0;
    ExceptionList = local_c;
    return pvVar2;
  case 5:
    ExceptionList = &local_c;
    pvVar2 = Mem_Alloc(0x2c);
    local_4 = 1;
    if (pvVar2 != (void *)0x0) {
      pvVar2 = AppPhysics_CollisionDataAsset_ctor(pvVar2);
      ExceptionList = local_c;
      return pvVar2;
    }
    break;
  case 6:
    ExceptionList = &local_c;
    pvVar2 = Mem_Alloc(0x80);
    local_4 = 2;
    if (pvVar2 != (void *)0x0) {
      pvVar2 = DeepAssetHelper_MaterialPaletteAsset_ctor
                         (pvVar2,*(void **)(param_1 + 4),*(void **)(param_1 + 0x114),true);
      ExceptionList = local_c;
      return pvVar2;
    }
    break;
  case 7:
    ExceptionList = &local_c;
    pvVar2 = Mem_Alloc(0x524);
    local_4 = 0;
    if (pvVar2 != (void *)0x0) {
      pvVar2 = (void *)FUN_0078dd20(uVar1);
      ExceptionList = local_c;
      return pvVar2;
    }
    break;
  case 8:
    ExceptionList = &local_c;
    pvVar2 = Mem_Alloc(0x2c);
    local_4 = 3;
    if (pvVar2 != (void *)0x0) {
      pvVar2 = DeepAssetHelper_SkeletonDefinitionAsset_ctor(pvVar2);
      ExceptionList = local_c;
      return pvVar2;
    }
    break;
  case 9:
    ExceptionList = &local_c;
    pvVar2 = Mem_Alloc(0x30);
    local_4 = 5;
    if (pvVar2 != (void *)0x0) {
      pvVar2 = DeepAssetHelper_AnimationAsset_ctor(pvVar2,*(void **)(param_1 + 0x1ac));
      ExceptionList = local_c;
      return pvVar2;
    }
    break;
  default:
    return (void *)0x0;
  case 0xc:
    ExceptionList = &local_c;
    pvVar2 = Mem_Alloc(0x34);
    local_4 = 6;
    if (pvVar2 != (void *)0x0) {
      pvVar2 = DeepAssetHelper_TextureAsset_ctor
                         (pvVar2,param_2,*(undefined4 *)(*(int *)(param_1 + 0x114) + 0x1d0),true,
                          false);
      ExceptionList = local_c;
      return pvVar2;
    }
    break;
  case 0xd:
    ExceptionList = &local_c;
    pvVar2 = Mem_Alloc(0x80);
    local_4 = 7;
    if (pvVar2 != (void *)0x0) {
      pvVar2 = DeepAssetHelper_MaterialPaletteAsset_ctor
                         (pvVar2,*(void **)(param_1 + 4),*(void **)(param_1 + 0x114),true);
      ExceptionList = local_c;
      return pvVar2;
    }
  }
  ExceptionList = local_c;
  return (void *)0x0;
}

