// addr: 0x00d51f60
// name: TiXmlDocument_Clone
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __fastcall TiXmlDocument_Clone(void *param_1)

{
  uint uVar1;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a new TiXmlDocument, copies this document into it, and returns null
                       on allocation failure. Evidence: allocates 0x48 bytes, constructs
                       TiXmlDocument, then calls TiXmlDocument_CopyTo. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01616e5b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  pvVar2 = Mem_Alloc(0x48);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = (void *)FUN_00d51ba0(uVar1);
  }
  local_4 = 0xffffffff;
  if (pvVar2 == (void *)0x0) {
    ExceptionList = local_c;
    return (void *)0x0;
  }
  TiXmlDocument_CopyTo(param_1,pvVar2);
  ExceptionList = local_c;
  return pvVar2;
}

