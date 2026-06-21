// addr: 0x00d52dd0
// name: TiXmlUnknown_ctor
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall TiXmlUnknown_ctor(undefined4 *param_1)

{
                    /* Constructs a TiXmlUnknown node by initializing TiXmlNode type 3 and
                       installing TiXmlUnknown::vftable. Evidence: direct vtable assignment. */
  TiXmlNode_ctor(param_1,3);
  *param_1 = TiXmlUnknown::vftable;
  return param_1;
}

