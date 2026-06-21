// addr: 0x00f9ee30
// name: SCEA_BinXML_Binary_ctor
// subsystem: common/util/binxml_reader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall SCEA_BinXML_Binary_ctor(undefined4 *param_1)

{
                    /* Constructs a SCEA::BinXML::Binary by initializing Streamable fields and
                       installing the Binary vtable. The vtable names are explicit in the decompiled
                       function. */
  *param_1 = SCEA::BinXML::Streamable::vftable;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 5) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = SCEA::BinXML::Binary::vftable;
  return;
}

