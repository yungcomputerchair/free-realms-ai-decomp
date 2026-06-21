// addr: 0x008c8600
// name: WorldRumbleEffectEvent_tryCreateFromDescriptor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * WorldRumbleEffectEvent_tryCreateFromDescriptor(void * source, void **
   outDescriptor) */

void * __thiscall
WorldRumbleEffectEvent_tryCreateFromDescriptor(void *this,void *source,void **outDescriptor)

{
  char cVar1;
  int *effectResource;
  void *pvVar2;
  undefined4 *in_stack_0000000c;
  int in_stack_00000010;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Extracts the matching descriptor, validates it via vtable call, allocates and
                       constructs a WorldRumbleEffectEvent event if valid. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0158282b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (this != (void *)0x0) {
    effectResource = (int *)FUN_008beba0();
    *in_stack_0000000c = effectResource;
    if (effectResource != (int *)0x0) {
      cVar1 = (**(code **)(*effectResource + 8))();
      if (cVar1 != '\0') {
        pvVar2 = Mem_Alloc(0xa0);
        uStack_4 = 0;
        if (pvVar2 != (void *)0x0) {
          pvVar2 = WorldRumbleEffectEvent_ctor(pvVar2,(int)source,in_stack_00000010,effectResource);
          ExceptionList = local_c;
          return pvVar2;
        }
        ExceptionList = local_c;
        return (void *)0x0;
      }
    }
  }
  ExceptionList = local_c;
  return (void *)0x0;
}

