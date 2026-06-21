// addr: 0x00f9ec90
// name: BinXMLDeserialize_readStringTemp
// subsystem: common/util/binxml_reader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 BinXMLDeserialize_readStringTemp(undefined4 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Reads a BinXML string into a stack temporary, assigns/copies it, then
                       destroys the temporary before returning the original output. This appears to
                       be a small wrapper around BinXMLReader_readString. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0162acb0;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffdc;
  ExceptionList = &local_c;
  uVar2 = BinXMLReader_readString(local_20);
  local_4 = 0;
  SCEA_BinXML_Streamable_assign(uVar2);
  local_4 = 0xffffffff;
  FUN_00f9e6e0(uVar1);
  ExceptionList = local_c;
  return param_1;
}

