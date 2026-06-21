// addr: 0x0078f150
// name: FUN_0078f150
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __fastcall FUN_0078f150(int param_1)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs one of two customization asset helper objects
                       depending on the type field at offset 0x150. Returns null for unsupported
                       types. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0155a9c6;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x150) == 1) {
    ExceptionList = &local_c;
    pvVar1 = Mem_Alloc(0x48);
    local_4 = 0;
    if (pvVar1 != (void *)0x0) {
      pvVar1 = (void *)FUN_0078e720(param_1 + 0x158);
      ExceptionList = local_c;
      return pvVar1;
    }
  }
  else {
    if (*(int *)(param_1 + 0x150) != 2) {
      return (void *)0x0;
    }
    ExceptionList = &local_c;
    pvVar1 = Mem_Alloc(0x80);
    local_4 = 1;
    if (pvVar1 != (void *)0x0) {
      pvVar1 = SoundControl3d_ctor(pvVar1,(void *)(param_1 + 0x158));
      ExceptionList = local_c;
      return pvVar1;
    }
  }
  ExceptionList = local_c;
  return (void *)0x0;
}

