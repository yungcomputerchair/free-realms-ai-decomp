// addr: 0x013129e0
// name: PropertySet_create
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * PropertySet_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs a new PropertySet object. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167765b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x10);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = PropertySet_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

