// addr: 0x00d53360
// name: TiXmlText_Clone
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __fastcall TiXmlText_Clone(void *param_1)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and returns a cloned TiXmlText node. Evidence: constructs a
                       TiXmlText with an empty value, then invokes the TiXmlText copy helper to copy
                       source state. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016170bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x30);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = (void *)TiXmlText_ctorWithValue(&DAT_0175b400);
  }
  local_4 = 0xffffffff;
  if (pvVar1 == (void *)0x0) {
    ExceptionList = local_c;
    return (void *)0x0;
  }
  TiXmlText_CopyTo(param_1,pvVar1);
  ExceptionList = local_c;
  return pvVar1;
}

