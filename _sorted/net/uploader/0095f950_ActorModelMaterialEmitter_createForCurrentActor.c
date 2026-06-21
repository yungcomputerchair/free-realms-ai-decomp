// addr: 0x0095f950
// name: ActorModelMaterialEmitter_createForCurrentActor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * ActorModelMaterialEmitter_createForCurrentActor(void)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Creates an ActorModelMaterialEmitter for the current actor/resource if the
                       active actor context exists, then registers/starts it through FUN_007c0780.
                       Evidence is the ActorModelMaterialEmitter_ctor callee. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01595b0b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = (int *)FUN_00ae2470();
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x24))();
    if (iVar2 != 0) {
      iVar2 = (**(code **)(*piVar1 + 0x24))();
      pvVar3 = Mem_Alloc(0xb0);
      uStack_4 = 0;
      if (pvVar3 == (void *)0x0) {
        pvVar3 = (void *)0x0;
      }
      else {
        pvVar3 = ActorModelMaterialEmitter_ctor(pvVar3,*(void **)(iVar2 + 0x360));
      }
      uStack_4 = 0xffffffff;
      FUN_007c0780();
      ExceptionList = local_c;
      return pvVar3;
    }
  }
  ExceptionList = local_c;
  return (void *)0x0;
}

