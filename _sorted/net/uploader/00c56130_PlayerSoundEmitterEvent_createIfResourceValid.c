// addr: 0x00c56130
// name: PlayerSoundEmitterEvent_createIfResourceValid
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall PlayerSoundEmitterEvent_createIfResourceValid(int param_1)

{
  char cVar1;
  int *piVar2;
  void *pvVar3;
  undefined4 *in_stack_00000014;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Looks up and validates a sound emitter resource, then creates a
                       PlayerSoundEmitterEvent. Constructor callee identifies the created type. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_015fe42b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 != 0) {
    piVar2 = (int *)FUN_00709a70();
    *in_stack_00000014 = piVar2;
    if (piVar2 != (int *)0x0) {
      cVar1 = (**(code **)(*piVar2 + 8))();
      if (cVar1 != '\0') {
        pvVar3 = Mem_Alloc(0xb0);
        uStack_4 = 0;
        if (pvVar3 != (void *)0x0) {
          pvVar3 = PlayerSoundEmitterEvent_ctor(pvVar3);
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

