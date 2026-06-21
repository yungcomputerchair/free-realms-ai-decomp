// addr: 0x00783a10
// name: ActorCameraEffectEmitter_createOrUpdateForActor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall
ActorCameraEffectEmitter_createOrUpdateForActor(int param_1,int *param_2,int param_3,char param_4)

{
  char cVar1;
  void *this;
  int *piVar2;
  undefined4 uStack_e0;
  undefined1 auStack_d0 [152];
  undefined1 uStack_38;
  void *pvStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
                    /* Creates or updates an ActorCameraEffectEmitter for an actor/effect source,
                       optionally applying settings directly when the source is inactive, otherwise
                       allocating an emitter, attaching it, and releasing the temporary reference.
                       Evidence is the ActorCameraEffectEmitter_ctor callee and paired apply/update
                       helper calls. */
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_015597a9;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  if (param_2 != (int *)0x0) {
    cVar1 = (**(code **)(*param_2 + 8))();
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*param_2 + 0x10))();
      if ((cVar1 == '\0') && (param_4 != '\0')) {
        ActorCameraEffectEmitter_ctor(auStack_d0,*(void **)(param_1 + 0x360));
        uStack_14 = 1;
        FUN_007c1180();
        uStack_38 = 1;
        FUN_007c13c0();
        uStack_14 = 0xffffffff;
        FUN_007c10b0();
        ExceptionList = local_1c;
        return 0;
      }
      if (param_3 < 1) {
        *(int *)(param_1 + 0x56c) = *(int *)(param_1 + 0x56c) + 1;
      }
      this = Mem_Alloc(0xb0);
      uStack_14 = 0;
      if (this == (void *)0x0) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = ActorCameraEffectEmitter_ctor(this,*(void **)(param_1 + 0x360));
      }
      uStack_14 = 0xffffffff;
      FUN_007c1180();
      FUN_0077cf80();
      FUN_00772270();
      (**(code **)(*piVar2 + 4))();
      ExceptionList = pvStack_20;
      return uStack_e0;
    }
  }
  ExceptionList = local_1c;
  return 0xffffffff;
}

