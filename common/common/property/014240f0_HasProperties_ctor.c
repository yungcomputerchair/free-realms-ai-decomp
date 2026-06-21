// addr: 0x014240f0
// name: HasProperties_ctor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall HasProperties_ctor(undefined4 *param_1)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs HasProperties by installing its vtable and allocating a default
                       PropertySet member. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01694cdb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = HasProperties::vftable;
  pvVar1 = Mem_Alloc(0x10);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = PropertySet_ctor(pvVar1);
  }
  param_1[1] = pvVar1;
  ExceptionList = local_c;
  return param_1;
}

