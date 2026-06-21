// addr: 0x007dfba0
// name: SCEA_BinXML_StringValue_ctor
// subsystem: common/util/binxml_reader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __fastcall SCEA_BinXML_StringValue_ctor(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a small BinXML String-derived value object and initializes one
                       extra field at offset 0x14 to zero. Exact class name is not available in the
                       briefing. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01563108;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  SCEA_BinXML_String_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined4 *)(param_1 + 0x14) = 0;
  ExceptionList = local_c;
  return param_1;
}

