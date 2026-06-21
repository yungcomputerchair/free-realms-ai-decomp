// addr: 0x00c9dbc0
// name: AppPhysics_CollisionDataAsset_createIfDefaultVariant
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * AppPhysics_CollisionDataAsset_createIfDefaultVariant(undefined4 param_1,int param_2)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Creates an AppPhysics_CollisionDataAsset only when variant is zero; otherwise
                       returns null. Constructor callee identifies the created type. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01607ccb;
  local_c = ExceptionList;
  if (param_2 != 0) {
    return (void *)0x0;
  }
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x2c);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = AppPhysics_CollisionDataAsset_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

