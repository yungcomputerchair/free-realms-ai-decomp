// addr: 0x00d52da0
// name: TiXmlDeclaration_ctor
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall TiXmlDeclaration_ctor(undefined4 *param_1)

{
                    /* Constructs a TiXmlDeclaration node with empty version/encoding/standalone
                       strings. Evidence: calls TiXmlNode_ctor(5), installs
                       TiXmlDeclaration::vftable, and initializes three string members to the shared
                       empty string. */
  TiXmlNode_ctor(param_1,5);
  *param_1 = TiXmlDeclaration::vftable;
  param_1[0xb] = &DAT_01bf2c00;
  param_1[0xc] = &DAT_01bf2c00;
  param_1[0xd] = &DAT_01bf2c00;
  return param_1;
}

