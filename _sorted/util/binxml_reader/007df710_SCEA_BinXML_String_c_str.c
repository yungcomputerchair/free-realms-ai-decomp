// addr: 0x007df710
// name: SCEA_BinXML_String_c_str
// subsystem: common/util/binxml_reader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall SCEA_BinXML_String_c_str(int param_1)

{
                    /* Returns the inline/owned string pointer at offset 0xc when the composite flag
                       at +4 is clear, otherwise returns null. It is used by BinXMLReader_readString
                       for the ret.c_str() assertion. */
  if (*(char *)(param_1 + 4) != '\0') {
    return 0;
  }
  return *(undefined4 *)(param_1 + 0xc);
}

