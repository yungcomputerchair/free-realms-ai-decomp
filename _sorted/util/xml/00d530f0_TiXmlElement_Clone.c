// addr: 0x00d530f0
// name: TiXmlElement_Clone
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __fastcall TiXmlElement_Clone(void *param_1)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Clones a TiXmlElement by allocating a new element with the same value and
                       copying attributes and children. Evidence: allocates 0x50 bytes, constructs
                       with the value string at this+0x20, then calls TiXmlElement_CopyTo. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0161702b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x50);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = (void *)FUN_00d52e70(*(int *)((int)param_1 + 0x20) + 8);
  }
  local_4 = 0xffffffff;
  if (pvVar1 == (void *)0x0) {
    ExceptionList = local_c;
    return (void *)0x0;
  }
  TiXmlElement_CopyTo(param_1,pvVar1);
  ExceptionList = local_c;
  return pvVar1;
}

