// addr: 0x0142a5c0
// name: ValidActionFilter_create
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int ValidActionFilter_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates 0x58 bytes, constructs a ValidActionFilter, and returns the
                       adjusted object pointer used by callers. Returns null on
                       allocation/construction failure. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169583b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x58);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = ValidActionFilter_ctor(pvVar1);
  }
  if (pvVar1 != (void *)0x0) {
    ExceptionList = local_c;
    return (int)pvVar1 + 8;
  }
  ExceptionList = local_c;
  return 0;
}

