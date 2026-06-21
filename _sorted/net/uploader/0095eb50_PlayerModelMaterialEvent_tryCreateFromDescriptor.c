// addr: 0x0095eb50
// name: PlayerModelMaterialEvent_tryCreateFromDescriptor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PlayerModelMaterialEvent_tryCreateFromDescriptor(void * source, void **
   outDescriptor) */

void * __thiscall
PlayerModelMaterialEvent_tryCreateFromDescriptor(void *this,void *source,void **outDescriptor)

{
  char cVar1;
  int *piVar2;
  void *pvVar3;
  undefined4 *in_stack_00000014;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Extracts the matching descriptor, validates it via vtable call, allocates and
                       constructs a PlayerModelMaterialEvent event if valid. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0159595b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (this != (void *)0x0) {
    piVar2 = (int *)FUN_007dd650();
    *in_stack_00000014 = piVar2;
    if (piVar2 != (int *)0x0) {
      cVar1 = (**(code **)(*piVar2 + 8))();
      if (cVar1 != '\0') {
        pvVar3 = Mem_Alloc(0xb0);
        uStack_4 = 0;
        if (pvVar3 != (void *)0x0) {
          pvVar3 = PlayerModelMaterialEvent_ctor(pvVar3);
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

