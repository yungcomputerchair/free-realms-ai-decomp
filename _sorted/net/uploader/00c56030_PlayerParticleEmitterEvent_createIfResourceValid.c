// addr: 0x00c56030
// name: PlayerParticleEmitterEvent_createIfResourceValid
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall PlayerParticleEmitterEvent_createIfResourceValid(int param_1)

{
  char cVar1;
  int *piVar2;
  void *pvVar3;
  undefined4 *in_stack_00000014;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Looks up a particle emitter resource, verifies it through a virtual check,
                       then allocates and constructs a PlayerParticleEmitterEvent. Constructor
                       callee identifies the created type. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_015fe3fb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 != 0) {
    piVar2 = (int *)FUN_007c4050();
    *in_stack_00000014 = piVar2;
    if (piVar2 != (int *)0x0) {
      cVar1 = (**(code **)(*piVar2 + 8))();
      if (cVar1 != '\0') {
        pvVar3 = Mem_Alloc(0xb0);
        uStack_4 = 0;
        if (pvVar3 != (void *)0x0) {
          pvVar3 = PlayerParticleEmitterEvent_ctor(pvVar3);
          ExceptionList = local_c;
          return pvVar3;
        }
        ExceptionList = local_c;
        return (void *)0x0;
      }
    }
  }
  ExceptionList = local_c;
  return (void *)0x0;
}

