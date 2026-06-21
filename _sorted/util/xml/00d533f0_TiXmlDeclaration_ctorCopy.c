// addr: 0x00d533f0
// name: TiXmlDeclaration_ctorCopy
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall TiXmlDeclaration_ctorCopy(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a TiXmlDeclaration and copies declaration string fields from
                       another declaration. Evidence: initializes version/encoding/standalone
                       strings, then calls the TiXmlDeclaration copy helper. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01617109;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  TiXmlNode_ctor(param_1,5);
  *param_1 = TiXmlDeclaration::vftable;
  param_1[0xb] = &DAT_01bf2c00;
  param_1[0xc] = &DAT_01bf2c00;
  param_1[0xd] = &DAT_01bf2c00;
  local_4 = 3;
  FUN_00d52620(param_1);
  ExceptionList = local_c;
  return param_1;
}

