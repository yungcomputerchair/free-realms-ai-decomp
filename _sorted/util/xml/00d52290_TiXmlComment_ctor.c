// addr: 0x00d52290
// name: TiXmlComment_ctor
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall TiXmlComment_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a TiXmlComment node with node type 2 and installs
                       TiXmlComment::vftable, then initializes common TinyXML base state. Evidence:
                       direct TiXmlComment::vftable assignment after TiXmlNode_ctor(2). */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01616eb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  TiXmlNode_ctor(param_1,2);
  local_4 = 0;
  *param_1 = TiXmlComment::vftable;
  thunk_FUN_00d50820(param_1);
  ExceptionList = local_c;
  return param_1;
}

