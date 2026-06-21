// addr: 0x007df6b0
// name: SCEA_BinXML_String_ctor
// subsystem: common/util/binxml_reader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall SCEA_BinXML_String_ctor(undefined4 *param_1)

{
                    /* Constructs a SCEA::BinXML::String by first initializing the Streamable base
                       fields and then installing the String vtable. The vtable names in the
                       decompile are authoritative evidence. */
  *param_1 = SCEA::BinXML::Streamable::vftable;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 5) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = SCEA::BinXML::String::vftable;
  return;
}

