// addr: 0x0079c210
// name: FUN_0079c210
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * FUN_0079c210(undefined4 param_1,int param_2)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs a 0x124-byte object only when the type argument is
                       zero; otherwise returns null. Exact class is unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0155bc0b;
  local_c = ExceptionList;
  if (param_2 != 0) {
    return (void *)0x0;
  }
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x124);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    pvVar1 = ActorGroupDefinitionAsset_ctor(pvVar1);
    ExceptionList = local_c;
    return pvVar1;
  }
  ExceptionList = local_c;
  return (void *)0x0;
}

