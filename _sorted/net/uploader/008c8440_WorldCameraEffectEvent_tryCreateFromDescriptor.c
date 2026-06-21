// addr: 0x008c8440
// name: WorldCameraEffectEvent_tryCreateFromDescriptor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * WorldCameraEffectEvent_tryCreateFromDescriptor(void * source, void **
   outDescriptor) */

void * __thiscall
WorldCameraEffectEvent_tryCreateFromDescriptor(void *this,void *source,void **outDescriptor)

{
  char cVar1;
  int *piVar2;
  void *pvVar3;
  undefined4 *in_stack_0000000c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Extracts the matching descriptor, validates it via vtable call, allocates and
                       constructs a WorldCameraEffectEvent event if valid. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_015827cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (this != (void *)0x0) {
    piVar2 = (int *)FUN_007dd6a0();
    *in_stack_0000000c = piVar2;
    if (piVar2 != (int *)0x0) {
      cVar1 = (**(code **)(*piVar2 + 8))();
      if (cVar1 != '\0') {
        pvVar3 = Mem_Alloc(0xa0);
        uStack_4 = 0;
        if (pvVar3 != (void *)0x0) {
          pvVar3 = WorldCameraEffectEvent_ctor(pvVar3);
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

