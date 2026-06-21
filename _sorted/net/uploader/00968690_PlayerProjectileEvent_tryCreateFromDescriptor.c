// addr: 0x00968690
// name: PlayerProjectileEvent_tryCreateFromDescriptor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PlayerProjectileEvent_tryCreateFromDescriptor(void * source, void **
   outDescriptor) */

void * __thiscall
PlayerProjectileEvent_tryCreateFromDescriptor(void *this,void *source,void **outDescriptor)

{
  char cVar1;
  int *piVar2;
  void *pvVar3;
  undefined4 *in_stack_00000014;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Extracts the matching descriptor, validates it via vtable call, allocates and
                       constructs a PlayerProjectileEvent event if valid. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01596a2b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (this != (void *)0x0) {
    piVar2 = (int *)FUN_0095e1d0();
    *in_stack_00000014 = piVar2;
    if (piVar2 != (int *)0x0) {
      cVar1 = (**(code **)(*piVar2 + 8))();
      if (cVar1 != '\0') {
        pvVar3 = Mem_Alloc(400);
        uStack_4 = 0;
        if (pvVar3 != (void *)0x0) {
          pvVar3 = PlayerProjectileEvent_ctor(pvVar3);
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

