// addr: 0x0095fb20
// name: ActorCameraEffectEmitter_createForCurrentActor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * ActorCameraEffectEmitter_createForCurrentActor(void)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Creates an ActorCameraEffectEmitter using the current actor resource and
                       registers it through FUN_007c1180. Constructor callee identifies the created
                       type. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01595b6b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = (int *)FUN_00ae2470();
  if (piVar1 == (int *)0x0) {
    ExceptionList = local_c;
    return (void *)0x0;
  }
  iVar2 = (**(code **)(*piVar1 + 0x24))();
  if (iVar2 != 0) {
    if ((piVar1[0x142] == 0) || (iVar2 = (**(code **)(*(int *)piVar1[0x1cd] + 0x10))(), iVar2 == 0))
    {
      iVar2 = (**(code **)(*piVar1 + 0x24))();
    }
    pvVar3 = Mem_Alloc(0xb0);
    uStack_4 = 0;
    if (pvVar3 == (void *)0x0) {
      pvVar3 = (void *)0x0;
    }
    else {
      pvVar3 = ActorCameraEffectEmitter_ctor(pvVar3,*(void **)(iVar2 + 0x360));
    }
    uStack_4 = 0xffffffff;
    FUN_007c1180();
    ExceptionList = local_c;
    return pvVar3;
  }
  ExceptionList = local_c;
  return (void *)0x0;
}

