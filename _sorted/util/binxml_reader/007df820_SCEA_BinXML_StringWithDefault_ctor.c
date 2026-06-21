// addr: 0x007df820
// name: SCEA_BinXML_StringWithDefault_ctor
// subsystem: common/util/binxml_reader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall SCEA_BinXML_StringWithDefault_ctor(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a BinXML String-derived object and initializes two extra fields,
                       one to zero and one to a default global string/buffer. The exact derived
                       class is unknown because no RTTI or file strings are present. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01562fc8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  SCEA_BinXML_String_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = _DAT_0175b420;
  ExceptionList = local_c;
  return param_1;
}

