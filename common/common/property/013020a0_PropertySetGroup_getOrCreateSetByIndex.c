// addr: 0x013020a0
// name: PropertySetGroup_getOrCreateSetByIndex
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall PropertySetGroup_getOrCreateSetByIndex(int param_1,undefined4 param_2)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Returns one of five cached PropertySet pointers by index, allocating and
                       constructing a PropertySet if missing. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01675ddb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  switch(param_2) {
  default:
    goto switchD_013020d1_caseD_0;
  case 1:
    pvVar1 = *(void **)(param_1 + 0x2c);
    break;
  case 2:
    pvVar1 = *(void **)(param_1 + 0x30);
    break;
  case 3:
    pvVar1 = *(void **)(param_1 + 0x34);
    break;
  case 4:
    pvVar1 = *(void **)(param_1 + 0x38);
    break;
  case 5:
    pvVar1 = *(void **)(param_1 + 0x3c);
  }
  if (pvVar1 == (void *)0x0) {
    pvVar1 = Mem_Alloc(0x10);
    local_4 = 0;
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else {
      pvVar1 = PropertySet_ctor(pvVar1);
    }
    switch(param_2) {
    case 1:
      *(void **)(param_1 + 0x2c) = pvVar1;
      ExceptionList = local_c;
      return pvVar1;
    case 2:
      *(void **)(param_1 + 0x30) = pvVar1;
      ExceptionList = local_c;
      return pvVar1;
    case 3:
      *(void **)(param_1 + 0x34) = pvVar1;
      ExceptionList = local_c;
      return pvVar1;
    case 4:
      *(void **)(param_1 + 0x38) = pvVar1;
      ExceptionList = local_c;
      return pvVar1;
    case 5:
      *(void **)(param_1 + 0x3c) = pvVar1;
      ExceptionList = local_c;
      return pvVar1;
    }
switchD_013020d1_caseD_0:
    pvVar1 = (void *)0x0;
  }
  ExceptionList = local_c;
  return pvVar1;
}

