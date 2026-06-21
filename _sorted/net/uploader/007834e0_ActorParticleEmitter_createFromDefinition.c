// addr: 0x007834e0
// name: ActorParticleEmitter_createFromDefinition
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall
ActorParticleEmitter_createFromDefinition(int param_1,int *param_2,void *param_3,char param_4)

{
  char cVar1;
  void *this;
  int *piVar2;
  undefined4 uStack_f4;
  undefined1 *puStack_e4;
  undefined1 auStack_e0 [148];
  undefined1 uStack_4c;
  void *pvStack_24;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
                    /* Creates and registers an ActorParticleEmitter from a validated emitter
                       definition. */
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_015596e9;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  if (param_2 != (int *)0x0) {
    cVar1 = (**(code **)(*param_2 + 8))();
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*param_2 + 0x10))();
      if ((cVar1 == '\0') && (param_4 != '\0')) {
        ActorParticleEmitter_ctor
                  (auStack_e0,*(void **)(param_1 + 0x360),*(void **)(param_1 + 0x268),(void *)0x0,
                   (void *)0x0);
        uStack_14 = 1;
        FUN_007c3240();
        uStack_4c = 1;
        FUN_007c2fe0();
        puStack_18 = (undefined1 *)0xffffffff;
        ActorParticleEmitter_dtor(&puStack_e4);
        ExceptionList = local_1c;
        return 0;
      }
      if ((int)param_3 < 1) {
        *(int *)(param_1 + 0x56c) = *(int *)(param_1 + 0x56c) + 1;
        param_3 = *(void **)(param_1 + 0x56c);
      }
      this = Mem_Alloc(0xc0);
      uStack_14 = 0;
      if (this == (void *)0x0) {
        piVar2 = (int *)0x0;
      }
      else {
        puStack_e4 = &stack0xfffffef0;
        piVar2 = ActorParticleEmitter_ctor
                           (this,*(void **)(param_1 + 0x360),*(void **)(param_1 + 0x268),param_3,
                            (void *)0x0);
      }
      uStack_14 = 0xffffffff;
      FUN_007c3240();
      FUN_0077cf80();
      FUN_00772270();
      (**(code **)(*piVar2 + 4))();
      ExceptionList = pvStack_24;
      return uStack_f4;
    }
  }
  ExceptionList = local_1c;
  return 0xffffffff;
}

