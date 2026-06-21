// addr: 0x01434d80
// name: ValidAttrModFilter_create
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int ValidAttrModFilter_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a ValidAttrModFilter object and returns its adjusted interface
                       pointer. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01696d2b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x60);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = ValidAttrModFilter_ctor(pvVar1);
  }
  if (pvVar1 != (void *)0x0) {
    ExceptionList = local_c;
    return (int)pvVar1 + 8;
  }
  ExceptionList = local_c;
  return 0;
}

