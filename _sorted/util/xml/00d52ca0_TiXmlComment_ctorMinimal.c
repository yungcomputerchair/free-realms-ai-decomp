// addr: 0x00d52ca0
// name: TiXmlComment_ctorMinimal
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall TiXmlComment_ctorMinimal(undefined4 *param_1)

{
                    /* Lightweight TiXmlComment constructor used by the parser: initializes
                       TiXmlNode type 2 and installs TiXmlComment::vftable. Evidence: direct vtable
                       assignment and parser caller. */
  TiXmlNode_ctor(param_1,2);
  *param_1 = TiXmlComment::vftable;
  return param_1;
}

