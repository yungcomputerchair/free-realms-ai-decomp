// addr: 0x007dfab0
// name: SCEA_BinXML_StringRecord_ctor
// subsystem: common/util/binxml_reader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __fastcall SCEA_BinXML_StringRecord_ctor(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a BinXML String-derived record and zeroes several additional
                       pointer/flag fields through offset 0x2c. The exact record type is not evident
                       from this context. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015630a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  SCEA_BinXML_String_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  ExceptionList = local_c;
  return param_1;
}

