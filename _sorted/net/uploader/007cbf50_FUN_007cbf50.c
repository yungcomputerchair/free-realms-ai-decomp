// addr: 0x007cbf50
// name: FUN_007cbf50
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __fastcall FUN_007cbf50(int param_1)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a 0x30-byte object and constructs it from the dword immediately
                       before the passed pointer. Exact class is unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015612bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x30);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = SoundDefinition_ctor(pvVar1,*(void **)(param_1 + -4));
  }
  ExceptionList = local_c;
  return pvVar1;
}

